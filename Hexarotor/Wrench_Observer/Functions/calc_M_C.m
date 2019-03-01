%
% Marek Wilmsen
% compute symbolic inertia and Coriolis matrices for aerial manipulator
%
%% definitions
syms m_sym m_l1_sym m_l2_sym m_l3_sym positive;
syms I_xx_sym I_yy_sym I_zz_sym positive;
syms I_xx_l1_sym I_yy_l1_sym I_zz_l1_sym positive;
syms I_xx_l2_sym I_yy_l2_sym I_zz_l2_sym positive;
syms I_xx_l3_sym I_yy_l3_sym I_zz_l3_sym positive;
syms g_sym positive;
syms p_x_sym p_y_sym p_z_sym phi_E_sym theta_E_sym psi_E_sym theta1_sym theta2_sym theta3_sym real; % gen. coord. q
q_sym = [p_x_sym p_y_sym p_z_sym phi_E_sym theta_E_sym psi_E_sym theta1_sym theta2_sym theta3_sym].'; % adapt in case of DOF_Man. > 3
IB_sym = [I_xx_sym 0 0; 0 I_yy_sym 0; 0 0 I_zz_sym];
I1_sym = [I_xx_l1_sym 0 0; 0 I_yy_l1_sym 0; 0 0 I_zz_l1_sym];
I2_sym = [I_xx_l2_sym 0 0; 0 I_yy_l2_sym 0; 0 0 I_zz_l2_sym];
I3_sym = [I_xx_l3_sym 0 0; 0 I_yy_l3_sym 0; 0 0 I_zz_l3_sym];

% DH parameters
syms theta1_sym theta2_sym theta3_sym real; % theta1 = theta1_in + pi/2, ...
syms alpha1_sym alpha2_sym alpha3_sym real;
syms d1_sym d2_sym d3_sym positive;
syms a1_sym a2_sym a3_sym positive;

%% symbolic computation of M and C
R_th_1_sym = [cos(theta1_sym) -sin(theta1_sym) 0 0;
    sin(theta1_sym) cos(theta1_sym) 0 0;
    0 0 1 0;
    0 0 0 1];
R_alpha_1_sym = [1 0 0 0;
    0 cos(alpha1_sym) -sin(alpha1_sym) 0;
    0 sin(alpha1_sym) cos(alpha1_sym) 0;
    0 0 0 1];
R_th_2_sym = [cos(theta2_sym) -sin(theta2_sym) 0 0;
    sin(theta2_sym) cos(theta2_sym) 0 0;
    0 0 1 0;
    0 0 0 1];
R_alpha_2_sym = [1 0 0 0;
    0 cos(alpha2_sym) -sin(alpha2_sym) 0;
    0 sin(alpha2_sym) cos(alpha2_sym) 0;
    0 0 0 1];
R_th_3_sym = [cos(theta3_sym) -sin(theta3_sym) 0 0;
    sin(theta3_sym) cos(theta3_sym) 0 0;
    0 0 1 0;
    0 0 0 1];
R_alpha_3_sym = [1 0 0 0;
    0 cos(alpha3_sym) -sin(alpha3_sym) 0;
    0 sin(alpha3_sym) cos(alpha3_sym) 0;
    0 0 0 1];

% transformation matrices from link i to link i-1
T_0_0_sym = [eye(3) zeros(3,1); zeros(1,3) 1];
T_0_1_sym = R_th_1_sym * [1 0 0 0;0 1 0 0;0 0 1 d1_sym;0 0 0 0] * [1 0 0 a1_sym;0 1 0 0;0 0 1 0;0 0 0 1] * R_alpha_1_sym;
T_1_2_sym = R_th_2_sym * [1 0 0 0;0 1 0 0;0 0 1 d2_sym;0 0 0 0] * [1 0 0 a2_sym;0 1 0 0;0 0 1 0;0 0 0 1] * R_alpha_2_sym;
T_2_3_sym = R_th_3_sym * [1 0 0 0;0 1 0 0;0 0 1 d3_sym;0 0 0 0] * [1 0 0 a3_sym;0 1 0 0;0 0 1 0;0 0 0 1] * R_alpha_3_sym;

