function[feasible, exceeded_limit, indices] = within_actuator_boundaries(rot_vel_squared)
%% this function checks based on the given rotor velocities whether they exeed the upper or lower actuator limits
% Return values:
%   feasible: false if any boundaries exceeded
%   exceeded_limit: upper or lower boundary,depending on which was more critically exeeded
%   extremum: stores the row index and the relative time (0...1) of the exceeding rotor velocity 
%
% Input values:
%   rot_vel: rotor velocities per [rpm]

% load actuator bounderies
upperLimit = (evalin('base', 'traj_rot_vel_max') * pi/30)^2;
lowerLimit = (evalin('base', 'traj_rot_vel_min')* pi/30)^2;

upper_offset = 0;
lower_offset = 0;

indices = zeros(1,2);
exceeded_limit = 0;

exceed_upper = find(rot_vel_squared > upperLimit);
exceed_lower = find(rot_vel_squared < lowerLimit);
    
feasible = isempty(exceed_upper) & isempty(exceed_lower);

% no need to calculate critical offsets if already feasible
if feasible == true
    return;
end

% retrieve exeeding offsets
max_rot_vel = max(rot_vel_squared(exceed_upper));
min_rot_vel = min(rot_vel_squared(exceed_lower));
if isempty(min_rot_vel) == false    
    lower_offset = abs(min_rot_vel^2 - lowerLimit^2);
end
if isempty(max_rot_vel) == false
    upper_offset = max_rot_vel^2 - upperLimit^2;
end

if upper_offset > lower_offset
    exceeded_limit = upperLimit;
    [row_ex, col_ex] = find(rot_vel_squared == max_rot_vel);
else
    exceeded_limit = lowerLimit;
    [row_ex, col_ex] = find(rot_vel_squared == min_rot_vel);
end

indices = [row_ex, col_ex];



    