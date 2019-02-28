%% Define parameters for hexarotor - ideal case

% sample time and delay of state estimation
Ts = 1/250;%0.02; 
T_delay = 0;

% DC Motor parameters
T_rotor = 0.1;
T_rotor_0 = T_rotor;
T_dis_rotor = T_rotor/(T_rotor+Ts);
z_p_0 = T_rotor_0/(T_rotor_0+Ts);
K_0 = Ts/(T_rotor_0+Ts);

% _0 : nominal values used in controller with deviation from true values
useMeasurementNoise = false; % use errors in pose & velocity measurement
useNominalValues = false; % use parameter uncertainties or not

% noise values of gaussian noise, ~3sigma
if useMeasurementNoise
    p_noise = 0.0003; %+- in [m]
    v_noise = sqrt(2)*p_noise/Ts; % +- in [m/s]
    angular_noise = 0.02; % +- in degree
    omega_noise = sqrt(2)*angular_noise/Ts * pi/180; % +- in rad/s 
else
    p_noise = 0; %+- in [m]
    v_noise = 0; % +- in [m]
    angular_noise = 0; % +- in degree
    omega_noise = 0; % +- in rad/s
end

% body inertia
Ixx = 0.122;
Iyy = 0.123;
Izz = 0.235;
IB = [Ixx 0 0; 0 Iyy 0; 0 0 Izz];
IB_0 = IB;

% propeller inertia
Ipx = 0.00027;
Ipy = 0.00027;
Ipz = 0.0005;
Ip = [Ipx 0 0; 0 Ipy 0; 0 0 Ipz];
Ip_0 = Ip;

% motor inertia (current included in body)
% Imx = 0.0008;
% Imy = 0.0008;
% Imz = 0.0016;
% Im = [Imx 0 0; 0 Imy 0; 0 0 Imz];
% Im_0 = Im;

% rotor constants
k = 5.6e-05; % N/(rad/s)^2
k_0 = k;
b = 1.1e-06; % Nm/(rad/s)^2
b_0 = b;

% actuator boundaries [(rad/s)^2]
rot_vel_max = (6300 * pi/30)^2; % 6300 rpm
rot_vel_min = 0;

% drone radius (arm length)
L = 0.4;
L_0 = L;

% mass
m = 4.85; % kg
m_0 = m;
mp = 0.05;
mp_0 = mp;
% mm = 0.075; % motor mass
% mm_0 = mm;
g = 9.81; % gravity
g_0 = g;

% motor height
deltah =-0.0427;
deltah_0 = deltah;

% Motor tilt angles
alpha_i = pi/180 * 13.6;
alpha = [-alpha_i;alpha_i;-alpha_i;alpha_i;-alpha_i;alpha_i];
alpha_0 = alpha;
beta_i = pi/180 * 10.6;
beta = [beta_i; beta_i; beta_i; beta_i; beta_i; beta_i];
% beta = [beta_i; -beta_i; beta_i; -beta_i; beta_i; -beta_i];
beta_0 = beta;
S=[1,0,0;0,1,0;0,0,1];

% use parameter uncertainties or not
if useNominalValues
    IB_0 = IB*1.07;
    Ip_0 = Ip*1.05;
    k_0 = k*1.16;
    b_0 = b*1.15;
    L_0 = L*1.02;
    m_0 = m*1.03;
    mp_0 = mp*1.13;
    deltah_0 = deltah*0.97;
    alpha_0 = alpha*1.01;
    beta_0 = beta*0.99;
end

% model based impedance control
M_star = m_0*eye(3);    % mass
K_p_star = 50*eye(3);   % stiffness factor
K_d_star = 4*eye(3);    % damping factor

% K gain matrices for [Raj15] (PID)
K_P_D = 30*eye(3);
K_P_P = 130*eye(3); 
K_P_I = 80*eye(3);
K_R_D = 30*eye(3);
K_R_P = 130*eye(3); 
K_R_I = 80*eye(3);

% gain matrices for Backstepping
K_P_1 = 15*eye(3); 
K_P_2 = 50*eye(3); 
K_P_3 = 60*eye(3); 

K_R_1 = 40*eye(3); 
K_R_2 = 100*eye(3); 
K_R_3 = 50*eye(4); 

% Sliding Mode Control
lambda = 5; 
lambda_rot = 10;
eta = 40;  
eta_rot = 20; 
M = 100; 
M_rot = 15; 