% transformatin matrices from link i to manipulator base {L0}
T_0_2_sym = T_0_1_sym*T_1_2_sym;
T_0_3_sym = T_0_2_sym*T_2_3_sym;
T_0_n_sym = T_0_3_sym; 

% coordinate transformation matrix from {B}-frame to {I}-frame;
R_IB_sym = [cos(psi_E_sym)*cos(theta_E_sym), cos(psi_E_sym)*sin(theta_E_sym)*sin(phi_E_sym)-sin(psi_E_sym)*cos(phi_E_sym), cos(psi_E_sym)*sin(theta_E_sym)*cos(phi_E_sym)+sin(psi_E_sym)*sin(phi_E_sym);
    sin(psi_E_sym)*cos(theta_E_sym), sin(psi_E_sym)*sin(theta_E_sym)*sin(phi_E_sym)+cos(psi_E_sym)*cos(phi_E_sym), sin(psi_E_sym)*sin(theta_E_sym)*cos(phi_E_sym)-cos(psi_E_sym)*sin(phi_E_sym);
    -sin(theta_E_sym), cos(theta_E_sym)*sin(phi_E_sym), cos(theta_E_sym)*cos(phi_E_sym)];

% coordinate transformation matrix from link i to {B}-frame;
R_B_L1_sym = T_0_1_sym(1:3,1:3);
R_B_L2_sym = T_0_2_sym(1:3,1:3);
R_B_L3_sym = T_0_3_sym(1:3,1:3);

% Jacobi matrices
J_t_1_sym = cross(T_0_0_sym(1:3,3),(T_0_n_sym(1:3,4)-T_0_0_sym(1:3,4)));
J_t_2_sym = cross(T_0_1_sym(1:3,3),(T_0_n_sym(1:3,4)-T_0_1_sym(1:3,4)));
J_t_3_sym = cross(T_0_2_sym(1:3,3),(T_0_n_sym(1:3,4)-T_0_2_sym(1:3,4)));
J_t_sym = [J_t_1_sym J_t_2_sym J_t_3_sym];
J_r_1_sym = T_0_0_sym(1:3,3);
J_r_2_sym = T_0_1_sym(1:3,3);
J_r_3_sym = T_0_2_sym(1:3,3);
J_r_sym = [J_r_1_sym J_r_2_sym J_r_3_sym];

% Transformation between angular velocity and Euler rate
T_sym = [1 0 -sin(theta_E_sym); 0 cos(phi_E_sym) cos(theta_E_sym)*sin(phi_E_sym); 0 -sin(phi_E_sym) cos(theta_E_sym)*cos(phi_E_sym)]; % omega_I = T * [phi_E theta_E psi_E]'

% pos. of joint i in {B}-frame
p_b1_sym = [0 0 d1_sym/2]';
p_b2_sym = T_0_2_sym(1:3,4);
p_b3_sym = T_0_3_sym(1:3,4);

%% symbolic computation of M
% Mt,b
Mt_b_sym = [eye(3) zeros(3) zeros(3)];

% Mr,b
Mr_b_sym = [zeros(3) T_sym zeros(3)];

% Mt,i
Mt_1_sym = [eye(3) vec2skew(-(R_IB_sym*p_b1_sym))*T_sym R_IB_sym*J_t_sym];
Mt_2_sym = [eye(3) vec2skew(-(R_IB_sym*p_b2_sym))*T_sym R_IB_sym*J_t_sym];
Mt_3_sym = [eye(3) vec2skew(-(R_IB_sym*p_b3_sym))*T_sym R_IB_sym*J_t_sym];

% Mr,i
Mr_1_sym = [zeros(3) T_sym R_IB_sym*J_r_sym];
Mr_2_sym = [zeros(3) T_sym R_IB_sym*J_r_sym];
Mr_3_sym = [zeros(3) T_sym R_IB_sym*J_r_sym];

