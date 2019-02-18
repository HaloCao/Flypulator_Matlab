function [ R ] =EulerParam2DCM(euler_axis, euler_angle)
%% This script converts the given euler parameters (axis + angle) to the corrsponding rotation matrix 
kx = euler_axis(1);
ky = euler_axis(2);
kz = euler_axis(3);

e = euler_angle;
ve = 1-cos(e);
ce = cos(e);
se = sin(e);

R = [kx^2*ve + ce,     kx*ky*ve - kz*se, kx*kz*ve + ky*se;
     kx*ky*ve + kz*se, ky^2*ve + ce,     ky*kz*ve - kx*se;
     kx*kz*ve - ky*se, ky*kz*ve + kx*se, kz^2*ve + ce    ];
