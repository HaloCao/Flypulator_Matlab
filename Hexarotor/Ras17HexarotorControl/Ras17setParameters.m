%Define parameters for hexarotor due to Ras17

Ixx = 0.5;
Iyy = Ixx;
Izz = 2;
IB = [Ixx 0 0; 0 Iyy 0; 0 0 Izz];
k = 2.98e-06; % rotor constants from Luk11
b = 1.14e-07; % rotor constants from Luk11
L = 1;
m = 0.6;
g = 9.81;

% Motor tilt angles
alpha = 13.6 * pi/180; %optimized angle from Raj15
beta = 0;

% gain matrices for [Ras17]
K_p1 = 10*eye(3);
k_p2 = 3;
K_d = diag([5,5,5,2,2,2]);