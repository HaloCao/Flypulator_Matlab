function [start_orientation, feasible_target_pose, feasible_duration] = check_feasibility(start_pose, target_pose, duration)
%%
% Checks the given start pose and target pose and the duration for feasibility.
% If the start pose is not feasible, an error message will be emitted. 
% If the target pose is not feasible, a valid alternative will be computed.
% If the duration is not feasible, the minimum valid alternative duration
% will be calculated and used instead

% no zero or negative durations allowed
if duration <= 0
    error("Duration can't be negative. Please adjust!");
end

% calculate static coupling matrix (neglecting rotation)
F_H = compute_coupling_matrix();

% convert orientations to rad
start_pose(4:6) = start_pose(4:6) * pi/180;
target_pose(4:6) = target_pose(4:6) * pi/180;

% check steady state feasibility of start and target pose
sp_feasible = check_steady_state_feasibility(F_H, start_pose);
tp_feasible = check_steady_state_feasibility(F_H, target_pose);

if sp_feasible == false    
  error('The given start pose is not feasible. Please adjust!');
end

if tp_feasible == false
  target_pose = find_feasible_targetpose(F_H, target_pose);
end

% check and find feasible duration
duration = find_feasible_duration(F_H, start_pose, target_pose, duration);

% assign results (target pose in degree)
start_orientation = rpy2DCM(start_pose(4:6));
feasible_target_pose = target_pose;
feasible_target_pose(4:6) = feasible_target_pose(4:6) * 180/pi;
feasible_duration = duration;

end