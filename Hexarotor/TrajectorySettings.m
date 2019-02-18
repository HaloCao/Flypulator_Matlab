%% This script ist executed on the start of each simulation on simulink (see Model Properties -> InitFcn)
% The start pose, end pose and desired duration are defined via this
% script. Furthermore, they get checked for feasibility and as the case may
% be, the end pose and duration will be adjusted towards feasible settings. 
% The computation back-end is located within the sub directory "feasibility
% check"

%###################### USER INPUT ########################################
% t_start: [s] (when to start the trajectory tracking)
% start pose/end pose: [x[m] y[m] z[m] roll[°] pitch[°] yaw[°]]
% duration [s]

t_start = 5;
start_pose = [0 0  10  0  0  0];
target_pose = [0 10 20 0 2 36];
duration = 5;

%##########################################################################

% set actuator boundaries [rpm]
% these don't necessarily correspond to the actual physical actuator boundaries
% In this case, the upper limit is chosen to 90% of maximum throttle (5700
% rpm).
traj_rot_vel_max = 5130;
traj_rot_vel_min = 600;

% set path of computation back-end
addpath('feasibility_check');

% perform feasibility check
[start_ori, target_pose, duration] = check_feasibility(start_pose, target_pose, duration);

%set initial conditions within the integrators of the motion equation
%subsystem
set_param('pose_ctrl_R2017a/Motion Equations, p_I/Integrator3', 'InitialCondition', mat2str(start_pose(1:3)'));
set_param('pose_ctrl_R2017a/Motion Equations, p_I/Integrator4', 'InitialCondition', mat2str(start_ori));
set_param('pose_ctrl_R2017a', 'StopTime', num2str(duration + t_start + 5));
