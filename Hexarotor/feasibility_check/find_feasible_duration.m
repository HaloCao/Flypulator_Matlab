function feasible_duration = find_feasible_duration(F_H, start_pose, target_pose, init_duration)
%% this function iteratively adjusts the duration of the trajectory to make it feasible

% load simulation parameters
g = evalin('base', 'g');
m = evalin('base', 'm');

% initial duration
T = init_duration;

% storage for feasible duration
Tn = init_duration;

% stretch retrieved duration by a small factor
dilation_factor = 1.0001;

% simulate_rotor_velocities
[rot_vel_squared, q] = calculate_rotor_velocities(F_H, start_pose, target_pose, init_duration);
[feasible, exceeded_limit, indices] = within_actuator_boundaries(rot_vel_squared);

while feasible == false
    % indices of critical rotor velocities
    row_ind = indices(1);
    col_ind = indices(2);
    
    % inverse mapping matrix of critical rotation
    R_IB_krit = Quat2DCM(q(:,col_ind));
    W_krit = F_H;
    W_krit(1:3,:) = R_IB_krit * W_krit(1:3, :); 
    W_inv_krit = inv(W_krit);
    
    % reparametrization of duration
    Tn = dilation_factor * T / sqrt((exceeded_limit-W_inv_krit(row_ind, 3)*m*g)/(rot_vel_squared(row_ind, col_ind) - W_inv_krit(row_ind, 3)*m*g));
    
    % check feasibility again
    [rot_vel_squared, q] = calculate_rotor_velocities(F_H, start_pose, target_pose, Tn);
    [feasible, exceeded_limit, indices] = within_actuator_boundaries(rot_vel_squared);
    T=Tn;
end

% apply result
feasible_duration = Tn;

