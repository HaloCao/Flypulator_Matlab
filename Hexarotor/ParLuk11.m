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

%Ras17
Ixx = 0.5;
Iyy = Ixx;
Izz = 2;
IB = [Ixx 0 0; 0 Iyy 0; 0 0 Izz];
k = 2.98e-06;
b = 1.14e-07;
L = 1;
m = 0.6;
g = 9.81;

% Motor tilt angles
alpha = deg2rad(13.6);
% beta = deg2rad(10);
% alpha = 0.0001;
 beta = 0;

% K gain matrices for [Raj15]

K_P_D = 10*eye(3);

K_P_P = 20*eye(3);

K_P_I = 10*eye(3);

K_R_D = 10*eye(3);

K_R_P = 20*eye(3);

K_R_I = 10*eye(3);

% gain matrices for [Ras17]
K_p1 = 10*eye(3);
k_p2 = 3;
K_d = diag([5,5,5,2,2,2]);

% gain matrices for Backstepping
K_P_1 = 3*eye(3);
K_P_2 = 3*eye(3);

K_R_1 = 3*eye(3);
K_R_2 = 3*eye(3);