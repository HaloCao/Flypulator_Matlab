/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: C_num_simp_33.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 22-Jan-2019 12:24:17
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "C_num_simp_33.h"

/* Function Declarations */
static double rt_powd_snf(double u0, double u1);

/* Function Definitions */

/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_powd_snf(double u0, double u1)
{
  double y;
  double d147;
  double d148;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d147 = fabs(u0);
    d148 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d147 == 1.0) {
        y = 1.0;
      } else if (d147 > 1.0) {
        if (u1 > 0.0) {
          y = rtInf;
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtInf;
      }
    } else if (d148 == 0.0) {
      y = 1.0;
    } else if (d148 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = rtNaN;
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/*
 * Arguments    : double phi
 *                double the
 *                double psi
 *                double theta1
 *                double theta2
 *                double theta3
 *                double C_33[9]
 * Return Type  : void
 */
void C_num_simp_33(double phi, double the, double psi, double theta1, double
                   theta2, double theta3, double C_33[9])
{
  double a_tmp;
  double b_a_tmp;
  double c_a_tmp;
  double d_a_tmp;
  double a_tmp_tmp;
  double e_a_tmp;
  double f_a_tmp;
  double b_a_tmp_tmp;
  double c_a_tmp_tmp;
  double d_a_tmp_tmp;
  double g_a_tmp;
  double e_a_tmp_tmp;
  double f_a_tmp_tmp;
  double g_a_tmp_tmp;
  double h_a_tmp;
  double h_a_tmp_tmp;
  double i_a_tmp_tmp;
  double j_a_tmp_tmp;
  double k_a_tmp_tmp;
  double i_a_tmp;
  double l_a_tmp_tmp;
  double m_a_tmp_tmp;
  double n_a_tmp_tmp;
  double o_a_tmp_tmp;
  double j_a_tmp;
  double a_tmp_tmp_tmp;
  double b_a_tmp_tmp_tmp;
  double p_a_tmp_tmp;
  double c_a_tmp_tmp_tmp;
  double d_a_tmp_tmp_tmp;
  double q_a_tmp_tmp;
  double k_a_tmp;
  double r_a_tmp_tmp;
  double s_a_tmp_tmp;
  double t_a_tmp_tmp;
  double l_a_tmp;
  double d0;
  double d1;
  double d2;
  double d3;
  double d4;
  double d5;
  double d6;
  double d7;
  double d8;
  double d9;
  double d10;
  double d11;
  double d12;
  double d13;
  double d14;
  double d15;
  double d16;
  double d17;
  double d18;
  double d19;
  double d20;
  double d21;
  double d22;
  double d23;
  double d24;
  double d25;
  double d26;
  double d27;
  double d28;
  double d29;
  double d30;
  double d31;
  double d32;
  double d33;
  double d34;
  double d35;
  double d36;
  double d37;
  double d38;
  double d39;
  double d40;
  double d41;
  double d42;
  double d43;
  double d44;
  double d45;
  double d46;
  double d47;
  double d48;
  double d49;
  double d50;
  double d51;
  double d52;
  double d53;
  double d54;
  double d55;
  double d56;
  double d57;
  double d58;
  double d59;
  double d60;
  double d61;
  double d62;
  double d63;
  double d64;
  double d65;
  double d66;
  double d67;
  double d68;
  double d69;
  double d70;
  double d71;
  double d72;
  double d73;
  double d74;
  double d75;
  double d76;
  double d77;
  double d78;
  double d79;
  double d80;
  double d81;
  double d82;
  double d83;
  double d84;
  double d85;
  double d86;
  double d87;
  double d88;
  double d89;
  double d90;
  double C_33_tmp;
  double d91;
  double d92;
  double d93;
  double b_C_33_tmp;
  double d94;
  double d95;
  double c_C_33_tmp;
  double d96;
  double d97;
  double d_C_33_tmp;
  double C_33_tmp_tmp;
  double e_C_33_tmp;
  double f_C_33_tmp;
  double d98;
  double d99;
  double d100;
  double d101;
  double d102;
  double d103;
  double d104;
  double d105;
  double d106;
  double d107;
  double d108;
  double d109;
  double d110;
  double d111;
  double d112;
  double d113;
  double b_C_33_tmp_tmp;
  double d114;
  double d115;
  double d116;
  double d117;
  double d118;
  double d119;
  double d120;
  double d121;
  double d122;
  double d123;
  double d124;
  double d125;
  double d126;
  double d127;
  double d128;
  double d129;
  double d130;
  double d131;
  double d132;
  double d133;
  double d134;
  double d135;
  double d136;
  double d137;
  double d138;
  double d139;
  double d140;
  double d141;
  double d142;
  double d143;
  double d144;
  double d145;
  double d146;
  double c_C_33_tmp_tmp;
  double g_C_33_tmp;
  double h_C_33_tmp;
  double i_C_33_tmp;
  double j_C_33_tmp;
  double d_C_33_tmp_tmp;
  double e_C_33_tmp_tmp;
  double k_C_33_tmp;
  double l_C_33_tmp;
  double f_C_33_tmp_tmp;
  double g_C_33_tmp_tmp;
  double m_C_33_tmp;
  double n_C_33_tmp;
  double o_C_33_tmp;
  double p_C_33_tmp;
  double q_C_33_tmp;
  double r_C_33_tmp;
  double s_C_33_tmp;
  double t_C_33_tmp;
  double u_C_33_tmp;
  double v_C_33_tmp;
  double w_C_33_tmp;
  double x_C_33_tmp;
  double y_C_33_tmp;
  double ab_C_33_tmp;
  double bb_C_33_tmp;
  double cb_C_33_tmp;
  double db_C_33_tmp;
  double eb_C_33_tmp;
  double fb_C_33_tmp;
  double gb_C_33_tmp;
  double hb_C_33_tmp;
  double ib_C_33_tmp;
  double jb_C_33_tmp;
  double kb_C_33_tmp;
  double lb_C_33_tmp;
  double mb_C_33_tmp;
  double nb_C_33_tmp;
  double ob_C_33_tmp;
  double pb_C_33_tmp;
  double qb_C_33_tmp;
  double rb_C_33_tmp;
  double sb_C_33_tmp;
  double tb_C_33_tmp;
  double ub_C_33_tmp;
  double vb_C_33_tmp;
  double wb_C_33_tmp;
  a_tmp = cos(theta1);
  b_a_tmp = sin(theta1);
  c_a_tmp = sin(theta2);
  d_a_tmp = sin(theta3);
  a_tmp_tmp = cos(theta2);
  e_a_tmp = a_tmp * a_tmp_tmp;
  f_a_tmp = cos(theta3);
  b_a_tmp_tmp = a_tmp * f_a_tmp;
  c_a_tmp_tmp = e_a_tmp * d_a_tmp;
  d_a_tmp_tmp = b_a_tmp_tmp * c_a_tmp;
  g_a_tmp = c_a_tmp_tmp + d_a_tmp_tmp;
  e_a_tmp_tmp = a_tmp * c_a_tmp;
  f_a_tmp_tmp = e_a_tmp_tmp * d_a_tmp;
  g_a_tmp_tmp = e_a_tmp * f_a_tmp;
  h_a_tmp = f_a_tmp_tmp - g_a_tmp_tmp;
  h_a_tmp_tmp = a_tmp_tmp * b_a_tmp;
  i_a_tmp_tmp = f_a_tmp * b_a_tmp;
  j_a_tmp_tmp = h_a_tmp_tmp * d_a_tmp;
  k_a_tmp_tmp = i_a_tmp_tmp * c_a_tmp;
  i_a_tmp = j_a_tmp_tmp + k_a_tmp_tmp;
  l_a_tmp_tmp = a_tmp_tmp * f_a_tmp;
  m_a_tmp_tmp = b_a_tmp * c_a_tmp;
  n_a_tmp_tmp = m_a_tmp_tmp * d_a_tmp;
  o_a_tmp_tmp = l_a_tmp_tmp * b_a_tmp;
  j_a_tmp = n_a_tmp_tmp - o_a_tmp_tmp;
  a_tmp_tmp_tmp = 3.0 * a_tmp_tmp;
  b_a_tmp_tmp_tmp = a_tmp_tmp_tmp * d_a_tmp;
  p_a_tmp_tmp = b_a_tmp_tmp_tmp / 10.0;
  c_a_tmp_tmp_tmp = 3.0 * f_a_tmp;
  d_a_tmp_tmp_tmp = c_a_tmp_tmp_tmp * c_a_tmp;
  q_a_tmp_tmp = d_a_tmp_tmp_tmp / 10.0;
  k_a_tmp = (p_a_tmp_tmp + q_a_tmp_tmp) - 0.1;
  r_a_tmp_tmp = 3.0 * c_a_tmp;
  s_a_tmp_tmp = r_a_tmp_tmp / 10.0;
  t_a_tmp_tmp = p_a_tmp_tmp - s_a_tmp_tmp;
  l_a_tmp = t_a_tmp_tmp + q_a_tmp_tmp;
  d0 = psi * psi;
  d1 = phi * psi;
  d2 = phi * phi;
  d3 = d2 * d0;
  d4 = the * the;
  d5 = d0 * d4;
  d6 = d3 * a_tmp;
  d7 = d5 * a_tmp;
  d8 = d3 * b_a_tmp;
  d9 = d5 * b_a_tmp;
  d10 = d1 * b_a_tmp;
  d11 = d1 * a_tmp;
  d12 = 2.0 * d2;
  d13 = d12 * d0;
  d14 = 2.0 * d0;
  d15 = d14 * d4;
  d16 = d13 * a_tmp * b_a_tmp;
  d17 = d15 * a_tmp * b_a_tmp;
  d18 = d16 - d17;
  d19 = d11 * d18;
  d20 = d19 / 10.0;
  d21 = d6 * b_a_tmp;
  d22 = d7 * b_a_tmp;
  d23 = d6 * g_a_tmp;
  d24 = d7 * g_a_tmp;
  d25 = ((d23 - d24) - d8 * i_a_tmp) + d9 * i_a_tmp;
  d26 = phi * the;
  d27 = d6 * h_a_tmp;
  d28 = d7 * h_a_tmp;
  d29 = ((d27 - d28) - d8 * j_a_tmp) + d9 * j_a_tmp;
  d30 = c_a_tmp * d_a_tmp;
  d31 = l_a_tmp_tmp - d30;
  d32 = d26 * d31;
  d33 = d9 * g_a_tmp;
  d34 = d6 * i_a_tmp;
  d35 = d33 - d34;
  d36 = a_tmp_tmp * d_a_tmp;
  d37 = f_a_tmp * c_a_tmp;
  d38 = d36 + d37;
  d39 = d26 * d38;
  d40 = d9 * h_a_tmp;
  d41 = d6 * j_a_tmp;
  d42 = d40 - d41;
  d43 = d6 * a_tmp_tmp;
  d44 = d43 * b_a_tmp;
  d45 = d7 * a_tmp_tmp;
  d46 = d45 * b_a_tmp;
  d47 = d44 - d46;
  d48 = d21 * c_a_tmp;
  d49 = d22 * c_a_tmp;
  d50 = d48 - d49;
  d51 = the * b_a_tmp;
  d52 = d26 * a_tmp_tmp;
  d53 = d26 * c_a_tmp;
  d54 = rt_powd_snf(phi, 3.0);
  d55 = d54 * d0;
  d56 = d53 * d47 / 20.0 - d52 * d50 / 20.0;
  d57 = d3 * the;
  d58 = psi * the;
  d59 = d58 * a_tmp;
  d60 = d21 - d22;
  d61 = phi * d4;
  d62 = d61 * b_a_tmp;
  d63 = phi * d0;
  d64 = d63 * d4;
  d65 = d64 * b_a_tmp;
  d66 = d1 * the;
  d67 = d58 * b_a_tmp;
  d68 = d63 * the;
  d69 = d67 * d60;
  d70 = rt_powd_snf(psi, 3.0);
  d71 = d2 * d4;
  d72 = d71 * a_tmp;
  d73 = d55 * a_tmp;
  d74 = d73 * b_a_tmp;
  d75 = 3.0 * a_tmp;
  d76 = d75 * a_tmp_tmp;
  d54 = d54 * psi * d4;
  d77 = rt_powd_snf(the, 3.0);
  d78 = d2 * psi * d77;
  d79 = d58 * g_a_tmp;
  d80 = d58 * h_a_tmp;
  d81 = d67 * d18 / 10.0;
  d82 = d10 * c_a_tmp;
  d83 = d1 * a_tmp_tmp;
  d84 = d83 * b_a_tmp;
  d85 = d59 * c_a_tmp;
  d86 = d59 * a_tmp_tmp;
  d87 = d74 / 5.0;
  d88 = d72 * a_tmp_tmp;
  d89 = d43 - d88;
  d90 = d6 * c_a_tmp - d72 * c_a_tmp;
  C_33_tmp = d22 / 5.0;
  d91 = d1 * j_a_tmp;
  d92 = d62 * d38 - d65 * d38;
  d93 = d1 * i_a_tmp;
  b_C_33_tmp = d62 * d31 - d65 * d31;
  d94 = d6 * d38;
  d95 = d72 * d38;
  c_C_33_tmp = d94 - d95;
  d96 = d6 * d31;
  d97 = d72 * d31;
  d_C_33_tmp = d96 - d97;
  C_33_tmp_tmp = d26 * a_tmp;
  e_C_33_tmp = d32 * d35 / 20.0 + d39 * d42 / 20.0;
  f_C_33_tmp = 3.0 * psi * the;
  d98 = a_tmp_tmp_tmp * f_a_tmp;
  d99 = d75 * c_a_tmp;
  d100 = d99 * d_a_tmp;
  d101 = d100 / 10.0;
  d102 = d76 * f_a_tmp;
  d103 = d102 / 10.0;
  d104 = d101 - d103;
  d105 = 3.0 * b_a_tmp * c_a_tmp;
  d106 = d105 * d_a_tmp;
  d107 = d106 / 10.0;
  d108 = d98 * b_a_tmp;
  d109 = d108 / 10.0;
  d110 = d107 - d109;
  d111 = a_tmp * d104;
  d112 = b_a_tmp * d110;
  d113 = d111 + d112;
  b_C_33_tmp_tmp = d51 * e_C_33_tmp / 2.0;
  d51 = d51 * d56 / 2.0;
  d114 = d76 * d_a_tmp;
  d75 *= f_a_tmp;
  d115 = d75 * c_a_tmp;
  d116 = a_tmp_tmp_tmp * b_a_tmp;
  d117 = d116 * d_a_tmp;
  d118 = c_a_tmp_tmp_tmp * b_a_tmp;
  d119 = d118 * c_a_tmp;
  d120 = d114 / 10.0;
  d121 = d115 / 10.0;
  d122 = d117 / 10.0;
  d123 = d119 / 10.0;
  d124 = d120 + d121;
  d125 = d122 + d123;
  d126 = a_tmp * d124 + b_a_tmp * d125;
  d56 *= C_33_tmp_tmp;
  d127 = d56 / 2.0;
  d128 = d57 * a_tmp * b_a_tmp;
  d129 = d59 * ((d57 * g_a_tmp * i_a_tmp / 20.0 + d57 * h_a_tmp * j_a_tmp / 20.0)
                - d128 / 10.0) / 2.0;
  d130 = ((d80 * d92 / 20.0 + d79 * b_C_33_tmp / 20.0) - d66 * d31 * d35 / 20.0)
    - d66 * d38 * d42 / 20.0;
  d131 = d67 * d130 / 2.0;
  d77 = d70 * d77 * a_tmp;
  d132 = d85 * d89;
  d133 = d86 * d90;
  d134 = d67 * (d132 / 20.0 - d133 / 20.0) / 2.0;
  d135 = d11 * (d54 * g_a_tmp * d31 / 20.0 + d54 * h_a_tmp * d38 / 20.0) / 2.0;
  d136 = d59 * (d78 * g_a_tmp * d31 / 20.0 + d78 * h_a_tmp * d38 / 20.0) / 2.0;
  d137 = d58 * c_C_33_tmp;
  d138 = d58 * d_C_33_tmp;
  d139 = d67 * (d137 * h_a_tmp / 20.0 + d138 * g_a_tmp / 20.0) / 2.0;
  d60 *= d11;
  d140 = d5 * a_tmp_tmp;
  d141 = d69 / 40.0;
  d142 = d91 * d29 / 20.0;
  d143 = d93 * d25;
  d144 = d1 * g_a_tmp;
  d145 = d1 * h_a_tmp;
  d146 = d3 * a_tmp_tmp;
  c_C_33_tmp_tmp = d68 * a_tmp;
  g_C_33_tmp = c_C_33_tmp_tmp * b_a_tmp;
  h_C_33_tmp = g_C_33_tmp / 10.0;
  i_C_33_tmp = d58 * j_a_tmp * d42;
  j_C_33_tmp = d79 * d25;
  d_C_33_tmp_tmp = d98 / 10.0;
  r_a_tmp_tmp *= d_a_tmp;
  e_C_33_tmp_tmp = r_a_tmp_tmp / 10.0;
  k_C_33_tmp = d_C_33_tmp_tmp - e_C_33_tmp_tmp;
  l_C_33_tmp = d2 * d70;
  f_C_33_tmp_tmp = d55 * g_a_tmp;
  g_C_33_tmp_tmp = d55 * h_a_tmp;
  m_C_33_tmp = d11 * ((f_C_33_tmp_tmp * i_a_tmp / 10.0 + g_C_33_tmp_tmp *
                       j_a_tmp / 10.0) - d87) / 2.0;
  n_C_33_tmp = d67 * ((d5 * g_a_tmp * i_a_tmp / 10.0 + d5 * h_a_tmp * j_a_tmp /
                       10.0) - C_33_tmp) / 2.0;
  o_C_33_tmp = d11 * (d91 * d92 / 20.0 + d93 * b_C_33_tmp / 20.0) / 2.0;
  p_C_33_tmp = d11 * (((d1 * d31 * d35 / 20.0 + d1 * d38 * d42 / 20.0) - d1 *
                       c_C_33_tmp * j_a_tmp / 20.0) - d1 * d_C_33_tmp * i_a_tmp /
                      20.0) / 2.0;
  q_C_33_tmp = C_33_tmp_tmp * e_C_33_tmp / 2.0;
  r_C_33_tmp = d10 * ((d68 * g_a_tmp * i_a_tmp / 20.0 + d68 * h_a_tmp * j_a_tmp /
                       20.0) - h_C_33_tmp) / 2.0;
  s_C_33_tmp = d67 * (((d86 * (phi * (the * the) * sin(theta1) * sin(theta2) -
    phi * (psi * psi) * (the * the) * sin(theta1) * sin(theta2)) / 20.0 + d66 *
                        c_a_tmp * d47 / 20.0) - d66 * a_tmp_tmp * d50 / 20.0) -
                      d85 * (phi * (the * the) * cos(theta2) * sin(theta1) - phi
    * (psi * psi) * (the * the) * cos(theta2) * sin(theta1)) / 20.0) / 2.0;
  t_C_33_tmp = d61 * a_tmp;
  u_C_33_tmp = t_C_33_tmp * d113;
  v_C_33_tmp = d64 * a_tmp;
  w_C_33_tmp = v_C_33_tmp * d113;
  x_C_33_tmp = d67 * c_a_tmp;
  y_C_33_tmp = d1 * c_a_tmp;
  ab_C_33_tmp = i_C_33_tmp / 40.0;
  bb_C_33_tmp = j_C_33_tmp / 40.0;
  cb_C_33_tmp = psi * the * (cos(theta1) * sin(theta2) * sin(theta3) - cos
    (theta1) * cos(theta2) * cos(theta3)) * (((phi * phi * (psi * psi) * cos
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - psi * psi * (the * the) * cos(theta1) *
    (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
     (theta3))) - phi * phi * (psi * psi) * sin(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) + psi *
    psi * (the * the) * sin(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) / 40.0;
  db_C_33_tmp = d71 * b_a_tmp;
  eb_C_33_tmp = psi * the * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi)
    * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1) * sin(theta2)) / 40.0;
  fb_C_33_tmp = d58 * a_tmp_tmp;
  gb_C_33_tmp = psi * the * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi)
    * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos
    (theta1) * cos(theta2) * sin(theta1)) / 40.0;
  C_33[0] =
    ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((phi
    * (((((d10 * (d3 * (a_tmp * a_tmp) + d5 * (b_a_tmp * b_a_tmp)) / 10.0 - d142)
    - d143 / 20.0) + d144 * d35 / 20.0) + d145 * d42 / 20.0) + d20) / 2.0 - phi *
    (((((d82 * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * c_a_tmp - d5 *
    (a_tmp * a_tmp) * c_a_tmp) - d3 * (b_a_tmp * b_a_tmp) * c_a_tmp) + psi * psi
    * (the * the) * (b_a_tmp * b_a_tmp) * c_a_tmp) / 20.0 - d20) - phi * psi *
    sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0) + d11 * a_tmp_tmp * d47 / 20.0) + d11 *
    c_a_tmp * d50 / 20.0) + d84 * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) *
    a_tmp_tmp - psi * psi * (the * the) * (a_tmp * a_tmp) * a_tmp_tmp) - d146 *
    (b_a_tmp * b_a_tmp)) + d140 * (b_a_tmp * b_a_tmp)) / 20.0) / 2.0) + phi *
    (((phi * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) +
    psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - d10 * (((phi * phi *
    (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp * a_tmp)) -
    phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 20.0) - d60 / 20.0) + d20) / 2.0) + d26 * (d32 * d25 /
    20.0 + d39 * d29 / 20.0) / 2.0) + b_C_33_tmp_tmp) + d51) + d26 * (d52 *
    (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin(theta2) - psi * psi *
    (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi * phi * (psi * psi) *
    (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp) * sin(theta2)) / 20.0 - d53 * (((phi * phi * (psi * psi) * (a_tmp *
    a_tmp) * cos(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * cos
    (theta2)) - phi * phi * (psi * psi) * cos(theta2) * (b_a_tmp * b_a_tmp)) +
    psi * psi * (the * the) * cos(theta2) * (b_a_tmp * b_a_tmp)) / 20.0) / 2.0)
    - d59 * (psi * psi * (the * the) * (a_tmp * a_tmp) / 20.0 + psi * psi * (the
    * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - d10 * (d55 * (a_tmp * a_tmp) /
    10.0 + d55 * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + d127) - d129) + d141) -
    f_C_33_tmp * b_a_tmp * d18 / 20.0) + d131) - rt_powd_snf(phi, 4.0) * d70 *
    (a_tmp * a_tmp) * b_a_tmp / 20.0) - d11 * (d68 * (a_tmp * a_tmp) / 20.0 -
    d68 * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + d67 * (((d69 / 20.0 - d81) - d59 *
    (((phi * phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) *
    (a_tmp * a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 20.0) + d59 * (phi * phi * (psi *
    psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    10.0) / 2.0) - d77 * (b_a_tmp * b_a_tmp) / 20.0) - d134) - d59 * ((psi * psi
    * (the * the) * (b_a_tmp * b_a_tmp) / 10.0 + d5 * (g_a_tmp * g_a_tmp) / 20.0)
    + d5 * (h_a_tmp * h_a_tmp) / 20.0) / 2.0) + d11 * ((d74 * (c_a_tmp * c_a_tmp)
    / 10.0 - d87) + d73 * (a_tmp_tmp * a_tmp_tmp) * b_a_tmp / 10.0) / 2.0) + d12
    * d4 * d113 * d126) - d135) + d136) - d139) + d67 * ((d22 * (c_a_tmp *
    c_a_tmp) / 10.0 - C_33_tmp) + d7 * (a_tmp_tmp * a_tmp_tmp) * b_a_tmp / 10.0)
    / 2.0) - d10 * ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) /
    10.0 + d55 * (i_a_tmp * i_a_tmp) / 20.0) + d55 * (j_a_tmp * j_a_tmp) / 20.0)
    / 2.0) - d11 * (((((phi * psi * sin(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 -
    phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1)) * (((phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - psi * psi * (the * the) * cos(theta1) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3))) - phi *
    phi * (psi * psi) * sin(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) + psi * psi * (the * the) * sin
    (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) / 20.0) - phi * psi * (cos(theta2) * sin(theta1) *
    sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (((phi * phi * (psi
    * psi) * cos(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1)
    * cos(theta3) * sin(theta2)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2))) - phi * phi * (psi * psi) * sin(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) + psi *
    psi * (the * the) * sin(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + phi * psi * (cos(theta1)
    * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi)
    * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) + phi * psi * (cos(theta1) * sin(theta2) *
    sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) *
    cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) + phi * psi * cos(theta1) * (2.0 * (phi * phi) * (psi *
    psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos
    (theta1) * sin(theta1)) / 10.0) / 2.0) - d11 * (((((phi * (psi * psi) * the *
    (a_tmp * a_tmp) / 10.0 - phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) /
    10.0) - d68 * (g_a_tmp * g_a_tmp) / 20.0) - d68 * (h_a_tmp * h_a_tmp) / 20.0)
    + d68 * (i_a_tmp * i_a_tmp) / 20.0) + d68 * (j_a_tmp * j_a_tmp) / 20.0) /
    2.0) + d59 * ((d67 * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + d79 * d35 / 20.0) + d80 * d42 /
    20.0) / 2.0) - d11 * (((((phi * (psi * psi) * the * (a_tmp * a_tmp) / 10.0 -
    phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) / 10.0) - phi * (psi * psi) *
    the * (a_tmp * a_tmp) * (a_tmp_tmp * a_tmp_tmp) / 20.0) - phi * (psi * psi) *
    the * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + d68 * (a_tmp_tmp *
    a_tmp_tmp) * (b_a_tmp * b_a_tmp) / 20.0) + phi * (psi * psi) * the *
    (b_a_tmp * b_a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + d11 * (((((phi *
    psi * sin(theta1) * sin(theta2) * (((phi * phi * (psi * psi) * (a_tmp *
    a_tmp) * sin(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin
    (theta2)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) +
    psi * psi * (the * the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0 - phi *
    psi * cos(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) * sin
    (theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) /
    10.0) - phi * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp)
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) + phi * psi * cos
    (theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2)
    * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin
    (theta1)) / 20.0) + phi * psi * cos(theta1) * sin(theta2) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) + phi * psi * cos
    (theta2) * sin(theta1) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * cos
    (theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * cos(theta2)) - phi *
    phi * (psi * psi) * cos(theta2) * (b_a_tmp * b_a_tmp)) + psi * psi * (the *
    the) * cos(theta2) * (b_a_tmp * b_a_tmp)) / 20.0) / 2.0) - d59 * (((phi *
    phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp *
    a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 40.0) - d1 * sin(theta1) * ((c_C_33_tmp_tmp *
    (a_tmp_tmp * a_tmp_tmp) * b_a_tmp / 20.0 - h_C_33_tmp) + g_C_33_tmp *
    (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + d1 * sin(theta1) * (d54 * i_a_tmp * d31
    / 20.0 + d54 * j_a_tmp * d38 / 20.0) / 2.0) - d67 * (((((d81 + d58 * i_a_tmp
    * d35 / 20.0) + i_C_33_tmp / 20.0) + j_C_33_tmp / 20.0) + d80 * d29 / 20.0)
    - d59 * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the)
    * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + d59 * (d58 * b_a_tmp * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0 - d58 * a_tmp * (d21 - d22) / 20.0) / 2.0) - d67 * (d78 * i_a_tmp *
    (a_tmp_tmp * f_a_tmp - c_a_tmp * d_a_tmp) / 20.0 + d78 * j_a_tmp *
    (a_tmp_tmp * d_a_tmp + f_a_tmp * c_a_tmp) / 20.0) / 2.0) - d10 * (phi * psi *
    sin(theta1) * (d6 * sin(theta1) - d7 * sin(theta1)) / 20.0 + phi * psi * cos
    (theta1) * (d3 * (a_tmp * a_tmp) + d5 * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0)
    - psi * the * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2)) * (d0 * d4 * sin(theta1) * (cos(theta1) * cos(theta2)
    * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - d2 * d0 * cos
    (theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 40.0) - ab_C_33_tmp) + d10 * ((phi * psi *
    (h_a_tmp_tmp * sin(theta3) + i_a_tmp_tmp * sin(theta2)) * (d5 * sin(theta1) *
    (e_a_tmp * d_a_tmp + b_a_tmp_tmp * c_a_tmp) - d3 * cos(theta1) *
    (h_a_tmp_tmp * d_a_tmp + i_a_tmp_tmp * c_a_tmp)) / 20.0 + phi * psi *
    (m_a_tmp_tmp * sin(theta3) - l_a_tmp_tmp * sin(theta1)) * (d5 * sin(theta1) *
    (e_a_tmp_tmp * d_a_tmp - e_a_tmp * f_a_tmp) - d3 * cos(theta1) *
    (m_a_tmp_tmp * d_a_tmp - l_a_tmp_tmp * b_a_tmp)) / 20.0) - phi * psi * cos
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) - d11 * (d82 * (phi * d4 *
    a_tmp_tmp * b_a_tmp - d63 * d4 * a_tmp_tmp * b_a_tmp) / 20.0 - d84 * (phi *
    d4 * sin(theta1) * c_a_tmp - d63 * d4 * sin(theta1) * c_a_tmp) / 20.0) / 2.0)
    - d59 * ((d2 * d0 * the * cos(theta1) * (a_tmp_tmp * a_tmp_tmp) * b_a_tmp /
    20.0 - phi * phi * (psi * psi) * the * cos(theta1) * sin(theta1) / 10.0) +
    d2 * d0 * the * cos(theta1) * sin(theta1) * (c_a_tmp * c_a_tmp) / 20.0) /
    2.0) - d67 * (((((psi * the * sin(theta1) * (d13 * cos(theta1) * sin(theta1)
    - d15 * cos(theta1) * sin(theta1)) / 10.0 - psi * the * cos(theta1) * (d2 *
    d0 * (a_tmp * a_tmp) + d0 * d4 * (b_a_tmp * b_a_tmp)) / 10.0) + d85 * (((d3 *
    (a_tmp * a_tmp) * sin(theta2) - d5 * (a_tmp * a_tmp) * sin(theta2)) - d3 *
    (b_a_tmp * b_a_tmp) * sin(theta2)) + d0 * d4 * (b_a_tmp * b_a_tmp) * sin
    (theta2)) / 20.0) - fb_C_33_tmp * b_a_tmp * (d3 * cos(theta1) * cos(theta2) *
    sin(theta1) - d5 * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + d86 *
    (((d2 * d0 * (a_tmp * a_tmp) * cos(theta2) - d0 * d4 * (a_tmp * a_tmp) * cos
    (theta2)) - d2 * d0 * cos(theta2) * (b_a_tmp * b_a_tmp)) + psi * psi * (the *
    the) * cos(theta2) * (b_a_tmp * b_a_tmp)) / 20.0) - x_C_33_tmp * (d2 * d0 *
    cos(theta1) * sin(theta1) * sin(theta2) - d0 * d4 * cos(theta1) * sin(theta1)
    * sin(theta2)) / 20.0) / 2.0) + m_C_33_tmp) - d11 * (((y_C_33_tmp * (d2 * d0
    * cos(theta1) * cos(theta2) * sin(theta1) - d0 * d4 * cos(theta1) * cos
    (theta2) * sin(theta1)) / 20.0 - d83 * (d2 * d0 * cos(theta1) * sin(theta1) *
    sin(theta2) - d0 * d4 * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) -
    d82 * d89 / 20.0) + d84 * d90 / 20.0) / 2.0) - d67 * (((((d57 * (g_a_tmp *
    g_a_tmp) / 20.0 + d57 * (h_a_tmp * h_a_tmp) / 20.0) - d57 * (i_a_tmp *
    i_a_tmp) / 20.0) - d57 * (j_a_tmp * j_a_tmp) / 20.0) - d57 * (a_tmp * a_tmp)
    / 10.0) + d57 * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - d59 * ((psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the * the) * (a_tmp *
    a_tmp) * (a_tmp_tmp * a_tmp_tmp) / 20.0) + psi * psi * (the * the) * (a_tmp *
    a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + d67 * (((((phi * phi * (psi *
    psi) * the * (a_tmp * a_tmp) / 10.0 - phi * phi * (psi * psi) * the *
    (b_a_tmp * b_a_tmp) / 10.0) + phi * phi * (psi * psi) * the * (b_a_tmp *
    b_a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) - phi * phi * (psi * psi) * the *
    (a_tmp * a_tmp) * (a_tmp_tmp * a_tmp_tmp) / 20.0) - phi * phi * (psi * psi) *
    the * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + d57 * (a_tmp_tmp *
    a_tmp_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - d59 * ((d86 * d47 / 20.0 -
    psi * the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) + d85 * d50 / 20.0) / 2.0)
    - d10 * ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + d55
    * (a_tmp_tmp * a_tmp_tmp) * (b_a_tmp * b_a_tmp) / 20.0) + rt_powd_snf(phi,
    3.0) * (psi * psi) * (b_a_tmp * b_a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) / 2.0)
    + n_C_33_tmp) - d10 * ((phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 +
    d84 * d47 / 20.0) + d82 * d50 / 20.0) / 2.0) - o_C_33_tmp) - p_C_33_tmp) -
    bb_C_33_tmp) - cb_C_33_tmp) + d67 * (phi * phi * (psi * psi) * the * (a_tmp *
    a_tmp) / 20.0 - phi * phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) / 20.0) /
                       2.0) + q_C_33_tmp) - r_C_33_tmp) - s_C_33_tmp) - d11 *
                   (((phi * psi * sin(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 -
                      phi * psi * sin(theta1) * (((phi * phi * (psi * psi) *
    (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp * a_tmp)) - phi * phi *
    (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp)) / 20.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1))
                     / 20.0) + phi * psi * cos(theta1) * (2.0 * (phi * phi) *
    (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) *
    cos(theta1) * sin(theta1)) / 10.0) / 2.0) + f_C_33_tmp * a_tmp * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
                  / 20.0) - psi * the * cos(theta1) * sin(theta2) * (((phi * phi
    * (psi * psi) * (a_tmp * a_tmp) * sin(theta2) - psi * psi * (the * the) *
    (a_tmp * a_tmp) * sin(theta2)) - phi * phi * (psi * psi) * (b_a_tmp *
    b_a_tmp) * sin(theta2)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp) *
    sin(theta2)) / 40.0) - d8 * d113 * k_a_tmp) + db_C_33_tmp * d113 * k_a_tmp)
              + d15 * (a_tmp * a_tmp) * k_C_33_tmp * k_a_tmp) + d13 * (b_a_tmp *
              b_a_tmp) * k_C_33_tmp * k_a_tmp) + l_C_33_tmp * the * a_tmp *
            (b_a_tmp * b_a_tmp) / 40.0) + gb_C_33_tmp) - u_C_33_tmp * k_a_tmp) -
         psi * the * cos(theta1) * cos(theta2) * (((phi * phi * (psi * psi) *
            (a_tmp * a_tmp) * cos(theta2) - psi * psi * (the * the) * (a_tmp *
             a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos(theta2) *
           (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos(theta2) *
          (b_a_tmp * b_a_tmp)) / 40.0) + d21 * (k_a_tmp * k_a_tmp)) - d22 *
       (k_a_tmp * k_a_tmp)) + eb_C_33_tmp) + l_C_33_tmp * d4 * (a_tmp * a_tmp) *
     b_a_tmp / 40.0) + w_C_33_tmp * k_a_tmp;
  d13 = d67 * l_a_tmp / 2.0;
  d15 = b_C_33_tmp_tmp + d51;
  d20 = d26 * d126;
  d31 = 3.0 * d2;
  d38 = a_tmp * ((d76 / 10.0 + d101) - d103);
  d51 = b_a_tmp * ((d116 / 10.0 + d107) - d109);
  d52 = d38 + d51;
  d53 = d59 * k_C_33_tmp / 2.0;
  d63 = d10 * k_C_33_tmp / 2.0;
  d66 = d71 * d113;
  d68 = d11 * l_a_tmp / 2.0;
  d69 = a_tmp * ((d120 - d99 / 10.0) + d121) + b_a_tmp * ((d122 - d105 / 10.0) +
    d123);
  d70 = 7.0 * d2;
  d73 = d70 * psi;
  d79 = d73 * the;
  d80 = d117 / 20.0 + d119 / 20.0;
  d81 = d79 * d80;
  d84 = d81 * d113;
  d87 = d106 / 20.0 - d108 / 20.0;
  d89 = d100 / 20.0 - d102 / 20.0;
  d90 = d79 * d89;
  C_33_tmp = d31 * psi;
  d92 = C_33_tmp * d4;
  l_C_33_tmp = (a_tmp_tmp_tmp / 10.0 - d_C_33_tmp_tmp) + e_C_33_tmp_tmp;
  hb_C_33_tmp = C_33_tmp * the;
  ib_C_33_tmp = d79 * b_a_tmp;
  jb_C_33_tmp = 21.0 * d2 * psi;
  kb_C_33_tmp = b_a_tmp_tmp_tmp / 20.0 + d_a_tmp_tmp_tmp / 20.0;
  d_C_33_tmp_tmp = jb_C_33_tmp * the;
  lb_C_33_tmp = d_C_33_tmp_tmp * a_tmp_tmp * b_a_tmp;
  mb_C_33_tmp = d_C_33_tmp_tmp * b_a_tmp * c_a_tmp;
  nb_C_33_tmp = 7.0 * (phi * phi) * psi * (the * the) * a_tmp;
  h_C_33_tmp = d98 / 20.0 - r_a_tmp_tmp / 20.0;
  e_C_33_tmp_tmp = d70 * d0 * d4;
  i_C_33_tmp = e_C_33_tmp_tmp * b_a_tmp;
  j_C_33_tmp = e_C_33_tmp_tmp * a_tmp;
  ob_C_33_tmp = d_C_33_tmp_tmp * a_tmp;
  jb_C_33_tmp *= d4;
  d_C_33_tmp_tmp = jb_C_33_tmp * a_tmp;
  pb_C_33_tmp = d_C_33_tmp_tmp * a_tmp_tmp;
  qb_C_33_tmp = d_C_33_tmp_tmp * c_a_tmp;
  rb_C_33_tmp = hb_C_33_tmp * b_a_tmp * k_C_33_tmp / 400.0;
  sb_C_33_tmp = d92 * a_tmp * k_C_33_tmp / 400.0;
  tb_C_33_tmp = ib_C_33_tmp * k_C_33_tmp * kb_C_33_tmp / 40.0;
  d_C_33_tmp_tmp = ib_C_33_tmp * h_C_33_tmp;
  ib_C_33_tmp = d_C_33_tmp_tmp * k_a_tmp / 40.0;
  ub_C_33_tmp = lb_C_33_tmp * d126 / 800.0;
  vb_C_33_tmp = mb_C_33_tmp * k_C_33_tmp / 800.0;
  wb_C_33_tmp = nb_C_33_tmp * k_C_33_tmp * kb_C_33_tmp / 40.0;
  e_C_33_tmp_tmp = nb_C_33_tmp * h_C_33_tmp;
  nb_C_33_tmp = e_C_33_tmp_tmp * k_a_tmp / 40.0;
  h_C_33_tmp = i_C_33_tmp * d89 * k_C_33_tmp / 40.0;
  c_C_33_tmp_tmp = i_C_33_tmp * (3.0 * cos(theta1) * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 20.0);
  i_C_33_tmp = c_C_33_tmp_tmp * k_a_tmp / 40.0;
  g_C_33_tmp = j_C_33_tmp * d87 * k_C_33_tmp / 40.0;
  r_a_tmp_tmp = j_C_33_tmp * d80;
  j_C_33_tmp = r_a_tmp_tmp * k_a_tmp / 40.0;
  b_C_33_tmp = pb_C_33_tmp * d126 / 800.0;
  c_C_33_tmp = qb_C_33_tmp * k_C_33_tmp / 800.0;
  d_C_33_tmp = 7.0 * (phi * phi) * psi * (the * the) * d87 * d52 / 40.0;
  hb_C_33_tmp = hb_C_33_tmp * a_tmp * l_a_tmp / 400.0;
  C_33_tmp_tmp = t_C_33_tmp * d52;
  t_C_33_tmp = C_33_tmp_tmp * k_a_tmp / 2.0;
  u_C_33_tmp = u_C_33_tmp * l_a_tmp / 2.0;
  e_C_33_tmp = jb_C_33_tmp * b_a_tmp * c_a_tmp * l_a_tmp / 800.0;
  C_33_tmp = d79 * a_tmp * kb_C_33_tmp * l_a_tmp / 40.0;
  lb_C_33_tmp = lb_C_33_tmp * k_a_tmp / 800.0;
  mb_C_33_tmp = mb_C_33_tmp * d113 / 800.0;
  f_C_33_tmp = ob_C_33_tmp * a_tmp_tmp * d52 / 800.0;
  b_C_33_tmp_tmp = v_C_33_tmp * d52;
  v_C_33_tmp = b_C_33_tmp_tmp * k_a_tmp / 2.0;
  ob_C_33_tmp = ob_C_33_tmp * c_a_tmp * l_a_tmp / 800.0;
  pb_C_33_tmp = pb_C_33_tmp * k_a_tmp / 800.0;
  w_C_33_tmp = w_C_33_tmp * l_a_tmp / 2.0;
  qb_C_33_tmp = qb_C_33_tmp * d113 / 800.0;
  kb_C_33_tmp = 7.0 * (phi * phi) * psi * (the * the) * b_a_tmp * kb_C_33_tmp *
    l_a_tmp / 40.0;
  jb_C_33_tmp = jb_C_33_tmp * a_tmp_tmp * b_a_tmp * d52 / 800.0;
  C_33[3] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((((((d15 - d20 / 2.0) - psi * the * cos(theta1) *
    (psi * psi * (the * the) * (a_tmp * a_tmp) / 20.0 + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - phi * psi * sin(theta1) * (rt_powd_snf
    (phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) *
    (psi * psi) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + d127) - d129) + d131) -
    d13) - rt_powd_snf(phi, 4.0) * rt_powd_snf(psi, 3.0) * (a_tmp * a_tmp) * sin
    (theta1) / 20.0) - phi * psi * cos(theta1) * (phi * (psi * psi) * the *
    (a_tmp * a_tmp) / 20.0 - phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) /
    20.0) / 2.0) - d67 * (((psi * the * sin(theta1) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1)) / 20.0 - psi * the * sin(theta1) * (2.0 * (phi * phi) * (psi * psi)
    * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) *
    sin(theta1)) / 10.0) - psi * the * cos(theta1) * (((phi * phi * (psi * psi) *
    (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp * a_tmp)) - phi * phi *
    (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp)) / 20.0) + psi * the * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0)) -
    d77 * (b_a_tmp * b_a_tmp) / 20.0) - d58 * b_a_tmp * (d132 / 20.0 - d133 /
    20.0) / 2.0) - d58 * cos(theta1) * ((psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp) / 10.0 + psi * psi * (the * the) * (g_a_tmp * g_a_tmp) / 20.0) +
    psi * psi * (the * the) * (h_a_tmp * h_a_tmp) / 20.0) / 2.0) + phi * psi *
    cos(theta1) * ((rt_powd_snf(phi, 3.0) * (psi * psi) * cos(theta1) * sin
    (theta1) * (c_a_tmp * c_a_tmp) / 10.0 - d74 / 5.0) + rt_powd_snf(phi, 3.0) *
    (psi * psi) * cos(theta1) * (a_tmp_tmp * a_tmp_tmp) * sin(theta1) / 10.0) /
    2.0) + d31 * d4 * (a_tmp * d104 + b_a_tmp * d110) * (cos(theta1) * (d114 /
    10.0 + d115 / 10.0) + sin(theta1) * (d117 / 10.0 + d119 / 10.0)) / 2.0) -
    phi * psi * cos(theta1) * (d54 * g_a_tmp * (l_a_tmp_tmp - d30) / 20.0 + d54 *
    h_a_tmp * (d36 + d37) / 20.0) / 2.0) + psi * the * cos(theta1) * (d78 *
    (c_a_tmp_tmp + d_a_tmp_tmp) * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3)) / 20.0 + d78 * (f_a_tmp_tmp - g_a_tmp_tmp) * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2)) / 20.0) / 2.0) - psi * the * sin
    (theta1) * (psi * the * (d94 - d95) * (e_a_tmp_tmp * sin(theta3) - e_a_tmp *
    cos(theta3)) / 20.0 + psi * the * (d96 - d97) * (e_a_tmp * sin(theta3) +
    b_a_tmp_tmp * sin(theta2)) / 20.0) / 2.0) + psi * the * sin(theta1) * ((d5 *
    cos(theta1) * sin(theta1) * (c_a_tmp * c_a_tmp) / 10.0 - d0 * d4 * cos
    (theta1) * sin(theta1) / 5.0) + d5 * cos(theta1) * (a_tmp_tmp * a_tmp_tmp) *
    sin(theta1) / 10.0) / 2.0) - phi * psi * sin(theta1) * ((rt_powd_snf(phi,
    3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi *
    psi) * (i_a_tmp * i_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) *
    (j_a_tmp * j_a_tmp) / 20.0) / 2.0) + phi * psi * cos(theta1) * (((((phi *
    psi * sin(theta1) * (d3 * (a_tmp * a_tmp) + d5 * (b_a_tmp * b_a_tmp)) / 10.0
    - phi * psi * (n_a_tmp_tmp - o_a_tmp_tmp) * (((d27 - d28) - d8 * j_a_tmp) +
    d9 * j_a_tmp) / 20.0) - phi * psi * (h_a_tmp_tmp * d_a_tmp + i_a_tmp_tmp *
    c_a_tmp) * (((d6 * g_a_tmp - d7 * g_a_tmp) - d8 * i_a_tmp) + d5 * b_a_tmp *
    (j_a_tmp_tmp + k_a_tmp_tmp)) / 20.0) + phi * psi * (e_a_tmp * sin(theta3) +
    b_a_tmp_tmp * sin(theta2)) * (d5 * sin(theta1) * (e_a_tmp * d_a_tmp +
    b_a_tmp_tmp * c_a_tmp) - d3 * cos(theta1) * (h_a_tmp_tmp * d_a_tmp +
    i_a_tmp_tmp * c_a_tmp)) / 20.0) + phi * psi * (a_tmp * c_a_tmp * sin(theta3)
    - a_tmp * a_tmp_tmp * cos(theta3)) * (d0 * d4 * sin(theta1) * (e_a_tmp_tmp *
    sin(theta3) - e_a_tmp * cos(theta3)) - d2 * d0 * cos(theta1) * (m_a_tmp_tmp *
    sin(theta3) - l_a_tmp_tmp * sin(theta1))) / 20.0) + phi * psi * cos(theta1) *
    (d12 * d0 * cos(theta1) * sin(theta1) - d14 * d4 * cos(theta1) * sin(theta1))
    / 10.0)) - phi * psi * cos(theta1) * (((((phi * d0 * the * (a_tmp * a_tmp) /
    10.0 - phi * d0 * the * (b_a_tmp * b_a_tmp) / 10.0) - phi * d0 * the *
    (g_a_tmp * g_a_tmp) / 20.0) - phi * (psi * psi) * the * (h_a_tmp * h_a_tmp) /
    20.0) + phi * (psi * psi) * the * (i_a_tmp * i_a_tmp) / 20.0) + phi * (psi *
    psi) * the * (j_a_tmp * j_a_tmp) / 20.0) / 2.0) + 3.0 * (phi * phi) * (the *
    the) * d126 * d52 / 2.0) - psi * the * cos(theta1) * ((psi * the * sin
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 + psi * the * (cos(theta1) * cos(theta2) *
    sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0)) - phi * psi * cos(theta1) * (((((phi * (psi * psi) * the
    * (a_tmp * a_tmp) / 10.0 - phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) /
    10.0) - phi * (psi * psi) * the * (a_tmp * a_tmp) * (a_tmp_tmp * a_tmp_tmp) /
    20.0) - phi * (psi * psi) * the * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) /
    20.0) + phi * (psi * psi) * the * (a_tmp_tmp * a_tmp_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) + phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) * (c_a_tmp *
    c_a_tmp) / 20.0) / 2.0) - phi * psi * cos(theta1) * (((((phi * psi * sin
    (theta1) * sin(theta2) * (((d2 * d0 * (a_tmp * a_tmp) * sin(theta2) - d0 *
    d4 * (a_tmp * a_tmp) * sin(theta2)) - d2 * d0 * (b_a_tmp * b_a_tmp) * sin
    (theta2)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp) * sin(theta2)) /
    20.0 - phi * psi * cos(theta1) * (2.0 * d2 * (psi * psi) * cos(theta1) * sin
    (theta1) - 2.0 * d0 * (the * the) * cos(theta1) * sin(theta1)) / 10.0) - phi
    * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi
    * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) + phi * psi * cos(theta1) * cos
    (theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1)
    - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0)
    + phi * psi * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) * sin(theta2)) / 20.0) + phi * psi * cos(theta2) * sin(theta1)
    * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * cos(theta2) - psi * psi *
    (the * the) * (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos
    (theta2) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos(theta2) *
    (b_a_tmp * b_a_tmp)) / 20.0)) - phi * psi * sin(theta1) * ((phi * (psi * psi)
    * the * cos(theta1) * (a_tmp_tmp * a_tmp_tmp) * sin(theta1) / 20.0 - phi *
    (psi * psi) * the * cos(theta1) * sin(theta1) / 10.0) + phi * (psi * psi) *
    the * cos(theta1) * sin(theta1) * (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + d66 *
    d69) + phi * psi * sin(theta1) * (rt_powd_snf(phi, 3.0) * psi * (the * the) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2)) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) / 20.0 +
    rt_powd_snf(phi, 3.0) * psi * (the * the) * (sin(theta1) * sin(theta2) * sin
    (theta3) - cos(theta2) * cos(theta3) * sin(theta1)) * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2)) / 20.0) / 2.0) + psi * the * sin
    (theta1) * (((((psi * the * sin(theta1) * (2.0 * (phi * phi) * (psi * psi) *
    cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) *
    sin(theta1)) / 10.0 + psi * the * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0) + psi * the * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2)) * (((phi * phi * (psi * psi) * cos
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2))) - phi * phi * (psi * psi) * sin(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) + psi *
    psi * (the * the) * sin(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + psi * the * (cos(theta1)
    * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) *
    (((phi * phi * (psi * psi) * cos(theta1) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - psi * psi * (the * the)
    * cos(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3))) - phi * phi * (psi * psi) * sin(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) + psi * psi * (the * the) * sin(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) -
    psi * the * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0)) - psi * the * cos(theta1) *
    (psi * the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the * cos(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 20.0)) - psi * the * sin(theta1) * (phi *
    phi * psi * rt_powd_snf(the, 3.0) * (cos(theta2) * sin(theta1) * sin(theta3)
    + cos(theta3) * sin(theta1) * sin(theta2)) * (cos(theta2) * cos(theta3) -
    sin(theta2) * sin(theta3)) / 20.0 + phi * phi * psi * rt_powd_snf(the, 3.0) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1)) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) / 20.0) /
    2.0) + phi * psi * sin(theta1) * (phi * psi * sin(theta1) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1)) / 20.0 + phi * psi * cos(theta1) * (phi * phi * (psi
    * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    10.0)) - phi * psi * sin(theta1) * ((phi * psi * (cos(theta2) * sin(theta1) *
    sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0)) -
    phi * psi * cos(theta1) * (phi * psi * sin(theta1) * sin(theta2) * (phi *
    (the * the) * cos(theta2) * sin(theta1) - phi * (psi * psi) * (the * the) *
    cos(theta2) * sin(theta1)) / 20.0 - phi * psi * cos(theta2) * sin(theta1) *
    (phi * (the * the) * sin(theta1) * sin(theta2) - phi * (psi * psi) * (the *
    the) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - psi * the * cos(theta1) *
    ((phi * phi * (psi * psi) * the * cos(theta1) * (a_tmp_tmp * a_tmp_tmp) *
    sin(theta1) / 20.0 - phi * phi * (psi * psi) * the * cos(theta1) * sin
    (theta1) / 10.0) + phi * phi * (psi * psi) * the * cos(theta1) * sin(theta1)
    * (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + psi * the * sin(theta1) * (((((psi *
    the * sin(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) * sin
    (theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) /
    10.0 - psi * the * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp)
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) + psi * the * cos
    (theta1) * sin(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin
    (theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0) - psi * the * cos(theta2) *
    sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin
    (theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
    / 20.0) + psi * the * cos(theta1) * cos(theta2) * (((phi * phi * (psi * psi)
    * (a_tmp * a_tmp) * cos(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) *
    cos(theta2)) - phi * phi * (psi * psi) * cos(theta2) * (b_a_tmp * b_a_tmp))
    + psi * psi * (the * the) * cos(theta2) * (b_a_tmp * b_a_tmp)) / 20.0) - psi
    * the * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1) * sin(theta2)) / 20.0)) + m_C_33_tmp) - phi * psi * cos(theta1) *
    (((phi * psi * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
    * sin(theta1)) / 20.0 - phi * psi * cos(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1) * sin(theta2)) / 20.0) - phi * psi * sin(theta1) *
    sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) - phi *
    phi * (the * the) * cos(theta1) * cos(theta2)) / 20.0) + phi * psi * cos
    (theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta2)
    - phi * phi * (the * the) * cos(theta1) * sin(theta2)) / 20.0) / 2.0) - psi *
    the * sin(theta1) * (((((phi * phi * (psi * psi) * the * (g_a_tmp * g_a_tmp)
    / 20.0 + phi * phi * (psi * psi) * the * (h_a_tmp * h_a_tmp) / 20.0) - phi *
    phi * (psi * psi) * the * (i_a_tmp * i_a_tmp) / 20.0) - phi * phi * (psi *
    psi) * the * (j_a_tmp * j_a_tmp) / 20.0) - phi * phi * (psi * psi) * the *
    (a_tmp * a_tmp) / 10.0) + phi * phi * (psi * psi) * the * (b_a_tmp * b_a_tmp)
    / 10.0) / 2.0) - psi * the * cos(theta1) * ((psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the * the) * (a_tmp * a_tmp) *
    (a_tmp_tmp * a_tmp_tmp) / 20.0) + psi * psi * (the * the) * (a_tmp * a_tmp) *
    (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + psi * the * sin(theta1) * (((((phi *
    phi * (psi * psi) * the * (a_tmp * a_tmp) / 10.0 - phi * phi * (psi * psi) *
    the * (b_a_tmp * b_a_tmp) / 10.0) + phi * phi * (psi * psi) * the * (b_a_tmp
    * b_a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) - phi * phi * (psi * psi) * the *
    (a_tmp * a_tmp) * (a_tmp_tmp * a_tmp_tmp) / 20.0) - phi * phi * (psi * psi) *
    the * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + phi * phi * (psi * psi)
    * the * (a_tmp_tmp * a_tmp_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - d53)
    + psi * the * cos(theta1) * ((psi * the * cos(theta1) * cos(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0 - psi * the *
    sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0) + psi * the * cos(theta1) * sin(theta2) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi *
    psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0)) - d63)
    - phi * psi * sin(theta1) * ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp *
    a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp_tmp * a_tmp_tmp)
    * (b_a_tmp * b_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) *
    (b_a_tmp * b_a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + n_C_33_tmp) + phi
    * psi * sin(theta1) * ((phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 +
    phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1)
    * cos(theta2) * sin(theta1)) / 20.0) + phi * psi * sin(theta1) * sin(theta2)
    * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi *
    psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0)) -
    o_C_33_tmp) - p_C_33_tmp) + psi * the * sin(theta1) * (phi * phi * (psi *
    psi) * the * (a_tmp * a_tmp) / 20.0 - phi * phi * (psi * psi) * the *
    (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + q_C_33_tmp) - r_C_33_tmp) - s_C_33_tmp)
    + phi * psi * cos(theta1) * (((phi * psi * sin(theta1) * (phi * phi * (psi *
    psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    10.0 - phi * psi * sin(theta1) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp)
    - psi * psi * (the * the) * (a_tmp * a_tmp)) - phi * phi * (psi * psi) *
    (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 20.0)
    - phi * psi * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin
    (theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0) +
    phi * psi * cos(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) *
    sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) /
    10.0)) + d68) - d21 * (l_a_tmp * l_a_tmp)) + d22 * (l_a_tmp * l_a_tmp)) +
    d84 / 40.0) + d79 * d87 * d126 / 40.0) - d90 * (d38 + d51) / 40.0) - d92 *
    b_a_tmp * ((p_a_tmp_tmp - s_a_tmp_tmp) + d_a_tmp_tmp_tmp / 10.0) / 400.0) -
    d8 * (d38 + d51) * ((b_a_tmp_tmp_tmp / 10.0 + d_a_tmp_tmp_tmp / 10.0) - 0.1)
    / 2.0) + d71 * sin(theta1) * (d38 + d51) * ((a_tmp_tmp_tmp * d_a_tmp / 10.0
    + c_a_tmp_tmp_tmp * c_a_tmp / 10.0) - 0.1) / 2.0) - d73 * d4 * (d99 *
    d_a_tmp / 20.0 - d76 * f_a_tmp / 20.0) * (cos(theta1) * (d114 / 10.0 + d115 /
    10.0) + sin(theta1) * (d117 / 10.0 + d119 / 10.0)) / 40.0) - d70 * psi *
    (the * the) * (d76 * sin(theta3) / 20.0 + d75 * sin(theta2) / 20.0) * (cos
    (theta1) * (d99 * d_a_tmp / 10.0 - d76 * f_a_tmp / 10.0) + sin(theta1) *
    (d105 * d_a_tmp / 10.0 - d98 * b_a_tmp / 10.0)) / 40.0) - d2 * d0 * sin
    (theta1) * (cos(theta1) * (d100 / 10.0 - d102 / 10.0) + sin(theta1) * (d106 /
    10.0 - d108 / 10.0)) * l_a_tmp / 2.0) + phi * phi * (the * the) * sin(theta1)
    * (cos(theta1) * (d99 * d_a_tmp / 10.0 - d76 * f_a_tmp / 10.0) + sin(theta1)
    * (d105 * d_a_tmp / 10.0 - d98 * b_a_tmp / 10.0)) * l_a_tmp / 2.0) + 3.0 *
    d0 * d4 * (a_tmp * a_tmp) * k_C_33_tmp * k_a_tmp / 2.0) + d31 * d0 *
    (b_a_tmp * b_a_tmp) * k_C_33_tmp * k_a_tmp / 2.0) + phi * phi * rt_powd_snf
    (psi, 3.0) * the * cos(theta1) * (b_a_tmp * b_a_tmp) / 40.0) + rb_C_33_tmp)
    - d_C_33_tmp) - psi * psi * (the * the) * (a_tmp * a_tmp) * k_a_tmp *
    l_C_33_tmp) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) * k_a_tmp *
    l_C_33_tmp) + 3.0 * (psi * psi) * (the * the) * (a_tmp * a_tmp) * (3.0 * cos
    (theta2) * cos(theta3) / 10.0 - 3.0 * sin(theta2) * sin(theta3) / 10.0) *
    l_a_tmp / 2.0) + 3.0 * (phi * phi) * (psi * psi) * (b_a_tmp * b_a_tmp) *
    (3.0 * cos(theta2) * cos(theta3) / 10.0 - 3.0 * sin(theta2) * sin(theta3) /
    10.0) * l_a_tmp / 2.0) - hb_C_33_tmp) - t_C_33_tmp) - sb_C_33_tmp) + phi *
    phi * rt_powd_snf(psi, 3.0) * (the * the) * (a_tmp * a_tmp) * sin(theta1) /
    40.0) - u_C_33_tmp) - e_C_33_tmp) + tb_C_33_tmp) + ib_C_33_tmp) -
    ub_C_33_tmp) - C_33_tmp) + lb_C_33_tmp) + mb_C_33_tmp) + vb_C_33_tmp) -
                   wb_C_33_tmp) - nb_C_33_tmp) + f_C_33_tmp) + h_C_33_tmp) +
               i_C_33_tmp) + v_C_33_tmp) - g_C_33_tmp) - j_C_33_tmp) -
           ob_C_33_tmp) + b_C_33_tmp) - pb_C_33_tmp) + w_C_33_tmp) - qb_C_33_tmp)
      - c_C_33_tmp) - kb_C_33_tmp) + jb_C_33_tmp;
  d27 = d71 * d126 * d52;
  d28 = d27 / 2.0;
  C_33[6] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    the * sin(theta1) * (phi * the * (cos(theta2) * cos(theta3) - sin(theta2) *
    sin(theta3)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
    phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0 + phi * the * (cos(theta2) *
    sin(theta3) + cos(theta3) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) / 2.0 + the * sin(theta1) * (phi * the * sin(theta2) *
    (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0 - phi *
    the * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) *
    sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin(theta1) * sin
    (theta2)) / 20.0) / 2.0) - phi * the * (cos(theta1) * (3.0 * cos(theta1) *
    cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta1) * cos(theta3) * sin
    (theta2) / 10.0) + sin(theta1) * (3.0 * cos(theta2) * sin(theta1) * sin
    (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta1) * sin(theta2) / 10.0)) /
    2.0) - psi * the * cos(theta1) * (psi * psi * (the * the) * (a_tmp * a_tmp) /
    20.0 + psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - phi *
    psi * sin(theta1) * (rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) /
    10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp) / 20.0) /
    2.0) + phi * the * cos(theta1) * (phi * the * sin(theta2) * (phi * phi *
    (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0 - phi * the * cos
    (theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2)
    - psi * psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0)
    / 2.0) - psi * the * cos(theta1) * ((phi * phi * (psi * psi) * the * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2)) / 20.0 + phi * phi * (psi * psi) * the * (cos(theta1)
    * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1)) / 20.0) - phi * phi * (psi * psi) * the * cos(theta1) * sin(theta1)
    / 10.0) / 2.0) + psi * the * sin(theta1) * (((psi * the * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (phi *
    (the * the) * sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2)) - phi * (psi * psi) * (the * the) * sin(theta1) * (cos(theta2) *
    sin(theta3) + cos(theta3) * sin(theta2))) / 20.0 + psi * the * (cos(theta1) *
    cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (phi *
    (the * the) * sin(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3)) - phi * (psi * psi) * (the * the) * sin(theta1) * (cos(theta2) *
    cos(theta3) - sin(theta2) * sin(theta3))) / 20.0) - phi * psi * the * (cos
    (theta2) * cos(theta3) - sin(theta2) * sin(theta3)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0) - phi * psi * the * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) /
    2.0) - rt_powd_snf(phi, 4.0) * rt_powd_snf(psi, 3.0) * (a_tmp * a_tmp) * sin
    (theta1) / 20.0) - phi * psi * cos(theta1) * (phi * (psi * psi) * the *
    (a_tmp * a_tmp) / 20.0 - phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) /
    20.0) / 2.0) - psi * the * sin(theta1) * (((psi * the * sin(theta1) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) *
    cos(theta1) * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (2.0 * (phi *
    phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the *
    the) * cos(theta1) * sin(theta1)) / 10.0) - psi * the * cos(theta1) * (((phi
    * phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp *
    a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 20.0) + psi * the * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0)) - rt_powd_snf(psi, 3.0) * rt_powd_snf(the, 3.0) * cos(theta1) *
    (b_a_tmp * b_a_tmp) / 20.0) - d134) - psi * the * cos(theta1) * ((psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the * the) *
    (g_a_tmp * g_a_tmp) / 20.0) + psi * psi * (the * the) * (h_a_tmp * h_a_tmp) /
    20.0) / 2.0) + phi * psi * cos(theta1) * ((rt_powd_snf(phi, 3.0) * (psi *
    psi) * cos(theta1) * sin(theta1) * (c_a_tmp * c_a_tmp) / 10.0 - rt_powd_snf
    (phi, 3.0) * (psi * psi) * cos(theta1) * sin(theta1) / 5.0) + rt_powd_snf
    (phi, 3.0) * (psi * psi) * cos(theta1) * (a_tmp_tmp * a_tmp_tmp) * sin
    (theta1) / 10.0) / 2.0) + 3.0 * (phi * phi) * (the * the) * (cos(theta1) *
    (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) *
    cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin
    (theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1)
    / 10.0)) * (cos(theta1) * (3.0 * cos(theta1) * cos(theta2) * sin(theta3) /
    10.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 10.0) + sin(theta1) *
    (3.0 * cos(theta2) * sin(theta1) * sin(theta3) / 10.0 + 3.0 * cos(theta3) *
    sin(theta1) * sin(theta2) / 10.0)) / 2.0) - d135) + d136) - d139) + psi *
    the * sin(theta1) * ((psi * psi * (the * the) * cos(theta1) * sin(theta1) *
    (c_a_tmp * c_a_tmp) / 10.0 - psi * psi * (the * the) * cos(theta1) * sin
    (theta1) / 5.0) + psi * psi * (the * the) * cos(theta1) * (a_tmp_tmp *
    a_tmp_tmp) * sin(theta1) / 10.0) / 2.0) - phi * psi * sin(theta1) *
    ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf
    (phi, 3.0) * (psi * psi) * (i_a_tmp * i_a_tmp) / 20.0) + rt_powd_snf(phi,
    3.0) * (psi * psi) * (j_a_tmp * j_a_tmp) / 20.0) / 2.0) + phi * psi * cos
    (theta1) * (((((phi * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1)) * (((phi * phi * (psi * psi) * cos(theta1) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - psi *
    psi * (the * the) * cos(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3))) - phi * phi * (psi * psi) * sin
    (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) + psi * psi * (the * the) * sin(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) - phi * psi * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2)) * (((phi * phi * (psi * psi) * cos
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2))) - phi * phi * (psi * psi) * sin(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) + psi *
    psi * (the * the) * sin(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + phi * psi * (cos(theta1)
    * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi)
    * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) + phi * psi * (cos(theta1) * sin(theta2) *
    sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) *
    cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) + phi * psi * cos(theta1) * (2.0 * (phi * phi) * (psi *
    psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos
    (theta1) * sin(theta1)) / 10.0)) - phi * psi * cos(theta1) * (((((phi * (psi
    * psi) * the * (a_tmp * a_tmp) / 10.0 - phi * (psi * psi) * the * (b_a_tmp *
    b_a_tmp) / 10.0) - phi * (psi * psi) * the * (g_a_tmp * g_a_tmp) / 20.0) -
    phi * (psi * psi) * the * (h_a_tmp * h_a_tmp) / 20.0) + phi * (psi * psi) *
    the * (i_a_tmp * i_a_tmp) / 20.0) + phi * (psi * psi) * the * (j_a_tmp *
    j_a_tmp) / 20.0) / 2.0) + d28) - psi * the * cos(theta1) * ((psi * the * sin
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 + psi * the * (cos(theta1) * cos(theta2) *
    sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0)) - phi * psi * cos(theta1) * (((((phi * (psi * psi) * the
    * (a_tmp * a_tmp) / 10.0 - phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) /
    10.0) - phi * (psi * psi) * the * (a_tmp * a_tmp) * (a_tmp_tmp * a_tmp_tmp) /
    20.0) - phi * (psi * psi) * the * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) /
    20.0) + phi * (psi * psi) * the * (a_tmp_tmp * a_tmp_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) + phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) * (c_a_tmp *
    c_a_tmp) / 20.0) / 2.0) - phi * psi * cos(theta1) * (((((phi * psi * sin
    (theta1) * sin(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin
    (theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0 - phi * psi * cos(theta1) *
    (2.0 * (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi *
    psi) * (the * the) * cos(theta1) * sin(theta1)) / 10.0) - phi * psi * sin
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0) + phi * psi * cos(theta1) * cos(theta2) *
    (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + phi *
    psi * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1) * sin(theta2)) / 20.0) + phi * psi * cos(theta2) * sin(theta1) *
    (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * cos(theta2) - psi * psi *
    (the * the) * (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos
    (theta2) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos(theta2) *
    (b_a_tmp * b_a_tmp)) / 20.0)) - phi * psi * sin(theta1) * ((phi * (psi * psi)
    * the * cos(theta1) * (a_tmp_tmp * a_tmp_tmp) * sin(theta1) / 20.0 - phi *
    (psi * psi) * the * cos(theta1) * sin(theta1) / 10.0) + phi * (psi * psi) *
    the * cos(theta1) * sin(theta1) * (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + phi *
    psi * sin(theta1) * (rt_powd_snf(phi, 3.0) * psi * (the * the) * (cos(theta2)
    * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) *
    (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) / 20.0 + rt_powd_snf
    (phi, 3.0) * psi * (the * the) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2)) / 20.0) / 2.0) + psi * the * sin(theta1) * (((((psi *
    the * sin(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) * sin
    (theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) /
    10.0 + psi * the * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) *
    sin(theta1) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) +
    psi * the * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) +
    psi * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) * (((phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - psi * psi * (the * the) * cos(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2))) - phi *
    phi * (psi * psi) * sin(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) + psi * psi * (the * the) * sin
    (theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) + psi * the * (cos(theta1) * sin(theta2) *
    sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (((phi * phi * (psi
    * psi) * cos(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1)
    * cos(theta2) * cos(theta3)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3))) - phi * phi * (psi * psi) * sin(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) + psi *
    psi * (the * the) * sin(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) - psi * the * cos(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0)) - psi * the * cos(theta1) * (psi * the * sin
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the * cos(theta1) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1)) / 20.0)) - psi * the * sin(theta1) * (phi * phi *
    psi * rt_powd_snf(the, 3.0) * (cos(theta2) * sin(theta1) * sin(theta3) + cos
    (theta3) * sin(theta1) * sin(theta2)) * (cos(theta2) * cos(theta3) - sin
    (theta2) * sin(theta3)) / 20.0 + phi * phi * psi * rt_powd_snf(the, 3.0) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1)) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) / 20.0) /
    2.0) + d10 * (phi * psi * sin(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1))
    / 20.0 + phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp)
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0)) - d1 * b_a_tmp *
    ((phi * psi * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 20.0 +
    phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) -
    phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0)) - d1 * cos(theta1) * (phi *
    psi * sin(theta1) * sin(theta2) * (phi * (the * the) * cos(theta2) * sin
    (theta1) - phi * (psi * psi) * (the * the) * cos(theta2) * sin(theta1)) /
    20.0 - phi * psi * cos(theta2) * sin(theta1) * (phi * (the * the) * sin
    (theta1) * sin(theta2) - phi * (psi * psi) * (the * the) * sin(theta1) * sin
    (theta2)) / 20.0) / 2.0) - d58 * cos(theta1) * ((phi * phi * (psi * psi) *
    the * cos(theta1) * (a_tmp_tmp * a_tmp_tmp) * sin(theta1) / 20.0 - d128 /
    10.0) + d128 * (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + psi * the * sin(theta1) *
    (((((psi * the * sin(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1)
    * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1))
    / 10.0 - psi * the * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp)
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) + psi * the * cos
    (theta1) * sin(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin
    (theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0) - psi * the * cos(theta2) *
    sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin
    (theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
    / 20.0) + d86 * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * cos(theta2) -
    psi * psi * (the * the) * (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi *
    psi) * cos(theta2) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos
    (theta2) * (b_a_tmp * b_a_tmp)) / 20.0) - x_C_33_tmp * (d48 - d49) / 20.0))
    + phi * psi * cos(theta1) * ((f_C_33_tmp_tmp * i_a_tmp / 10.0 +
    g_C_33_tmp_tmp * j_a_tmp / 10.0) - d55 * a_tmp * sin(theta1) / 5.0) / 2.0) -
    phi * psi * cos(theta1) * (((y_C_33_tmp * d47 / 20.0 - d83 * d50 / 20.0) -
    d10 * c_a_tmp * (d43 - d88) / 20.0) + d83 * sin(theta1) * (d6 * c_a_tmp -
    d72 * c_a_tmp) / 20.0) / 2.0) - psi * the * sin(theta1) * (((((d57 *
    (g_a_tmp * g_a_tmp) / 20.0 + d57 * (h_a_tmp * h_a_tmp) / 20.0) - d57 *
    (i_a_tmp * i_a_tmp) / 20.0) - d3 * the * (j_a_tmp * j_a_tmp) / 20.0) - d3 *
    the * (a_tmp * a_tmp) / 10.0) + d2 * d0 * the * (b_a_tmp * b_a_tmp) / 10.0) /
    2.0) - psi * the * cos(theta1) * ((psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp) / 10.0 + d0 * d4 * (a_tmp * a_tmp) * (a_tmp_tmp * a_tmp_tmp) / 20.0)
    + d0 * d4 * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + psi * the
    * sin(theta1) * (((((d3 * the * (a_tmp * a_tmp) / 10.0 - d3 * the * (b_a_tmp
    * b_a_tmp) / 10.0) + d57 * (b_a_tmp * b_a_tmp) * (c_a_tmp * c_a_tmp) / 20.0)
    - d3 * the * (a_tmp * a_tmp) * (a_tmp_tmp * a_tmp_tmp) / 20.0) - d3 * the *
    (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + d2 * d0 * the * (a_tmp_tmp *
    a_tmp_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - d53) + psi * the * cos
    (theta1) * ((psi * the * cos(theta1) * cos(theta2) * (d3 * cos(theta1) * cos
    (theta2) * sin(theta1) - d5 * cos(theta1) * cos(theta2) * sin(theta1)) /
    20.0 - psi * the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp)
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) + psi * the * cos
    (theta1) * sin(theta2) * (d3 * cos(theta1) * sin(theta1) * sin(theta2) - d5 *
    cos(theta1) * sin(theta1) * sin(theta2)) / 20.0)) - d63) - phi * psi * sin
    (theta1) * ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp_tmp * a_tmp_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp)
    * (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + n_C_33_tmp) + phi * psi * sin(theta1)
    * ((phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) +
    psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + phi * psi * cos
    (theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2)
    * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin
    (theta1)) / 20.0) + phi * psi * sin(theta1) * sin(theta2) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0)) - o_C_33_tmp) -
    p_C_33_tmp) + psi * the * sin(theta1) * (phi * phi * (psi * psi) * the *
    (a_tmp * a_tmp) / 20.0 - phi * phi * (psi * psi) * the * (b_a_tmp * b_a_tmp)
    / 20.0) / 2.0) + q_C_33_tmp) - r_C_33_tmp) - s_C_33_tmp) + phi * psi * cos
    (theta1) * (((phi * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi *
    sin(theta1) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi *
    (the * the) * (a_tmp * a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp *
    b_a_tmp)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 20.0) - phi *
    psi * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) -
    psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0) + phi * psi *
    cos(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) -
    2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) / 10.0)) + 7.0 *
    (phi * phi) * psi * the * (3.0 * cos(theta2) * sin(theta1) * sin(theta3) /
    20.0 + 3.0 * cos(theta3) * sin(theta1) * sin(theta2) / 20.0) * (cos(theta1) *
    (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) *
    cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin
    (theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1)
    / 10.0)) / 40.0) + 7.0 * (phi * phi) * psi * the * (3.0 * sin(theta1) * sin
    (theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1)
    / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * cos(theta2) * sin(theta3) /
    10.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 10.0) + sin(theta1) *
    (3.0 * cos(theta2) * sin(theta1) * sin(theta3) / 10.0 + 3.0 * cos(theta3) *
    sin(theta1) * sin(theta2) / 10.0)) / 40.0) - 7.0 * (phi * phi) * psi * (the *
    the) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos
    (theta1) * cos(theta2) * cos(theta3) / 20.0) * (cos(theta1) * (3.0 * cos
    (theta1) * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta1) * cos(theta3)
    * sin(theta2) / 10.0) + sin(theta1) * (3.0 * cos(theta2) * sin(theta1) * sin
    (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta1) * sin(theta2) / 10.0)) /
    40.0) - 7.0 * (phi * phi) * psi * (the * the) * (3.0 * cos(theta1) * cos
    (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2)
    / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) /
    10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) *
    (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta2) *
    cos(theta3) * sin(theta1) / 10.0)) / 40.0) + 3.0 * (psi * psi) * (the * the)
                       * (a_tmp * a_tmp) * (3.0 * cos(theta2) * cos(theta3) /
    10.0 - 3.0 * sin(theta2) * sin(theta3) / 10.0) * ((3.0 * cos(theta2) * sin
    (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 2.0) +
                      3.0 * (phi * phi) * (psi * psi) * (b_a_tmp * b_a_tmp) *
                      (3.0 * cos(theta2) * cos(theta3) / 10.0 - 3.0 * sin(theta2)
                       * sin(theta3) / 10.0) * ((3.0 * cos(theta2) * sin(theta3)
    / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 2.0) + phi * phi *
                     rt_powd_snf(psi, 3.0) * the * cos(theta1) * (b_a_tmp *
    b_a_tmp) / 40.0) + rb_C_33_tmp) + psi * psi * (the * the) * (a_tmp * a_tmp) *
                   k_C_33_tmp * l_a_tmp / 2.0) + phi * phi * (psi * psi) *
                  (b_a_tmp * b_a_tmp) * k_C_33_tmp * l_a_tmp / 2.0) -
                 sb_C_33_tmp) + phi * phi * rt_powd_snf(psi, 3.0) * (the * the) *
                (a_tmp * a_tmp) * sin(theta1) / 40.0) + tb_C_33_tmp) +
              ib_C_33_tmp) - ub_C_33_tmp) + vb_C_33_tmp) - wb_C_33_tmp) -
          nb_C_33_tmp) + h_C_33_tmp) + i_C_33_tmp) - g_C_33_tmp) - j_C_33_tmp) +
     b_C_33_tmp) - c_C_33_tmp;
  d30 = 2.0 * psi * the;
  d31 = 2.0 * phi * psi;
  d36 = d31 * a_tmp;
  d37 = d30 * b_a_tmp;
  d47 = d30 * a_tmp;
  d50 = d31 * b_a_tmp;
  C_33[1] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((phi * (((((phi * psi * sin(theta1) * (phi * phi * (psi *
    psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    10.0 - phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) *
    cos(theta3) * sin(theta1)) * (((phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - psi * psi * (the * the) * cos(theta1) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3))) - phi *
    phi * (psi * psi) * sin(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) + psi * psi * (the * the) * sin
    (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) / 20.0) - phi * psi * (cos(theta2) * sin(theta1) *
    sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (((phi * phi * (psi
    * psi) * cos(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1)
    * cos(theta3) * sin(theta2)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2))) - phi * phi * (psi * psi) * sin(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) + psi *
    psi * (the * the) * sin(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + phi * psi * (cos(theta1)
    * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi)
    * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) + phi * psi * (cos(theta1) * sin(theta2) *
    sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) *
    cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) + d19 / 10.0) / 2.0 - phi * (((((phi * psi * sin(theta1) *
    sin(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin(theta2) -
    psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi * phi * (psi *
    psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0 - phi * psi * cos(theta1) * (2.0 *
    (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) *
    (the * the) * cos(theta1) * sin(theta1)) / 10.0) - phi * psi * sin(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0) + phi * psi * cos(theta1) * cos(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + phi * psi *
    cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin
    (theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin(theta1)
    * sin(theta2)) / 20.0) + phi * psi * cos(theta2) * sin(theta1) * (((phi *
    phi * (psi * psi) * (a_tmp * a_tmp) * cos(theta2) - psi * psi * (the * the) *
    (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos(theta2) *
    (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos(theta2) * (b_a_tmp *
    b_a_tmp)) / 20.0) / 2.0) + phi * (((phi * psi * sin(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0 - phi * psi * sin(theta1) * (((phi * phi * (psi * psi) * (a_tmp *
    a_tmp) - psi * psi * (the * the) * (a_tmp * a_tmp)) - phi * phi * (psi * psi)
    * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    20.0) - d60 / 20.0) + d19 / 10.0) / 2.0) + phi * the * (d32 * d25 / 20.0 +
    d39 * d29 / 20.0) / 2.0) + the * sin(theta1) * (d32 * (d33 - d34) / 20.0 +
    d39 * (d40 - d41) / 20.0) / 2.0) + the * sin(theta1) * (d26 * sin(theta2) *
    (d44 - d46) / 20.0 - d26 * cos(theta2) * (d48 - d49) / 20.0) / 2.0) + phi *
    the * (d26 * cos(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) *
    sin(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi
    * phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0 - d26 * sin(theta2) *
    (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * cos(theta2) - psi * psi *
    (the * the) * (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos
    (theta2) * (b_a_tmp * b_a_tmp)) + d140 * (b_a_tmp * b_a_tmp)) / 20.0) / 2.0)
    + phi * the * (cos(theta1) * (d76 * sin(theta3) / 10.0 + d75 * sin(theta2) /
    10.0) + sin(theta1) * (d116 * sin(theta3) / 10.0 + d118 * sin(theta2) / 10.0))
    / 2.0) + phi * the * cos(theta1) * (phi * the * sin(theta2) * (d6 * cos
    (theta2) * sin(theta1) - d7 * cos(theta2) * sin(theta1)) / 20.0 - phi * the *
    cos(theta2) * (d6 * sin(theta1) * sin(theta2) - d7 * sin(theta1) * sin
    (theta2)) / 20.0) / 2.0) + d141) - 3.0 * psi * the * sin(theta1) * (2.0 *
    (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) *
    (the * the) * cos(theta1) * sin(theta1)) / 20.0) + psi * the * sin(theta1) *
    (((psi * the * (e_a_tmp_tmp * sin(theta3) - e_a_tmp * cos(theta3)) * (d61 *
    sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - d64 *
    sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))) /
    20.0 + psi * the * (e_a_tmp * sin(theta3) + b_a_tmp_tmp * sin(theta2)) *
    (d61 * sin(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))
    - d64 * sin(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)))
    / 20.0) - phi * psi * the * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3)) * (d0 * d4 * sin(theta1) * (e_a_tmp * sin(theta3) + b_a_tmp_tmp *
    sin(theta2)) - d2 * d0 * cos(theta1) * (h_a_tmp_tmp * sin(theta3) +
    i_a_tmp_tmp * sin(theta2))) / 20.0) - phi * psi * the * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2)) * (d0 * d4 * sin(theta1) * (cos(theta1)
    * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - d2 *
    d0 * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) *
    cos(theta3) * sin(theta1))) / 20.0) / 2.0) + d13) + d37 * (((psi * the * sin
    (theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1)) / 20.0 - psi * the * sin(theta1) *
    (2.0 * d2 * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * d0 * (the * the)
    * cos(theta1) * sin(theta1)) / 10.0) - psi * the * cos(theta1) * (((phi *
    phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp *
    a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 20.0) + psi * the * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0)) - d134) - d66 * d126 / 2.0) - d139) - d36 * (((((phi * psi * sin
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi * (sin(theta1) * sin(theta2) *
    sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) * (((phi * phi * (psi
    * psi) * cos(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1)
    * cos(theta2) * cos(theta3)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3))) - phi * phi * (psi * psi) * sin(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) + psi *
    psi * (the * the) * sin(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) - phi * psi * (cos(theta2)
    * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) *
    (((phi * phi * (psi * psi) * cos(theta1) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - psi * psi * (the * the)
    * cos(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2))) - phi * phi * (psi * psi) * sin(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) + psi * psi * (the * the) * sin(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) +
    phi * psi * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) +
    phi * psi * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) +
    phi * psi * cos(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) *
    sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) /
    10.0)) + d28) + d47 * ((psi * the * sin(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 +
    psi * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) +
    psi * the * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0))
    + d36 * (((((phi * psi * sin(theta1) * sin(theta2) * (((phi * phi * (psi *
    psi) * (a_tmp * a_tmp) * sin(theta2) - psi * psi * (the * the) * (a_tmp *
    a_tmp) * sin(theta2)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin
    (theta2)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp) * sin(theta2)) /
    20.0 - phi * psi * cos(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos
    (theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin
    (theta1)) / 10.0) - phi * psi * sin(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) +
    phi * psi * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1)
    * cos(theta2) * sin(theta1)) / 20.0) + phi * psi * cos(theta1) * sin(theta2)
    * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi *
    psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) + phi *
    psi * cos(theta2) * sin(theta1) * (((phi * phi * (psi * psi) * (a_tmp *
    a_tmp) * cos(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * cos
    (theta2)) - phi * phi * (psi * psi) * cos(theta2) * (b_a_tmp * b_a_tmp)) +
    psi * psi * (the * the) * cos(theta2) * (b_a_tmp * b_a_tmp)) / 20.0)) - psi *
    the * cos(theta1) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi
    * (the * the) * (a_tmp * a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp *
    b_a_tmp)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 40.0) - d37 *
    (((((psi * the * sin(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1)
    * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1))
    / 10.0 + psi * the * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) *
    sin(theta1) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) +
    psi * the * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) +
    psi * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) * (((phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - psi * psi * (the * the) * cos(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2))) - phi *
    phi * (psi * psi) * sin(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) + psi * psi * (the * the) * sin
    (theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) + psi * the * (cos(theta1) * sin(theta2) *
    sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (((phi * phi * (psi
    * psi) * cos(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1)
    * cos(theta2) * cos(theta3)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3))) - phi * phi * (psi * psi) * sin(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) + psi *
    psi * (the * the) * sin(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) - psi * the * cos(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0)) + d47 * (psi * the * sin(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0 - psi * the * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0))
    - d50 * (phi * psi * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0 +
    phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0)) - psi * the * (cos(theta2)
    * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi)
    * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 40.0) - ab_C_33_tmp) + d50 * ((phi * psi * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
    phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0 + phi * psi * (sin(theta1) *
    sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) * (psi *
    psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos
    (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) / 20.0) - phi * psi * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0)) - phi * psi * cos(theta1) * (phi * psi * sin(theta1) * sin(theta2) *
    (phi * (the * the) * cos(theta2) * sin(theta1) - phi * (psi * psi) * (the *
    the) * cos(theta2) * sin(theta1)) / 20.0 - phi * psi * cos(theta2) * sin
    (theta1) * (phi * (the * the) * sin(theta1) * sin(theta2) - phi * (psi * psi)
    * (the * the) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - d37 * (((((psi *
    the * sin(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) * sin
    (theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) /
    10.0 - psi * the * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp)
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) + psi * the * cos
    (theta1) * sin(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin
    (theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0) - psi * the * cos(theta2) *
    sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin
    (theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
    / 20.0) + psi * the * cos(theta1) * cos(theta2) * (((phi * phi * (psi * psi)
    * (a_tmp * a_tmp) * cos(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) *
    cos(theta2)) - phi * phi * (psi * psi) * cos(theta2) * (b_a_tmp * b_a_tmp))
    + psi * psi * (the * the) * cos(theta2) * (b_a_tmp * b_a_tmp)) / 20.0) - psi
    * the * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1) * sin(theta2)) / 20.0)) - phi * psi * cos(theta1) * (((phi * psi *
    sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin
    (theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
    / 20.0 - phi * psi * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1) * sin(theta2)) / 20.0) - phi * psi * sin(theta1) * sin(theta2) *
    (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) - phi * phi * (the *
    the) * cos(theta1) * cos(theta2)) / 20.0) + phi * psi * cos(theta2) * sin
    (theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta2) - phi * phi *
    (the * the) * cos(theta1) * sin(theta2)) / 20.0) / 2.0) + d53) - d47 * ((psi
    * the * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos
    (theta2) * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (phi * phi * (psi
    * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    10.0) + psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1) * sin(theta2)) / 20.0)) + d63) - d50 * ((phi * psi *
    cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 + phi * psi * cos(theta2) * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + phi *
    psi * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1) * sin(theta2)) / 20.0)) - o_C_33_tmp) - p_C_33_tmp) - bb_C_33_tmp)
    - cb_C_33_tmp) + q_C_33_tmp) - s_C_33_tmp) - d36 * (((phi * psi * sin(theta1)
    * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi * sin(theta1) * (((phi * phi * (psi *
    psi) * (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp * a_tmp)) - phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 20.0) - phi * psi * cos(theta1) * (phi * phi * (psi *
    psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) *
    sin(theta1)) / 20.0) + phi * psi * cos(theta1) * (2.0 * (phi * phi) * (psi *
    psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos
    (theta1) * sin(theta1)) / 10.0)) + 3.0 * psi * the * cos(theta1) * (phi *
    phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp)) / 20.0) - d68) + phi * phi * (psi * psi) * cos(theta1) * sin
    (theta1) * (l_a_tmp * l_a_tmp)) - psi * the * cos(theta1) * sin(theta2) *
    (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin(theta2) - psi * psi *
    (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi * phi * (psi * psi) *
    (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp) * sin(theta2)) / 40.0) - psi * psi * (the * the) * cos(theta1) *
    sin(theta1) * (l_a_tmp * l_a_tmp)) - d84 / 40.0) - 7.0 * (phi * phi) * psi *
    the * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos
    (theta2) * cos(theta3) * sin(theta1) / 20.0) * (cos(theta1) * (3.0 * cos
    (theta1) * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta1) * cos(theta3)
    * sin(theta2) / 10.0) + sin(theta1) * (3.0 * cos(theta2) * sin(theta1) * sin
    (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta1) * sin(theta2) / 10.0)) /
    40.0) + d90 * d52 / 40.0) + 3.0 * (phi * phi) * psi * (the * the) * sin
    (theta1) * (t_a_tmp_tmp + q_a_tmp_tmp) / 400.0) - d8 * d52 * ((p_a_tmp_tmp +
    q_a_tmp_tmp) - 0.1) / 2.0) + db_C_33_tmp * (d38 + d51) * ((b_a_tmp_tmp_tmp /
    10.0 + d_a_tmp_tmp_tmp / 10.0) - 0.1) / 2.0) + d73 * d4 * (d100 / 20.0 -
    d102 / 20.0) * (cos(theta1) * (d120 + d121) + sin(theta1) * (d122 + d123)) /
    40.0) + d73 * d4 * (d76 * d_a_tmp / 20.0 + d75 * c_a_tmp / 20.0) * (cos
    (theta1) * (d100 / 10.0 - d102 / 10.0) + sin(theta1) * (d106 / 10.0 - d108 /
    10.0)) / 40.0) - d2 * d0 * sin(theta1) * (cos(theta1) * (d101 - d103) + sin
    (theta1) * (d107 - d109)) * ((3.0 * a_tmp_tmp * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0) + d2 *
    d4 * sin(theta1) * (cos(theta1) * (d100 / 10.0 - d102 / 10.0) + sin(theta1) *
    (d106 / 10.0 - d108 / 10.0)) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 -
    3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0) -
    psi * psi * (the * the) * (a_tmp * a_tmp) * (3.0 * cos(theta2) * cos(theta3)
    / 10.0 - 3.0 * sin(theta2) * sin(theta3) / 10.0) * k_a_tmp / 2.0) - phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp) * (3.0 * cos(theta2) * cos(theta3) /
    10.0 - 3.0 * sin(theta2) * sin(theta3) / 10.0) * k_a_tmp / 2.0) + psi * the *
    cos(theta2) * sin(theta1) * (d2 * d0 * cos(theta1) * cos(theta2) * sin
    (theta1) - d0 * d4 * cos(theta1) * cos(theta2) * sin(theta1)) / 40.0) -
    rb_C_33_tmp) + d_C_33_tmp) - psi * the * cos(theta1) * cos(theta2) * (((phi *
    phi * (psi * psi) * (a_tmp * a_tmp) * cos(theta2) - psi * psi * (the * the) *
    (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos(theta2) *
    (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos(theta2) * (b_a_tmp *
    b_a_tmp)) / 40.0) + psi * psi * (the * the) * (a_tmp * a_tmp) * (3.0 * cos
    (theta2) * cos(theta3) / 10.0 - 3.0 * sin(theta2) * sin(theta3) / 10.0) *
    ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 *
    cos(theta3) * sin(theta2) / 10.0) / 2.0) + eb_C_33_tmp) + phi * phi * (psi *
    psi) * (b_a_tmp * b_a_tmp) * (3.0 * cos(theta2) * cos(theta3) / 10.0 - 3.0 *
    sin(theta2) * sin(theta3) / 10.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0
    - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0)
    + hb_C_33_tmp) - t_C_33_tmp) + sb_C_33_tmp) - u_C_33_tmp) + e_C_33_tmp) -
    tb_C_33_tmp) - ib_C_33_tmp) + d16 * k_a_tmp * l_a_tmp) - d17 * k_a_tmp *
    l_a_tmp) + ub_C_33_tmp) + C_33_tmp) - lb_C_33_tmp) - mb_C_33_tmp) -
                    vb_C_33_tmp) + wb_C_33_tmp) + nb_C_33_tmp) - f_C_33_tmp) -
                h_C_33_tmp) - i_C_33_tmp) + v_C_33_tmp) + g_C_33_tmp) +
            j_C_33_tmp) + ob_C_33_tmp) - b_C_33_tmp) + pb_C_33_tmp) + w_C_33_tmp)
       + qb_C_33_tmp) + c_C_33_tmp) + kb_C_33_tmp) - jb_C_33_tmp;
  C_33[4] = ((((((((((((((((((((((((((((((((((the * sin(theta1) * (phi * the *
    (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0 + phi * the * (cos(theta2) * sin(theta3) + cos(theta3) *
    sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi *
    phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) / 2.0 + the * sin(theta1) *
    (phi * the * sin(theta2) * (d2 * d0 * cos(theta1) * cos(theta2) * sin(theta1)
    - d0 * d4 * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0 - phi * the *
    cos(theta2) * (d2 * d0 * cos(theta1) * sin(theta1) * sin(theta2) - d0 * d4 *
    cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) + phi * the * cos
    (theta1) * (phi * the * sin(theta2) * (d2 * d0 * cos(theta1) * cos(theta2) *
    sin(theta1) - d0 * d4 * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0 -
    phi * the * cos(theta2) * (d2 * d0 * cos(theta1) * sin(theta1) * sin(theta2)
    - d0 * d4 * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) + psi *
    the * sin(theta1) * (((psi * the * (cos(theta1) * sin(theta2) * sin(theta3)
    - cos(theta1) * cos(theta2) * cos(theta3)) * (phi * (the * the) * sin(theta1)
    * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - phi * d0 * (the *
    the) * sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)))
    / 20.0 + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) * (phi * (the * the) * sin(theta1) * (cos(theta2)
    * cos(theta3) - sin(theta2) * sin(theta3)) - phi * d0 * (the * the) * sin
    (theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) / 20.0)
    - phi * psi * the * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi)
    * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) - phi * psi * the * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) / 2.0) + psi * the * sin(theta1) * (((psi * the * sin
    (theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1)) / 20.0 - psi * the * sin(theta1) *
    (2.0 * d2 * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * d0 * (the * the)
    * cos(theta1) * sin(theta1)) / 10.0) - psi * the * cos(theta1) * (((phi *
    phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp *
    a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 20.0) + psi * the * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0) / 2.0) - d134) - d139) - phi * psi * cos(theta1) * (((((phi * psi *
    sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi * (sin(theta1) * sin(theta2) *
    sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) * (((phi * phi * (psi
    * psi) * cos(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1)
    * cos(theta2) * cos(theta3)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3))) - phi * phi * (psi * psi) * sin(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) + psi *
    psi * (the * the) * sin(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) - phi * psi * (cos(theta2)
    * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) *
    (((phi * phi * (psi * psi) * cos(theta1) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - psi * psi * (the * the)
    * cos(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2))) - phi * phi * (psi * psi) * sin(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) + psi * psi * (the * the) * sin(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) +
    phi * psi * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) +
    phi * psi * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) +
    phi * psi * cos(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) *
    sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) /
    10.0) / 2.0) + d27) + psi * the * cos(theta1) * ((psi * the * sin(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0 + psi * the * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) / 2.0) + phi * psi * cos(theta1) * (((((phi * psi * sin
    (theta1) * sin(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin
    (theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0 - phi * psi * cos(theta1) *
    (2.0 * (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi *
    psi) * (the * the) * cos(theta1) * sin(theta1)) / 10.0) - phi * psi * sin
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0) + phi * psi * cos(theta1) * cos(theta2) *
    (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + phi *
    psi * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1) * sin(theta2)) / 20.0) + phi * psi * cos(theta2) * sin(theta1) *
    (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * cos(theta2) - psi * psi *
    (the * the) * (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos
    (theta2) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos(theta2) *
    (b_a_tmp * b_a_tmp)) / 20.0) / 2.0) - psi * the * sin(theta1) * (((((psi *
    the * sin(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) * sin
    (theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) /
    10.0 + psi * the * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) *
    sin(theta1) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) +
    psi * the * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) +
    psi * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) * (((phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - psi * psi * (the * the) * cos(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2))) - phi *
    phi * (psi * psi) * sin(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) + psi * psi * (the * the) * sin
    (theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) + psi * the * (cos(theta1) * sin(theta2) *
    sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (((phi * phi * (psi
    * psi) * cos(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1)
    * cos(theta2) * cos(theta3)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3))) - phi * phi * (psi * psi) * sin(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) + psi *
    psi * (the * the) * sin(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) - psi * the * cos(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + psi * the * cos(theta1) * (psi * the *
    sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the * cos(theta1) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1)) / 20.0) / 2.0) - phi * psi * sin(theta1) * (phi *
    psi * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) -
    psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0 + phi * psi *
    cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + phi * psi * sin(theta1) * ((phi
    * psi * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1)
    * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
    phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0 + phi * psi * (sin(theta1) *
    sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) * (psi *
    psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos
    (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) / 20.0) - phi * psi * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0) / 2.0) - phi * psi * cos(theta1) * (phi * psi * sin(theta1) * sin
    (theta2) * (phi * (the * the) * cos(theta2) * sin(theta1) - phi * (psi * psi)
    * (the * the) * cos(theta2) * sin(theta1)) / 20.0 - phi * psi * cos(theta2) *
    sin(theta1) * (phi * (the * the) * sin(theta1) * sin(theta2) - phi * (psi *
    psi) * (the * the) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - psi * the *
    sin(theta1) * (((((psi * the * sin(theta1) * (2.0 * (phi * phi) * (psi * psi)
    * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) *
    sin(theta1)) / 10.0 - psi * the * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) +
    psi * the * cos(theta1) * sin(theta2) * (((phi * phi * (psi * psi) * (a_tmp *
    a_tmp) * sin(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin
    (theta2)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) +
    psi * psi * (the * the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0) - psi *
    the * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
    cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos
    (theta2) * sin(theta1)) / 20.0) + psi * the * cos(theta1) * cos(theta2) *
    (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * cos(theta2) - psi * psi *
    (the * the) * (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos
    (theta2) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos(theta2) *
    (b_a_tmp * b_a_tmp)) / 20.0) - psi * the * sin(theta1) * sin(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi *
    psi * cos(theta1) * (((phi * psi * sin(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos
    (theta1) * cos(theta2) * sin(theta1)) / 20.0 - phi * psi * cos(theta2) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi *
    psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) - phi *
    psi * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    cos(theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2)) / 20.0) +
    phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta2) - phi * phi * (the * the) * cos(theta1) * sin(theta2))
    / 20.0) / 2.0) + d71 * d52 * d69) - psi * the * cos(theta1) * ((psi * the *
    cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
    * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) +
    psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi * psi * sin(theta1) *
    ((phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi
    * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + phi * psi * cos(theta2) *
      sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin
                     (theta1) - psi * psi * (the * the) * cos(theta1) * cos
                     (theta2) * sin(theta1)) / 20.0) + phi * psi * sin(theta1) *
     sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin
                    (theta2) - psi * psi * (the * the) * cos(theta1) * sin
                    (theta1) * sin(theta2)) / 20.0) / 2.0) - o_C_33_tmp) -
    p_C_33_tmp) + q_C_33_tmp) - s_C_33_tmp) - phi * psi * cos(theta1) * (((phi *
    psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi * sin(theta1) * (((phi
    * phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp *
    a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 20.0) - phi * psi * cos(theta1) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1)) / 20.0) + phi * psi * cos(theta1) * (2.0 * (phi *
    phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the *
    the) * cos(theta1) * sin(theta1)) / 10.0) / 2.0) - phi * phi * (psi * psi) *
                     (b_a_tmp * b_a_tmp) * l_C_33_tmp * l_a_tmp) + phi * phi *
                    (psi * psi) * cos(theta1) * sin(theta1) * (l_a_tmp * l_a_tmp))
                   - psi * psi * (the * the) * cos(theta1) * sin(theta1) *
                   (l_a_tmp * l_a_tmp)) - C_33_tmp_tmp * l_a_tmp) - phi * phi *
                 (psi * psi) * sin(theta1) * (cos(theta1) * ((3.0 * cos(theta1) *
    cos(theta2) / 10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) -
    3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 *
    cos(theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin
    (theta3) / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) *
                 l_a_tmp) + phi * phi * (the * the) * sin(theta1) * (cos(theta1)
    * ((3.0 * cos(theta1) * cos(theta2) / 10.0 + 3.0 * cos(theta1) * sin(theta2)
        * sin(theta3) / 10.0) - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) /
       10.0) + sin(theta1) * ((3.0 * cos(theta2) * sin(theta1) / 10.0 + 3.0 *
    sin(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta2) * cos
    (theta3) * sin(theta1) / 10.0)) * l_a_tmp) + psi * psi * (the * the) *
               (a_tmp * a_tmp) * (3.0 * cos(theta2) * cos(theta3) / 10.0 - 3.0 *
    sin(theta2) * sin(theta3) / 10.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0
    - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0)) + phi
              * phi * (psi * psi) * (b_a_tmp * b_a_tmp) * (3.0 * cos(theta2) *
    cos(theta3) / 10.0 - 3.0 * sin(theta2) * sin(theta3) / 10.0) * ((3.0 * cos
    (theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3)
    * sin(theta2) / 10.0)) - psi * psi * (the * the) * (a_tmp * a_tmp) *
             l_C_33_tmp * l_a_tmp) + b_C_33_tmp_tmp * l_a_tmp;
  k_C_33_tmp = d81 * d52 / 40.0;
  l_C_33_tmp = 7.0 * (phi * phi) * psi * (the * the) * (3.0 * cos(theta1) * cos
    (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2)
    / 20.0) * d52 / 40.0;
  m_C_33_tmp = d_C_33_tmp_tmp * l_a_tmp / 40.0;
  n_C_33_tmp = e_C_33_tmp_tmp * l_a_tmp / 40.0;
  r_C_33_tmp = c_C_33_tmp_tmp * l_a_tmp / 40.0;
  t_C_33_tmp = r_a_tmp_tmp * l_a_tmp / 40.0;
  C_33[7] = ((((((((((((((((((((((((((((((((((((((((((((((((d15 - d20 / 2.0) +
    d56 / 2.0) + d67 * d130 / 2.0) + d67 * (((psi * the * sin(theta1) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) *
    cos(theta1) * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (2.0 * (phi *
    phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the *
    the) * cos(theta1) * sin(theta1)) / 10.0) - psi * the * cos(theta1) * (((phi
    * phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp *
    a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 20.0) + psi * the * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0) / 2.0) - d58 * sin(theta1) * (d132 / 20.0 - d133 / 20.0) / 2.0) +
    d71 * (d111 + d112) * (cos(theta1) * d124 + sin(theta1) * d125) / 2.0) - psi
    * the * sin(theta1) * (d137 * h_a_tmp / 20.0 + d138 * g_a_tmp / 20.0) / 2.0)
    - phi * psi * cos(theta1) * (((((phi * psi * sin(theta1) * (phi * phi * (psi
    * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    10.0 - d142) - d143 / 20.0) + d144 * d35 / 20.0) + d145 * d42 / 20.0) + d1 *
    a_tmp * (d16 - d17) / 10.0) / 2.0) + 3.0 * d2 * (the * the) * (cos(theta1) *
    (d120 + d121) + sin(theta1) * (d122 + d123)) * (cos(theta1) * ((d76 / 10.0 +
    d100 / 10.0) - d76 * f_a_tmp / 10.0) + sin(theta1) * ((d116 / 10.0 + d106 /
    10.0) - d98 * b_a_tmp / 10.0)) / 2.0) + psi * the * cos(theta1) * ((d58 *
    sin(theta1) * (d3 * (a_tmp * a_tmp) + d5 * (b_a_tmp * b_a_tmp)) / 10.0 + d58
    * g_a_tmp * (d9 * g_a_tmp - d6 * i_a_tmp) / 20.0) + psi * the * (f_a_tmp_tmp
    - g_a_tmp_tmp) * (d9 * h_a_tmp - d6 * j_a_tmp) / 20.0) / 2.0) + phi * psi *
    cos(theta1) * (((((d82 * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin
    (theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0 - d11 * d18 / 10.0) - d1 *
    b_a_tmp * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0) + d11 * cos(theta2) * (d43 * b_a_tmp -
    d45 * b_a_tmp) / 20.0) + d1 * a_tmp * sin(theta2) * (d21 * sin(theta2) - d22
    * sin(theta2)) / 20.0) + d1 * cos(theta2) * sin(theta1) * (((phi * phi *
    (psi * psi) * (a_tmp * a_tmp) * a_tmp_tmp - psi * psi * (the * the) * (a_tmp
    * a_tmp) * a_tmp_tmp) - d146 * (b_a_tmp * b_a_tmp)) + d5 * a_tmp_tmp *
    (b_a_tmp * b_a_tmp)) / 20.0) / 2.0) - psi * the * sin(theta1) * (((((d58 *
    b_a_tmp * (d16 - d17) / 10.0 + d58 * i_a_tmp * (d33 - d34) / 20.0) + d58 *
    j_a_tmp * (d9 * h_a_tmp - d6 * j_a_tmp) / 20.0) + psi * the * (c_a_tmp_tmp +
    d_a_tmp_tmp) * (((d23 - d24) - d8 * i_a_tmp) + d9 * i_a_tmp) / 20.0) + psi *
    the * (e_a_tmp_tmp * d_a_tmp - e_a_tmp * f_a_tmp) * (((d6 * h_a_tmp - d7 *
    h_a_tmp) - d8 * j_a_tmp) + d5 * b_a_tmp * (n_a_tmp_tmp - o_a_tmp_tmp)) /
    20.0) - psi * the * cos(theta1) * (d2 * d0 * (a_tmp * a_tmp) + d0 * d4 *
    (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + psi * the * cos(theta1) * (psi * the *
    sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the * cos(theta1) * (d2 * d0 *
    cos(theta1) * sin(theta1) - d0 * d4 * cos(theta1) * sin(theta1)) / 20.0) /
    2.0) - phi * psi * sin(theta1) * (phi * psi * sin(theta1) * (d2 * d0 * cos
    (theta1) * sin(theta1) - d0 * d4 * cos(theta1) * sin(theta1)) / 20.0 + phi *
    psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + phi * psi * sin(theta1) *
    ((phi * psi * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2)) * (d0 * d4 * sin(theta1) * (a_tmp * a_tmp_tmp * sin
    (theta3) + a_tmp * f_a_tmp * sin(theta2)) - d2 * d0 * cos(theta1) *
    (a_tmp_tmp * b_a_tmp * sin(theta3) + f_a_tmp * b_a_tmp * sin(theta2))) /
    20.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) *
    cos(theta3) * sin(theta1)) * (d0 * d4 * sin(theta1) * (a_tmp * c_a_tmp * sin
    (theta3) - a_tmp * a_tmp_tmp * cos(theta3)) - d2 * d0 * cos(theta1) *
    (b_a_tmp * c_a_tmp * sin(theta3) - a_tmp_tmp * f_a_tmp * sin(theta1))) /
    20.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp)
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) - phi * psi *
    cos(theta1) * (phi * psi * sin(theta1) * sin(theta2) * (phi * (the * the) *
    cos(theta2) * sin(theta1) - phi * d0 * (the * the) * cos(theta2) * sin
    (theta1)) / 20.0 - phi * psi * cos(theta2) * sin(theta1) * (phi * (the * the)
    * sin(theta1) * sin(theta2) - phi * d0 * (the * the) * sin(theta1) * sin
    (theta2)) / 20.0) / 2.0) - psi * the * sin(theta1) * (((((psi * the * sin
    (theta1) * (d12 * d0 * cos(theta1) * sin(theta1) - d14 * d4 * cos(theta1) *
    sin(theta1)) / 10.0 - psi * the * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) +
    psi * the * cos(theta1) * sin(theta2) * (((d3 * (a_tmp * a_tmp) * sin(theta2)
    - d5 * (a_tmp * a_tmp) * sin(theta2)) - d2 * d0 * (b_a_tmp * b_a_tmp) * sin
    (theta2)) + d0 * d4 * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0) - psi * the
    * cos(theta2) * sin(theta1) * (d2 * d0 * cos(theta1) * cos(theta2) * sin
    (theta1) - d0 * d4 * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + psi *
    the * cos(theta1) * cos(theta2) * (((d2 * d0 * (a_tmp * a_tmp) * cos(theta2)
    - d0 * d4 * (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos
    (theta2) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos(theta2) *
    (b_a_tmp * b_a_tmp)) / 20.0) - psi * the * sin(theta1) * sin(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi *
    psi * cos(theta1) * (((phi * psi * sin(theta2) * (d2 * d0 * cos(theta1) *
    cos(theta2) * sin(theta1) - d0 * d4 * cos(theta1) * cos(theta2) * sin(theta1))
    / 20.0 - phi * psi * cos(theta2) * (d2 * d0 * cos(theta1) * sin(theta1) *
    sin(theta2) - d0 * d4 * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) -
    phi * psi * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2))
    / 20.0) + phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta2) - phi * phi * (the * the) * cos(theta1) * sin
    (theta2)) / 20.0) / 2.0) - d53) - psi * the * cos(theta1) * ((psi * the *
    cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
    * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) +
    psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - d63) - phi * psi * sin(theta1)
    * ((phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) +
    psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + phi * psi * cos
    (theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2)
    * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin
    (theta1)) / 20.0) + phi * psi * sin(theta1) * sin(theta2) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - o_C_33_tmp)
    - p_C_33_tmp) + q_C_33_tmp) - s_C_33_tmp) - phi * psi * cos(theta1) * (((phi
    * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi
    * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi * sin(theta1) *
    (((phi * phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) *
    (a_tmp * a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 20.0) - phi * psi * cos(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 20.0) + phi * psi * cos(theta1) * (2.0 *
    (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) *
    (the * the) * cos(theta1) * sin(theta1)) / 10.0) / 2.0) + 7.0 * (phi * phi) *
    psi * the * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 *
    cos(theta2) * cos(theta3) * sin(theta1) / 20.0) * (cos(theta1) * (3.0 * cos
    (theta1) * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta1) * cos(theta3)
    * sin(theta2) / 10.0) + sin(theta1) * (3.0 * cos(theta2) * sin(theta1) * sin
    (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta1) * sin(theta2) / 10.0)) /
    40.0) + k_C_33_tmp) - 7.0 * (phi * phi) * psi * (the * the) * (3.0 * cos
    (theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2)
    * cos(theta3) / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * cos(theta2) *
    sin(theta3) / 10.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 10.0) +
    sin(theta1) * (3.0 * cos(theta2) * sin(theta1) * sin(theta3) / 10.0 + 3.0 *
    cos(theta3) * sin(theta1) * sin(theta2) / 10.0)) / 40.0) + psi * psi * (the *
    the) * (a_tmp * a_tmp) * (3.0 * cos(theta2) * cos(theta3) / 10.0 - 3.0 * sin
    (theta2) * sin(theta3) / 10.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 +
    3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 2.0) + phi * phi * (psi *
    psi) * (b_a_tmp * b_a_tmp) * (3.0 * cos(theta2) * cos(theta3) / 10.0 - 3.0 *
    sin(theta2) * sin(theta3) / 10.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0
    + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 2.0) - l_C_33_tmp) +
    rb_C_33_tmp) + 3.0 * (psi * psi) * (the * the) * (a_tmp * a_tmp) * (3.0 *
    cos(theta2) * cos(theta3) / 10.0 - 3.0 * sin(theta2) * sin(theta3) / 10.0) *
    ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 *
     cos(theta3) * sin(theta2) / 10.0) / 2.0) + 3.0 * (phi * phi) * (psi * psi) *
    (b_a_tmp * b_a_tmp) * (3.0 * cos(theta2) * cos(theta3) / 10.0 - 3.0 * sin
    (theta2) * sin(theta3) / 10.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 -
    3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0) -
                        sb_C_33_tmp) + tb_C_33_tmp) - ub_C_33_tmp) + m_C_33_tmp)
                    + vb_C_33_tmp) - wb_C_33_tmp) + h_C_33_tmp) - g_C_33_tmp) +
                b_C_33_tmp) - n_C_33_tmp) - c_C_33_tmp) + r_C_33_tmp) -
    t_C_33_tmp;
  C_33[2] =
    ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((phi *
    (((((phi * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) +
    psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1)) * (((phi * phi * (psi * psi) * cos(theta1) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - psi *
    psi * (the * the) * cos(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3))) - phi * phi * (psi * psi) * sin
    (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) + psi * psi * (the * the) * sin(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) - phi * psi * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2)) * (((phi * phi * (psi * psi) * cos
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2))) - phi * phi * (psi * psi) * sin(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) + psi *
    psi * (the * the) * sin(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + phi * psi * (cos(theta1)
    * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi)
    * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) + phi * psi * (cos(theta1) * sin(theta2) *
    sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) *
    cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) + phi * psi * cos(theta1) * (2.0 * (phi * phi) * (psi *
    psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos
    (theta1) * sin(theta1)) / 10.0) / 2.0 - phi * (((((phi * psi * sin(theta1) *
    sin(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin(theta2) -
    psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi * phi * (psi *
    psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0 - phi * psi * cos(theta1) * (2.0 *
    (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) *
    (the * the) * cos(theta1) * sin(theta1)) / 10.0) - phi * psi * sin(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0) + phi * psi * cos(theta1) * cos(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + phi * psi *
    cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin
    (theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin(theta1)
    * sin(theta2)) / 20.0) + phi * psi * cos(theta2) * sin(theta1) * (((phi *
    phi * (psi * psi) * (a_tmp * a_tmp) * cos(theta2) - psi * psi * (the * the) *
    (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos(theta2) *
    (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos(theta2) * (b_a_tmp *
    b_a_tmp)) / 20.0) / 2.0) + phi * (((phi * psi * sin(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0 - phi * psi * sin(theta1) * (((phi * phi * (psi * psi) * (a_tmp *
    a_tmp) - psi * psi * (the * the) * (a_tmp * a_tmp)) - phi * phi * (psi * psi)
    * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    20.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0) +
    phi * psi * cos(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) *
    sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) /
    10.0) / 2.0) + phi * the * (phi * the * (cos(theta2) * cos(theta3) - sin
    (theta2) * sin(theta3)) * (((phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - psi * psi * (the * the) * cos(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2))) - phi *
    phi * (psi * psi) * sin(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) + psi * psi * (the * the) * sin
    (theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0 + phi * the * (cos(theta2) * sin(theta3) +
    cos(theta3) * sin(theta2)) * (((phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - psi * psi * (the * the) * cos(theta1) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3))) - phi *
    phi * (psi * psi) * sin(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) + psi * psi * (the * the) * sin
    (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) / 20.0) / 2.0) + the * sin(theta1) * (phi * the *
    (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0 + phi * the * (cos(theta2) * sin(theta3) + cos(theta3) *
    sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi *
    phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) / 2.0) + the * sin(theta1)
    * (phi * the * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
    * sin(theta1)) / 20.0 - phi * the * cos(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) + phi * the * (phi *
    the * cos(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin
    (theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0 - phi * the * sin(theta2) *
    (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * cos(theta2) - psi * psi *
    (the * the) * (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos
    (theta2) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos(theta2) *
    (b_a_tmp * b_a_tmp)) / 20.0) / 2.0) + phi * the * (cos(theta1) * (3.0 * cos
    (theta1) * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta1) * cos(theta3)
    * sin(theta2) / 10.0) + sin(theta1) * (3.0 * cos(theta2) * sin(theta1) * sin
    (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta1) * sin(theta2) / 10.0)) /
    2.0) + phi * the * cos(theta1) * (phi * the * sin(theta2) * (phi * phi *
    (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0 - phi * the * cos
    (theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2)
    - psi * psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0)
    / 2.0) + psi * the * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 40.0) -
    3.0 * psi * the * sin(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos
    (theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin
    (theta1)) / 20.0) + psi * the * sin(theta1) * (((psi * the * (cos(theta1) *
    sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (phi *
    (the * the) * sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2)) - phi * (psi * psi) * (the * the) * sin(theta1) * (cos(theta2) *
    sin(theta3) + cos(theta3) * sin(theta2))) / 20.0 + psi * the * (cos(theta1) *
    cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (phi *
    (the * the) * sin(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3)) - phi * (psi * psi) * (the * the) * sin(theta1) * (cos(theta2) *
    cos(theta3) - sin(theta2) * sin(theta3))) / 20.0) - phi * psi * the * (cos
    (theta2) * cos(theta3) - sin(theta2) * sin(theta3)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0) - phi * psi * the * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) /
    2.0) + 2.0 * psi * the * sin(theta1) * (((psi * the * sin(theta1) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) *
    cos(theta1) * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (2.0 * (phi *
    phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the *
    the) * cos(theta1) * sin(theta1)) / 10.0) - psi * the * cos(theta1) * (((phi
    * phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp *
    a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 20.0) + psi * the * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0)) - d134) - 3.0 * (phi * phi) * (the * the) * (cos(theta1) * (3.0 *
    cos(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos
    (theta2) * cos(theta3) / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin
    (theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1)
    / 10.0)) * (cos(theta1) * (3.0 * cos(theta1) * cos(theta2) * sin(theta3) /
    10.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 10.0) + sin(theta1) *
    (3.0 * cos(theta2) * sin(theta1) * sin(theta3) / 10.0 + 3.0 * cos(theta3) *
    sin(theta1) * sin(theta2) / 10.0)) / 2.0) - d139) - 2.0 * phi * psi * cos
    (theta1) * (((((phi * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1)) * (((phi * phi * (psi * psi) * cos(theta1) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - psi *
    psi * (the * the) * cos(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3))) - phi * phi * (psi * psi) * sin
    (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) + psi * psi * (the * the) * sin(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) - phi * psi * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2)) * (((phi * phi * (psi * psi) * cos
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2))) - phi * phi * (psi * psi) * sin(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) + psi *
    psi * (the * the) * sin(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + phi * psi * (cos(theta1)
    * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi)
    * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) + phi * psi * (cos(theta1) * sin(theta2) *
    sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) *
    cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) + phi * psi * cos(theta1) * (2.0 * (phi * phi) * (psi *
    psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos
    (theta1) * sin(theta1)) / 10.0)) - d28) + 2.0 * psi * the * cos(theta1) *
    ((psi * the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi
    * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + psi * the * (cos(theta1)
    * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi)
    * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) + psi * the * (cos(theta1) * sin(theta2) *
    sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) *
    cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0)) + 2.0 * phi * psi * cos(theta1) * (((((phi * psi * sin
    (theta1) * sin(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin
    (theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0 - phi * psi * cos(theta1) *
    (2.0 * (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi *
    psi) * (the * the) * cos(theta1) * sin(theta1)) / 10.0) - phi * psi * sin
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0) + phi * psi * cos(theta1) * cos(theta2) *
    (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + phi *
    psi * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1) * sin(theta2)) / 20.0) + phi * psi * cos(theta2) * sin(theta1) *
    (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * cos(theta2) - psi * psi *
    (the * the) * (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos
    (theta2) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos(theta2) *
    (b_a_tmp * b_a_tmp)) / 20.0)) - psi * the * cos(theta1) * (((phi * phi *
    (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp * a_tmp)) -
    phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 40.0) - d37 * (((((psi * the * sin(theta1) * (2.0 *
    (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) *
    (the * the) * cos(theta1) * sin(theta1)) / 10.0 + psi * the * (cos(theta2) *
    sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi *
    psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos
    (theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) + psi * the * (sin(theta1) * sin(theta2) *
    sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) *
    cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2)) * (((phi * phi * (psi * psi) * cos
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2))) - phi * phi * (psi * psi) * sin(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) + psi *
    psi * (the * the) * sin(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + psi * the * (cos(theta1)
    * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) *
    (((phi * phi * (psi * psi) * cos(theta1) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - psi * psi * (the * the)
    * cos(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3))) - phi * phi * (psi * psi) * sin(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) + psi * psi * (the * the) * sin(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) -
    psi * the * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0)) + d30 * a_tmp * (psi * the
    * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the * cos(theta1) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) *
    cos(theta1) * sin(theta1)) / 20.0)) - d31 * sin(theta1) * (phi * psi * sin
    (theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1)) / 20.0 + phi * psi * cos(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0)) - d58 * (j_a_tmp_tmp + k_a_tmp_tmp) * (d9 *
    g_a_tmp - d6 * i_a_tmp) / 40.0) - psi * the * (n_a_tmp_tmp - o_a_tmp_tmp) *
    (d9 * (f_a_tmp_tmp - g_a_tmp_tmp) - d6 * (n_a_tmp_tmp - o_a_tmp_tmp)) / 40.0)
    + 2.0 * phi * psi * sin(theta1) * ((d93 * (d33 - d34) / 20.0 + d91 * (d40 -
    d41) / 20.0) - d1 * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp)
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0)) - phi * psi * cos
    (theta1) * (d10 * sin(theta2) * (phi * (the * the) * cos(theta2) * b_a_tmp -
    phi * (psi * psi) * (the * the) * cos(theta2) * b_a_tmp) / 20.0 - d83 * sin
    (theta1) * (d62 * c_a_tmp - d65 * c_a_tmp) / 20.0) / 2.0) - 2.0 * psi * the *
    sin(theta1) * (((((d67 * d18 / 10.0 - d59 * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) +
    d85 * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin(theta2) - psi * psi
    * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi * phi * (psi * psi) *
    (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp) * sin(theta2)) / 20.0) - fb_C_33_tmp * sin(theta1) * (d44 - d46) /
    20.0) + d59 * cos(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) *
    cos(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * cos(theta2)) - phi
    * phi * (psi * psi) * cos(theta2) * (b_a_tmp * b_a_tmp)) + d140 * (b_a_tmp *
    b_a_tmp)) / 20.0) - d58 * sin(theta1) * sin(theta2) * (d21 * sin(theta2) -
    d22 * sin(theta2)) / 20.0)) - phi * psi * cos(theta1) * (((d1 * sin(theta2) *
    (d43 * b_a_tmp - d45 * b_a_tmp) / 20.0 - d1 * cos(theta2) * (d21 * c_a_tmp -
    d22 * c_a_tmp) / 20.0) - d1 * b_a_tmp * sin(theta2) * (d6 * cos(theta2) -
    d72 * cos(theta2)) / 20.0) + d1 * cos(theta2) * sin(theta1) * (d3 * a_tmp *
    sin(theta2) - d71 * a_tmp * sin(theta2)) / 20.0) / 2.0) + d53) - 2.0 * psi *
    the * cos(theta1) * ((psi * the * cos(theta1) * cos(theta2) * (d6 * cos
    (theta2) * sin(theta1) - d7 * cos(theta2) * sin(theta1)) / 20.0 - psi * the *
    sin(theta1) * (d2 * d0 * (a_tmp * a_tmp) + d0 * d4 * (b_a_tmp * b_a_tmp)) /
    10.0) + psi * the * cos(theta1) * sin(theta2) * (d3 * cos(theta1) * sin
    (theta1) * sin(theta2) - d5 * cos(theta1) * sin(theta1) * sin(theta2)) /
    20.0)) + d63) - 2.0 * phi * psi * sin(theta1) * ((phi * psi * cos(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0 + phi * psi * cos(theta2) * sin(theta1) * (d3 *
    cos(theta1) * cos(theta2) * sin(theta1) - d5 * cos(theta1) * cos(theta2) *
    sin(theta1)) / 20.0) + phi * psi * sin(theta1) * sin(theta2) * (d2 * d0 *
    cos(theta1) * sin(theta1) * sin(theta2) - d0 * d4 * cos(theta1) * sin(theta1)
    * sin(theta2)) / 20.0)) - phi * psi * cos(theta1) * (phi * psi * (sin(theta1)
    * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) *
    (phi * (the * the) * sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) *
    sin(theta2)) - phi * d0 * (the * the) * sin(theta1) * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2))) / 20.0 + phi * psi * (cos(theta2) *
    sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (phi *
    (the * the) * sin(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3)) - phi * d0 * (the * the) * sin(theta1) * (cos(theta2) * cos(theta3)
    - sin(theta2) * sin(theta3))) / 20.0) / 2.0) - phi * psi * cos(theta1) *
    (((phi * psi * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi)
    * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0 + phi * psi * (cos(theta2) * sin(theta3) +
    cos(theta3) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) -
    phi * psi * (d2 * d0 * cos(theta1) * (cos(theta2) * sin(theta3) + cos(theta3)
    * sin(theta2)) - d2 * d4 * cos(theta1) * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2))) * (sin(theta1) * sin(theta2) * sin(theta3) - cos
    (theta2) * cos(theta3) * sin(theta1)) / 20.0) - phi * psi * (phi * phi *
    (psi * psi) * cos(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3)) - phi * phi * (the * the) * cos(theta1) * (cos(theta2) * cos
    (theta3) - sin(theta2) * sin(theta3))) * (cos(theta2) * sin(theta1) * sin
    (theta3) + cos(theta3) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) -
    bb_C_33_tmp) - cb_C_33_tmp) + q_C_33_tmp) - s_C_33_tmp) - 2.0 * phi * psi *
    cos(theta1) * (((phi * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp
    * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi
    * sin(theta1) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi *
    (the * the) * (a_tmp * a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp *
    b_a_tmp)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 20.0) - phi *
    psi * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) -
    psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0) + phi * psi *
    cos(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) -
    2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) / 10.0)) + 3.0 *
    psi * the * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 20.0) - psi * the * cos(theta1) *
    sin(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin(theta2) -
    psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi * phi * (psi *
    psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp) * sin(theta2)) / 40.0) - 7.0 * (phi * phi) * psi * the *
    (3.0 * cos(theta2) * sin(theta1) * sin(theta3) / 20.0 + 3.0 * cos(theta3) *
    sin(theta1) * sin(theta2) / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * sin
    (theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3)
    / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) /
    10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0) - 7.0 *
    (phi * phi) * psi * the * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) /
    20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) * (cos(theta1) *
    (3.0 * cos(theta1) * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta1) *
    cos(theta3) * sin(theta2) / 10.0) + sin(theta1) * (3.0 * cos(theta2) * sin
    (theta1) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta1) * sin(theta2)
    / 10.0)) / 40.0) + 7.0 * (phi * phi) * psi * (the * the) * (3.0 * cos(theta1)
    * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos
    (theta3) / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * cos(theta2) * sin
    (theta3) / 10.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 10.0) +
    sin(theta1) * (3.0 * cos(theta2) * sin(theta1) * sin(theta3) / 10.0 + 3.0 *
    cos(theta3) * sin(theta1) * sin(theta2) / 10.0)) / 40.0) + 7.0 * (phi * phi)
    * psi * (the * the) * (3.0 * cos(theta1) * cos(theta2) * sin(theta3) / 20.0
    + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 20.0) * (cos(theta1) *
    (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) *
    cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin
    (theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1)
    / 10.0)) / 40.0) - 3.0 * (psi * psi) * (the * the) * (a_tmp * a_tmp) * (3.0 *
    cos(theta2) * cos(theta3) / 10.0 - 3.0 * sin(theta2) * sin(theta3) / 10.0) *
    ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) /
    10.0) - 0.1) / 2.0) - 3.0 * (phi * phi) * (psi * psi) * (b_a_tmp * b_a_tmp) *
                       (3.0 * cos(theta2) * cos(theta3) / 10.0 - 3.0 * sin
    (theta2) * sin(theta3) / 10.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 +
    3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 2.0) + gb_C_33_tmp) -
                     rb_C_33_tmp) - psi * the * cos(theta1) * cos(theta2) *
                    (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * cos(theta2) -
                       psi * psi * (the * the) * (a_tmp * a_tmp) * cos(theta2))
                      - phi * phi * (psi * psi) * cos(theta2) * (b_a_tmp *
    b_a_tmp)) + psi * psi * (the * the) * cos(theta2) * (b_a_tmp * b_a_tmp)) /
                    40.0) - psi * psi * (the * the) * (a_tmp * a_tmp) * (3.0 *
    cos(theta2) * cos(theta3) / 10.0 - 3.0 * sin(theta2) * sin(theta3) / 10.0) *
                   ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) /
                     10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0) +
                  eb_C_33_tmp) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) *
                 (3.0 * cos(theta2) * cos(theta3) / 10.0 - 3.0 * sin(theta2) *
                  sin(theta3) / 10.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0
    - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0)
                + sb_C_33_tmp) - tb_C_33_tmp) - ib_C_33_tmp) + ub_C_33_tmp) -
            vb_C_33_tmp) + wb_C_33_tmp) + nb_C_33_tmp) - h_C_33_tmp) -
        i_C_33_tmp) + g_C_33_tmp) + j_C_33_tmp) - b_C_33_tmp) + c_C_33_tmp;
  C_33[5] = ((((((((((((((((((((((((((((((((((((((((((((((((d15 + d20 / 2.0) +
    d56 / 2.0) + d67 * d130 / 2.0) + d67 * (((psi * the * sin(theta1) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) *
    cos(theta1) * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (2.0 * (phi *
    phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the *
    the) * cos(theta1) * sin(theta1)) / 10.0) - psi * the * cos(theta1) * (((phi
    * phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp *
    a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 20.0) + psi * the * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0) / 2.0) - d58 * sin(theta1) * (d132 / 20.0 - d133 / 20.0) / 2.0) -
    d71 * (d111 + d112) * (cos(theta1) * d124 + sin(theta1) * d125) / 2.0) - psi
    * the * sin(theta1) * (d137 * h_a_tmp / 20.0 + d138 * g_a_tmp / 20.0) / 2.0)
    - phi * psi * cos(theta1) * (((((phi * psi * sin(theta1) * (phi * phi * (psi
    * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    10.0 - d142) - d143 / 20.0) + d144 * d35 / 20.0) + d145 * d42 / 20.0) + d1 *
    a_tmp * (d16 - d17) / 10.0) / 2.0) - 3.0 * d2 * (the * the) * (cos(theta1) *
    (d120 + d121) + sin(theta1) * (d122 + d123)) * (cos(theta1) * ((d76 / 10.0 +
    d100 / 10.0) - d76 * f_a_tmp / 10.0) + sin(theta1) * ((d116 / 10.0 + d106 /
    10.0) - d98 * b_a_tmp / 10.0)) / 2.0) + psi * the * cos(theta1) * ((d58 *
    sin(theta1) * (d3 * (a_tmp * a_tmp) + d5 * (b_a_tmp * b_a_tmp)) / 10.0 + d58
    * g_a_tmp * (d9 * g_a_tmp - d6 * i_a_tmp) / 20.0) + psi * the * (f_a_tmp_tmp
    - g_a_tmp_tmp) * (d9 * h_a_tmp - d6 * j_a_tmp) / 20.0) / 2.0) + phi * psi *
    cos(theta1) * (((((d82 * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin
    (theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0 - d11 * d18 / 10.0) - d1 *
    b_a_tmp * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0) + d11 * cos(theta2) * (d43 * b_a_tmp -
    d45 * b_a_tmp) / 20.0) + d1 * a_tmp * sin(theta2) * (d21 * sin(theta2) - d22
    * sin(theta2)) / 20.0) + d1 * cos(theta2) * sin(theta1) * (((phi * phi *
    (psi * psi) * (a_tmp * a_tmp) * a_tmp_tmp - psi * psi * (the * the) * (a_tmp
    * a_tmp) * a_tmp_tmp) - d146 * (b_a_tmp * b_a_tmp)) + d5 * a_tmp_tmp *
    (b_a_tmp * b_a_tmp)) / 20.0) / 2.0) - psi * the * sin(theta1) * (((((d58 *
    b_a_tmp * (d16 - d17) / 10.0 + d58 * i_a_tmp * (d33 - d34) / 20.0) + d58 *
    j_a_tmp * (d9 * h_a_tmp - d6 * j_a_tmp) / 20.0) + psi * the * (c_a_tmp_tmp +
    d_a_tmp_tmp) * (((d23 - d24) - d8 * i_a_tmp) + d9 * i_a_tmp) / 20.0) + psi *
    the * (e_a_tmp_tmp * d_a_tmp - e_a_tmp * f_a_tmp) * (((d6 * h_a_tmp - d7 *
    h_a_tmp) - d8 * j_a_tmp) + d5 * b_a_tmp * (n_a_tmp_tmp - o_a_tmp_tmp)) /
    20.0) - psi * the * cos(theta1) * (d2 * d0 * (a_tmp * a_tmp) + d0 * d4 *
    (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + psi * the * cos(theta1) * (psi * the *
    sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the * cos(theta1) * (d2 * d0 *
    cos(theta1) * sin(theta1) - d0 * d4 * cos(theta1) * sin(theta1)) / 20.0) /
    2.0) - phi * psi * sin(theta1) * (phi * psi * sin(theta1) * (d2 * d0 * cos
    (theta1) * sin(theta1) - d0 * d4 * cos(theta1) * sin(theta1)) / 20.0 + phi *
    psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + phi * psi * sin(theta1) *
    ((phi * psi * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2)) * (d0 * d4 * sin(theta1) * (a_tmp * a_tmp_tmp * sin
    (theta3) + a_tmp * f_a_tmp * sin(theta2)) - d2 * d0 * cos(theta1) *
    (a_tmp_tmp * b_a_tmp * sin(theta3) + f_a_tmp * b_a_tmp * sin(theta2))) /
    20.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) *
    cos(theta3) * sin(theta1)) * (d0 * d4 * sin(theta1) * (a_tmp * c_a_tmp * sin
    (theta3) - a_tmp * a_tmp_tmp * cos(theta3)) - d2 * d0 * cos(theta1) *
    (b_a_tmp * c_a_tmp * sin(theta3) - a_tmp_tmp * f_a_tmp * sin(theta1))) /
    20.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp)
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) - phi * psi *
    cos(theta1) * (phi * psi * sin(theta1) * sin(theta2) * (phi * (the * the) *
    cos(theta2) * sin(theta1) - phi * d0 * (the * the) * cos(theta2) * sin
    (theta1)) / 20.0 - phi * psi * cos(theta2) * sin(theta1) * (phi * (the * the)
    * sin(theta1) * sin(theta2) - phi * d0 * (the * the) * sin(theta1) * sin
    (theta2)) / 20.0) / 2.0) - psi * the * sin(theta1) * (((((psi * the * sin
    (theta1) * (d12 * d0 * cos(theta1) * sin(theta1) - d14 * d4 * cos(theta1) *
    sin(theta1)) / 10.0 - psi * the * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) +
    psi * the * cos(theta1) * sin(theta2) * (((d3 * (a_tmp * a_tmp) * sin(theta2)
    - d5 * (a_tmp * a_tmp) * sin(theta2)) - d2 * d0 * (b_a_tmp * b_a_tmp) * sin
    (theta2)) + d0 * d4 * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0) - psi * the
    * cos(theta2) * sin(theta1) * (d2 * d0 * cos(theta1) * cos(theta2) * sin
    (theta1) - d0 * d4 * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + psi *
    the * cos(theta1) * cos(theta2) * (((d2 * d0 * (a_tmp * a_tmp) * cos(theta2)
    - d0 * d4 * (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos
    (theta2) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos(theta2) *
    (b_a_tmp * b_a_tmp)) / 20.0) - psi * the * sin(theta1) * sin(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi *
    psi * cos(theta1) * (((phi * psi * sin(theta2) * (d2 * d0 * cos(theta1) *
    cos(theta2) * sin(theta1) - d0 * d4 * cos(theta1) * cos(theta2) * sin(theta1))
    / 20.0 - phi * psi * cos(theta2) * (d2 * d0 * cos(theta1) * sin(theta1) *
    sin(theta2) - d0 * d4 * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) -
    phi * psi * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2))
    / 20.0) + phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta2) - phi * phi * (the * the) * cos(theta1) * sin
    (theta2)) / 20.0) / 2.0) + d53) - psi * the * cos(theta1) * ((psi * the *
    cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
    * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) +
    psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) * sin(theta2)) / 20.0) / 2.0) + d63) - phi * psi * sin(theta1)
    * ((phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) +
    psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + phi * psi * cos
    (theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2)
    * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin
    (theta1)) / 20.0) + phi * psi * sin(theta1) * sin(theta2) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - o_C_33_tmp)
    - p_C_33_tmp) + q_C_33_tmp) - s_C_33_tmp) - phi * psi * cos(theta1) * (((phi
    * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi
    * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi * sin(theta1) *
    (((phi * phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) *
    (a_tmp * a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 20.0) - phi * psi * cos(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 20.0) + phi * psi * cos(theta1) * (2.0 *
    (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) *
    (the * the) * cos(theta1) * sin(theta1)) / 10.0) / 2.0) - 7.0 * (phi * phi) *
    psi * the * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 *
    cos(theta2) * cos(theta3) * sin(theta1) / 20.0) * (cos(theta1) * (3.0 * cos
    (theta1) * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta1) * cos(theta3)
    * sin(theta2) / 10.0) + sin(theta1) * (3.0 * cos(theta2) * sin(theta1) * sin
    (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta1) * sin(theta2) / 10.0)) /
    40.0) - k_C_33_tmp) + 7.0 * (phi * phi) * psi * (the * the) * (3.0 * cos
    (theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2)
    * cos(theta3) / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * cos(theta2) *
    sin(theta3) / 10.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 10.0) +
    sin(theta1) * (3.0 * cos(theta2) * sin(theta1) * sin(theta3) / 10.0 + 3.0 *
    cos(theta3) * sin(theta1) * sin(theta2) / 10.0)) / 40.0) - psi * psi * (the *
    the) * (a_tmp * a_tmp) * (3.0 * cos(theta2) * cos(theta3) / 10.0 - 3.0 * sin
    (theta2) * sin(theta3) / 10.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 +
    3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 2.0) - phi * phi * (psi *
    psi) * (b_a_tmp * b_a_tmp) * (3.0 * cos(theta2) * cos(theta3) / 10.0 - 3.0 *
    sin(theta2) * sin(theta3) / 10.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0
    + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 2.0) + l_C_33_tmp) -
    rb_C_33_tmp) - 3.0 * (psi * psi) * (the * the) * (a_tmp * a_tmp) * (3.0 *
    cos(theta2) * cos(theta3) / 10.0 - 3.0 * sin(theta2) * sin(theta3) / 10.0) *
    ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 *
     cos(theta3) * sin(theta2) / 10.0) / 2.0) - 3.0 * (phi * phi) * (psi * psi) *
    (b_a_tmp * b_a_tmp) * (3.0 * cos(theta2) * cos(theta3) / 10.0 - 3.0 * sin
    (theta2) * sin(theta3) / 10.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 -
    3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0) +
                        sb_C_33_tmp) - tb_C_33_tmp) + ub_C_33_tmp) - m_C_33_tmp)
                    - vb_C_33_tmp) + wb_C_33_tmp) - h_C_33_tmp) + g_C_33_tmp) -
                b_C_33_tmp) + n_C_33_tmp) + c_C_33_tmp) - r_C_33_tmp) +
    t_C_33_tmp;
  C_33[8] = ((((((((((((((((((((((the * sin(theta1) * (phi * the * (cos(theta2) *
    cos(theta3) - sin(theta2) * sin(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0 + phi * the * (cos(theta2) * sin(theta3) + cos(theta3) *
    sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi *
    phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) / 2.0 + the * sin(theta1) *
    (phi * the * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
    * sin(theta1)) / 20.0 - phi * the * cos(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) + phi * the * cos
    (theta1) * (phi * the * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1)
    * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos
    (theta2) * sin(theta1)) / 20.0 - phi * the * cos(theta2) * (phi * phi * (psi
    * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) *
    cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) + psi * the * sin
    (theta1) * (((psi * the * (cos(theta1) * sin(theta2) * sin(theta3) - cos
    (theta1) * cos(theta2) * cos(theta3)) * (phi * (the * the) * sin(theta1) *
    (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - phi * (psi * psi) *
    (the * the) * sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2))) / 20.0 + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2)) * (phi * (the * the) * sin(theta1) *
    (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) - phi * (psi * psi) *
    (the * the) * sin(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3))) / 20.0) - phi * psi * the * (cos(theta2) * cos(theta3) - sin
    (theta2) * sin(theta3)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) -
    phi * psi * the * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi)
    * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) / 20.0) / 2.0) + psi * the * sin(theta1) * (((psi *
    the * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) -
    psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0 - psi * the *
    sin(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) -
    2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) / 10.0) - psi *
    the * cos(theta1) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi
    * (the * the) * (a_tmp * a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp *
    b_a_tmp)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 20.0) + psi *
    the * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) - psi * the * sin(theta1) *
    (psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2))
     / 20.0 - psi * the * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta2) - phi * phi * (the * the) * cos(theta1) * sin
    (theta2)) / 20.0) / 2.0) - psi * the * sin(theta1) * (psi * the * (phi * phi
    * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2)) - phi * phi * (the * the) * cos(theta1) * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2))) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) / 20.0 + psi * the *
    (phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * cos(theta3) - sin
    (theta2) * sin(theta3)) - phi * phi * (the * the) * cos(theta1) * (cos
    (theta2) * cos(theta3) - sin(theta2) * sin(theta3))) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) / 20.0) /
    2.0) - phi * psi * cos(theta1) * (((((phi * psi * sin(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0 - phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) *
    cos(theta3) * sin(theta1)) * (((phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - psi * psi * (the * the) * cos(theta1) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3))) - phi *
    phi * (psi * psi) * sin(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) + psi * psi * (the * the) * sin
    (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) / 20.0) - phi * psi * (cos(theta2) * sin(theta1) *
    sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (((phi * phi * (psi
    * psi) * cos(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1)
    * cos(theta3) * sin(theta2)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2))) - phi * phi * (psi * psi) * sin(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) + psi *
    psi * (the * the) * sin(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + phi * psi * (cos(theta1)
    * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi)
    * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) + phi * psi * (cos(theta1) * sin(theta2) *
    sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) *
    cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) + phi * psi * cos(theta1) * (2.0 * (phi * phi) * (psi *
    psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos
    (theta1) * sin(theta1)) / 10.0) / 2.0) + psi * the * cos(theta1) * ((psi *
    the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + psi * the * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (psi *
    psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos
    (theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
                (theta1) * sin(theta2))) / 20.0) + psi * the * (cos(theta1) *
    sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (psi *
    psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos
    (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
                (theta3) * sin(theta1))) / 20.0) / 2.0) + phi * psi * cos(theta1)
    * (((((phi * psi * sin(theta1) * sin(theta2) * (((phi * phi * (psi * psi) *
    (a_tmp * a_tmp) * sin(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) *
    sin(theta2)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2))
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0 - phi *
           psi * cos(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) *
    sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) /
           10.0) - phi * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) + phi * psi *
         cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos
    (theta2) * sin(theta1)) / 20.0) + phi * psi * cos(theta1) * sin(theta2) *
        (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi
         * psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0)
       + phi * psi * cos(theta2) * sin(theta1) * (((phi * phi * (psi * psi) *
    (a_tmp * a_tmp) * cos(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) *
    cos(theta2)) - phi * phi * (psi * psi) * cos(theta2) * (b_a_tmp * b_a_tmp))
    + psi * psi * (the * the) * cos(theta2) * (b_a_tmp * b_a_tmp)) / 20.0) / 2.0)
    - psi * the * sin(theta1) * (((((psi * the * sin(theta1) * (2.0 * (phi * phi)
    * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) *
    cos(theta1) * sin(theta1)) / 10.0 + psi * the * (cos(theta2) * sin(theta1) *
    sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0) + psi * the * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 20.0) + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2)) * (((phi * phi * (psi * psi) * cos
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) - psi * psi * (the * the) * cos(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2))) - phi * phi * (psi * psi) * sin(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) + psi *
    psi * (the * the) * sin(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + psi * the * (cos(theta1)
    * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) *
    (((phi * phi * (psi * psi) * cos(theta1) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - psi * psi * (the * the)
       * cos(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) *
                        cos(theta2) * cos(theta3))) - phi * phi * (psi * psi) *
      sin(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
                     (theta3) * sin(theta1))) + psi * psi * (the * the) * sin
     (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
                 (theta3) * sin(theta1))) / 20.0) - psi * the * cos(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
     (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + psi * the * cos(theta1) * (psi * the *
    sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the * cos(theta1) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1)) / 20.0) / 2.0) - phi * psi * sin(theta1) * (phi *
    psi * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) -
    psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0 + phi * psi *
    cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + phi * psi * sin(theta1) * ((phi
    * psi * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1)
             * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 20.0 +
    phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
                 (theta3) * sin(theta1)) * (psi * psi * (the * the) * sin(theta1)
    * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
       (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) -
    phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) - phi * psi * cos
                     (theta1) * (phi * psi * sin(theta1) * sin(theta2) * (phi *
    (the * the) * cos(theta2) * sin(theta1) - phi * (psi * psi) * (the * the) *
    cos(theta2) * sin(theta1)) / 20.0 - phi * psi * cos(theta2) * sin(theta1) *
    (phi * (the * the) * sin(theta1) * sin(theta2) - phi * (psi * psi) * (the *
    the) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - psi * the * sin(theta1) *
                    (((((psi * the * sin(theta1) * (2.0 * (phi * phi) * (psi *
    psi) * cos(theta1) * sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos
    (theta1) * sin(theta1)) / 10.0 - psi * the * cos(theta1) * (phi * phi * (psi
    * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    10.0) + psi * the * cos(theta1) * sin(theta2) * (((phi * phi * (psi * psi) *
    (a_tmp * a_tmp) * sin(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) *
    sin(theta2)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2))
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0) - psi
                       * the * cos(theta2) * sin(theta1) * (phi * phi * (psi *
    psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) *
    cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + psi * the * cos(theta1) *
                      cos(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp)
    * cos(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * cos(theta2)) -
    phi * phi * (psi * psi) * cos(theta2) * (b_a_tmp * b_a_tmp)) + psi * psi *
    (the * the) * cos(theta2) * (b_a_tmp * b_a_tmp)) / 20.0) - psi * the * sin
                     (theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi * psi * cos(theta1) *
                   (((phi * psi * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1)
    * cos(theta2) * sin(theta1)) / 20.0 - phi * psi * cos(theta2) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) - phi * psi * sin
                     (theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2))
                     / 20.0) + phi * psi * cos(theta2) * sin(theta1) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta2) - phi * phi * (the * the) *
    cos(theta1) * sin(theta2)) / 20.0) / 2.0) - psi * the * cos(theta1) * ((psi *
    the * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos
    (theta2) * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (phi * phi * (psi
    * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    10.0) + psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi * psi * sin
                 (theta1) * ((phi * psi * cos(theta1) * (phi * phi * (psi * psi)
    * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 +
    phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1)
    * cos(theta2) * sin(theta1)) / 20.0) + phi * psi * sin(theta1) * sin(theta2)
    * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi *
       psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) /
                 2.0) - o_C_33_tmp) - p_C_33_tmp) + q_C_33_tmp) - s_C_33_tmp) -
    phi * psi * cos(theta1) * (((phi * psi * sin(theta1) * (phi * phi * (psi *
    psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    10.0 - phi * psi * sin(theta1) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp)
    - psi * psi * (the * the) * (a_tmp * a_tmp)) - phi * phi * (psi * psi) *
    (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 20.0)
    - phi * psi * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin
    (theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0) +
    phi * psi * cos(theta1) * (2.0 * (phi * phi) * (psi * psi) * cos(theta1) *
    sin(theta1) - 2.0 * (psi * psi) * (the * the) * cos(theta1) * sin(theta1)) /
    10.0) / 2.0;
}

/*
 * File trailer for C_num_simp_33.c
 *
 * [EOF]
 */
