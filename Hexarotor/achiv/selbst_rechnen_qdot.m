% syms q1(t) q2(t) q3(t) q4(t) q_dot1 q_dot2 q_dot3 q_dot4
% R = [q1^2 - q2^2 - q3^2 + q4^2,  2*(q1*q2 - q3*q4),          2*(q1*q3 + q2*q4);
%     2*(q1*q2 + q3*q4),         -q1^2 + q2^2 - q3^2 + q4^2,  2*(q2*q3 - q1*q4);
%     2*(q1*q3 - q2*q4),          2*(q2*q3 + q1*q4),         -q1^2 - q2^2 + q3^2 + q4^2];
% R_dot=diff(R);
% %  subs(R_dot,[diff(q1(t), t),diff(q2(t), t),diff(q3(t), t),diff(q4(t), t)],[q_dot1,q_dot2,q_dot3,q_dot4])
% R_dot=subs(R_dot,[diff(q1(t), t),diff(q2(t), t),diff(q3(t), t),diff(q4(t), t)],[q_dot1,q_dot2,q_dot3,q_dot4]);
% syms L cy sy sa ca deltah
% A = R_dot*[ L*cy+sa*sy*deltah;
%     L*sy- sa*cy*deltah;
%     ca*deltah];
% A_qdot=jacobian(A,[q_dot1,q_dot2,q_dot3,q_dot4]).';
% A_qdot_result=[ 2*q(1)*(L*cy + deltah*sa*sy) + 2*q(2)*(L*sy - cy*deltah*sa) + 2*ca*deltah*q(3), 2*q(2)*(L*cy + deltah*sa*sy) - 2*q(1)*(L*sy - cy*deltah*sa) - 2*ca*deltah*q(4), 2*q(3)*(L*cy + deltah*sa*sy) + 2*q(4)*(L*sy - cy*deltah*sa) - 2*ca*deltah*q(1);
%  2*q(1)*(L*sy - cy*deltah*sa) - 2*q(2)*(L*cy + deltah*sa*sy) + 2*ca*deltah*q(4), 2*q(1)*(L*cy + deltah*sa*sy) + 2*q(2)*(L*sy - cy*deltah*sa) + 2*ca*deltah*q(3), 2*q(3)*(L*sy - cy*deltah*sa) - 2*q(4)*(L*cy + deltah*sa*sy) - 2*ca*deltah*q(2);
%  2*ca*deltah*q(1) - 2*q(4)*(L*sy - cy*deltah*sa) - 2*q(3)*(L*cy + deltah*sa*sy), 2*q(4)*(L*cy + deltah*sa*sy) - 2*q(3)*(L*sy - cy*deltah*sa) + 2*ca*deltah*q(2), 2*q(1)*(L*cy + deltah*sa*sy) + 2*q(4)*(L*sy - cy*deltah*sa) + 2*ca*deltah*q(3);
%  2*q(1)*(L*cy + deltah*sa*sy) - 2*q(3)*(L*sy - cy*deltah*sa) + 2*ca*deltah*q(2), 2*q(3)*(L*cy + deltah*sa*sy) + 2*q(4)*(L*sy - cy*deltah*sa) - 2*ca*deltah*q(1), 2*q(1)*(L*sy - cy*deltah*sa) - 2*q(2)*(L*cy + deltah*sa*sy) + 2*ca*deltah*q(4)];
%  
% syms q
% q=[q(1);q(2);q(3);q(4)];
% A_dot=subs(A_dot,[q1(t) ,q2(t), q3(t), q4(t)],[q])

% syms q1 q2 q3 q4  q_dot1 q_dot2 q_dot3 q_dot4  cy sy sa ca w_m
% S_trans = 1/2*[ q4, -q3, q2;
%     q3, q4, -q1;
%     -q2,q1,q4;
%     -q1,-q2,-q3].';
% q_dot=[q_dot1;q_dot2;q_dot3;q_dot4];
% B = 4*S_trans*q_dot+[ sa*sy;
%         - sa*cy;
%         ca]*w_m
% B_qdot=jacobian(B,[q_dot1,q_dot2,q_dot3,q_dot4]).'


syms q1(t) q2(t) q3(t) q4(t) q_dot1 q_dot2 q_dot3 q_dot4
R = [q1^2 - q2^2 - q3^2 + q4^2,  2*(q1*q2 - q3*q4),          2*(q1*q3 + q2*q4);
    2*(q1*q2 + q3*q4),         -q1^2 + q2^2 - q3^2 + q4^2,  2*(q2*q3 - q1*q4);
    2*(q1*q3 - q2*q4),          2*(q2*q3 + q1*q4),         -q1^2 - q2^2 + q3^2 + q4^2];
R_dot=diff(R);
R_dot=subs(R_dot,[diff(q1(t), t),diff(q2(t), t),diff(q3(t), t),diff(q4(t), t)],[q_dot1,q_dot2,q_dot3,q_dot4]);
syms L cy sy 
C = R_dot*[ L*cy;
    L*sy;
    0];
C_qdot=jacobian(C,[q_dot1,q_dot2,q_dot3,q_dot4]).'
