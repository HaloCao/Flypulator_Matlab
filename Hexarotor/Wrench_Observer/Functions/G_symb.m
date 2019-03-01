%
% Marek Wilmsen
% compute symbolic gravitation vector for aerial manipulator
%
syms m m_l1 m_l2 m_l3 positive;
syms I_xx I_yy I_zz positive;
syms I_xx_l1 I_yy_l1 I_zz_l1 positive;
syms I_xx_l2 I_yy_l2 I_zz_l2 positive;
syms I_xx_l3 I_yy_l3 I_zz_l3 positive;
syms g positive;
syms p_x p_y p_z phi_E theta_E psi_E theta1 theta2 theta3 real; % gen. coord. q
syms alpha1 alpha2 alpha3 real;
syms d1 d2 d3 positive;
syms a1 a2 a3 positive;

sphi = sin(phi_E); cphi = cos(phi_E);
sth = sin(theta_E); cth = cos(theta_E);
spsi = sin(psi_E); cpsi = cos(psi_E);
sth1 = sin(theta1); cth1 = cos(theta1); sth2 = sin(theta2); cth2 = cos(theta2); sth3 = sin(theta3); cth3 = cos(theta3);
salp1 = sin(alpha1); calp1 = cos(alpha1); salp2 = sin(alpha2); calp2 = cos(alpha2); salp3 = sin(alpha3); calp3 = cos(alpha3);


%% Rotation matrix from inertial to body frame
R_IB = [cpsi*cth cpsi*sth*sphi-spsi*cphi cpsi*sth*cphi+spsi*sphi;
        spsi*cth spsi*sth*sphi+cpsi*cphi spsi*sth*cphi-cpsi*sphi;
        -sth cth*sphi cth*cphi];

%% Rotation matrices from link i to manipulator base {L0}
% R_th_1 = [cth1 -sth1 0 0;
%     sth1 cth1 0 0;
%     0 0 1 0;
%     0 0 0 1];
% R_alpha_1 = [1 0 0 0;
%     0 calp1 -salp1 0;
%     0 salp1 calp1 0;
%     0 0 0 1];
% R_th_2 = [cth2 -sth2 0 0;
%     sth2 cth2 0 0;
%     0 0 1 0;
%     0 0 0 1];
% R_alpha_2 = [1 0 0 0;
%     0 calp2 -salp2 0;
%     0 salp2 calp2 0;
%     0 0 0 1];
% R_th_3 = [cth3 -sth3 0 0;
%     sth3 cth3 0 0;
%     0 0 1 0;
%     0 0 0 1];
% R_alpha_3 = [1 0 0 0;
%     0 calp3 -salp3 0;
%     0 salp3 calp3 0;
%     0 0 0 1];
% R_th_4 = [cth4 -sth4 0 0;
%         sth4 cth4 0 0;
%         0 0 1 0;
%         0 0 0 1];
% R_alpha_4 = [1 0 0 0;
%            0 calph4 -salph4 0;
%            0 salph4 calph4 0;
%            0 0 0 1];
% R_th_5 = [cth5 -sth5 0 0;
%         sth5 cth5 0 0;
%         0 0 1 0;
%         0 0 0 1];
% R_alpha_5 = [1 0 0 0;
%            0 calph5 -salph5 0;
%            0 salph5 calph5 0;
%            0 0 0 1];

