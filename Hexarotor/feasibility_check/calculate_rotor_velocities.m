%% This script calculates the required rotor velocities for a given 6D trajectory
function [rot_vel_squared, q] = calculate_rotor_velocities(F_H, start_pose, target_pose, duration)

% load simulation parameters
IB = evalin('base', 'IB');
IBxx = IB(1,1);
IByy = IB(2,2);
IBzz = IB(3,3);

m = evalin('base', 'm');
g = evalin('base', 'g');

% simulation step size
dt = 0.01;

% time vector
time = 0 : dt : duration;
% duration of simulation
steps = floor(duration/dt) +1;

% trajectories
[pd, euler_traj, k_A] = calculate_polynomial_trajectory(start_pose, target_pose, duration, dt);

%hexacopter states
% attitude of {B} w.r.t. {I}
q = zeros(4, steps+1);

% angular velocity {B}
% three components for each time stamp
w = zeros(3, steps+1);

% angular acceleration {B}
w_dot = zeros(3, steps);

% rotation matrix of the start pose   
R_IA = rpy2DCM(start_pose(4:6));

% storage for propeller velocities
% six specific components at each time stamp
rot_vel_squared = zeros(6,steps);

input = zeros(6, steps);

% start simulation
for i = 1:length(time)    
    % get current attitude of body frame w.r.t initial frame 
    R_AB = EulerParam2DCM(k_A, euler_traj(1,i));
    R_IB = R_IA * R_AB;
    q(:,i) = DCM2Quat(R_IB);
   
    % mapping matrix
    W = F_H;
    W(1:3, :) = R_IB * W(1:3, :);
    
    % required thrust forces
    fx = pd(7, i) *m;
    fy = pd(8, i) *m;
    fz = (pd(9, i) + g) *m;
    
    % now concern the torques    
    %retrieve angular velocity and acceleration w.r.t. body frame
    [w(:,i), w_dot(:,i)] = EulerParam2AngularVelocity(R_IA, k_A, euler_traj(:,i));
                
    % required torque moments
    tx = (w_dot(1,i) - w(2,i)*w(3,i)*(IByy-IBzz)/IBxx) * IBxx;
    ty = (w_dot(2,i) - w(1,i)*w(3,i)*(IBzz-IBxx)/IByy) * IByy;
    tz = (w_dot(3,i) - w(1,i)*w(2,i)*(IBxx-IByy)/IBzz) * IBzz;
    
    % resulting input
    u = [fx, fy, fz, tx, ty, tz]';
    input(:, i) = u;
    rot_vel_squared(:,i) = W \ u;    
end

end