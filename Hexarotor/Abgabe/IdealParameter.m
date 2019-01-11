%% Define parameters for hexarotor - ideal case

% sample time and delay of state estimation
Ts = 1/250;%0.02; 
T_delay = 0;

% DC Motor parameters
T_rotor = 0.1;
T_rotor_0 = 0.1;
T_dis_rotor = T_rotor/(T_rotor+Ts);
z_p_0 = T_rotor_0/(T_rotor_0+Ts);
K_0 = Ts/(T_rotor_0+Ts);

% _0 : nominal values with deviation from true values
useMeasurementNoise = false; % use errors in pose & velocity measurement
useNominalValues = false; % use parameter uncertainties or not

% noise values of gaussian noise, ~3sigma
if useMeasurementNoise
    p_noise = 0.0001; %+- in [m]
    v_noise = 2*p_noise/Ts; % +- in [m/s]
    angular_noise = 0.02; % +- in degree
    omega_noise = 2*angular_noise/Ts * pi/180; % +- in rad/s 
else
    p_noise = 0; %+- in [m]
    v_noise = 0; % +- in [m]
    angular_noise = 0; % +- in degree
    omega_noise = 0; % +- in rad/s
end

% Inertia
Ixx = 0.122;
Iyy = 0.123;
Izz = 0.235;
IB = [Ixx 0 0; 0 Iyy 0; 0 0 Izz];
IB_0 = IB;
% rotor constants
k = 5.6e-05; %N/(rad/s)^2
k_0 = k;
b = 1.1e-06; %N/(rad/s)^2
b_0 = b;
% drone radius
L = 0.4;
L_0 = L;
m = 4.85; % mass
m_0 = m;
g = 9.81; % gravity
g_0 = g;

% use parameter uncertainties or not
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
alpha_0 = alpha;
beta = pi/180 * 10.6;
beta_0 = beta;

% K gain matrices for [Raj15] (PID)
K_P_D = 30*eye(3);
K_P_P = 100*eye(3); 
K_P_I = 100*eye(3);
K_R_D = 30*eye(3);
K_R_P = 100*eye(3); 
K_R_I = 100*eye(3);

% gain matrices for Backstepping
K_P_1 = 15*eye(3); 
K_P_2 = 50*eye(3); 
K_P_3 = 60*eye(3); 

K_R_1 = 40*eye(3); 
K_R_2 = 100*eye(3); 
K_R_3 = 50*eye(4); 

% Sliding Mode Control
lambda = 10; 
lambda_rot = 10;
eta = 75;  
eta_rot = 50; 
M = 50; 
M_rot = 50; 

