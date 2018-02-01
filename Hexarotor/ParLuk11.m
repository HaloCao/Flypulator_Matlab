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


% _0 : nominal values
useNominalValues = false;

%Ras17
Ixx = 0.5;
Iyy = Ixx;
Izz = 2;
IB = [Ixx 0 0; 0 Iyy 0; 0 0 Izz];
IB_0 = IB;
k = 2.98e-06;
k_0 = k;
b = 1.14e-07;
b_0 = b;
L = 1;
L_0 = L;
m = 0.6;
m_0 = m;
g = 9.81;
g_0 = g;

if useNominalValues
    IB_0 = IB*1.07;
    k_0 = k*1.06;
    b_0 = b*1.05;
    L_0 = L*1.02;
    m_0 = m*1.03;
    g_0 = g*1.04;
end

% Zero moment Mic17
k_pp  = 4;
k_pd = 8;
k_ap = 2;
k_ad = 4;
k_z = 15;

% Motor tilt angles
alpha = deg2rad(13.6);
alpha_0 = alpha;
% beta = deg2rad(10);
% alpha = 0.0001;
 beta = 0;
 beta_0 = beta;

% K gain matrices for [Raj15]

K_P_D = 10*eye(3);

K_P_P = 10*eye(3); %20

K_P_I = 10*eye(3);

K_R_D = 10*eye(3);

K_R_P = 20*eye(3); %20

K_R_I = 10*eye(3);

% gain matrices for [Ras17]
K_p1 = 10*eye(3);
k_p2 = 6;
K_d = diag([5,5,5,6,6,6]); %[5,5,5,2,2,2])

% gain matrices for Backstepping
K_P_1 = 6*eye(3);
K_P_2 = 6*eye(3);
K_P_3 = 6*eye(3);

K_R_1 = 3*eye(3);
K_R_2 = 3*eye(3);
K_R_3 = eye(4);

% Sliding Mode Control
lambda = 1;
lambda_rot = 1;
eta = 500;
eta_rot = 100;