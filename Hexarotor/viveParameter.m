%Define parameters for quadrotor
%ParLuk11
% Ixx = 4.856e-03;
% Iyy = Ixx;
% Izz = 8.801e-03;
% k = 2.98e-06;
% b = 1.14e-07;
% L = 0.225;
% m = 0.468;
% g = 9.81;

% sample time of visual odometry
Ts = 1/250;%0.02; 
T_delay = 0.04;%0.02;

T_rotor = 0.1;
T_rotor_0 = 0.11; %0.11
T_dis_rotor = T_rotor/(T_rotor+Ts);
z_p_0 = T_rotor_0/(T_rotor_0+Ts);
K_0 = Ts/(T_rotor_0+Ts);

% SVO: T_delay = 0.3, Ts = 0.03
% _0 : nominal values with deviation from true values
useMeasurementNoise = true;
useNominalValues = true;
useIdealParameters = false;


% noise values of gaussian noise, ~3sigma
if useMeasurementNoise
    p_noise = 0.0003; %+- in [m]
    v_noise = 2*p_noise/Ts; % +- in [m/s]
    angular_noise = 0.02; % +- in degree
    omega_noise = 2*angular_noise/Ts * pi/180; % +- in rad/s % 2.5°/s
else
    p_noise = 0; %+- in [m]
    v_noise = 0; % +- in [m]
    angular_noise = 0; % +- in degree
    omega_noise = 0; % +- in rad/s
end



Ixx = 0.5;
Iyy = Ixx;
Izz = 2;
IB = [Ixx 0 0; 0 Iyy 0; 0 0 Izz];
IB_0 = IB;
%k = 2.98e-06;
k = 5.6e-05; %N/(rad/s)^2
k_0 = k;
%b = 1.14e-07;
b = 1.1e-06; %N/(rad/s)^2
b_0 = b;
L = 0.4;
L_0 = L;
m = 2.5;
m_0 = m;
g = 9.81;
g_0 = g;

if useNominalValues
    IB_0 = IB*1.07;
    k_0 = k*1.16;
    b_0 = b*1.15;
    L_0 = L*1.02;
    m_0 = m*1.03;
    g_0 = g*0.99;
end

% Motor tilt angles
alpha = pi/180 * 13.6;
alpha_0 = alpha*1.08;
% beta = deg2rad(10);
% alpha = 0.0001;
 beta = 0;
 beta_0 = beta;

% K gain matrices for [Raj15]

K_P_D = 15*eye(3);

K_P_P = 100*eye(3); %20

K_P_I = 100*eye(3);

K_R_D = 15*eye(3);

K_R_P = 100*eye(3); %20

K_R_I = 100*eye(3);


% gain matrices for Backstepping
% K_P_1 = 3*eye(3); %15
% K_P_2 = 6*eye(3); %50
% K_P_3 = 6*eye(3); %60
% 
% K_R_1 = 6*eye(3); %40
% K_R_2 = 6*eye(3); %100
% K_R_3 = 6*eye(4); %50

K_P_1 = 10*eye(3); %15
K_P_2 = 10*eye(3); %50
K_P_3 = 20*eye(3); %60

K_R_1 = 6*eye(3); %40
K_R_2 = 10*eye(3); %100
K_R_3 = 20*eye(4); %50

% Sliding Mode Control
lambda = 8; 
lambda_rot = 10; 
eta = 4; 
eta_rot = 4;
M = 15; % upper bound of disturbance %200
M_rot = 15; 

if useIdealParameters
    lambda = 10; 
    lambda_rot = 10;
    eta = 100;  
    eta_rot = 100; 
    M = 200; % upper bound of disturbance %200
    M_rot = 200; 
end