% transformation matrices from link i to link i-1
% T_L0_L1 = R_th_1 * [1 0 0 0;0 1 0 0;0 0 1 d1;0 0 0 0] * [1 0 0 a1;0 1 0 0;0 0 1 0;0 0 0 1] * R_alpha_1;
% T_L1_L2 = R_th_2 * [1 0 0 0;0 1 0 0;0 0 1 d2;0 0 0 0] * [1 0 0 a2;0 1 0 0;0 0 1 0;0 0 0 1] * R_alpha_2;
% T_L2_L3 = R_th_3 * [1 0 0 0;0 1 0 0;0 0 1 d3;0 0 0 0] * [1 0 0 a3;0 1 0 0;0 0 1 0;0 0 0 1] * R_alpha_3;
% T_L3_L4 = R_th_4 * [1 0 0 0;0 1 0 0;0 0 1 d4;0 0 0 0] * [1 0 0 a4;0 1 0 0;0 0 1 0;0 0 0 1] * R_alpha_4;
% T_L4_L5 = R_th_5 * [1 0 0 0;0 1 0 0;0 0 1 d5;0 0 0 0] * [1 0 0 a5;0 1 0 0;0 0 1 0;0 0 0 1] * R_alpha_5;

% transformatin matrices from link i to manipulator base {L0}
% T_L0_L2 = T_L0_L1*T_L1_L2;
% T_L0_L3 = T_L0_L2*T_L2_L3;
% T_L0_L4 = T_L0_L3*T_L3_L4;
% T_L0_L5 = T_L0_L4*T_L4_L5;

% rotation matrices from link i to manipulator base {L0}
% R_L0_L1 = T_L0_L1(1:3,1:3);
% R_L0_L2 = T_L0_L2(1:3,1:3);
% R_L0_L3 = T_L0_L3(1:3,1:3);
% R_L0_L4 = T_L0_L4(1:3,1:3);
% R_L0_L5 = T_L0_L5(1:3,1:3);

R_L0_L1 = [ cth1, -calp1*sth1,  sth1*salp1;
            sth1,  cth1*calp1, -cth1*salp1;
             0,         salp1,       calp1];

R_L0_L2 = [ cth1*cth2 - calp1*sth1*sth2, sth1*salp1*salp2 - cth1*calp2*sth2 - cth2*calp1*calp2*sth1, cth1*sth2*salp2 + calp2*sth1*salp1 + cth2*calp1*sth1*salp2;
            cth2*sth1 + cth1*calp1*sth2, cth1*cth2*calp1*calp2 - cth1*salp1*salp2 - calp2*sth1*sth2, sth1*sth2*salp2 - cth1*calp2*salp1 - cth1*cth2*calp1*salp2;
             sth2*salp1,                                                   calp1*salp2 + cth2*calp2*salp1,                       calp1*calp2 - cth2*salp1*salp2];
         
R_L0_L3 = [ cth3*(cth1*cth2 - calp1*sth1*sth2) - sth3*(calp2*cth1*sth2 - salp1*salp2*sth1 + calp1*calp2*cth2*sth1),   salp3*(calp2*salp1*sth1 + salp2*cth1*sth2 + calp1*salp2*cth2*sth1) - calp3*cth3*(calp2*cth1*sth2 - salp1*salp2*sth1 + calp1*calp2*cth2*sth1) - calp3*sth3*(cth1*cth2 - calp1*sth1*sth2), calp3*(calp2*salp1*sth1 + salp2*cth1*sth2 + calp1*salp2*cth2*sth1) + salp3*cth3*(calp2*cth1*sth2 - salp1*salp2*sth1 + calp1*calp2*cth2*sth1) + salp3*sth3*(cth1*cth2 - calp1*sth1*sth2);
            cth3*(cth2*sth1 + calp1*cth1*sth2) - sth3*(salp1*salp2*cth1 + calp2*sth1*sth2 - calp1*calp2*cth1*cth2), - salp3*(calp2*salp1*cth1 - salp2*sth1*sth2 + calp1*salp2*cth1*cth2) - calp3*cth3*(salp1*salp2*cth1 + calp2*sth1*sth2 - calp1*calp2*cth1*cth2) - calp3*sth3*(cth2*sth1 + calp1*cth1*sth2), salp3*cth3*(salp1*salp2*cth1 + calp2*sth1*sth2 - calp1*calp2*cth1*cth2) - calp3*(calp2*salp1*cth1 - salp2*sth1*sth2 + calp1*salp2*cth1*cth2) + salp3*sth3*(cth2*sth1 + calp1*cth1*sth2);
             sth3*(calp1*salp2 + calp2*salp1*cth2) + salp1*cth3*sth2,                                                                                                                                      salp3*(calp1*calp2 - salp1*salp2*cth2) + calp3*cth3*(calp1*salp2 + calp2*salp1*cth2) - calp3*salp1*sth2*sth3,                                                                 calp3*(calp1*calp2 - salp1*salp2*cth2) - salp3*cth3*(calp1*salp2 + calp2*salp1*cth2) + salp1*salp3*sth2*sth3];