% M
M_uav_sym = Mt_b_sym'*m_sym*Mt_b_sym + Mr_b_sym'*R_IB_sym*IB_sym*R_IB_sym'*Mr_b_sym;
M_man_1_sym = Mt_1_sym'*m_l1_sym*Mt_1_sym + Mr_1_sym'*(R_IB_sym*R_B_L1_sym)*I1_sym*(R_IB_sym*R_B_L1_sym)'*Mr_1_sym;
M_man_2_sym = Mt_2_sym'*m_l2_sym*Mt_2_sym + Mr_2_sym'*(R_IB_sym*R_B_L2_sym)*I2_sym*(R_IB_sym*R_B_L2_sym)'*Mr_2_sym;
M_man_3_sym = Mt_3_sym'*m_l3_sym*Mt_3_sym + Mr_3_sym'*(R_IB_sym*R_B_L3_sym)*I3_sym*(R_IB_sym*R_B_L3_sym)'*Mr_3_sym;
M_symb = M_uav_sym + M_man_1_sym + M_man_2_sym + M_man_3_sym;
save('M_symb')
%% symbolic computation of C
[M_row,M_col] = size(M_symb);
C_symb = sym(zeros(M_row,M_col));
for k = 1:M_row
    for j = 1:M_col
        for i = 1:size(q_sym)
            C_symb(k,j) = C_symb(k,j) + 0.5*(diff(M_symb(k,j),q_sym(i)) + diff(M_symb(k,i),q_sym(j)) - diff(M_symb(i,j),q_sym(k)));
        end
    end
end
save('C_symb');

%% compute numeric M and C matrices
% substitute symbolic variables with constant numeric values
syms theta1 theta2 theta3
syms phi the psi
m = 3.9; m_l1 = 0.3; m_l2 = 0.35; m_l3 = 0.35; g = 9.81;
I_xx = 0.12; I_yy = 0.12; I_zz = 0.24;
I_xx_l1 = 0.05;I_yy_l1 = 0.05; I_zz_l1 = 0.1;
I_xx_l2 = 0.05;I_yy_l2 = 0.05; I_zz_l2 = 0.1;
I_xx_l3 = 0.05;I_yy_l3 = 0.05; I_zz_l3 = 0.1;
alpha1 = pi/2; alpha2 = 0; alpha3 = 0;
d1 = 0.1; d2 = 0; d3 = 0;
a1 = 0; a2 = 0.3; a3 = 0.3;

M_num = subs(M_symb, {m_sym,m_l1_sym,m_l2_sym,m_l3_sym,g_sym}, {m,m_l1,m_l2,m_l3,g});
M_num = subs(M_num, {I_xx_sym,I_yy_sym,I_zz_sym},{I_xx,I_yy,I_zz});
M_num = subs(M_num, {I_xx_l1_sym,I_yy_l1_sym,I_zz_l1_sym},{I_xx_l1,I_yy_l1,I_zz_l1});
M_num = subs(M_num, {I_xx_l2_sym,I_yy_l2_sym,I_zz_l2_sym},{I_xx_l2,I_yy_l2,I_zz_l2});
M_num = subs(M_num, {I_xx_l3_sym,I_yy_l3_sym,I_zz_l3_sym},{I_xx_l3,I_yy_l3,I_zz_l3});
M_num = subs(M_num, {theta1_sym,theta2_sym,theta3_sym,},{theta1,theta2,theta3});
M_num = subs(M_num, {alpha1_sym,alpha2_sym,alpha3_sym,},{alpha1,alpha2,alpha3});
M_num = subs(M_num, {d1_sym,d2_sym,d3_sym},{d1,d2,d3});
M_num = subs(M_num, {a1_sym,a2_sym,a3_sym},{a1,a2,a3});
M_num = subs(M_num, {phi_E_sym,theta_E_sym,psi_E_sym}, {phi, the, psi});

