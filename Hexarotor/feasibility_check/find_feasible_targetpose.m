function feasible_target_pose = find_feasible_targetpose(F_H, target_pose)
%% This function adjusts the given (infeasible) endpose orientation such that the rotor velocities touch the actuator boundaries
% The underlying concept is to regard the euler axis of the rotation and
% reduce the corresponding euler angle such that feasibility is reached
% The function returns the feasible orientation as roll and pitch angle

% load simulation parameters
g = evalin('base', 'g');
m = evalin('base', 'm');
upperLimit = evalin('base', 'traj_rot_vel_max');
lowerLimit = evalin('base', 'traj_rot_vel_min');

% epsilon which serves as terminating condition for the newton approach
% 10 rpm close to the actual actuator boundary
eps_newton = (10 * (pi/30))^2;

% stepsize for newton approach
newt_stepsize = 0.01;

%input thrust and torque for steady state hovering
u_req = [0 0 m*g 0 0 0 ]';

% buffer rotor velocity
omega_buffer = 150;

% retrieve target orientation set yaw angle zero 
target_orientation = target_pose(4:6);
target_orientation(3) = 0;

% convert actuator boundaries to rad^2/s^2
ul_squ = ((upperLimit - omega_buffer) * pi/30)^2;
ll_squ = ((lowerLimit+omega_buffer) * pi/30)^2;

% convert endpose orientation to euler parameters
Re = rpy2DCM(target_orientation);

%euler angle and axis
theta_e = acos(0.5*(Re(1,1) + Re(2,2) +Re(3,3)-1));
k_e = zeros(3,1);

%regarding singularities
if theta_e == 0
    k_e(1) = 1;
elseif theta_e == pi
    k_e(1) = -1;
else    
    k_e(1) = 0.5 * 1/sin(theta_e) * (Re(3,2)-Re(2,3));
    k_e(2) = 0.5 * 1/sin(theta_e) * (Re(1,3)-Re(3,1));
    k_e(3) = 0.5 * 1/sin(theta_e) * (Re(2,1)-Re(1,2));
end

%retrieve the required (six identical) rotor velocities in case the
%platform is hovering horizontally
W_idle = F_H;
rot_vel_squ_idle = W_idle \ u_req;
omega_squ_0 = rot_vel_squ_idle(1);

% rotation_matrix of the given orientation
R_IB = rpy2DCM(target_orientation);

% Apply current rotation to mapping matrix and calculate rotor velocities
W = F_H;
W(1:3,:) = R_IB * W(1:3,:);

% required rotor velocities
rot_vel_squ_e = W \ u_req;    


% retrieve the rotor indices for which rotor velocity get maximal and
% minimal
[~, i_max] = max(rot_vel_squ_e);
[~, i_min] = min(rot_vel_squ_e);

% starting values for newton approach
omega_squ_start = omega_squ_0;
theta_start = 0;

% Newton approach to solve for upper rotor velocity
theta_e_feas_upper = find_feasible_theta(omega_squ_start, theta_start, ul_squ, i_max);
theta_e_feas_lower = find_feasible_theta(omega_squ_start, theta_start, ll_squ, i_min);

theta_e_feasible = min(theta_e_feas_upper, theta_e_feas_lower);

%convert feasible euler angle into roll and pitch angle
Re_feas = EulerParam2DCM(k_e, theta_e_feasible);
roll = atan2(Re_feas(3,2), Re_feas(3,3));
pitch = - asin(Re_feas(3,1));
 
% set result
feasible_target_pose = target_pose;
feasible_target_pose(4:5) = [roll pitch];

    function theta_min = find_feasible_theta(omega_squ_start, theta_start, omega_squ_lim, index)
        omega_squ_opt = omega_squ_start;
        theta_opt = theta_start;
        i = 1;
        % newton approach
        while abs(omega_squ_lim - omega_squ_opt) > eps_newton
            % calculate squared rotor velocity after increasing euler angle by stepsize 
            theta_tmp = theta_opt + newt_stepsize;
            R_IB_tmp = EulerParam2DCM(k_e, theta_tmp);
            W_tmp = F_H;
            W_tmp(1:3,:) = R_IB_tmp * W_tmp(1:3,:);  
            omega_squ_tmp = W_tmp \ u_req;   
            omega_squ_tmp = omega_squ_tmp(index);
            
            % calculate derivative 
            domega_squ = (omega_squ_tmp - omega_squ_opt) / newt_stepsize;
            delta_theta = (omega_squ_lim - omega_squ_opt) / domega_squ;
            
            % update euler angle and corresponding rotor velocity
            theta_opt = theta_opt + delta_theta;
            R_IB_tmp = EulerParam2DCM(k_e, theta_opt);
            W_tmp = F_H;
            W_tmp(1:3,:) = R_IB_tmp * W_tmp(1:3,:); 
            omega_squ_opt = W_tmp \ u_req;   
            omega_squ_opt = omega_squ_opt(index);
            i = i+1;
        end
        
        % minimum theta found
        theta_min = theta_opt;
    end
end

