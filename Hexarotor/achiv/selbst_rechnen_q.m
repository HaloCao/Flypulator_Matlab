% syms q1 q2 q3 q4 q_dot1 q_dot2 q_dot3 q_dot4
% R_dot = [ 2*q_dot1*q1- 2*q_dot2*q2 - 2*q_dot3*q3 + 2*q_dot4*q4, 2*q_dot1*q2 + 2*q_dot2*q1 - 2*q_dot3*q4 - 2*q_dot4*q3, 2*q_dot1*q3 + 2*q_dot3*q1 + 2*q_dot2*q4 + 2*q_dot4*q2;
%  2*q_dot1*q2 + 2*q_dot2*q1 + 2*q_dot3*q4 + 2*q_dot4*q3, 2*q_dot2*q2- 2*q_dot1*q1 - 2*q_dot3*q3 + 2*q_dot4*q4, 2*q_dot2*q3- 2*q_dot1*q4 + 2*q_dot3*q2 - 2*q_dot4*q1;
%  2*q_dot1*q3 + 2*q_dot3*q1 - 2*q_dot2*q4 - 2*q_dot4*q2, 2*q_dot1*q4 + 2*q_dot2*q3 + 2*q_dot3*q2 + 2*q_dot4*q1, 2*q_dot3*q3 - 2*q_dot2*q2 - 2*q_dot1*q1 + 2*q_dot4*q4];
%  
% syms L cy sy sa ca deltah
% A = R_dot*[ L*cy+sa*sy*deltah;
%     L*sy- sa*cy*deltah;
%     ca*deltah];
% A_dot_q=jacobian(A,[q1,q2,q3,q4]).'



% syms q1 q2 q3 q4  q_dot1 q_dot2 q_dot3 q_dot4  cy sy sa ca w_m
% S_trans = 1/2*[ q4, -q3, q2;
%     q3, q4, -q1;
%     -q2,q1,q4;
%     -q1,-q2,-q3].';
% q_dot=[q_dot1;q_dot2;q_dot3;q_dot4];
% B = 4*S_trans*q_dot+[ sa*sy;
%         - sa*cy;
%         ca]*w_m
% B_qdot=jacobian(B,[q1,q2,q3,q4]).'



syms q1 q2 q3 q4 q_dot1 q_dot2 q_dot3 q_dot4
R_dot = [ 2*q_dot1*q1- 2*q_dot2*q2 - 2*q_dot3*q3 + 2*q_dot4*q4, 2*q_dot1*q2 + 2*q_dot2*q1 - 2*q_dot3*q4 - 2*q_dot4*q3, 2*q_dot1*q3 + 2*q_dot3*q1 + 2*q_dot2*q4 + 2*q_dot4*q2;
 2*q_dot1*q2 + 2*q_dot2*q1 + 2*q_dot3*q4 + 2*q_dot4*q3, 2*q_dot2*q2- 2*q_dot1*q1 - 2*q_dot3*q3 + 2*q_dot4*q4, 2*q_dot2*q3- 2*q_dot1*q4 + 2*q_dot3*q2 - 2*q_dot4*q1;
 2*q_dot1*q3 + 2*q_dot3*q1 - 2*q_dot2*q4 - 2*q_dot4*q2, 2*q_dot1*q4 + 2*q_dot2*q3 + 2*q_dot3*q2 + 2*q_dot4*q1, 2*q_dot3*q3 - 2*q_dot2*q2 - 2*q_dot1*q1 + 2*q_dot4*q4];

syms L cy sy 
C = R_dot*[ L*cy;
    L*sy;
    0];
C_qdot=jacobian(C,[q1,q2,q3,q4]).'