% pos. of CoM of link i in {B}-frame (assumption: half length)
p_b1_sym = [0 0 d1_sym/2]';
p_b2_sym = T_0_2_sym(1:3,4);
p_b3_sym = T_0_3_sym(1:3,4);

% rotation matrix from {B} to {L0}
R_B_L0 = eye(3);
%% Gravity vector
a = R_B_L0(1,1)*R_IB(3,1)+ R_B_L0(2,1)*R_IB(3,2)+ R_B_L0(3,1)*R_IB(3,3);
b = R_B_L0(1,2)*R_IB(3,1)+ R_B_L0(2,2)*R_IB(3,2)+ R_B_L0(3,2)*R_IB(3,3);
c = R_B_L0(1,3)*R_IB(3,1)+ R_B_L0(2,3)*R_IB(3,2)+ R_B_L0(3,3)*R_IB(3,3);
% partial derivatives
dadphi = -R_B_L0(2,1)*cphi*cth + R_B_L0(3,1)*sphi*cth;
dadth = R_B_L0(1,1)*cth + R_B_L0(2,1)*sphi*sth + R_B_L0(3,1)*cphi*sth;
dadpsi = 0;
dbdphi = -R_B_L0(2,2)*cphi*cth + R_B_L0(3,2)*sphi*cth;
dbdth = R_B_L0(1,2)*cth + R_B_L0(2,2)*sphi*sth + R_B_L0(3,2)*cphi*sth;
dbdpsi = 0;
dcdphi = -R_B_L0(2,3)*cphi*cth + R_B_L0(3,3)*sphi*cth;
dcdth = R_B_L0(1,3)*cth + R_B_L0(2,3)*sphi*sth + R_B_L0(3,3)*cphi*sth;
dcdpsi = 0;

