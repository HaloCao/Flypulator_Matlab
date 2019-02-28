function [ R ] = rpy2DCM(rpy_angles)
%% This function calculates the rotation matrix, given the roll pitch and 
% yaw angle of a rotation sequence with consecutie axes
r = rpy_angles(1);
p = rpy_angles(2);
y = rpy_angles(3);

R = [ cos(y)*cos(p), cos(y)*sin(p)*sin(r) - sin(y)*cos(r), cos(y)*sin(p)*cos(r) + sin(y)*sin(r);
      sin(y)*cos(p), sin(y)*sin(p)*sin(r) + cos(y)*cos(r), sin(y)*sin(p)*cos(r) - cos(y)*sin(r);
     -sin(p),        cos(p)*sin(r),                        cos(p)*cos(r)                       ];