C_num = subs(C_symb, {m_sym,m_l1_sym,m_l2_sym,m_l3_sym,g_sym}, {m,m_l1,m_l2,m_l3,g});
C_num = subs(C_num, {I_xx_sym,I_yy_sym,I_zz_sym},{I_xx,I_yy,I_zz});
C_num = subs(C_num, {I_xx_l1_sym,I_yy_l1_sym,I_zz_l1_sym},{I_xx_l1,I_yy_l1,I_zz_l1});
C_num = subs(C_num, {I_xx_l2_sym,I_yy_l2_sym,I_zz_l2_sym},{I_xx_l2,I_yy_l2,I_zz_l2});
C_num = subs(C_num, {I_xx_l3_sym,I_yy_l3_sym,I_zz_l3_sym},{I_xx_l3,I_yy_l3,I_zz_l3});
C_num = subs(C_num, {theta1_sym,theta2_sym,theta3_sym,},{theta1,theta2,theta3});
C_num = subs(C_num, {alpha1_sym,alpha2_sym,alpha3_sym,},{alpha1,alpha2,alpha3});
C_num = subs(C_num, {d1_sym,d2_sym,d3_sym},{d1,d2,d3});
C_num = subs(C_num, {a1_sym,a2_sym,a3_sym},{a1,a2,a3});
C_num = subs(C_num, {phi_E_sym,theta_E_sym,psi_E_sym}, {phi, the, psi});

% % write M and C in .txt files
% file1 = 'M_num.txt';
% file2 = 'C_num.txt';
% 
% fileID = fopen(file1,'w')
% fprintf(fileID,'M = [ \t');
% for i= 1:9
%     for j= 1:9
%         if j < 9
%             fprintf(fileID,'%s, \t',char(M_num(i,j)));
%         else
%             fprintf(fileID,'%s',char(M_num(i,j)));
%         end
%     end
%     if i < 9
%         fprintf(fileID,'; \n\t\t');
%     else
%         fprintf(fileID,']; \n');
%     end
% end
% fclose(fileID);
% 
% fileID = fopen(file2,'w')
% fprintf(fileID,'C = [ \t');
% for i= 1:9
%     for j= 1:9
%         if j < 9
%             fprintf(fileID,'%s, \t',char(C_num(i,j)));
%         else
%             fprintf(fileID,'%s',char(C_num(i,j)));
%         end
%     end
%     if i < 9
%         fprintf(fileID,'; \n\t\t');
%     else
%         fprintf(fileID,']; \n');
%     end
% end
% fclose(fileID);

%% simplify matrices with small angles assumption
M_num_simp = subs(M_num,{sin(phi),cos(phi),sin(the),cos(the),sin(psi),cos(psi)},{0,phi,0,the,0,psi});
M_num_simp = simplify(M_num_simp);
C_num_simp = subs(C_num,{sin(phi),cos(phi),sin(the),cos(the),sin(psi),cos(psi)},{0,phi,0,the,0,psi});
C_num_simp = simplify(C_num_simp);

% write M and C in .txt files
file1 = 'M_num_simp.txt';
file2 = 'C_num_simp_11.txt';
file3 = 'C_num_simp_12.txt';
file4 = 'C_num_simp_13.txt';
file5 = 'C_num_simp_21.txt';
file6 = 'C_num_simp_22.txt';
file7 = 'C_num_simp_23.txt';
file8 = 'C_num_simp_31.txt';
file9 = 'C_num_simp_32.txt';
file10 = 'C_num_simp_33.txt';

fileID = fopen(file1,'w')
fprintf(fileID,'M = [ \t');
for i= 1:9
    for j= 1:9
        if j < 9
            fprintf(fileID,'%s, \t',char(M_num_simp(i,j)));
        else
            fprintf(fileID,'%s',char(M_num_simp(i,j)));
        end
    end
    if i < 9
        fprintf(fileID,'; \n\t\t');
    else
        fprintf(fileID,']; \n');
    end
end
fclose(fileID);

fileID = fopen(file2,'w')
fprintf(fileID,'C_11 = [ \t');
for i= 1:3
    for j= 1:3
        if j < 3
            fprintf(fileID,'%s, \t',char(C_num_simp(i,j)));
        else
            fprintf(fileID,'%s',char(C_num_simp(i,j)));
        end
    end
    if i < 3
        fprintf(fileID,'; \n\t\t');
    else
        fprintf(fileID,']; \n');
    end