% gravity vector UAV
dUuav = [0 0 g*m 0 0 0 0 0 0]';
% gravity vector link 1
dUman_1(1:3) = [0 0 g*m_l1];
dUman_1(4) = p_b1(1)*m_l1*g*(R_L0_L1(1,1)*dadphi + R_L0_L1(2,1)*dbdphi + R_L0_L1(3,1)*dcdphi)                                       + p_b1(2)*m_l1*g*(R_L0_L1(1,2)*dadphi + R_L0_L1(2,2)*dbdphi + R_L0_L1(3,2)*dcdphi)      + p_b1(3)*m_l1*g*(R_L0_L1(1,3)*dadphi + R_L0_L1(2,3)*dbdphi + R_L0_L1(3,3)*dcdphi);
dUman_1(5) = p_b1(1)*m_l1*g*(R_L0_L1(1,1)*dadth + R_L0_L1(2,1)*dbdth + R_L0_L1(3,1)*dcdth)                                          + p_b1(2)*m_l1*g*(R_L0_L1(1,2)*dadth + R_L0_L1(2,2)*dbdth + R_L0_L1(3,2)*dcdth)         + p_b1(3)*m_l1*g*(R_L0_L1(1,3)*dadth + R_L0_L1(2,3)*dbdth + R_L0_L1(3,3)*dcdth);
dUman_1(6) = p_b1(1)*m_l1*g*(R_L0_L1(1,1)*dadpsi + R_L0_L1(2,1)*dbdpsi + R_L0_L1(3,1)*dcdpsi)                                       + p_b1(2)*m_l1*g*(R_L0_L1(1,2)*dadpsi + R_L0_L1(2,2)*dbdpsi + R_L0_L1(3,2)*dcdpsi)      + p_b1(3)*m_l1*g*(R_L0_L1(1,3)*dadpsi + R_L0_L1(2,3)*dbdpsi + R_L0_L1(3,3)*dcdpsi);
dUman_1(7) = p_b1(1)*m_l1*g*(sth1*a - cth1*b)                                                                                       + p_b1(2)*m_l1*g*(-cth1*calp1*a + sth1*calp1*b)                                         + p_b1(3)*m_l1*g*(cth1*salp1*a + sth1*salp1*b);
dUman_1(8) = 0;
dUman_1(9) = 0;
dUman_1 = dUman_1';
% gravity vector link 2
dUman_2(1:3) = [0 0 g*m_l2];
dUman_2(4) = p_b2(1)*m_l2*g*(R_L0_L2(1,1)*dadphi + R_L0_L2(2,1)*dbdphi + R_L0_L2(3,1)*dcdphi)                                       + p_b2(2)*m_l2*g*(R_L0_L2(1,2)*dadphi + R_L0_L2(2,2)*dbdphi + R_L0_L2(3,2)*dcdphi)                                                                  + p_b2(3)*m_l2*g*(R_L0_L2(1,3)*dadphi + R_L0_L2(2,3)*dbdphi + R_L0_L2(3,3)*dcdphi);
dUman_2(5) = p_b2(1)*m_l2*g*(R_L0_L2(1,1)*dadth + R_L0_L2(2,1)*dbdth + R_L0_L2(3,1)*dcdth)                                          + p_b2(2)*m_l2*g*(R_L0_L2(1,2)*dadth + R_L0_L2(2,2)*dbdth + R_L0_L2(3,2)*dcdth)                                                                     + p_b2(3)*m_l2*g*(R_L0_L2(1,3)*dadth + R_L0_L2(2,3)*dbdth + R_L0_L2(3,3)*dcdth);
dUman_2(6) = p_b2(1)*m_l2*g*(R_L0_L2(1,1)*dadpsi + R_L0_L2(2,1)*dbdpsi + R_L0_L2(3,1)*dcdpsi)                                       + p_b2(2)*m_l2*g*(R_L0_L2(1,2)*dadpsi + R_L0_L2(2,2)*dbdpsi + R_L0_L2(3,2)*dcdpsi)                                                                  + p_b2(3)*m_l2*g*(R_L0_L2(1,3)*dadpsi + R_L0_L2(2,3)*dbdpsi + R_L0_L2(3,3)*dcdpsi);
dUman_2(7) = p_b2(1)*m_l2*g*((sth1*cth2+cth1*sth2*calp1)*a + (-cth1*cth2+sth1*sth2*calp1)*b)                                        + p_b2(2)*m_l2*g*((-cth1*salp1*salp2-sth1*sth2*calp2+cth1*cth2*calp1*calp2)*a + (sth1*cth2*calp1*calp2-sth1*salp1*salp2+cth1*sth2*calp2)*b)         + p_b2(3)*m_l2*g*((sth1*sth2*salp2-cth2*salp1*calp2-cth1*cth2*calp1*salp2)*a + (-cth1*sth2*salp2-sth1*salp1*calp2-sth1*cth2*calp1*salp2)*b);
dUman_2(8) = p_b2(1)*m_l2*g*((sth2*cth1+cth2*sth1*calp1)*a + (sth2*sth1-cth2*cth1*calp1)*b + (-cth2*salp1)*c)                       + p_b2(2)*m_l2*g*((cth2*cth1*calp2-sth2*sth1*calp1*calp2)*a + (sth2*cth1*calp1*calp2+cth2*sth1*calp2)*b + (sth2*salp1*calp2)*c)                     + p_b2(3)*m_l2*g*((-cth2*cth1*salp2+sth2*sth1*calp1*salp2)*a + (-cth2*sth1*salp2)*b + (-sth2*salp1*salp2)*c);
dUman_2(9) = 0;
dUman_2 = dUman_2';
% gravity vector link 3
dUman_3(1:3) = [0 0 g*m_l3];
dUman_3(4) = p_b3(1)*m_l3*g*(R_L0_L3(1,1)*dadphi + R_L0_L3(2,1)*dbdphi + R_L0_L3(3,1)*dcdphi)                                                                                                                                                                                                         + p_b3(2)*m_l3*g*(R_L0_L3(1,2)*dadphi + R_L0_L3(2,2)*dbdphi + R_L0_L3(3,2)*dcdphi)                                                                                                                                                                                                                                                                                            + p_b3(3)*m_l3*g*(R_L0_L3(1,3)*dadphi + R_L0_L3(2,3)*dbdphi + R_L0_L3(3,3)*dcdphi);
dUman_3(5) = p_b3(1)*m_l3*g*(R_L0_L3(1,1)*dadth + R_L0_L3(2,1)*dbdth + R_L0_L3(3,1)*dcdth)                                                                                                                                                                                                            + p_b3(2)*m_l3*g*(R_L0_L3(1,2)*dadth + R_L0_L3(2,2)*dbdth + R_L0_L3(3,2)*dcdth)                                                                                                                                                                                                                                                                                               + p_b3(3)*m_l3*g*(R_L0_L3(1,3)*dadth + R_L0_L3(2,3)*dbdth + R_L0_L3(3,3)*dcdth);
dUman_3(6) = p_b3(1)*m_l3*g*(R_L0_L3(1,1)*dadpsi + R_L0_L3(2,1)*dbdpsi + R_L0_L3(3,1)*dcdpsi)                                                                                                                                                                                                         + p_b3(2)*m_l3*g*(R_L0_L3(1,2)*dadpsi + R_L0_L3(2,2)*dbdpsi + R_L0_L3(3,2)*dcdpsi)                                                                                                                                                                                                                                                                                            + p_b3(3)*m_l3*g*(R_L0_L3(1,3)*dadpsi + R_L0_L3(2,3)*dbdpsi + R_L0_L3(3,3)*dcdpsi);
dUman_3(7) = p_b3(1)*m_l3*g*((sth1*cth2*cth3+cth1*sth2*calp1-sth1*sth2*sth3*calp2+cth1*salp1*salp2-cth1*cth2*calp1*calp2)*a + (cth1*cth2*cth3+cth1*sth2*calp1+cth1*sth2*sth3*calp2-sth1*salp1*salp2-sth1*cth2*calp1*calp2)*b)                                                                         + p_b3(2)*m_l3*g*((sth1*sth2*salp2*salp3-cth1*salp1*calp2-cth1*cth2*calp1*calp2-sth1*sth2*cth3*calp2*calp3+cth1*salp1*salp2-cth1*cth2*calp1*calp2-sth1*cth2*sth3*calp3+cth1*sth2*calp1)*a + (-sth1*salp1*calp2*salp3+cth1*sth2*salp2+sth1*cth2*calp1*salp2+cth1*sth2*cth3*calp2*calp3+sth1*salp1*salp2-sth1*cth2*calp1*calp2+cth1*cth2*sth3*calp3+sth1*sth2*calp1)*b)         + p_b3(3)*m_l3*g*((sth1*sth2*salp2*calp3-cth1*salp1*calp2-cth1*cth2*calp1*salp2+sth1*sth2*cth3*calp2*salp3+cth1*salp1*salp2-cth1*cth2*calp1*calp2+sth1*cth2*sth3*salp3+cth1*sth2*calp1)*a + (-cth1*sth2*cth3*calp2*salp3+sth1*salp1*salp2-sth1*cth2*calp1*calp2-sth1*salp1*calp2*calp3+cth1*sth2*salp2+sth1*cth2*calp1*salp2-cth1*cth2*sth3*salp3+sth1*sth2*calp1)*b);
dUman_3(8) = p_b3(1)*m_l3*g*((sth2*cth1*cth3+cth2*sth1*calp1+cth2*cth1*sth3*calp2+sth2*sth1*calp1)*a + (sth2*sth1*cth3-cth2*cth1*calp1+cth2*sth1*sth3*calp2-sth2*cth1*calp1*calp2)*b + (-cth2*cth3*salp1+sth2*sth3*salp1*calp2)*c)                                                                    + p_b3(2)*m_l3*g*((-cth2*cth1*salp2*salp3+sth2*sth1*calp1-sth2*cth1*sth3*calp3+cth2*sth1*calp1+cth2*cth1*cth3*calp2*calp3+sth2*sth1*calp1)*a + (-cth2*sth1*salp2*salp3-sth2*cth1*calp1-sth2*sth1*sth3*calp3-cth2*cth1*calp1+cth2*sth1*cth3*calp2*calp3-sth2*cth1*calp1)*b + (sth2*cth3*salp1*calp2*calp3+cth2*sth3*salp1*calp3-sth2*salp1*salp2*salp3)*c)                     + p_b3(3)*m_l3*g*((sth2*cth1*sth3*salp3+cth2*sth1*calp1-cth2*cth1*salp2*calp3+sth2*sth1*calp1-cth2*cth1*cth3*calp2*salp3+sth2*sth1*calp1)*a - (sth2*sth1*sth3*salp3-cth2*cth1*calp1-cth2*sth1*salp2*calp3-sth2*cth1*calp1-cth2*sth1*cth3*calp2*salp3-sth2*cth1*calp1)*b + (-cth2*sth3*salp1*salp3-sth2*salp1*salp2*calp3-sth2*cth3*salp1*calp2*salp3)*c);
dUman_3(9) = p_b3(1)*m_l3*g*((sth3*(cth1*cth2-sth1*sth2*calp1)+cth3*(cth1*sth2*calp2-sth1*salp1*salp2+sth1*cth2*calp1*calp2))*a + (sth3*(sth1*cth2+cth1*sth2*calp1)+cth3*(cth1*salp1*salp2+sth1*sth2*calp2-cth1*cth2*calp1*calp2))*b + (-cth3*(calp1*salp2+cth2*salp1*calp2)+sth3*sth2*salp1)*c)      + p_b3(2)*m_l3*g*((-sth3*calp3*(cth1*sth2*calp2-sth1*salp1*salp2+sth1*cth2*calp1*calp2-calp3*(cth1*cth2-sth1*sth2*calp1))*a + (-sth3*calp3*(cth1*salp1*salp2+sth1*sth2*calp2-cth1*cth2*calp1*calp2+cth3*calp3*(sth1*cth2+cth1*sth2*calp1)))*b + (-sth3*calp3*(calp1*salp2+cth2*salp1*calp2)+cth3*sth2*salp1*calp3))*c)                                                        + p_b3(3)*m_l3*g*((sth3*salp3*(cth1*sth2*calp2-sth1*salp1*salp2+sth1*cth2*calp1*calp2)-cth3*salp3*(cth1*cth2-sth1*sth2*calp1)))*a +(sth3*salp3*(cth1*salp1*salp2+sth1*sth2*calp2-cth1*cth2+calp1*calp2)-cth3*salp3*(sth1*cth2+cth1*sth2*calp1))*b + (-cth3*sth2*salp1*salp3-sth3*salp3*(calp1*salp2+cth2*salp1*calp2)*c);
dUman_3 = dUman_3';

G = dUuav + dUman_1 + dUman_2 + dUman_3;

%% save G in .txt files
file1 = 'G.txt';
fileID = fopen(file1,'w');
fprintf(fileID,'G = [ \t');
for i= 1:9
    fprintf(fileID,'%s',char(G(i)));
    if i < 9
        fprintf(fileID,'; \n\t\t');
    else
        fprintf(fileID,']; \n');
    end
end
fclose(fileID);