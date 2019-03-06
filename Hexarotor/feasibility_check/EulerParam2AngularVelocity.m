function [omega, domega] = EulerParam2AngularVelocity(R_IA, euler_axis, euler_angles)
%% This function takes the given starting orientation, the euler axis, the 
% current euler angles as well as its derivatives and calculates the skew 
% matrices to retrieve the angular velocities w.r.t the body system.
%
% euler_angles contains a 3D vector with the current euler_angle, its first
% and second derivative

% define some abbreviations
the = euler_angles(1);
dthe = euler_angles(2);
ddthe = euler_angles(3);

sthe = sin(the);
cthe = cos(the);

k_x = euler_axis(1);
k_y = euler_axis(2);
k_z = euler_axis(3);

% get derivates of the rotation matrices of the body frame w.r.t the
% starting orientation
R_AB = ...
  [       (1 - cthe)*k_x^2 + cthe, - k_z*sthe - k_x*k_y*(cthe - 1),   k_y*sthe - k_x*k_z*(cthe - 1);
   k_z*sthe - k_x*k_y*(cthe - 1),         (1 - cthe)*k_y^2 + cthe, - k_x*sthe - k_y*k_z*(cthe - 1);
 - k_y*sthe - k_x*k_z*(cthe - 1),   k_x*sthe - k_y*k_z*(cthe - 1),         (1 - cthe)*k_z^2 + cthe];
 
 
dR_AB = ... 
 [      dthe*sthe*k_x^2 - dthe*sthe, dthe*k_x*k_y*sthe - cthe*dthe*k_z, cthe*dthe*k_y + dthe*k_x*k_z*sthe;
 cthe*dthe*k_z + dthe*k_x*k_y*sthe,       dthe*sthe*k_y^2 - dthe*sthe, dthe*k_y*k_z*sthe - cthe*dthe*k_x;
 dthe*k_x*k_z*sthe - cthe*dthe*k_y, cthe*dthe*k_x + dthe*k_y*k_z*sthe,       dthe*sthe*k_z^2 - dthe*sthe];
 
 
ddR_AB = ... 
[             cthe*dthe^2*k_x^2 - cthe*dthe^2 + ddthe*sthe*k_x^2 - ddthe*sthe, dthe^2*k_z*sthe - cthe*ddthe*k_z + ddthe*k_x*k_y*sthe + cthe*dthe^2*k_x*k_y, cthe*ddthe*k_y - dthe^2*k_y*sthe + ddthe*k_x*k_z*sthe + cthe*dthe^2*k_x*k_z;
 cthe*ddthe*k_z - dthe^2*k_z*sthe + ddthe*k_x*k_y*sthe + cthe*dthe^2*k_x*k_y,             cthe*dthe^2*k_y^2 - cthe*dthe^2 + ddthe*sthe*k_y^2 - ddthe*sthe, dthe^2*k_x*sthe - cthe*ddthe*k_x + ddthe*k_y*k_z*sthe + cthe*dthe^2*k_y*k_z;
 dthe^2*k_y*sthe - cthe*ddthe*k_y + ddthe*k_x*k_z*sthe + cthe*dthe^2*k_x*k_z, cthe*ddthe*k_x - dthe^2*k_x*sthe + ddthe*k_y*k_z*sthe + cthe*dthe^2*k_y*k_z,             cthe*dthe^2*k_z^2 - cthe*dthe^2 + ddthe*sthe*k_z^2 - ddthe*sthe];

% static transform to inertial system
R_IB = R_IA * R_AB;
dR_IB = R_IA * dR_AB;
ddR_IB = R_IA * ddR_AB;

% omega and domega skew matrices
omega_skew = R_IB' * dR_IB;
domega_skew = dR_IB' * dR_IB +  R_IB' * ddR_IB;

% retrieve omega and domega components
omega = [omega_skew(3,2);
         omega_skew(1,3);
         omega_skew(2,1)];

domega = [domega_skew(3,2);
          domega_skew(1,3);
          domega_skew(2,1)];

 
