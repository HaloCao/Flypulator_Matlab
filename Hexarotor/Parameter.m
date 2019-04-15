% This script contains all parameters to run any simulation
% this script has to be excuted before start the simulation or set as
% InitFcn of corresponding simulink model
%% setup test configuration
% measurementNoise
% 1: ideal case, without delay and noise
% 2: VIVE case, delay and noise of VIVE tracking system
% 3: VO case, delay and noise of Visual Odometry
measurementNoise = 2;
useNominalValues = false; % true if using parameter uncertainties

%% Measurement parameters
switch measurementNoise
    case 1  % ideal
        Ts = 1/250;     % [s] sampling time, control loop frequency 
        T_delay = 0;    % [s] delay time
        p_noise = 0; % 3sigma value for position measurement noise in [m]
        v_noise = 0; % 3sigma value for velocity measurement noise in [m]
        angular_noise = 0; % 3sigma value for attitude measurement noise in degree
        omega_noise = 0; % 3sigma value for angular velocity measurement noise in rad/s
    case 2  % VIVE
        Ts = 1/250;
        T_delay = 0.04;
        p_noise = 0.0003; %+- in [m]
        v_noise = sqrt(2)*p_noise/Ts; % +- in [m/s]
        angular_noise = 0.02; % +- in degree
        omega_noise = sqrt(2)*angular_noise/Ts * pi/180; % +- in rad/s 
    case 3  % OV
        Ts = 0.03; 
        T_delay = 0.1;
        p_noise = 0.001; % +- in [m]
        v_noise = sqrt(2)*p_noise/Ts; % +- in [m/s]
        angular_noise = 0.5; % +- in degree
        omega_noise = sqrt(2)*angular_noise/Ts * pi/180; % +- in rad/s 

       
    otherwise
        error('Test case undefined! Ideal case:1, VIVE case:2, VO case: 3.');
end

%% UAV model parameters
Ixx = 0.122;
Iyy = 0.123;
Izz = 0.235;
IB = [Ixx 0 0; 0 Iyy 0; 0 0 Izz];   % body inertia

Ipx = 0.00027;
Ipy = 0.00027;
Ipz = 0.0005;
Ip = [Ipx 0 0; 0 Ipy 0; 0 0 Ipz];   % propeller inertia

% Imx = 0.0008;
% Imy = 0.0008;
% Imz = 0.0016;
% Im = [Imx 0 0; 0 Imy 0; 0 0 Imz]; % motor inertia (current included in body)
% Im_0 = Im;

% Propeller constants
k = 4.472e-05; % N/(rad/s)^2
b = k/50; % Nm/(rad/s)^2
% k = 5.6e-05; % old parameter
% b = 1.1e-06; % old parameter

% actuator boundaries [(rad/s)^2]
rot_vel_max = (6300 * pi/30)^2; % 6300 rpm
rot_vel_min = 0;

% drone radius (arm length)
L = 0.4;

% mass
m = 4.85; % kg
mp = 0.05;
% mm = 0.075; % motor mass
% mm_0 = mm;
g = 9.81; % gravity

% motor height
deltah =-0.0427;

% Motor tilt angles
alpha_i = pi/180 * 13.6;
alpha = [-alpha_i;alpha_i;-alpha_i;alpha_i;-alpha_i;alpha_i];
beta_i = pi/180 * 10.6;
beta = [beta_i; beta_i; beta_i; beta_i; beta_i; beta_i];
% beta = [beta_i; -beta_i; beta_i; -beta_i; beta_i; -beta_i];
S=[1,0,0;0,1,0;0,0,1];

% DC Motor model parameters
T_rotor = 0.1;
T_dis_rotor = T_rotor/(T_rotor+Ts);

% if with parameter uncertainties
if useNominalValues
    IB_0 = IB*1.07;
    Ip_0 = Ip*1.05;
    k_0 = k*1.16;
    b_0 = b*1.15;
    L_0 = L*1.02;
    m_0 = m*1.03;
    mp_0 = mp*1.13;
    g_0 = g*1.01;
    deltah_0 = deltah*0.97;
    alpha_0 = alpha*1.01;
    beta_0 = beta*0.99;
    T_rotor_0 = T_rotor*1.1;
else
    IB_0 = IB;
    Ip_0 = Ip;
    k_0 = k;
    b_0 = b;
    L_0 = L;
    m_0 = m;
    mp_0 = mp;
    g_0 = g;
    deltah_0 = deltah;
    alpha_0 = alpha;
    beta_0 = beta;
    T_rotor_0 = T_rotor;
end

%% motor feedforward parameters
z_p_0 = T_rotor_0/(T_rotor_0+Ts);
K_0 = Ts/(T_rotor_0+Ts);

%% control parameters
switch measurementNoise
    case 1  % ideal
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
        
        % zero-moment direction
        K_pp=20 ;
        K_pi=10;
        K_pd=8 ;
        K_z=15;
        K_ap=20;
        K_ai=1;
        K_ad=4;
        K_q=4;
        
    case 2  % VIVE
        % model based impedance control
        M_star = m_0*eye(3);    % mass
        K_p_star = 30*eye(3);   % stiffness factor
        K_d_star = 10*eye(3);    % damping factor

        % K gain matrices for [Raj15] (PID)
        K_P_D = 15*eye(3);
        K_P_P = 100*eye(3); 
        K_P_I = 100*eye(3);
        K_R_D = 15*eye(3);
        K_R_P = 100*eye(3); 
        K_R_I = 100*eye(3);

        % gain matrices for Backstepping
        K_P_1 = 10*eye(3); 
        K_P_2 = 10*eye(3); 
        K_P_3 = 10*eye(3); 

        K_R_1 = 10*eye(3); 
        K_R_2 = 10*eye(3);  
        K_R_3 = 10*eye(4); 

        % Sliding Mode Control
        lambda = 5; 
        lambda_rot = 5; 
        eta = 10; 
        eta_rot = 5;
        M = 5; % 
        M_rot = 1; 
        
        % zero-moment direction
        K_pp=20 ;
        K_pi=10;
        K_pd=8 ;
        K_z=15;
        K_ap=20;
        K_ai=1;
        K_ad=4;
        K_q=4;
        
    case 3  % OV
        % model based impedance control
        M_star = m_0*eye(3);    % mass
        K_p_star = 50*eye(3);   % stiffness factor
        K_d_star = 4*eye(3);    % damping factor

        % K gain matrices for [Raj15] (PID)
        K_P_D = 5*eye(3);
        K_P_P = 10*eye(3);
        K_P_I = 10*eye(3);
        K_R_D = 5*eye(3);
        K_R_P = 10*eye(3); 
        K_R_I = 10*eye(3);

        % gain matrices for Backstepping
        K_P_1 = 2*eye(3); 
        K_P_2 = 4*eye(3); 
        K_P_3 = 6*eye(3); 

        K_R_1 = 2*eye(3);
        K_R_2 = 4*eye(3); 
        K_R_3 = 6*eye(4);

        % Sliding Mode Control
        lambda = 3; 
        lambda_rot = 3; 
        eta = 2; 
        eta_rot = 2;
        M = 6;  
        M_rot = 6;  
        
        % zero-moment direction
       K_pp=20 ;
        K_pi=10;
        K_pd=8 ;
        K_z=15;
        K_ap=20;
        K_ai=1;
        K_ad=4;
        K_q=4;
        

    otherwise
        error('Test case undefined! Ideal case:1, VIVE case:2, VO case: 3.');
end


