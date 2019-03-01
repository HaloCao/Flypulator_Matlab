%% Define parameters for aerial manipulator - external wrench observer
% sample time
Ts = 1/250;%0.02; 
noise_power = 0.01;

useMeasurementNoise = true; % use errors in pose & velocity measurement
useWrongCommWrench = false ; % use inaccurate control wrench input
noise_factor = 1; % 1 --> nominal noise values
% noise values of gaussian noise, ~3sigma
if useMeasurementNoise
    T_delay = 0.04; % delay of state estimation
    p_noise = noise_factor * 0.0003; %+- in [m];
    v_noise = noise_factor * sqrt(2)*p_noise/Ts; % +- in [m/s]
    a_noise = noise_factor * 0.1; % +- in [m/s^2]
    angular_noise = noise_factor * 0.02; % +- in [°]
    omega_noise = noise_factor * sqrt(2)*angular_noise/Ts * pi/180; % +- in [rad/s]
    omega_dot_noise = noise_factor * 10; % +- in [°/s^2]
    theta_noise = noise_factor * 0.05; % +- in [°]
    theta_dot_noise = noise_factor * theta_noise/Ts * pi/180; % +- in [rad/s]
    theta_dot_dot_noise = noise_factor * 0.5; % +- in [rad/s^2]
else
    T_delay = 0;
    p_noise = 0;
    v_noise = 0;
    a_noise = 0;
    angular_noise = 0;
    omega_noise = 0;
    omega_dot_noise = 0;
    theta_noise = 0;
    theta_dot_noise = 0;
    theta_dot_dot_noise = 0;
end
if useWrongCommWrench
    K_f_comm = 1.1; 
    K_tau_comm = 1.1;
    K_tau_man_comm = 1.05;
else
    K_f_comm = 1; 
    K_tau_comm = 1;
    K_tau_man_comm = 1;
end

%% Parameters for wrench observers
% Momentum-based/hybrid observer
K_I = [500*eye(3), zeros(3), zeros(3);
       zeros(3), 600*eye(3), zeros(3);
       zeros(3), zeros(3), 400*eye(3)]; % pos. definite gain matrix

% EKF
T_dis = 0.01; % sampling time of filter = 10 ms
noise_factor_EKF = ones(36,1)*3;
N_p = diag(noise_factor_EKF); % process covariance[36x36]
N_m = 1*diag([(p_noise/(3*noise_factor))^2 (p_noise/(3*noise_factor))^2 (p_noise/(3*noise_factor))^2 (a_noise/(3*noise_factor))^2 (a_noise/(3*noise_factor))^2 (a_noise/(3*noise_factor))^2 (angular_noise/(3*noise_factor))^2 (angular_noise/(3*noise_factor))^2 (angular_noise/(3*noise_factor))^2 (omega_noise/(3*noise_factor))^2 (omega_noise/(3*noise_factor))^2 (omega_noise/(3*noise_factor))^2 (theta_noise/(3*noise_factor))^2 (theta_noise/(3*noise_factor))^2 (theta_noise/(3*noise_factor))^2 (theta_dot_dot_noise/(3*noise_factor))^2 (theta_dot_dot_noise/(3*noise_factor))^2 (theta_dot_dot_noise/(3*noise_factor))^2 0.01^2 0.01^2 0.01^2 0.01^2 0.01^2 0.01^2 0.01^2 0.01^2 0.01^2]); % measurement covariance [27x27]

%% UAV
m = 3.9; % mass
g = 9.81; % gravity

%% Manipulator
% mass of link i
m_l1 = 0.3; m_l2 = 0.35; m_l3 = 0.35;
m_li = [m_l1,m_l2,m_l3];
% DH-parameters
alpha1 = pi/2; alpha2 = 0; alpha3 = 0;
alpha_man = [alpha1 alpha2 alpha3];
d1 = 0.1; d2 = 0; d3 = 0;
d = [d1 d2 d3];
a1 = 0; a2 = 0.3; a3 = 0.3;
a = [a1 a2 a3];
% pos. of CoM of link i in the {Li}-frame
p_L1_x_l1 = 0; p_L1_y_l1 = -d1; p_L1_z_l1 = 0; p_L1_l1 = [p_L1_x_l1 p_L1_y_l1 p_L1_z_l1]';% pos. of link 1 CoM in {L1}-frame
p_L2_x_l2 = -a2; p_L2_y_l2 = 0; p_L2_z_l2 = 0; p_L2_l2 = [p_L2_x_l2 p_L2_y_l2 p_L2_z_l2]';% pos. of link 2 CoM in {L2}-frame
p_L3_x_l3 = -a3; p_L3_y_l3 = 0; p_L3_z_l3 = 0; p_L3_l3 = [p_L3_x_l3 p_L3_y_l3 p_L3_z_l3]';% pos. of link 3 CoM in {L3}-frame
% Rotation matrix from body {B}- to manipulator base {L0}-frame
R_B_L0 = [1 0 0;0 1 0; 0 0 1];
