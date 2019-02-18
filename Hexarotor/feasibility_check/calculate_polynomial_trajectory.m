function [pd, eulerTraj, k_e] = calculate_polynomial_trajectory(startpose, endpose, duration, dt)
    %% this function calculates 4D trajectories based on given startPose, endPose and duration. 
    % The resulting trajectories are 5th order polynoms with their
    % derivatives constrained at zero at the start and end pose (see.
    % Krieglstein)
    % 4D means three positional trajectories and one rotational (euler
    % angle)
         
    % storage for polynomial coefficients to make use of in simulink
    % trajectory generator
    polynomial_coeffs = zeros(4,6);
    
    % time vector and step cound
    t = 0 : dt : duration;
    steps = length(t);
    
    % get discrete cosine matrix from rpy angles
    Ra = rpy2DCM(startpose(4:6));
    Re = rpy2DCM(endpose(4:6));
    %difference orientation
    Rd = Ra' * Re;
    
    theta_e = acos(0.5*(Rd(1,1) + Rd(2,2) +Rd (3,3)-1));
    k_e = zeros(3,1);
    
    if theta_e == 0
        k_e(1) = 1;
    elseif theta_e == pi
        k_e(1) = -1;
    else    
        k_e(1) = 0.5 * 1/sin(theta_e) * (Rd(3,2)-Rd(2,3));
        k_e(2) = 0.5 * 1/sin(theta_e) * (Rd(1,3)-Rd(3,1));
        k_e(3) = 0.5 * 1/sin(theta_e) * (Rd(2,1)-Rd(1,2));
    end
    
    a3 = 10*theta_e/(duration^3);
    a4 = -15*theta_e/(duration^4);
    a5 = 6*theta_e/(duration^5);        

    % position/orientation trajectory
    poly = a3 * t.^3 + a4 * t.^4 + a5 * t.^5;

    % first derivative -> (angular) velocity
    poly_dot = 3 * a3 * t.^2 + 4*a4 * t.^3 + 5*a5 * t.^4;

    % second derivative -> (angular) acceleration
    poly_ddot = 6*a3 * t + 12*a4 * t.^2 + 20*a5*t.^3; 
    
    eulerTraj = [poly; poly_dot; poly_ddot];
    
    polynomial_coeffs(4,:) = [0 0 0 a3 a4 a5];
        
    % desired trajectory
    % rows contain position px py pz (row 1-3), velocity as derivative of
    % position (row 4-6), acceleration (row 7-9)
    pd = zeros(9, steps);
    
    for i = 1:3
        %coefficients for a 5th degree polynom (see Krieglstein appendix B)
        a0 = startpose(i);
        a1 = 0;
        a2 = 0;
        a3 = 10*(endpose(i) - startpose(i))/(duration^3);
        a4 = -15*(endpose(i) - startpose(i))/(duration^4);
        a5 = 6*(endpose(i) - startpose(i))/(duration^5);        
        
        % position/orientation trajectory
        poly = a0 + a1 * t + a2 * t.^2 + a3 * t.^3 + a4 * t.^4 + a5 * t.^5;
        
        % first derivative -> (angular) velocity
        poly_dot = a1 + 2 * a2 * t + 3 * a3 * t.^2 + 4*a4 * t.^3 + 5*a5 * t.^4;
        
        % second derivative -> (angular) acceleration
        poly_ddot = 2 * a2 + 6*a3 * t + 12*a4 * t.^2 + 20*a5*t.^3;  
        
        polynomial_coeffs(i,:) = [a0 a1 a2 a3 a4 a5];
        
        pd([i, i+3, i+6], :) = [poly; poly_dot; poly_ddot]; 
                    
    end
    
    % save polynomial coefficients and starting orientation to workspace
    assignin('base', 'polynomial_coeffs', polynomial_coeffs);
    assignin('base', 'euler_axis', k_e);

end