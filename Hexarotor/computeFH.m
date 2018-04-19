% Motor tilt angles
alpha = deg2rad(13.6);
% beta = deg2rad(10);
% alpha = 0.0001;
 beta = 0;
 
 e_r = zeros(3,6);
for it = 1:6
    alpha_i = alpha *(-1)^(it+1);
    beta_i = beta * (-1)^(it+1);
    gamma_i = (it-1)*pi/3;
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

e_r1 = e_r(:,1);
e_r2 = e_r(:,2);
e_r3 = e_r(:,3);
e_r4 = e_r(:,4);
e_r5 = e_r(:,5);
e_r6 = e_r(:,6);


F = zeros(3,6);
H = zeros(3,6);

e_r = [e_r1 e_r2 e_r3 e_r4 e_r5 e_r6];

for it = 1:6
    gamma_i = (it-1)*pi/3;
   
    % thrust direction
    e_ri = e_r(:,it);
    
    % rotor position vector
    r_Ti =  L * [cos(gamma_i);
            sin(gamma_i);
            0];
        
    % Thrust force
    F(:,it) = k*e_ri;   
    
    % thrust and drag moment
    H(:,it) = k * cross(r_Ti, e_ri) + b * (-1)^it * e_ri;
    

    
end