end
fclose(fileID);

fileID = fopen(file3,'w')
fprintf(fileID,'C_12 = [ \t');
for i= 1:3
    for j= 4:6
        if j < 6
            fprintf(fileID,'%s, \t',char(C_num_simp(i,j)));
        else
            fprintf(fileID,'%s',char(C_num_simp(i,j)));
        end
    end
    if i < 3
        fprintf(fileID,'; \n\t\t');
    else
        fprintf(fileID,']; \n');
    end
end
fclose(fileID);

fileID = fopen(file4,'w')
fprintf(fileID,'C_13 = [ \t');
for i= 1:3
    for j= 7:9
        if j < 9
            fprintf(fileID,'%s, \t',char(C_num_simp(i,j)));
        else
            fprintf(fileID,'%s',char(C_num_simp(i,j)));
        end
    end
    if i < 3
        fprintf(fileID,'; \n\t\t');
    else
        fprintf(fileID,']; \n');
    end
end
fclose(fileID);

fileID = fopen(file5,'w')
fprintf(fileID,'C_21 = [ \t');
for i= 4:6
    for j= 1:3
        if j < 3
            fprintf(fileID,'%s, \t',char(C_num_simp(i,j)));
        else
            fprintf(fileID,'%s',char(C_num_simp(i,j)));
        end
    end
    if i < 6
        fprintf(fileID,'; \n\t\t');
    else
        fprintf(fileID,']; \n');
    end
end
fclose(fileID);

fileID = fopen(file6,'w')
fprintf(fileID,'C_22 = [ \t');
for i= 4:6
    for j= 4:6
        if j < 6
            fprintf(fileID,'%s, \t',char(C_num_simp(i,j)));
        else
            fprintf(fileID,'%s',char(C_num_simp(i,j)));
        end
    end
    if i < 6
        fprintf(fileID,'; \n\t\t');
    else
        fprintf(fileID,']; \n');
    end
end
fclose(fileID);

fileID = fopen(file7,'w')
fprintf(fileID,'C_23 = [ \t');
for i= 4:6
    for j= 7:9
        if j < 9
            fprintf(fileID,'%s, \t',char(C_num_simp(i,j)));
        else
            fprintf(fileID,'%s',char(C_num_simp(i,j)));
        end
    end
    if i < 9
        fprintf(fileID,'; \n\t\t');
    else
        fprintf(fileID,']; \n');
    end
end
fclose(fileID);

fileID = fopen(file8,'w')
fprintf(fileID,'C_31 = [ \t');
for i= 7:9
    for j= 1:3
        if j < 3
            fprintf(fileID,'%s, \t',char(C_num_simp(i,j)));
        else
            fprintf(fileID,'%s',char(C_num_simp(i,j)));
        end
    end
    if i < 9
        fprintf(fileID,'; \n\t\t');
    else
        fprintf(fileID,']; \n');
    end
end
fclose(fileID);

fileID = fopen(file9,'w')
fprintf(fileID,'C_32 = [ \t');
for i= 7:9
    for j= 4:6
        if j < 6
            fprintf(fileID,'%s, \t',char(C_num_simp(i,j)));
        else
            fprintf(fileID,'%s',char(C_num_simp(i,j)));
        end
    end
    if i < 9
        fprintf(fileID,'; \n\t\t');
    else
        fprintf(fileID,']; \n');
    end
end
fclose(fileID);

fileID = fopen(file10,'w')
fprintf(fileID,'C_33 = [ \t');
for i= 7:9
    for j= 7:9
        if j < 9
            fprintf(fileID,'%s, \t',char(C_num_simp(i,j)));
        else
            fprintf(fileID,'%s',char(C_num_simp(i,j)));
        end
    end
    if i < 9
        fprintf(fileID,'; \n\t\t');
    else
        fprintf(fileID,']; \n');
    end
end
fclose(fileID);