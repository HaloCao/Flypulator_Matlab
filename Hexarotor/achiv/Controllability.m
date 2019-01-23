% Controllability of linearized System


% eta = 0.999999;
% eps_1 = 0.00001;
% eps_2 = 0.00001;
% eps_3 = 1-sqrt(eta^2 + eps_1^2 + eps_2^2);
% w_1 = 0.000001;
% w_2 = 0.000001;
% w_3 = 0.000001;

eta = 1;
eps_1 = 0;
eps_2 = 0;
eps_3 = 0;
w_1 = 0;
w_2 = 0;
w_3 = 0;

%syms eta eps_1 eps_2 eps_3 w_1 w_2 w_3;

Ixx = 0.5;
Iyy = 0.5;
Izz = 2;

m=1;

A = [0 0 0 1 0 0 0 0 0 0 0 0 0;
    0 0 0 0 1 0 0 0 0 0 0 0 0;
    0 0 0 0 0 1 0 0 0 0 0 0 0;
    0 0 0 0 0 0 0 0 0 0 0 0 0;
    0 0 0 0 0 0 0 0 0 0 0 0 0;
    0 0 0 0 0 0 0 0 0 0 0 0 0;
    0 0 0 0 0 0 0 -0.5*w_1 -0.5*w_2 -0.5*w_3 -0.5*eps_1 -0.5*eps_2 -0.5*eps_3;
    0 0 0 0 0 0 0.5*w_1 0 0.5*w_3 -0.5*w_2 0.5*eta -0.5*eps_3 0.5*eps_2;
    0 0 0 0 0 0 0.5*w_2 -0.5*w_3 0 0.5*w_1 0.5*eps_3 0.5*eta -0.5*eps_1;
    0 0 0 0 0 0 0.5*w_3 0.5*w_2 -0.5*w_1 0 -0.5*eps_2 0.5*eps_1 0.5*eta;
    0 0 0 0 0 0 0 0 0 0 0 (Iyy-Izz)/Ixx*w_3 (Iyy-Izz)/Ixx*w_2;
    0 0 0 0 0 0 0 0 0 0 (Izz-Ixx)/Iyy*w_3 0 (Izz-Ixx)/Iyy*w_1;
    0 0 0 0 0 0 0 0 0 0 (Ixx-Iyy)/Izz*w_2 (Ixx-Iyy)/Izz*w_1 0;];

B = [0 0 0 0 0 0;
    0 0 0 0 0 0;
    0 0 0 0 0 0;
    1/m 0 0 0 0 0;
    0 1/m 0 0 0 0;
    0 0 1/m 0 0 0;
    0 0 0 0 0 0;
    0 0 0 0 0 0;
    0 0 0 0 0 0;
    0 0 0 0 0 0;
    0 0 0 1/Ixx 0 0;
    0 0 0 0 1/Iyy 0;
    0 0 0 0 0 1/Izz;];

CB = ctrb(A,B);
CB2 = [B, A*B, A*A*B,A*A*A*B, A*A*A*A*B,A*A*A*A*A*B,A*A*A*A*A*A*B,A*A*A*A*A*A*A*B,A*A*A*A*A*A*A*A*B,A*A*A*A*A*A*A*A*A*B,A*A*A*A*A*A*A*A*A*A*B,A*A*A*A*A*A*A*A*A*A*A*B,A*A*A*A*A*A*A*A*A*A*A*A*B];
C = [eye(3),zeros(3,10);
    zeros(4,6),eye(4), zeros(4,3)];
rank(CB)


    