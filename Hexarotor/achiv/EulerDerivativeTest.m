psi = 11*pi/180;
theta = -5*pi/180;
phi = 60*pi/180;

psi_d = 27*pi/180;
theta_d = 2*pi/180;
phi_d = 3.3*pi/180;

cpsi=cos(psi);
spsi=sin(psi);
cth = cos(theta);
sth = sin(theta);
cp = cos(phi);
sp = sin(phi);


R = [cpsi*cth, cpsi*sth*sp - spsi*cp, cpsi*sth*cp + spsi*sp;
    spsi*cth, spsi*sth*sp + cpsi*cp, spsi*sth*cp - cpsi*sp;
    -sth,                   cth*sp,             cth*cp      ];

R11 = -psi_d*spsi*cth - theta_d*cpsi*sth;
R12 = -psi_d*spsi*sth*sp + cpsi*(theta_d*cth*sp + phi_d*sth*cp) - (psi_d*cpsi*cp - phi_d*spsi*sp);
R13 = -psi_d*spsi*sth*cp + cpsi*(theta_d*cth*cp - phi_d*sth*sp) + psi_d*cpsi*sp + phi_d*spsi*cp;
R21 = psi_d*cpsi*cth - theta_d*spsi*sth;
R22 = psi_d*cpsi*sth*sp + spsi*(theta_d*cth*sp + phi_d*sth*cp) - psi_d*spsi*cp - phi_d*cpsi*sp;
R23 = psi_d*cpsi*sth*cp + spsi*(theta_d*cth*cp - phi_d*sth*sp) - (-psi_d*spsi*sp + phi_d*cpsi*cp);
R31 = -theta_d*cth;
R32 = -theta_d*sth*sp + phi_d*cth*cp;
R33 = -theta_d*sth*cp - phi_d*cth*sp;

R_dot = [R11,R12,R13;
        R21,R22,R23;
        R31,R32,R33];

w_skew = R.'*R_dot;

w = skew2vec(w_skew);
w=double(w)

w_fell = [phi_d-psi_d*sth;
          theta_d*cp + psi_d*sp*cth;
          -theta_d*sp + psi_d*cp*cth];
      w_fell = double(w_fell)