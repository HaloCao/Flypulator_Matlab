function [steady_state_feasible] = check_steady_state_feasibility(F_H, pose)
%% this function checks whether the plattform with the given parametrization is able to obtain the steady state start and end poses of the given trajectory without exceeding the actuator boundaries

% load relevant simulation parameters
g = evalin('base', 'g');
m = evalin('base', 'm');

%required force and torque input to the platform in order to hover
%statically
u_req = [0 0 m*g 0 0 0]';

% steady state attitude as rotation matrix


% rotation_matrix of the given orientation
R_IB = rpy2DCM(pose(4:6));

% Apply current rotation to mapping matrix
W = F_H;
W(1:3,:) = R_IB * W(1:3,:);

% required rotor velocities
rot_vel_squared = W \ u_req;
    
% check if feasible 
[steady_state_feasible, ~, ~] = within_actuator_boundaries(rot_vel_squared);



