function F_H = compute_coupling_matrix()
%% This script computes the coupling matrix neglecting orientation
% following the function blocks "computeThrustDirections" and
% "computeCouplingMatrix" of the simulink model

% retrieve geometric drone parameters from base workspace
alpha = evalin('base', 'alpha');
beta = evalin('base', 'beta');
L = evalin('base', 'L');
k = evalin('base', 'k');
b = evalin('base', 'b');

% thrust directions (w.r.t. body frame {B})
e_r = zeros(3,6);

for it = 1:6
    alpha_i = alpha(it);
    beta_i = beta(it);
    gamma_i = (it-1) * pi/3 - pi/6;
    ca = cos(alpha_i);
    sa = sin(alpha_i);
    cb = cos(beta_i);
    sb = sin(beta_i);
    cy = cos(gamma_i);
    sy = sin(gamma_i);
    
    e_r(:,it) = [ca*sb*cy + sa*sy;
                ca*sb*sy - sa*cy;
                ca*cb];            
end

F = zeros(3,6);
H = zeros(3,6);

% calculate submatrices F (mapping rotor velocities to thrust forces) and H
% (mapping rotor velocities to torques)
for it = 1:6
    gamma_i = (it-1) * pi/3 - pi/6;
   
    % thrust direction
    e_ri = e_r(:,it);
    
    % rotor position vector
    r_Ti =  L * [cos(gamma_i);
            sin(gamma_i);
            0];
        
    % Thrust force
    F(:,it) = k*e_ri;   
    
    % thrust and drag moment
    H(:,it) = k * cross(r_Ti, e_ri) + b * (-1)^(it-1) * e_ri;    
end

F_H = [F;H];

end