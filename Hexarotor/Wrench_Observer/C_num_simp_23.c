/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: C_num_simp_23.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 22-Jan-2019 15:40:19
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "C_num_simp_23.h"

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
  double d143;
  double d144;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d143 = fabs(u0);
    d144 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d143 == 1.0) {
        y = 1.0;
      } else if (d143 > 1.0) {
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
    } else if (d144 == 0.0) {
      y = 1.0;
    } else if (d144 == 1.0) {
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
 *                double C_23[9]
 * Return Type  : void
 */
void C_num_simp_23(double phi, double the, double psi, double theta1, double
                   theta2, double theta3, double C_23[9])
{
  double a_tmp;
  double b_a_tmp;
  double c_a_tmp;
  double d_a_tmp;
  double e_a_tmp;
  double f_a_tmp;
  double g_a_tmp;
  double a_tmp_tmp;
  double a_tmp_tmp_tmp;
  double b_a_tmp_tmp;
  double h_a_tmp;
  double b_a_tmp_tmp_tmp;
  double c_a_tmp_tmp;
  double d_a_tmp_tmp;
  double i_a_tmp;
  double c_a_tmp_tmp_tmp;
  double e_a_tmp_tmp;
  double d_a_tmp_tmp_tmp;
  double f_a_tmp_tmp;
  double j_a_tmp;
  double g_a_tmp_tmp;
  double e_a_tmp_tmp_tmp;
  double h_a_tmp_tmp;
  double i_a_tmp_tmp;
  double k_a_tmp;
  double l_a_tmp;
  double f_a_tmp_tmp_tmp;
  double j_a_tmp_tmp;
  double g_a_tmp_tmp_tmp;
  double k_a_tmp_tmp;
  double m_a_tmp;
  double h_a_tmp_tmp_tmp;
  double i_a_tmp_tmp_tmp;
  double l_a_tmp_tmp;
  double j_a_tmp_tmp_tmp;
  double k_a_tmp_tmp_tmp;
  double m_a_tmp_tmp;
  double n_a_tmp_tmp;
  double o_a_tmp_tmp;
  double n_a_tmp;
  double p_a_tmp_tmp;
  double q_a_tmp_tmp;
  double o_a_tmp;
  double r_a_tmp_tmp;
  double p_a_tmp;
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
  double d91;
  double d92;
  double d93;
  double d94;
  double d95;
  double d96;
  double d97;
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
  double C_23_tmp;
  double b_C_23_tmp;
  double c_C_23_tmp;
  double d125;
  double d126;
  double d127;
  double d128;
  double d_C_23_tmp;
  double e_C_23_tmp;
  double f_C_23_tmp;
  double d129;
  double g_C_23_tmp;
  double d130;
  double h_C_23_tmp;
  double d131;
  double d132;
  double d133;
  double d134;
  double i_C_23_tmp;
  double j_C_23_tmp;
  double d135;
  double d136;
  double d137;
  double d138;
  double d139;
  double d140;
  double d141;
  double d142;
  double k_C_23_tmp;
  double l_C_23_tmp;
  double C_23_tmp_tmp_tmp;
  double C_23_tmp_tmp;
  double m_C_23_tmp;
  double n_C_23_tmp;
  double b_C_23_tmp_tmp;
  double c_C_23_tmp_tmp;
  double d_C_23_tmp_tmp;
  double o_C_23_tmp;
  double p_C_23_tmp;
  double q_C_23_tmp;
  double e_C_23_tmp_tmp;
  double r_C_23_tmp;
  double s_C_23_tmp;
  double f_C_23_tmp_tmp;
  double t_C_23_tmp;
  double u_C_23_tmp;
  double v_C_23_tmp;
  double g_C_23_tmp_tmp;
  double w_C_23_tmp;
  double x_C_23_tmp;
  double y_C_23_tmp;
  double ab_C_23_tmp;
  double bb_C_23_tmp;
  double cb_C_23_tmp;
  double db_C_23_tmp;
  double eb_C_23_tmp;
  double fb_C_23_tmp;
  double gb_C_23_tmp;
  double hb_C_23_tmp;
  double h_C_23_tmp_tmp;
  double ib_C_23_tmp;
  double jb_C_23_tmp;
  double i_C_23_tmp_tmp;
  double kb_C_23_tmp;
  double j_C_23_tmp_tmp;
  double k_C_23_tmp_tmp;
  double lb_C_23_tmp;
  double mb_C_23_tmp;
  double nb_C_23_tmp;
  double ob_C_23_tmp;
  double pb_C_23_tmp;
  double qb_C_23_tmp;
  double rb_C_23_tmp;
  double sb_C_23_tmp;
  double tb_C_23_tmp;
  double l_C_23_tmp_tmp;
  double m_C_23_tmp_tmp;
  double ub_C_23_tmp;
  double vb_C_23_tmp;
  double wb_C_23_tmp;
  double xb_C_23_tmp;
  double yb_C_23_tmp;
  double ac_C_23_tmp;
  double n_C_23_tmp_tmp;
  double b_C_23_tmp_tmp_tmp;
  double o_C_23_tmp_tmp;
  double bc_C_23_tmp;
  double cc_C_23_tmp;
  double dc_C_23_tmp;
  double ec_C_23_tmp;
  double fc_C_23_tmp;
  double gc_C_23_tmp;
  double hc_C_23_tmp;
  double ic_C_23_tmp;
  double jc_C_23_tmp;
  double kc_C_23_tmp;
  double lc_C_23_tmp;
  double mc_C_23_tmp;
  double nc_C_23_tmp;
  double oc_C_23_tmp;
  double pc_C_23_tmp;
  double qc_C_23_tmp;
  double rc_C_23_tmp;
  double sc_C_23_tmp;
  a_tmp = cos(theta1);
  b_a_tmp = sin(theta1);
  c_a_tmp = cos(theta2);
  d_a_tmp = sin(theta2);
  e_a_tmp = sin(theta3);
  f_a_tmp = a_tmp * c_a_tmp;
  g_a_tmp = cos(theta3);
  a_tmp_tmp = f_a_tmp * e_a_tmp;
  a_tmp_tmp_tmp = a_tmp * g_a_tmp;
  b_a_tmp_tmp = a_tmp_tmp_tmp * d_a_tmp;
  h_a_tmp = a_tmp_tmp + b_a_tmp_tmp;
  b_a_tmp_tmp_tmp = a_tmp * d_a_tmp;
  c_a_tmp_tmp = b_a_tmp_tmp_tmp * e_a_tmp;
  d_a_tmp_tmp = f_a_tmp * g_a_tmp;
  i_a_tmp = c_a_tmp_tmp - d_a_tmp_tmp;
  c_a_tmp_tmp_tmp = c_a_tmp * b_a_tmp;
  e_a_tmp_tmp = c_a_tmp_tmp_tmp * e_a_tmp;
  d_a_tmp_tmp_tmp = g_a_tmp * b_a_tmp;
  f_a_tmp_tmp = d_a_tmp_tmp_tmp * d_a_tmp;
  j_a_tmp = e_a_tmp_tmp + f_a_tmp_tmp;
  g_a_tmp_tmp = c_a_tmp * g_a_tmp;
  e_a_tmp_tmp_tmp = b_a_tmp * d_a_tmp;
  h_a_tmp_tmp = e_a_tmp_tmp_tmp * e_a_tmp;
  i_a_tmp_tmp = g_a_tmp_tmp * b_a_tmp;
  k_a_tmp = h_a_tmp_tmp - i_a_tmp_tmp;
  l_a_tmp = 3.0 * a_tmp;
  f_a_tmp_tmp_tmp = l_a_tmp * d_a_tmp;
  j_a_tmp_tmp = f_a_tmp_tmp_tmp * e_a_tmp;
  g_a_tmp_tmp_tmp = l_a_tmp * c_a_tmp;
  k_a_tmp_tmp = g_a_tmp_tmp_tmp * g_a_tmp;
  m_a_tmp = j_a_tmp_tmp / 20.0 - k_a_tmp_tmp / 20.0;
  h_a_tmp_tmp_tmp = 3.0 * b_a_tmp;
  i_a_tmp_tmp_tmp = h_a_tmp_tmp_tmp * d_a_tmp;
  l_a_tmp_tmp = i_a_tmp_tmp_tmp * e_a_tmp;
  j_a_tmp_tmp_tmp = 3.0 * c_a_tmp;
  k_a_tmp_tmp_tmp = j_a_tmp_tmp_tmp * g_a_tmp;
  m_a_tmp_tmp = k_a_tmp_tmp_tmp * b_a_tmp;
  n_a_tmp_tmp = l_a_tmp_tmp / 20.0;
  o_a_tmp_tmp = m_a_tmp_tmp / 20.0;
  n_a_tmp = n_a_tmp_tmp - o_a_tmp_tmp;
  p_a_tmp_tmp = c_a_tmp * e_a_tmp;
  q_a_tmp_tmp = g_a_tmp * d_a_tmp;
  o_a_tmp = p_a_tmp_tmp + q_a_tmp_tmp;
  r_a_tmp_tmp = d_a_tmp * e_a_tmp;
  p_a_tmp = g_a_tmp_tmp - r_a_tmp_tmp;
  d0 = phi * psi;
  d1 = the * the;
  d2 = d0 * d1;
  d3 = psi * psi;
  d4 = phi * d3;
  d5 = d4 * the;
  d6 = phi * the;
  d7 = rt_powd_snf(the, 3.0);
  d8 = rt_powd_snf(phi, 3.0);
  d9 = d8 * d7;
  d10 = d3 * d1;
  d11 = phi * phi;
  d12 = d11 * d3;
  d13 = d12 * a_tmp;
  d14 = d10 * a_tmp;
  d15 = d13 * c_a_tmp;
  d16 = 2.0 * psi * the;
  d17 = d16 * a_tmp;
  d18 = 7.0 * d11;
  d19 = d18 * d3;
  d20 = 2.0 * phi * psi;
  d21 = d20 * a_tmp;
  d22 = d6 * a_tmp;
  d23 = d15 * b_a_tmp - d14 * c_a_tmp * b_a_tmp;
  d24 = d14 * b_a_tmp;
  d25 = d13 * b_a_tmp * d_a_tmp - d24 * d_a_tmp;
  d26 = 3.0 * phi * the * a_tmp;
  d27 = j_a_tmp_tmp / 10.0;
  d28 = k_a_tmp_tmp / 10.0;
  d29 = l_a_tmp_tmp / 10.0;
  d30 = m_a_tmp_tmp / 10.0;
  d31 = d27 - d28;
  d32 = d29 - d30;
  d33 = a_tmp * d31;
  d34 = b_a_tmp * d32;
  d35 = d33 + d34;
  d36 = 7.0 * phi * psi;
  d37 = d19 * the;
  d38 = the * b_a_tmp;
  d39 = d38 * (d2 * h_a_tmp * p_a_tmp / 20.0 + d2 * i_a_tmp * o_a_tmp / 20.0) /
    2.0;
  d40 = rt_powd_snf(the, 4.0);
  d41 = rt_powd_snf(phi, 4.0);
  d42 = d41 * d40 * a_tmp / 40.0;
  d43 = d6 * d_a_tmp * d23 / 20.0 - d6 * c_a_tmp * d25 / 20.0;
  d44 = d26 * d43 / 2.0;
  d45 = d0 * a_tmp;
  d46 = rt_powd_snf(psi, 3.0);
  d47 = 3.0 * psi * the;
  d48 = d47 * b_a_tmp;
  d49 = psi * the;
  d50 = d49 * a_tmp;
  d51 = d11 * d1;
  d52 = d51 * a_tmp;
  d15 -= d52 * c_a_tmp;
  d53 = d13 * d_a_tmp - d52 * d_a_tmp;
  d54 = d50 * d_a_tmp;
  d55 = d50 * c_a_tmp;
  d56 = d8 * psi;
  d57 = d56 * d1;
  d58 = d11 * psi;
  d59 = d58 * the;
  d60 = d52 + d59 * a_tmp;
  d61 = d51 * b_a_tmp;
  d62 = d59 * b_a_tmp;
  d63 = d45 * d60 / 10.0;
  d64 = d0 * b_a_tmp;
  d65 = d64 * d_a_tmp;
  d66 = d61 * d_a_tmp + d62 * d_a_tmp;
  d67 = d0 * c_a_tmp;
  d68 = d67 * b_a_tmp;
  d69 = d51 * c_a_tmp * b_a_tmp + d59 * c_a_tmp * b_a_tmp;
  d70 = d49 * b_a_tmp;
  d62 += d61;
  d71 = d13 * o_a_tmp - d52 * o_a_tmp;
  d72 = d49 * d71;
  d52 = d13 * p_a_tmp - d52 * p_a_tmp;
  d73 = d49 * d52;
  d74 = d58 * c_a_tmp;
  d75 = d11 * the;
  d76 = d75 * c_a_tmp;
  d77 = d58 * d_a_tmp;
  d78 = d75 * d_a_tmp;
  d79 = d4 * d1;
  d80 = d12 * the;
  d81 = d5 * a_tmp;
  d82 = d81 * b_a_tmp;
  d83 = d8 * d3;
  d84 = d58 * o_a_tmp + d75 * o_a_tmp;
  d85 = d58 * p_a_tmp + d75 * p_a_tmp;
  d86 = d49 * h_a_tmp;
  d87 = d51 * j_a_tmp + d59 * j_a_tmp;
  d88 = d49 * i_a_tmp;
  d89 = d51 * k_a_tmp + d59 * k_a_tmp;
  d90 = d56 * the;
  d91 = d10 * h_a_tmp * j_a_tmp;
  d92 = d10 * i_a_tmp * k_a_tmp;
  d16 *= b_a_tmp;
  d93 = d10 * b_a_tmp;
  d94 = 3.0 * phi * psi;
  d95 = d94 * a_tmp;
  d96 = d93 * h_a_tmp - d13 * j_a_tmp;
  d13 = d93 * i_a_tmp - d13 * k_a_tmp;
  d93 = d82 / 10.0;
  d20 *= b_a_tmp;
  d97 = d5 * h_a_tmp;
  d98 = d97 * j_a_tmp;
  d99 = d5 * i_a_tmp;
  d100 = d99 * k_a_tmp;
  d101 = d82 / 5.0;
  d102 = (d98 / 20.0 + d100 / 20.0) - d93;
  d103 = 3.0 * d11;
  d104 = 3.0 * g_a_tmp;
  d105 = j_a_tmp_tmp_tmp * e_a_tmp;
  d106 = d105 / 10.0;
  d107 = d104 * d_a_tmp;
  d108 = d107 / 10.0;
  d109 = d106 + d108;
  d110 = d18 * psi;
  d111 = d110 * the;
  d112 = j_a_tmp_tmp_tmp * b_a_tmp;
  d113 = d112 * e_a_tmp;
  d114 = d104 * b_a_tmp * d_a_tmp;
  d115 = 7.0 * psi * the;
  d116 = d115 * a_tmp;
  d117 = d12 * b_a_tmp;
  d118 = d103 * psi;
  d119 = d118 * the;
  d120 = 21.0 * phi * psi;
  d121 = g_a_tmp_tmp_tmp * e_a_tmp;
  d122 = l_a_tmp * g_a_tmp;
  d123 = d122 * d_a_tmp;
  d124 = d121 / 10.0;
  C_23_tmp = d123 / 10.0;
  b_C_23_tmp = d113 / 10.0;
  c_C_23_tmp = d114 / 10.0;
  d125 = a_tmp * (d124 + C_23_tmp) + b_a_tmp * (b_C_23_tmp + c_C_23_tmp);
  d113 = d113 / 20.0 + d114 / 20.0;
  d114 = d6 * b_a_tmp;
  d126 = d70 * (d88 * d84 / 20.0 + d86 * d85 / 20.0) / 2.0;
  d127 = d45 * (d80 * j_a_tmp * p_a_tmp / 20.0 + d80 * k_a_tmp * o_a_tmp / 20.0)
    / 2.0;
  d128 = d45 * ((d63 - d57 / 20.0) + d64 * d62 / 20.0) / 2.0;
  d_C_23_tmp = d0 * k_a_tmp;
  e_C_23_tmp = d0 * j_a_tmp;
  d84 = d45 * (((d83 * j_a_tmp * p_a_tmp / 20.0 + d83 * k_a_tmp * o_a_tmp / 20.0)
                + d_C_23_tmp * d84 / 20.0) + e_C_23_tmp * d85 / 20.0) / 2.0;
  d85 = d70 * ((d86 * d87 / 20.0 - psi * the * sin(theta1) * (phi * phi * (the *
    the) * cos(theta1) + phi * phi * psi * the * cos(theta1)) / 10.0) + d88 *
               d89 / 20.0) / 2.0;
  f_C_23_tmp = d95 * (((d0 * d_a_tmp * d23 / 20.0 - d67 * d25 / 20.0) - d65 *
                       d15 / 20.0) + d68 * d53 / 20.0) / 2.0;
  d129 = d22 * (d90 * j_a_tmp * p_a_tmp / 20.0 + d90 * k_a_tmp * o_a_tmp / 20.0)
    / 2.0;
  g_C_23_tmp = (d91 / 10.0 + d92 / 10.0) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) / 5.0;
  d52 = d95 * (((d0 * p_a_tmp * d96 / 20.0 + d0 * o_a_tmp * d13 / 20.0) - d0 *
                d71 * k_a_tmp / 20.0) - d0 * d52 * j_a_tmp / 20.0) / 2.0;
  d71 = d70 * ((d54 * d66 / 20.0 - psi * the * sin(theta1) * (phi * phi * (the *
    the) * cos(theta1) + phi * phi * psi * the * cos(theta1)) / 10.0) + d55 *
               d69 / 20.0);
  d130 = d71 / 2.0;
  h_C_23_tmp = d6 * p_a_tmp * d96 / 20.0 + d6 * o_a_tmp * d13 / 20.0;
  d26 = d26 * h_C_23_tmp / 2.0;
  d131 = d70 * ((d98 / 10.0 + d100 / 10.0) - d101) / 2.0;
  d132 = d70 * d102;
  d133 = d132 / 2.0;
  d134 = d111 * d113;
  i_C_23_tmp = d134 * d35;
  j_C_23_tmp = d111 * n_a_tmp * d125 / 20.0;
  d135 = d103 * d1;
  d136 = d116 * (d135 * d_a_tmp / 20.0 + d119 * d_a_tmp / 20.0);
  d137 = g_a_tmp_tmp_tmp / 10.0;
  d138 = a_tmp * ((d137 + d27) - d28);
  d112 /= 10.0;
  d139 = b_a_tmp * ((d112 + d29) - d30);
  d140 = d138 + d139;
  d141 = d111 * m_a_tmp;
  d142 = d116 * (d58 * n_a_tmp + d75 * n_a_tmp);
  k_C_23_tmp = 3.0 * d_a_tmp;
  l_C_23_tmp = d119 * a_tmp;
  C_23_tmp_tmp_tmp = 63.0 * d11;
  C_23_tmp_tmp = C_23_tmp_tmp_tmp * d3;
  m_C_23_tmp = C_23_tmp_tmp * the;
  n_C_23_tmp = d36 * d1;
  b_C_23_tmp_tmp = k_C_23_tmp * e_a_tmp;
  c_C_23_tmp_tmp = k_a_tmp_tmp_tmp / 10.0;
  d_C_23_tmp_tmp = b_C_23_tmp_tmp / 10.0;
  o_C_23_tmp = c_C_23_tmp_tmp - d_C_23_tmp_tmp;
  p_C_23_tmp = d111 * b_a_tmp;
  q_C_23_tmp = 21.0 * d11;
  e_C_23_tmp_tmp = q_C_23_tmp * psi;
  r_C_23_tmp = e_C_23_tmp_tmp * the;
  s_C_23_tmp = d111 * a_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
    cos(theta3) * sin(theta2) / 20.0);
  f_C_23_tmp_tmp = d120 * d1;
  t_C_23_tmp = f_C_23_tmp_tmp * a_tmp;
  u_C_23_tmp = r_C_23_tmp * a_tmp;
  v_C_23_tmp = r_C_23_tmp * c_a_tmp * b_a_tmp;
  g_C_23_tmp_tmp = r_C_23_tmp * b_a_tmp;
  w_C_23_tmp = g_C_23_tmp_tmp * d_a_tmp;
  x_C_23_tmp = u_C_23_tmp * c_a_tmp;
  y_C_23_tmp = d36 * the;
  u_C_23_tmp *= d_a_tmp;
  ab_C_23_tmp = q_C_23_tmp * d3;
  bb_C_23_tmp = k_a_tmp_tmp_tmp / 20.0 - b_C_23_tmp_tmp / 20.0;
  cb_C_23_tmp = d116 * (d118 * c_a_tmp * b_a_tmp / 20.0 + d103 * the * c_a_tmp *
                        b_a_tmp / 20.0);
  db_C_23_tmp = n_C_23_tmp * m_a_tmp;
  eb_C_23_tmp = k_C_23_tmp / 10.0;
  b_C_23_tmp_tmp = d119 * b_a_tmp;
  fb_C_23_tmp = b_C_23_tmp_tmp * o_C_23_tmp / 200.0;
  gb_C_23_tmp = d94 * d1 * a_tmp;
  hb_C_23_tmp = l_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 400.0;
  h_C_23_tmp_tmp = d19 * d1;
  ib_C_23_tmp = h_C_23_tmp_tmp * m_a_tmp;
  jb_C_23_tmp = p_C_23_tmp * o_C_23_tmp * (3.0 * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 20.0;
  i_C_23_tmp_tmp = p_C_23_tmp * bb_C_23_tmp;
  kb_C_23_tmp = i_C_23_tmp_tmp * (d109 - 0.1);
  j_C_23_tmp_tmp = ab_C_23_tmp * d1;
  k_C_23_tmp_tmp = j_C_23_tmp_tmp * a_tmp;
  lb_C_23_tmp = k_C_23_tmp_tmp * c_a_tmp;
  mb_C_23_tmp = v_C_23_tmp * d125 / 400.0;
  nb_C_23_tmp = n_C_23_tmp * a_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 +
    3.0 * cos(theta3) * sin(theta2) / 20.0);
  ob_C_23_tmp = s_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  pb_C_23_tmp = v_C_23_tmp * (d109 - 0.1) / 800.0;
  qb_C_23_tmp = w_C_23_tmp * d35 / 800.0;
  rb_C_23_tmp = w_C_23_tmp * o_C_23_tmp / 400.0;
  sb_C_23_tmp = t_C_23_tmp * c_a_tmp;
  tb_C_23_tmp = x_C_23_tmp * d140 / 800.0;
  l_C_23_tmp_tmp = d110 * d1;
  m_C_23_tmp_tmp = l_C_23_tmp_tmp * b_a_tmp;
  ub_C_23_tmp = m_C_23_tmp_tmp * m_a_tmp;
  vb_C_23_tmp = d37 * b_a_tmp * m_a_tmp;
  t_C_23_tmp *= d_a_tmp;
  wb_C_23_tmp = u_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 800.0;
  xb_C_23_tmp = y_C_23_tmp * b_a_tmp * m_a_tmp;
  yb_C_23_tmp = y_C_23_tmp * a_tmp * n_a_tmp;
  ac_C_23_tmp = e_C_23_tmp_tmp * d7 * a_tmp * c_a_tmp;
  n_C_23_tmp_tmp = e_C_23_tmp_tmp * d1;
  b_C_23_tmp_tmp_tmp = n_C_23_tmp_tmp * a_tmp;
  o_C_23_tmp_tmp = b_C_23_tmp_tmp_tmp * c_a_tmp;
  bc_C_23_tmp = o_C_23_tmp_tmp * b_a_tmp;
  ab_C_23_tmp = ab_C_23_tmp * the * a_tmp * c_a_tmp * b_a_tmp;
  cc_C_23_tmp = d11 * d46;
  dc_C_23_tmp = ub_C_23_tmp * (d109 - 0.1) / 40.0;
  ec_C_23_tmp = vb_C_23_tmp * (d109 - 0.1) / 40.0;
  fc_C_23_tmp = xb_C_23_tmp * (d109 - 0.1) / 40.0;
  gc_C_23_tmp = yb_C_23_tmp * (d109 - 0.1) / 40.0;
  hc_C_23_tmp = C_23_tmp_tmp_tmp * psi;
  ic_C_23_tmp = bc_C_23_tmp * (d109 - 0.1) / 800.0;
  jc_C_23_tmp = ab_C_23_tmp * (d109 - 0.1) / 800.0;
  kc_C_23_tmp = gb_C_23_tmp * (d109 - 0.1) / 400.0;
  lc_C_23_tmp = ib_C_23_tmp * d35 / 40.0;
  mc_C_23_tmp = db_C_23_tmp * d35 / 40.0;
  nc_C_23_tmp = hc_C_23_tmp * d7 * c_a_tmp * b_a_tmp * d_a_tmp / 16000.0;
  oc_C_23_tmp = lb_C_23_tmp * d35 / 800.0;
  pc_C_23_tmp = nb_C_23_tmp * (d109 - 0.1) / 40.0;
  qc_C_23_tmp = sb_C_23_tmp * d35 / 800.0;
  rc_C_23_tmp = t_C_23_tmp * (d109 - 0.1) / 800.0;
  sc_C_23_tmp = ac_C_23_tmp * d35 / 800.0;
  C_23[0] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((d39 - phi * (((((d5 * (a_tmp * a_tmp) /
    10.0 - d5 * (b_a_tmp * b_a_tmp) / 10.0) - phi * (psi * psi) * the * (a_tmp *
    a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) - phi * (psi * psi) * the * (a_tmp *
    a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) + d5 * (c_a_tmp * c_a_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) + phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) * (d_a_tmp *
    d_a_tmp) / 20.0) / 2.0) - phi * (phi * (psi * psi) * the * (a_tmp * a_tmp) /
    20.0 - phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - phi *
    (((((phi * (psi * psi) * the * (a_tmp * a_tmp) / 10.0 - phi * (psi * psi) *
    the * (b_a_tmp * b_a_tmp) / 10.0) - d5 * (h_a_tmp * h_a_tmp) / 20.0) - d5 *
    (i_a_tmp * i_a_tmp) / 20.0) + d5 * (j_a_tmp * j_a_tmp) / 20.0) + d5 *
    (k_a_tmp * k_a_tmp) / 20.0) / 2.0) - d36 * m_a_tmp / 40.0) - d0 * d35 / 2.0)
    + d42) + d6 * (d2 * j_a_tmp * p_a_tmp / 20.0 + d2 * k_a_tmp * o_a_tmp / 20.0)
    / 2.0) + d22 * (d9 * (c_a_tmp * c_a_tmp) / 20.0 + d9 * (d_a_tmp * d_a_tmp) /
    20.0) / 2.0) + d17 * (d10 * (a_tmp * a_tmp) / 20.0 + d10 * (b_a_tmp *
    b_a_tmp) / 10.0)) - d44) + d21 * (phi * (psi * psi) * the * (a_tmp * a_tmp) /
    20.0 - phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) / 20.0)) - d37 *
    (m_a_tmp * m_a_tmp) / 40.0) + d45 * ((psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp) / 10.0 + d10 * (h_a_tmp * h_a_tmp) / 20.0) + d10 * (i_a_tmp *
    i_a_tmp) / 20.0) / 2.0) + d46 * d7 * a_tmp * (b_a_tmp * b_a_tmp) / 5.0) +
    d48 * (d54 * d15 / 20.0 - d55 * d53 / 20.0) / 2.0) + d17 * ((psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the * the) *
    (h_a_tmp * h_a_tmp) / 20.0) + psi * psi * (the * the) * (i_a_tmp * i_a_tmp) /
    20.0)) + d0 * a_tmp * ((((d63 - d57 * (c_a_tmp * c_a_tmp) / 20.0) - d57 *
    (d_a_tmp * d_a_tmp) / 20.0) + d65 * d66 / 20.0) + d68 * d69 / 20.0) / 2.0) +
    d19 * the * (n_a_tmp * n_a_tmp) / 40.0) + psi * the * sin(theta1) * (d70 *
    d60 / 10.0 - d50 * d62 / 20.0) / 2.0) + 3.0 * psi * the * sin(theta1) * (d72
    * (c_a_tmp_tmp - d_a_tmp_tmp) / 20.0 + d73 * (a_tmp_tmp + b_a_tmp_tmp) /
    20.0) / 2.0) - d70 * (d50 * sin(theta2) * (d74 + d76) / 20.0 - d50 * cos
    (theta2) * (d77 + d78) / 20.0) / 2.0) - d70 * (d79 * (a_tmp_tmp +
    b_a_tmp_tmp) * p_a_tmp / 10.0 + d79 * (c_a_tmp_tmp - d_a_tmp_tmp) * o_a_tmp /
    10.0) / 2.0) + d45 * (d0 * sin(theta1) * sin(theta2) * (d58 * cos(theta2) +
    d75 * cos(theta2)) / 20.0 - d0 * cos(theta2) * sin(theta1) * (d58 * sin
    (theta2) + d75 * sin(theta2)) / 20.0) / 2.0) - d16 * ((d10 * cos(theta1) *
    sin(theta1) * (d_a_tmp * d_a_tmp) / 10.0 - d3 * d1 * cos(theta1) * sin
    (theta1) / 5.0) + d3 * d1 * cos(theta1) * (c_a_tmp * c_a_tmp) * b_a_tmp /
    10.0)) + d21 * (((((d4 * the * (a_tmp * a_tmp) / 10.0 - d4 * the * (b_a_tmp *
    b_a_tmp) / 10.0) - phi * d3 * the * (h_a_tmp * h_a_tmp) / 20.0) - phi * d3 *
    the * (i_a_tmp * i_a_tmp) / 20.0) + phi * (psi * psi) * the * (j_a_tmp *
    j_a_tmp) / 20.0) + phi * (psi * psi) * the * (k_a_tmp * k_a_tmp) / 20.0)) +
    d21 * (((((phi * d3 * the * (a_tmp * a_tmp) / 10.0 - phi * d3 * the *
    (b_a_tmp * b_a_tmp) / 10.0) - d4 * the * (a_tmp * a_tmp) * (c_a_tmp *
    c_a_tmp) / 20.0) - phi * d3 * the * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) /
    20.0) + phi * d3 * the * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) +
    phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0))
    - d126) + d127) + d45 * (((d12 * (a_tmp * a_tmp) / 10.0 - psi * psi * (the *
    the) * (a_tmp * a_tmp) / 20.0) + d12 * (b_a_tmp * b_a_tmp) / 20.0) - psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) + d22 * (d9 *
    (o_a_tmp * o_a_tmp) / 20.0 + d9 * (p_a_tmp * p_a_tmp) / 20.0) / 2.0) + d20 *
    ((d81 * (c_a_tmp * c_a_tmp) * b_a_tmp / 20.0 - d93) + d82 * (d_a_tmp *
    d_a_tmp) / 20.0)) - d70 * ((phi * (psi * psi) * the * cos(theta1) * (c_a_tmp
    * c_a_tmp) * sin(theta1) / 10.0 - d101) + phi * (psi * psi) * the * cos
    (theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 10.0) / 2.0) + d70 * ((phi *
    (psi * psi) * the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) / 20.0 -
    phi * (psi * psi) * the * cos(theta1) * sin(theta1) / 10.0) + phi * (psi *
    psi) * the * cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0)
    + d45 * ((((d63 - d57 * (o_a_tmp * o_a_tmp) / 20.0) - d57 * (p_a_tmp *
    p_a_tmp) / 20.0) + d0 * d87 * j_a_tmp / 20.0) + d0 * d89 * k_a_tmp / 20.0) /
    2.0) + d128) + d84) - d85) + f_C_23_tmp) + d45 * ((psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the * the) * (a_tmp * a_tmp) *
    (c_a_tmp * c_a_tmp) / 20.0) + psi * psi * (the * the) * (a_tmp * a_tmp) *
    (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + d17 * ((psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the * the) * (a_tmp * a_tmp) *
    (c_a_tmp * c_a_tmp) / 20.0) + psi * psi * (the * the) * (a_tmp * a_tmp) *
    (d_a_tmp * d_a_tmp) / 20.0)) - d129) + d19 * m_a_tmp * n_a_tmp / 20.0) - d91
    / 20.0) - d92 / 20.0) + d24 / 4.0) + d114 * (d109 - 0.1) / 2.0) - d16 *
    g_C_23_tmp) + d52) - d130) + d120 * a_tmp * c_a_tmp / 800.0) + d45 *
    (((((phi * phi * (psi * psi) * (a_tmp * a_tmp) / 10.0 - psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) / 10.0) - psi * psi * (the * the) * (h_a_tmp *
    h_a_tmp) / 20.0) - psi * psi * (the * the) * (i_a_tmp * i_a_tmp) / 20.0) +
    d12 * (j_a_tmp * j_a_tmp) / 20.0) + d12 * (k_a_tmp * k_a_tmp) / 20.0) / 2.0)
    - d26) + d45 * (((((phi * phi * (psi * psi) * (a_tmp * a_tmp) / 10.0 - psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) - psi * psi * (the * the) *
    (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + d12 * (c_a_tmp * c_a_tmp) *
    (b_a_tmp * b_a_tmp) / 20.0) - psi * psi * (the * the) * (a_tmp * a_tmp) *
    (d_a_tmp * d_a_tmp) / 20.0) + phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) *
    (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + d20 * d102) + d45 * (psi * psi * (the *
    the) * (a_tmp * a_tmp) / 20.0 + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)
    / 10.0) / 2.0) - d131) + d133) + d136 * (d109 - 0.1) / 40.0) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 20.0) +
    i_C_23_tmp / 20.0) + j_C_23_tmp) + d117 * d35 * (d109 - 0.1)) - d61 * d35 *
    (d109 - 0.1)) + d141 * d140 / 40.0) + d47 * a_tmp * (d51 / 20.0 + d59 / 20.0)
    * (d109 - 0.1) / 20.0) - d142 * (d109 - 0.1) / 40.0) + d117 * d140 * ((d106
    + d108) - 0.1) / 2.0) - d61 * (d138 + d139) * ((d105 / 10.0 + d107 / 10.0) -
    0.1) / 2.0) + d110 * d7 * (j_a_tmp_tmp / 20.0 - k_a_tmp_tmp / 20.0) * (cos
    (theta1) * (d27 - d28) + sin(theta1) * (d29 - d30)) / 40.0) + d12 * sin
    (theta1) * (cos(theta1) * d31 + sin(theta1) * d32) * ((j_a_tmp_tmp_tmp * sin
    (theta3) / 10.0 - eb_C_23_tmp) + 3.0 * g_a_tmp * sin(theta2) / 10.0) / 2.0)
    - d11 * d1 * sin(theta1) * (cos(theta1) * (d27 - d28) + sin(theta1) * (d29 -
    d30)) * ((3.0 * c_a_tmp * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) +
    3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0) + 7.0 * psi * the * cos
    (theta1) * (d11 * d1 * (d105 / 20.0 + d107 / 20.0) + d58 * the * (d105 /
    20.0 + d107 / 20.0)) * (d109 - 0.1) / 40.0) - 7.0 * d11 * psi * rt_powd_snf
    (the, 3.0) * (h_a_tmp_tmp_tmp * sin(theta2) * sin(theta3) / 20.0 -
    j_a_tmp_tmp_tmp * cos(theta3) * sin(theta1) / 20.0) * (3.0 * cos(theta2) *
    sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 40.0) +
    kc_C_23_tmp) + l_C_23_tmp * (d109 - 0.1) / 200.0) + phi * d46 * d1 * a_tmp *
    (b_a_tmp * b_a_tmp) / 40.0) - cc_C_23_tmp * the * a_tmp * (b_a_tmp * b_a_tmp)
    / 10.0) + fb_C_23_tmp) + lc_C_23_tmp) + hb_C_23_tmp) + cb_C_23_tmp * (d109 -
    0.1) / 40.0) - m_C_23_tmp * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 16000.0)
    + m_C_23_tmp * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 16000.0) +
    C_23_tmp_tmp * a_tmp * (c_a_tmp * c_a_tmp) * b_a_tmp / 8000.0) + mc_C_23_tmp)
    + d141 * d35 / 20.0) - psi * psi * (the * the) * cos(theta1) * (c_a_tmp *
    c_a_tmp) * sin(theta1) / 20.0) + nc_C_23_tmp) - oc_C_23_tmp) + pc_C_23_tmp)
    + s_C_23_tmp * (d109 - 0.1) / 20.0) + jb_C_23_tmp) + kb_C_23_tmp / 20.0) +
                     dc_C_23_tmp) + ec_C_23_tmp) - qc_C_23_tmp) - x_C_23_tmp *
                  d35 / 400.0) - mb_C_23_tmp) + ob_C_23_tmp) + rc_C_23_tmp) +
              u_C_23_tmp * (d109 - 0.1) / 400.0) + pb_C_23_tmp) + qb_C_23_tmp) +
           rb_C_23_tmp) + fc_C_23_tmp) - tb_C_23_tmp) - gc_C_23_tmp) +
       wb_C_23_tmp) - sc_C_23_tmp) - ic_C_23_tmp) - jc_C_23_tmp;
  d2 = d36 * d113 / 40.0;
  d15 = 7.0 * phi * the * bb_C_23_tmp / 40.0;
  d22 = d121 / 20.0 + d123 / 20.0;
  d31 = d70 * g_C_23_tmp / 2.0;
  d32 = d19 * d113 * n_a_tmp / 20.0;
  d53 = d64 * d102 / 2.0;
  d59 = i_C_23_tmp / 40.0;
  d60 = d37 * m_a_tmp * d113 / 40.0;
  d37 = d37 * d22 * n_a_tmp / 40.0;
  d61 = cb_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin
                        (theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) /
                       10.0) / 40.0;
  l_C_23_tmp = (j_a_tmp_tmp_tmp / 10.0 - c_C_23_tmp_tmp) + d_C_23_tmp_tmp;
  s_C_23_tmp = kb_C_23_tmp / 40.0;
  u_C_23_tmp = ub_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  cb_C_23_tmp = vb_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  kb_C_23_tmp = xb_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  ub_C_23_tmp = yb_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  vb_C_23_tmp = bc_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 800.0;
  ab_C_23_tmp = ab_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 800.0;
  m_C_23_tmp = m_C_23_tmp * a_tmp * c_a_tmp * b_a_tmp * d_a_tmp / 8000.0;
  xb_C_23_tmp = 7.0 * psi * the * cos(theta1) * (phi * phi * (the * the) * (3.0 *
    cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) +
    phi * phi * psi * the * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
    (theta3) * sin(theta2) / 20.0)) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 -
    3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  gb_C_23_tmp = gb_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 400.0;
  yb_C_23_tmp = ib_C_23_tmp * d140 / 40.0;
  lb_C_23_tmp = lb_C_23_tmp * d140 / 800.0;
  nb_C_23_tmp = nb_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  sb_C_23_tmp = sb_C_23_tmp * d140 / 800.0;
  bc_C_23_tmp = t_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 800.0;
  ac_C_23_tmp = ac_C_23_tmp * d140 / 800.0;
  C_23[3] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((((d39 - d0 * d140 / 2.0) - 21.0 * phi * the *
    c_a_tmp / 800.0) - d2) + d42) - d15) + phi * the * cos(theta1) *
    (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (c_a_tmp * c_a_tmp) / 20.0
    + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (d_a_tmp * d_a_tmp) / 20.0)
    / 2.0) + d50 * (psi * psi * (the * the) * (a_tmp * a_tmp) / 20.0 + psi * psi
    * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - d44) - d120 * b_a_tmp *
    d_a_tmp / 800.0) + d114 * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0) + d45 *
    (phi * (psi * psi) * the * (a_tmp * a_tmp) / 20.0 - phi * (psi * psi) * the *
    (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + phi * psi * cos(theta1) * ((psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the * the) *
    (h_a_tmp * h_a_tmp) / 20.0) + psi * psi * (the * the) * (i_a_tmp * i_a_tmp) /
    20.0) / 2.0) + rt_powd_snf(psi, 3.0) * rt_powd_snf(the, 3.0) * cos(theta1) *
    (b_a_tmp * b_a_tmp) / 20.0) + 3.0 * psi * the * sin(theta1) * (psi * the *
    cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2)) / 20.0 - psi
    * the * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta2) - phi * phi * (the * the) * cos(theta1) * sin(theta2)) / 20.0) /
    2.0) + d50 * ((psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0 + psi *
    psi * (the * the) * (h_a_tmp * h_a_tmp) / 20.0) + psi * psi * (the * the) *
    (i_a_tmp * i_a_tmp) / 20.0) / 2.0) + d45 * ((((phi * psi * cos(theta1) *
    (phi * phi * (the * the) * cos(theta1) + phi * phi * psi * the * cos(theta1))
    / 10.0 - rt_powd_snf(phi, 3.0) * psi * (the * the) * (c_a_tmp * c_a_tmp) /
    20.0) - rt_powd_snf(phi, 3.0) * psi * (the * the) * (d_a_tmp * d_a_tmp) /
    20.0) + phi * psi * sin(theta1) * sin(theta2) * (phi * phi * (the * the) *
    sin(theta1) * sin(theta2) + phi * phi * psi * the * sin(theta1) * sin(theta2))
    / 20.0) + phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (the * the) *
    cos(theta2) * sin(theta1) + phi * phi * psi * the * cos(theta2) * sin(theta1))
    / 20.0) / 2.0) + d18 * d1 * bb_C_23_tmp * (d105 / 20.0 + d107 / 20.0) / 20.0)
    + d49 * sin(theta1) * (psi * the * sin(theta1) * (phi * phi * (the * the) *
    cos(theta1) + phi * phi * psi * the * cos(theta1)) / 10.0 - psi * the * cos
    (theta1) * (phi * phi * (the * the) * sin(theta1) + phi * phi * psi * the *
    sin(theta1)) / 20.0) / 2.0) + 3.0 * psi * the * sin(theta1) * (d72 * i_a_tmp
    / 20.0 + d73 * h_a_tmp / 20.0) / 2.0) - psi * the * sin(theta1) * (d54 *
    (d74 + d76) / 20.0 - d55 * (d77 + d78) / 20.0) / 2.0) - psi * the * sin
    (theta1) * (d79 * h_a_tmp * (g_a_tmp_tmp - r_a_tmp_tmp) / 10.0 + d79 *
    i_a_tmp * (p_a_tmp_tmp + q_a_tmp_tmp) / 10.0) / 2.0) + phi * psi * cos
    (theta1) * (d64 * sin(theta2) * (d58 * cos(theta2) + d75 * cos(theta2)) /
    20.0 - d67 * sin(theta1) * (d58 * sin(theta2) + d75 * sin(theta2)) / 20.0) /
    2.0) - d70 * ((d14 * sin(theta1) * (d_a_tmp * d_a_tmp) / 10.0 - d10 * cos
    (theta1) * sin(theta1) / 5.0) + d10 * cos(theta1) * (c_a_tmp * c_a_tmp) *
    sin(theta1) / 10.0) / 2.0) + d45 * (((((d5 * (a_tmp * a_tmp) / 10.0 - d5 *
    (b_a_tmp * b_a_tmp) / 10.0) - d4 * the * (h_a_tmp * h_a_tmp) / 20.0) - d4 *
    the * (i_a_tmp * i_a_tmp) / 20.0) + phi * d3 * the * (j_a_tmp * j_a_tmp) /
    20.0) + phi * d3 * the * (k_a_tmp * k_a_tmp) / 20.0) / 2.0) + d45 * (((((d4 *
    the * (a_tmp * a_tmp) / 10.0 - d4 * the * (b_a_tmp * b_a_tmp) / 10.0) - d5 *
    (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) - d4 * the * (a_tmp * a_tmp) *
    (d_a_tmp * d_a_tmp) / 20.0) + d4 * the * (c_a_tmp * c_a_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) + phi * d3 * the * (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp)
    / 20.0) / 2.0) - d126) + d127) + phi * psi * cos(theta1) * (((phi * phi *
    (psi * psi) * (a_tmp * a_tmp) / 10.0 - psi * psi * (the * the) * (a_tmp *
    a_tmp) / 20.0) + phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) / 20.0) - psi
    * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) + phi * the * cos
    (theta1) * (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (o_a_tmp *
    o_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (p_a_tmp *
    p_a_tmp) / 20.0) / 2.0) + d64 * ((phi * (psi * psi) * the * cos(theta1) *
    (c_a_tmp * c_a_tmp) * sin(theta1) / 20.0 - phi * (psi * psi) * the * cos
    (theta1) * sin(theta1) / 10.0) + phi * (psi * psi) * the * cos(theta1) * sin
    (theta1) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - psi * the * sin(theta1) *
    ((phi * (psi * psi) * the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) /
    10.0 - phi * (psi * psi) * the * cos(theta1) * sin(theta1) / 5.0) + phi *
    (psi * psi) * the * cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 10.0) /
    2.0) + psi * the * sin(theta1) * ((phi * (psi * psi) * the * cos(theta1) *
    (c_a_tmp * c_a_tmp) * sin(theta1) / 20.0 - phi * (psi * psi) * the * cos
    (theta1) * sin(theta1) / 10.0) + phi * (psi * psi) * the * cos(theta1) * sin
    (theta1) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + phi * psi * cos(theta1) *
    ((((phi * psi * cos(theta1) * (phi * phi * (the * the) * cos(theta1) + phi *
    phi * psi * the * cos(theta1)) / 10.0 - rt_powd_snf(phi, 3.0) * psi * (the *
    the) * (o_a_tmp * o_a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) * psi * (the *
    the) * (p_a_tmp * p_a_tmp) / 20.0) + phi * psi * (phi * phi * (the * the) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2)) + phi * phi * psi * the * (cos(theta2) * sin(theta1) * sin(theta3)
    + cos(theta3) * sin(theta1) * sin(theta2))) * (cos(theta2) * sin(theta1) *
    sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) / 20.0) + phi * psi *
    (phi * phi * (the * the) * (sin(theta1) * sin(theta2) * sin(theta3) - cos
    (theta2) * cos(theta3) * sin(theta1)) + phi * phi * psi * the * (sin(theta1)
    * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1)) / 20.0) / 2.0) + d128) + d84) - d85) + f_C_23_tmp) + phi * psi *
    cos(theta1) * ((psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0 + psi *
    psi * (the * the) * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + psi *
    psi * (the * the) * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) +
    d50 * ((psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0 + psi * psi *
    (the * the) * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + psi * psi *
    (the * the) * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - d129) +
    C_23_tmp_tmp_tmp * d1 * c_a_tmp * d_a_tmp / 8000.0) - d31) + d32) + d52) -
    d130) + phi * psi * cos(theta1) * (((((phi * phi * (psi * psi) * (a_tmp *
    a_tmp) / 10.0 - psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) - psi *
    psi * (the * the) * (h_a_tmp * h_a_tmp) / 20.0) - psi * psi * (the * the) *
    (i_a_tmp * i_a_tmp) / 20.0) + phi * phi * (psi * psi) * (j_a_tmp * j_a_tmp) /
    20.0) + phi * phi * (psi * psi) * (k_a_tmp * k_a_tmp) / 20.0) / 2.0) - d26)
    + phi * psi * cos(theta1) * (((((phi * phi * (psi * psi) * (a_tmp * a_tmp) /
    10.0 - psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) - psi * psi *
    (the * the) * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + phi * phi *
    (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) - psi * psi *
    (the * the) * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) + phi * phi *
    (psi * psi) * (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + d53)
    + phi * psi * cos(theta1) * (psi * psi * (the * the) * (a_tmp * a_tmp) /
    20.0 + psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - d131)
    + d133) - C_23_tmp_tmp * c_a_tmp * (b_a_tmp * b_a_tmp) * d_a_tmp / 8000.0) +
    d59) + j_C_23_tmp) + d61) + db_C_23_tmp * d140 / 40.0) + 7.0 * (phi * phi) *
    psi * the * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 *
    cos(theta1) * cos(theta2) * cos(theta3) / 20.0) * (cos(theta1) * ((3.0 * cos
    (theta1) * cos(theta2) / 10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1)
    * ((3.0 * cos(theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2)
    * sin(theta3) / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0))
    / 40.0) - d60) - d37) + d136 * ((3.0 * cos(theta2) * sin(theta3) / 10.0 -
    3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0)
    + r_C_23_tmp * d113 * d140 / 40.0) + phi * phi * (psi * psi) * sin(theta1) *
    (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 + 3.0 * cos(theta1) *
    sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta1) * cos(theta2) * cos
    (theta3) / 10.0) + sin(theta1) * ((3.0 * cos(theta2) * sin(theta1) / 10.0 +
    3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta2) *
    cos(theta3) * sin(theta1) / 10.0)) * ((3.0 * cos(theta2) * sin(theta3) /
    10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 2.0) - phi * phi *
    (the * the) * sin(theta1) * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2)
    / 10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
    (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos
    (theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) * ((3.0 *
    cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) -
    0.1) / 2.0) + 7.0 * (phi * phi) * psi * rt_powd_snf(the, 3.0) * (3.0 * cos
    (theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2)
    * cos(theta3) / 20.0) * bb_C_23_tmp / 40.0) + 7.0 * (phi * phi) * psi *
    rt_powd_snf(the, 3.0) * d22 * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
    cos(theta3) * sin(theta2) / 20.0) / 40.0) + d117 * d35 * ((d106 -
    eb_C_23_tmp) + d107 / 10.0) / 2.0) + d111 * (n_a_tmp_tmp - o_a_tmp_tmp) *
    (a_tmp * ((d124 - f_a_tmp_tmp_tmp / 10.0) + C_23_tmp) + b_a_tmp *
    ((b_C_23_tmp - i_a_tmp_tmp_tmp / 10.0) + c_C_23_tmp)) / 20.0) - d51 * sin
    (theta1) * (d33 + d34) * ((j_a_tmp_tmp_tmp * e_a_tmp / 10.0 - 3.0 * d_a_tmp /
    10.0) + d104 * sin(theta2) / 10.0) / 2.0) + d47 * cos(theta1) * (d11 * d1 /
    20.0 + d58 * the / 20.0) * ((j_a_tmp_tmp_tmp * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * g_a_tmp * sin(theta2) / 10.0) / 20.0) - 7.0 *
    psi * the * cos(theta1) * (d58 * (n_a_tmp_tmp - o_a_tmp_tmp) + d75 *
    (n_a_tmp_tmp - o_a_tmp_tmp)) * ((3.0 * c_a_tmp * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0) -
    C_23_tmp_tmp_tmp * psi * rt_powd_snf(the, 3.0) * a_tmp * (c_a_tmp * c_a_tmp)
    / 16000.0) + 7.0 * d11 * psi * rt_powd_snf(the, 3.0) * (l_a_tmp * sin(theta2)
    * sin(theta3) / 20.0 - l_a_tmp * cos(theta2) * cos(theta3) / 20.0) * (cos
    (theta1) * ((l_a_tmp * cos(theta2) / 10.0 + f_a_tmp_tmp_tmp * sin(theta3) /
    10.0) - l_a_tmp * c_a_tmp * cos(theta3) / 10.0) + sin(theta1) *
    ((j_a_tmp_tmp_tmp * sin(theta1) / 10.0 + i_a_tmp_tmp_tmp * sin(theta3) /
    10.0) - j_a_tmp_tmp_tmp * g_a_tmp * sin(theta1) / 10.0)) / 40.0) + phi * phi
    * (psi * psi) * sin(theta1) * (cos(theta1) * ((l_a_tmp * cos(theta2) / 10.0
    + f_a_tmp_tmp_tmp * sin(theta3) / 10.0) - g_a_tmp_tmp_tmp * cos(theta3) /
    10.0) + sin(theta1) * ((j_a_tmp_tmp_tmp * sin(theta1) / 10.0 +
    i_a_tmp_tmp_tmp * sin(theta3) / 10.0) - k_a_tmp_tmp_tmp * sin(theta1) / 10.0))
    * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0
    * cos(theta3) * sin(theta2) / 10.0)) + phi * rt_powd_snf(psi, 3.0) * (the *
    the) * cos(theta1) * (b_a_tmp * b_a_tmp) / 40.0) - phi * phi * rt_powd_snf
    (psi, 3.0) * the * cos(theta1) * (b_a_tmp * b_a_tmp) / 40.0) + 63.0 * (phi *
    phi) * psi * rt_powd_snf(the, 3.0) * cos(theta1) * (d_a_tmp * d_a_tmp) /
    16000.0) - phi * phi * (the * the) * sin(theta1) * (cos(theta1) * ((3.0 *
    cos(theta1) * cos(theta2) / 10.0 + 3.0 * cos(theta1) * sin(theta2) * sin
    (theta3) / 10.0) - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) +
    sin(theta1) * ((3.0 * cos(theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) *
    sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin
    (theta1) / 10.0)) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin
    (theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0)) + fb_C_23_tmp) +
    xb_C_23_tmp) + gb_C_23_tmp) + hb_C_23_tmp) - b_C_23_tmp_tmp * l_C_23_tmp /
    200.0) + yb_C_23_tmp) + jb_C_23_tmp) + s_C_23_tmp) - lb_C_23_tmp) -
    mb_C_23_tmp) + nb_C_23_tmp) + ob_C_23_tmp) - p_C_23_tmp * (3.0 * cos(theta2)
    * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) * l_C_23_tmp /
    20.0) + pb_C_23_tmp) + qb_C_23_tmp) + g_C_23_tmp_tmp * bb_C_23_tmp * ((3.0 *
    cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos
    (theta3) * sin(theta2) / 10.0) / 40.0) + rb_C_23_tmp) - sb_C_23_tmp) -
                  tb_C_23_tmp) + u_C_23_tmp) + cb_C_23_tmp) + w_C_23_tmp * d140 /
               400.0) + bc_C_23_tmp) + wb_C_23_tmp) + v_C_23_tmp * ((3.0 * cos
              (theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 *
             cos(theta3) * sin(theta2) / 10.0) / 400.0) - w_C_23_tmp *
           l_C_23_tmp / 400.0) - v_C_23_tmp * (cos(theta1) * ((3.0 * cos(theta1)
             * cos(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) * sin(theta2)
             / 10.0) + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 10.0) +
           sin(theta1) * ((3.0 * cos(theta2) * sin(theta1) * sin(theta3) / 10.0
             - 3.0 * sin(theta1) * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin
            (theta1) * sin(theta2) / 10.0)) / 400.0) + kb_C_23_tmp) -
        ub_C_23_tmp) - ac_C_23_tmp) - vb_C_23_tmp) - ab_C_23_tmp) + m_C_23_tmp;
  C_23[6] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((d39 -
    d2) + d42) - d15) + phi * the * cos(theta1) * (rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (c_a_tmp * c_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + psi * the * cos
    (theta1) * (psi * psi * (the * the) * (a_tmp * a_tmp) / 20.0 + psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - d44) + phi * psi * cos
    (theta1) * (phi * (psi * psi) * the * (a_tmp * a_tmp) / 20.0 - phi * (psi *
    psi) * the * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + phi * psi * cos(theta1) *
    ((psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the *
    the) * (h_a_tmp * h_a_tmp) / 20.0) + psi * psi * (the * the) * (i_a_tmp *
    i_a_tmp) / 20.0) / 2.0) + rt_powd_snf(psi, 3.0) * rt_powd_snf(the, 3.0) *
    cos(theta1) * (b_a_tmp * b_a_tmp) / 20.0) + 3.0 * psi * the * sin(theta1) *
    (psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2))
    / 20.0 - psi * the * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta2) - phi * phi * (the * the) * cos(theta1) * sin
    (theta2)) / 20.0) / 2.0) + psi * the * cos(theta1) * ((psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the * the) * (h_a_tmp *
    h_a_tmp) / 20.0) + psi * psi * (the * the) * (i_a_tmp * i_a_tmp) / 20.0) /
    2.0) + phi * psi * cos(theta1) * ((((phi * psi * cos(theta1) * (phi * phi *
    (the * the) * cos(theta1) + phi * phi * psi * the * cos(theta1)) / 10.0 -
    rt_powd_snf(phi, 3.0) * psi * (the * the) * (c_a_tmp * c_a_tmp) / 20.0) -
    rt_powd_snf(phi, 3.0) * psi * (the * the) * (d_a_tmp * d_a_tmp) / 20.0) +
    phi * psi * sin(theta1) * sin(theta2) * (phi * phi * (the * the) * sin
    (theta1) * sin(theta2) + phi * phi * psi * the * sin(theta1) * sin(theta2)) /
    20.0) + phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (the * the) *
    cos(theta2) * sin(theta1) + phi * phi * psi * the * cos(theta2) * sin(theta1))
    / 20.0) / 2.0) + 7.0 * (phi * phi) * (the * the) * (3.0 * cos(theta2) * cos
    (theta3) / 20.0 - 3.0 * sin(theta2) * sin(theta3) / 20.0) * (3.0 * cos
    (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) /
    20.0) + psi * the * sin(theta1) * (psi * the * sin(theta1) * (phi * phi *
    (the * the) * cos(theta1) + phi * phi * psi * the * cos(theta1)) / 10.0 -
    psi * the * cos(theta1) * (phi * phi * (the * the) * sin(theta1) + phi * phi
    * psi * the * sin(theta1)) / 20.0) / 2.0) + 3.0 * psi * the * sin(theta1) *
    (psi * the * (phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2)) - phi * phi * (the * the) * cos(theta1)
    * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))) * (cos(theta1) *
    sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) / 20.0
    + psi * the * (phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * cos
    (theta3) - sin(theta2) * sin(theta3)) - phi * phi * (the * the) * cos(theta1)
    * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) * (cos(theta1) *
    cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) / 20.0)
    / 2.0) - d70 * (psi * the * cos(theta1) * sin(theta2) * (phi * phi * psi *
    cos(theta2) + phi * phi * the * cos(theta2)) / 20.0 - psi * the * cos(theta1)
    * cos(theta2) * (phi * phi * psi * sin(theta2) + phi * phi * the * sin
    (theta2)) / 20.0) / 2.0) - d70 * (phi * (psi * psi) * (the * the) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) / 10.0 +
    phi * (psi * psi) * (the * the) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2)) / 10.0) / 2.0) + d0 * cos(theta1) * (phi * psi * sin
    (theta1) * sin(theta2) * (phi * phi * psi * cos(theta2) + phi * phi * the *
    cos(theta2)) / 20.0 - phi * psi * cos(theta2) * sin(theta1) * (phi * phi *
    psi * sin(theta2) + phi * phi * the * sin(theta2)) / 20.0) / 2.0) - d49 *
    sin(theta1) * ((psi * psi * (the * the) * cos(theta1) * sin(theta1) *
    (d_a_tmp * d_a_tmp) / 10.0 - d24 / 5.0) + psi * psi * (the * the) * cos
    (theta1) * (c_a_tmp * c_a_tmp) * b_a_tmp / 10.0) / 2.0) + phi * psi * cos
    (theta1) * (((((phi * (psi * psi) * the * (a_tmp * a_tmp) / 10.0 - phi *
    (psi * psi) * the * (b_a_tmp * b_a_tmp) / 10.0) - phi * (psi * psi) * the *
    (h_a_tmp * h_a_tmp) / 20.0) - phi * (psi * psi) * the * (i_a_tmp * i_a_tmp) /
    20.0) + d5 * (j_a_tmp * j_a_tmp) / 20.0) + d5 * (k_a_tmp * k_a_tmp) / 20.0) /
    2.0) + phi * psi * cos(theta1) * (((((phi * (psi * psi) * the * (a_tmp *
    a_tmp) / 10.0 - phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) / 10.0) - phi *
    (psi * psi) * the * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) - phi *
    (psi * psi) * the * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) + phi *
    (psi * psi) * the * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) + d5 *
    (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - psi * the * sin
    (theta1) * (d49 * i_a_tmp * (d58 * o_a_tmp + d75 * o_a_tmp) / 20.0 + d49 *
    h_a_tmp * (d58 * p_a_tmp + d75 * p_a_tmp) / 20.0) / 2.0) + phi * psi * cos
    (theta1) * (d12 * the * (e_a_tmp_tmp + f_a_tmp_tmp) * (cos(theta2) * cos
    (theta3) - sin(theta2) * sin(theta3)) / 20.0 + d12 * the * (h_a_tmp_tmp -
    i_a_tmp_tmp) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) /
    20.0) / 2.0) + phi * psi * cos(theta1) * (((d11 * d3 * (a_tmp * a_tmp) /
    10.0 - d3 * d1 * (a_tmp * a_tmp) / 20.0) + phi * phi * (psi * psi) *
    (b_a_tmp * b_a_tmp) / 20.0) - psi * psi * (the * the) * (b_a_tmp * b_a_tmp) /
    10.0) / 2.0) + phi * the * cos(theta1) * (rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (o_a_tmp * o_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (p_a_tmp * p_a_tmp) / 20.0) / 2.0) + phi * psi * sin
    (theta1) * ((d4 * the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) /
    20.0 - phi * d3 * the * cos(theta1) * sin(theta1) / 10.0) + d4 * the * cos
    (theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - psi * the *
    sin(theta1) * ((d4 * the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) /
    10.0 - phi * d3 * the * cos(theta1) * sin(theta1) / 5.0) + phi * d3 * the *
    cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 10.0) / 2.0) + psi * the *
    sin(theta1) * ((phi * d3 * the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin
    (theta1) / 20.0 - phi * (psi * psi) * the * cos(theta1) * sin(theta1) / 10.0)
    + phi * d3 * the * cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 20.0) /
    2.0) + phi * psi * cos(theta1) * ((((phi * psi * cos(theta1) * (phi * phi *
    (the * the) * cos(theta1) + d11 * psi * the * cos(theta1)) / 10.0 -
    rt_powd_snf(phi, 3.0) * psi * (the * the) * (o_a_tmp * o_a_tmp) / 20.0) -
    rt_powd_snf(phi, 3.0) * psi * (the * the) * (p_a_tmp * p_a_tmp) / 20.0) +
    phi * psi * (phi * phi * (the * the) * (c_a_tmp_tmp_tmp * sin(theta3) +
    d_a_tmp_tmp_tmp * sin(theta2)) + d11 * psi * the * (c_a_tmp_tmp_tmp * sin
    (theta3) + d_a_tmp_tmp_tmp * sin(theta2))) * (cos(theta2) * sin(theta1) *
    sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) / 20.0) + phi * psi *
    (phi * phi * (the * the) * (b_a_tmp * d_a_tmp * sin(theta3) - c_a_tmp *
    g_a_tmp * sin(theta1)) + d11 * psi * the * (b_a_tmp * d_a_tmp * sin(theta3)
    - c_a_tmp * g_a_tmp * sin(theta1))) * (sin(theta1) * sin(theta2) * sin
    (theta3) - cos(theta2) * cos(theta3) * sin(theta1)) / 20.0) / 2.0) + d128) +
    d84) - d85) + f_C_23_tmp) + phi * psi * cos(theta1) * ((psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the * the) * (a_tmp * a_tmp)
    * (c_a_tmp * c_a_tmp) / 20.0) + psi * psi * (the * the) * (a_tmp * a_tmp) *
    (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + psi * the * cos(theta1) * ((psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the * the) * (a_tmp *
    a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + psi * psi * (the * the) * (a_tmp *
    a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - d129) - d31) + d32) + d52) -
    d130) + phi * psi * cos(theta1) * (((((phi * phi * (psi * psi) * (a_tmp *
    a_tmp) / 10.0 - psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) - psi *
    psi * (the * the) * (h_a_tmp * h_a_tmp) / 20.0) - psi * psi * (the * the) *
    (i_a_tmp * i_a_tmp) / 20.0) + phi * phi * (psi * psi) * (j_a_tmp * j_a_tmp) /
    20.0) + phi * phi * (psi * psi) * (k_a_tmp * k_a_tmp) / 20.0) / 2.0) - d26)
    + phi * psi * cos(theta1) * (((((phi * phi * (psi * psi) * (a_tmp * a_tmp) /
    10.0 - psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) - psi * psi *
    (the * the) * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + phi * phi *
    (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) - psi * psi *
    (the * the) * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) + phi * phi *
    (psi * psi) * (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + d53)
    + phi * psi * cos(theta1) * (psi * psi * (the * the) * (a_tmp * a_tmp) /
    20.0 + psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - d131)
    + d133) + d59) + j_C_23_tmp) - d60) - d37) + d134 * d140 / 40.0) + 7.0 *
                     (phi * phi) * psi * rt_powd_snf(the, 3.0) * (3.0 * cos
    (theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2)
    * cos(theta3) / 20.0) * (3.0 * cos(theta2) * cos(theta3) / 20.0 - 3.0 * sin
    (theta2) * sin(theta3) / 20.0) / 40.0) + 7.0 * (phi * phi) * psi *
                    rt_powd_snf(the, 3.0) * (3.0 * cos(theta1) * cos(theta2) *
    sin(theta3) / 20.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 20.0) *
                    (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) *
                     sin(theta2) / 20.0) / 40.0) + phi * rt_powd_snf(psi, 3.0) *
                   (the * the) * cos(theta1) * (b_a_tmp * b_a_tmp) / 40.0) - phi
                  * phi * rt_powd_snf(psi, 3.0) * the * cos(theta1) * (b_a_tmp *
    b_a_tmp) / 40.0) + fb_C_23_tmp) + jb_C_23_tmp) + s_C_23_tmp) - mb_C_23_tmp)
             + i_C_23_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0) +
    rb_C_23_tmp;
  d2 = d83 * a_tmp;
  d5 = d2 * b_a_tmp;
  d10 = d5 / 5.0;
  d14 = 3.0 * the * b_a_tmp;
  d15 = d80 * h_a_tmp * j_a_tmp;
  d24 = d80 * i_a_tmp * k_a_tmp;
  d26 = d80 * a_tmp;
  d31 = d26 * b_a_tmp;
  d32 = d31 / 10.0;
  d33 = (d15 / 20.0 + d24 / 20.0) - d32;
  d34 = d31 / 5.0;
  d44 = (d83 * h_a_tmp * j_a_tmp / 10.0 + d83 * i_a_tmp * k_a_tmp / 10.0) - d10;
  d51 = the * a_tmp;
  d52 = d14 * h_C_23_tmp / 2.0;
  d14 = d14 * d43 / 2.0;
  d43 = d8 * d40 * b_a_tmp / 40.0;
  d15 = d45 * ((d15 / 10.0 + d24 / 10.0) - d34) / 2.0;
  d24 = d45 * d33;
  d53 = d24 / 2.0;
  d59 = phi * d1;
  d62 = d59 * b_a_tmp;
  d63 = d79 * b_a_tmp;
  d66 = d0 * the;
  d69 = d62 * o_a_tmp - d63 * o_a_tmp;
  d72 = d62 * p_a_tmp - d63 * p_a_tmp;
  d73 = (d88 * d69 / 20.0 + d86 * d72 / 20.0) - d66 * p_a_tmp * d96 / 20.0;
  d13 *= d66 * o_a_tmp;
  d82 = psi * d1;
  d86 = d59 * a_tmp;
  d87 = d82 * a_tmp;
  d88 = d86 + d87;
  d56 *= d7;
  d89 = d82 * b_a_tmp;
  d91 = d70 * (d62 + d89);
  d92 = d91 / 10.0;
  d93 = d50 * d88;
  d96 = d59 * h_a_tmp + d82 * h_a_tmp;
  d101 = d59 * i_a_tmp + d82 * i_a_tmp;
  d63 = d62 * d_a_tmp - d63 * d_a_tmp;
  d102 = d59 * c_a_tmp * b_a_tmp - d79 * c_a_tmp * b_a_tmp;
  d103 = d118 * d1;
  d36 *= b_a_tmp;
  d106 = d58 * d1;
  d111 = 7.0 * d8;
  d114 = d111 * psi * the;
  d88 = d45 * (d64 * d88 / 20.0 - phi * psi * cos(theta1) * (phi * (the * the) *
    sin(theta1) + psi * (the * the) * sin(theta1)) / 10.0) / 2.0;
  d68 = d95 * (d65 * d102 / 20.0 - d68 * d63 / 20.0) / 2.0;
  d69 = d95 * (d_C_23_tmp * d69 / 20.0 + e_C_23_tmp * d72 / 20.0) / 2.0;
  d72 = d45 * ((d0 * d96 * j_a_tmp / 20.0 - phi * psi * cos(theta1) * (phi *
    (the * the) * sin(theta1) + psi * (the * the) * sin(theta1)) / 10.0) + d0 *
               d101 * k_a_tmp / 20.0);
  d95 = d72 / 2.0;
  d23 = d48 * (((d55 * d63 / 20.0 + d66 * d_a_tmp * d23 / 20.0) - d66 * c_a_tmp *
                d25 / 20.0) - d54 * d102 / 20.0) / 2.0;
  d25 = d114 * n_a_tmp;
  d63 = 3.0 * phi * d1;
  d102 = d63 * d_a_tmp / 20.0;
  d116 = d103 * d_a_tmp / 20.0;
  d117 = d36 * (d102 + d116);
  d118 = d103 * b_a_tmp;
  d121 = l_C_23_tmp_tmp * d22;
  d123 = 7.0 * d41;
  d124 = d123 * psi * d1;
  d120 *= the;
  p_C_23_tmp = 337.0 * d11 * d3 * the;
  r_C_23_tmp = 21.0 * d8;
  s_C_23_tmp = r_C_23_tmp * psi * the;
  v_C_23_tmp = l_C_23_tmp_tmp * a_tmp;
  eb_C_23_tmp = d79 * a_tmp;
  fb_C_23_tmp = eb_C_23_tmp * d35;
  hb_C_23_tmp = b_C_23_tmp_tmp_tmp * d_a_tmp;
  jb_C_23_tmp = m_C_23_tmp_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
    cos(theta3) * sin(theta2) / 20.0);
  mb_C_23_tmp = n_C_23_tmp_tmp * b_a_tmp * d_a_tmp;
  ob_C_23_tmp = 63.0 * d41;
  pb_C_23_tmp = d111 * d3 * d1 * n_a_tmp;
  qb_C_23_tmp = d103 * a_tmp;
  rb_C_23_tmp = ob_C_23_tmp * psi * d1;
  tb_C_23_tmp = qb_C_23_tmp * o_C_23_tmp / 200.0;
  wb_C_23_tmp = phi * (the * the) * cos(theta1) * (cos(theta1) * (3.0 * cos
    (theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2)
    * cos(theta3) / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin
    (theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) *
    ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 *
     cos(theta3) * sin(theta2) / 10.0) / 2.0;
  e_a_tmp_tmp = mb_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 800.0;
  r_C_23_tmp = r_C_23_tmp * d3 * d1 * c_a_tmp * b_a_tmp;
  f_a_tmp_tmp = d114 * b_a_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
    cos(theta3) * sin(theta2) / 20.0);
  h_a_tmp_tmp = v_C_23_tmp * o_C_23_tmp * (3.0 * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 20.0;
  b_C_23_tmp_tmp = v_C_23_tmp * bb_C_23_tmp;
  i_a_tmp_tmp = b_C_23_tmp_tmp * (d109 - 0.1);
  p_a_tmp_tmp = s_C_23_tmp * c_a_tmp * b_a_tmp;
  c_C_23_tmp_tmp = eb_C_23_tmp * d140;
  eb_C_23_tmp = c_C_23_tmp_tmp * (d109 - 0.1) / 2.0;
  q_a_tmp_tmp = o_C_23_tmp_tmp * d125 / 400.0;
  r_a_tmp_tmp = o_C_23_tmp_tmp * (d109 - 0.1) / 800.0;
  s_C_23_tmp = s_C_23_tmp * b_a_tmp * d_a_tmp;
  C_23_tmp = fb_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin
    (theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0;
  b_C_23_tmp = C_23_tmp_tmp * d1;
  c_C_23_tmp = hb_C_23_tmp * d35 / 800.0;
  d_C_23_tmp = hb_C_23_tmp * o_C_23_tmp / 400.0;
  e_C_23_tmp = jb_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  d_C_23_tmp_tmp = n_C_23_tmp_tmp * c_a_tmp * b_a_tmp;
  i_C_23_tmp_tmp = d_C_23_tmp_tmp * d140;
  f_C_23_tmp = rb_C_23_tmp * a_tmp * c_a_tmp * d_a_tmp / 16000.0;
  g_C_23_tmp = r_C_23_tmp * d35 / 800.0;
  h_C_23_tmp = f_a_tmp_tmp * (d109 - 0.1) / 40.0;
  i_C_23_tmp = p_a_tmp_tmp * d35 / 800.0;
  j_C_23_tmp = s_C_23_tmp * (d109 - 0.1) / 800.0;
  C_23_tmp_tmp_tmp = i_C_23_tmp_tmp / 800.0;
  C_23[1] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((((((((((((phi * d44 / 2.0 + phi * ((d5 * (d_a_tmp *
    d_a_tmp) / 10.0 - d10) + d2 * (c_a_tmp * c_a_tmp) * b_a_tmp / 10.0) / 2.0) -
    d39) + d38 * (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (o_a_tmp *
    o_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (p_a_tmp *
    p_a_tmp) / 20.0) / 2.0) - d51 * (d109 - 0.1) / 2.0) - d52) + d38 *
    (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (c_a_tmp * c_a_tmp) / 20.0
    + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (d_a_tmp * d_a_tmp) / 20.0)
    / 2.0) - d6 * (d90 * h_a_tmp * p_a_tmp / 20.0 + d90 * i_a_tmp * o_a_tmp /
    20.0) / 2.0) - d14) + d43) + d20 * (d83 * (a_tmp * a_tmp) / 10.0 + d83 *
    (b_a_tmp * b_a_tmp) / 20.0)) - d15) + d53) + d70 * (rt_powd_snf(phi, 3.0) *
    (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) *
    (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + d17 * d33) - d48 * (d73 - d13 / 20.0) /
    2.0) + d70 * ((d93 / 20.0 - d56 / 20.0) + d92) / 2.0) + d41 * d46 * (a_tmp *
    a_tmp) * b_a_tmp / 5.0) + d12 * the * (h_a_tmp * h_a_tmp) / 40.0) + d12 *
    the * (i_a_tmp * i_a_tmp) / 40.0) - d18 * d3 * the * (m_a_tmp * m_a_tmp) /
    40.0) - 7.0 * phi * psi * the * (i_a_tmp_tmp_tmp * sin(theta3) / 20.0 -
    k_a_tmp_tmp_tmp * sin(theta1) / 20.0) / 40.0) - d21 * ((d2 * b_a_tmp *
    (d_a_tmp * d_a_tmp) / 10.0 - d83 * a_tmp * sin(theta1) / 5.0) + d2 *
    (c_a_tmp * c_a_tmp) * sin(theta1) / 10.0)) - d80 * (j_a_tmp * j_a_tmp) /
    40.0) - d80 * (k_a_tmp * k_a_tmp) / 40.0) + 7.0 * (phi * phi) * (psi * psi) *
    the * (n_a_tmp * n_a_tmp) / 40.0) - d45 * ((d0 * cos(theta2) * sin(theta1) *
    (d59 * cos(theta1) * c_a_tmp + d82 * cos(theta1) * c_a_tmp) / 20.0 - d45 *
    (phi * d1 * sin(theta1) + psi * d1 * sin(theta1)) / 10.0) + d65 * (d59 * cos
    (theta1) * d_a_tmp + d82 * cos(theta1) * d_a_tmp) / 20.0) / 2.0) + psi * the
    * sin(theta1) * (psi * the * cos(theta1) * sin(theta2) * (phi * phi * psi *
    cos(theta2) + phi * phi * the * cos(theta2)) / 20.0 - psi * the * cos(theta1)
    * cos(theta2) * (phi * phi * psi * sin(theta2) + phi * phi * the * sin
    (theta2)) / 20.0) / 2.0) + psi * the * sin(theta1) * (phi * (psi * psi) *
    (the * the) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3)) / 10.0 + phi * (psi * psi) * (the * the) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (cos
    (theta2) * sin(theta3) + cos(theta3) * sin(theta2)) / 10.0) / 2.0) - phi *
    psi * cos(theta1) * (phi * psi * sin(theta1) * sin(theta2) * (phi * phi *
    psi * cos(theta2) + phi * phi * the * cos(theta2)) / 20.0 - phi * psi * cos
    (theta2) * sin(theta1) * (phi * phi * psi * sin(theta2) + phi * phi * the *
    sin(theta2)) / 20.0) / 2.0) + d66 * d35 / 2.0) - d70 * (((((rt_powd_snf(phi,
    3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + d83 * (j_a_tmp * j_a_tmp) /
    20.0) + d83 * (k_a_tmp * k_a_tmp) / 20.0) - d79 * (h_a_tmp * h_a_tmp) / 20.0)
    - d79 * (i_a_tmp * i_a_tmp) / 20.0) - d79 * (b_a_tmp * b_a_tmp) / 10.0) /
    2.0) + d20 * ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0
    + rt_powd_snf(phi, 3.0) * (psi * psi) * (j_a_tmp * j_a_tmp) / 20.0) +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (k_a_tmp * k_a_tmp) / 20.0)) + d70 *
    ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf
    (phi, 3.0) * (psi * psi) * (j_a_tmp * j_a_tmp) / 20.0) + rt_powd_snf(phi,
    3.0) * (psi * psi) * (k_a_tmp * k_a_tmp) / 20.0) / 2.0) - d70 *
    (((((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + d83 *
    (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) *
    (psi * psi) * (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) - phi * (psi
    * psi) * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) - d79 * (a_tmp * a_tmp) *
    (c_a_tmp * c_a_tmp) / 20.0) - phi * (psi * psi) * (the * the) * (a_tmp *
    a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + d126) - d70 * (((rt_powd_snf
    (phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) *
    (psi * psi) * (b_a_tmp * b_a_tmp) / 20.0) - phi * (psi * psi) * (the * the) *
    (a_tmp * a_tmp) / 20.0) - phi * (psi * psi) * (the * the) * (b_a_tmp *
    b_a_tmp) / 10.0) / 2.0) - d127) - d88) - d45 * ((d26 * (c_a_tmp * c_a_tmp) *
    b_a_tmp / 10.0 - d34) + d31 * (d_a_tmp * d_a_tmp) / 10.0) / 2.0) + d45 *
    ((phi * phi * (psi * psi) * the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin
    (theta1) / 20.0 - d32) + phi * phi * (psi * psi) * the * cos(theta1) * sin
    (theta1) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + d68) + d17 * ((phi * phi *
    (psi * psi) * the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) / 20.0 -
    phi * phi * (psi * psi) * the * cos(theta1) * sin(theta1) / 10.0) + phi *
    phi * (psi * psi) * the * cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) /
    20.0)) - d84) - d21 * d44) - d80 * (a_tmp * a_tmp) / 8.0) + d16 * (((((phi *
    phi * (psi * psi) * the * (h_a_tmp * h_a_tmp) / 20.0 + phi * phi * (psi *
    psi) * the * (i_a_tmp * i_a_tmp) / 20.0) - phi * phi * (psi * psi) * the *
    (j_a_tmp * j_a_tmp) / 20.0) - phi * phi * (psi * psi) * the * (k_a_tmp *
    k_a_tmp) / 20.0) - phi * phi * (psi * psi) * the * (a_tmp * a_tmp) / 10.0) +
    d80 * (b_a_tmp * b_a_tmp) / 10.0)) + d70 * ((((d92 - d56 * (p_a_tmp *
    p_a_tmp) / 20.0) - d56 * (o_a_tmp * o_a_tmp) / 20.0) + d49 * d96 * h_a_tmp /
    20.0) + d49 * d101 * i_a_tmp / 20.0) / 2.0) + d70 * ((((d92 - d56 * (c_a_tmp
    * c_a_tmp) / 20.0) - d56 * (d_a_tmp * d_a_tmp) / 20.0) + d54 * (phi * (the *
    the) * cos(theta1) * sin(theta2) + psi * (the * the) * cos(theta1) * sin
    (theta2)) / 20.0) + d55 * (phi * (the * the) * cos(theta1) * cos(theta2) +
    psi * (the * the) * cos(theta1) * cos(theta2)) / 20.0) / 2.0) + d129) - d16 *
    (((((phi * phi * (psi * psi) * the * (a_tmp * a_tmp) / 10.0 - phi * phi *
    (psi * psi) * the * (b_a_tmp * b_a_tmp) / 10.0) + phi * phi * (psi * psi) *
    the * (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) - phi * phi * (psi *
    psi) * the * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) - phi * phi *
    (psi * psi) * the * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) + d80 *
    (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0)) + phi * phi * (psi * psi)
    * the * (b_a_tmp * b_a_tmp) / 8.0) - d41 * d3 * a_tmp * b_a_tmp / 20.0) +
    d20 * ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp)
    * (d_a_tmp * d_a_tmp) / 20.0)) + d70 * ((rt_powd_snf(phi, 3.0) * (psi * psi)
    * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp *
    c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi)
    * (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + d69) - d95) -
    d16 * (phi * phi * (psi * psi) * the * (a_tmp * a_tmp) / 20.0 - phi * phi *
    (psi * psi) * the * (b_a_tmp * b_a_tmp) / 20.0)) + d23) - phi * phi * (psi *
    psi) * the * (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp) / 40.0) + d117 *
    (d109 - 0.1) / 40.0) + d25 * d35 / 40.0) + 7.0 * psi * the * cos(theta1) *
    (phi * phi * psi * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0 -
    3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) + phi * phi * the *
    (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) *
    cos(theta3) * sin(theta1) / 20.0)) * ((3.0 * cos(theta2) * sin(theta3) /
    10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 40.0) + d94 *
    b_a_tmp * (d59 / 20.0 + d106 / 20.0) * (d109 - 0.1) / 20.0) + d118 * ((3.0 *
    cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos
    (theta3) * sin(theta2) / 10.0) / 400.0) - l_C_23_tmp_tmp * m_a_tmp * d125 /
    20.0) - d121 * d35 / 20.0) + d124 * m_a_tmp * (3.0 * cos(theta2) * sin
    (theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 40.0) + d120 *
    c_a_tmp * b_a_tmp / 800.0) + d36 * (d59 * (3.0 * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) + d106 * (3.0 * cos(theta2) *
    sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0)) * ((d105 /
    10.0 + d107 / 10.0) - 0.1) / 40.0) + e_C_23_tmp_tmp * d1 * (l_a_tmp_tmp /
    20.0 - m_a_tmp_tmp / 20.0) * (cos(theta1) * (d27 - d28) + sin(theta1) * (d29
    - d30)) / 40.0) - d19 * d1 * (f_a_tmp_tmp_tmp * e_a_tmp / 20.0 -
    g_a_tmp_tmp_tmp * g_a_tmp / 20.0) * (h_a_tmp_tmp_tmp * d_a_tmp * sin(theta3)
    / 20.0 - j_a_tmp_tmp_tmp * g_a_tmp * sin(theta1) / 20.0) / 20.0) + d8 * d46 *
    the * (a_tmp * a_tmp) * b_a_tmp / 40.0) + 3.0 * d8 * psi * the * b_a_tmp *
    (d109 - 0.1) / 400.0) + 7.0 * d11 * psi * (the * the) * (h_a_tmp_tmp_tmp *
    sin(theta2) * sin(theta3) / 20.0 - j_a_tmp_tmp_tmp * cos(theta3) * sin
    (theta1) / 20.0) * (cos(theta1) * ((l_a_tmp * cos(theta2) / 10.0 +
    f_a_tmp_tmp_tmp * sin(theta3) / 10.0) - l_a_tmp * c_a_tmp * cos(theta3) /
    10.0) + sin(theta1) * ((j_a_tmp_tmp_tmp * sin(theta1) / 10.0 +
    i_a_tmp_tmp_tmp * sin(theta3) / 10.0) - j_a_tmp_tmp_tmp * g_a_tmp * sin
    (theta1) / 10.0)) / 40.0) + d86 * (cos(theta1) * (f_a_tmp_tmp_tmp * sin
    (theta3) / 10.0 - g_a_tmp_tmp_tmp * cos(theta3) / 10.0) + sin(theta1) *
    (i_a_tmp_tmp_tmp * sin(theta3) / 10.0 - k_a_tmp_tmp_tmp * sin(theta1) / 10.0))
    * (d109 - 0.1)) + pb_C_23_tmp * (cos(theta1) * (3.0 * a_tmp * sin(theta2) *
    sin(theta3) / 10.0 - 3.0 * a_tmp * cos(theta2) * cos(theta3) / 10.0) + sin
    (theta1) * (3.0 * b_a_tmp * sin(theta2) * sin(theta3) / 10.0 - 3.0 * c_a_tmp
    * cos(theta3) * sin(theta1) / 10.0)) / 40.0) - 7.0 * psi * the * cos(theta1)
    * (3.0 * d11 * psi * cos(theta2) * sin(theta1) / 20.0 + 3.0 * d11 * the *
    cos(theta2) * sin(theta1) / 20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0
    + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 40.0) + d86 * (cos(theta1)
    * ((3.0 * cos(theta1) * cos(theta2) / 10.0 + l_a_tmp * sin(theta2) * sin
    (theta3) / 10.0) - 3.0 * a_tmp * cos(theta2) * cos(theta3) / 10.0) + sin
    (theta1) * ((3.0 * cos(theta2) * sin(theta1) / 10.0 + h_a_tmp_tmp_tmp * sin
    (theta2) * sin(theta3) / 10.0) - 3.0 * c_a_tmp * cos(theta3) * sin(theta1) /
    10.0)) * (d109 - 0.1) / 2.0) + p_C_23_tmp * (a_tmp * a_tmp) * (c_a_tmp *
    c_a_tmp) / 16000.0) - tb_C_23_tmp) + phi * phi * (psi * psi) * the * (a_tmp *
    a_tmp) * (d_a_tmp * d_a_tmp) / 40.0) - p_C_23_tmp * (c_a_tmp * c_a_tmp) *
    (b_a_tmp * b_a_tmp) / 16000.0) - cc_C_23_tmp * d1 * (a_tmp * a_tmp) *
    b_a_tmp / 10.0) + wb_C_23_tmp) + d118 * (d109 - 0.1) / 200.0) - f_C_23_tmp)
    + e_a_tmp_tmp) - g_C_23_tmp) + h_C_23_tmp) - dc_C_23_tmp) - ec_C_23_tmp) -
    i_C_23_tmp) + j_C_23_tmp) - fb_C_23_tmp * (d109 - 0.1)) - h_a_tmp_tmp) -
                    i_a_tmp_tmp / 20.0) - fc_C_23_tmp) + jb_C_23_tmp * (d109 -
    0.1) / 20.0) + gc_C_23_tmp) - eb_C_23_tmp) + q_a_tmp_tmp) - r_a_tmp_tmp) -
             C_23_tmp) - b_C_23_tmp * a_tmp * (c_a_tmp * c_a_tmp) * b_a_tmp /
            8000.0) - c_C_23_tmp) - hc_C_23_tmp * d1 * c_a_tmp * b_a_tmp * d35 /
          800.0) - d_C_23_tmp) + e_C_23_tmp) + mb_C_23_tmp * (d109 - 0.1) /
       400.0) - C_23_tmp_tmp_tmp) + ic_C_23_tmp) + jc_C_23_tmp;
  d6 = y_C_23_tmp * d22 / 40.0;
  d10 = d45 * d44 / 2.0;
  d26 = pb_C_23_tmp * d140;
  p_C_23_tmp = i_a_tmp_tmp / 40.0;
  y_C_23_tmp = 7.0 * phi * psi * sin(theta1) * (phi * (the * the) * (3.0 * cos
    (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) +
    phi * phi * psi * (the * the) * (3.0 * cos(theta2) * sin(theta3) / 20.0 +
    3.0 * cos(theta3) * sin(theta2) / 20.0)) * ((3.0 * cos(theta2) * sin(theta3)
    / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0)
    / 40.0;
  fb_C_23_tmp = 3.0 * rt_powd_snf(phi, 3.0) * psi * the * sin(theta1) * ((3.0 *
    cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos
    (theta3) * sin(theta2) / 10.0) / 400.0;
  r_C_23_tmp = r_C_23_tmp * d140 / 800.0;
  jb_C_23_tmp = f_a_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  mb_C_23_tmp = p_a_tmp_tmp * d140 / 800.0;
  s_C_23_tmp = s_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin
    (theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 800.0;
  C_23[4] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((((the * sin(theta1) * (rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (o_a_tmp * o_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (p_a_tmp * p_a_tmp) / 20.0) / 2.0 - d39) + d18 * the
    * bb_C_23_tmp / 40.0) + q_C_23_tmp * the * c_a_tmp / 800.0) - d51 * ((3.0 *
    cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos
    (theta3) * sin(theta2) / 10.0) / 2.0) - d52) + the * sin(theta1) *
    (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (c_a_tmp * c_a_tmp) / 20.0
    + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (d_a_tmp * d_a_tmp) / 20.0)
    / 2.0) - d14) + d43) + d6) + d64 * (rt_powd_snf(phi, 3.0) * (psi * psi) *
    (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp *
    b_a_tmp) / 20.0) / 2.0) - d15) + d24 / 2.0) + d70 * (rt_powd_snf(phi, 3.0) *
    (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) *
    (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + d50 * d33 / 2.0) - d47 * b_a_tmp * (d73
    - d13 / 20.0) / 2.0) + d49 * sin(theta1) * ((d93 / 20.0 - d56 / 20.0) + d91 /
    10.0) / 2.0) + d41 * d46 * (a_tmp * a_tmp) * sin(theta1) / 20.0) - d45 *
    ((d5 * (d_a_tmp * d_a_tmp) / 10.0 - d2 * sin(theta1) / 5.0) + rt_powd_snf
    (phi, 3.0) * (psi * psi) * cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) /
    10.0) / 2.0) + 7.0 * d41 * (the * the) * (j_a_tmp_tmp_tmp * cos(theta3) /
    20.0 - k_C_23_tmp * sin(theta3) / 20.0) * (3.0 * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 20.0) - phi * psi * cos
    (theta1) * ((d67 * sin(theta1) * (phi * (the * the) * cos(theta1) * cos
    (theta2) + psi * (the * the) * cos(theta1) * cos(theta2)) / 20.0 - d0 * cos
    (theta1) * (d62 + d89) / 10.0) + d64 * sin(theta2) * (d86 * sin(theta2) +
    d87 * sin(theta2)) / 20.0) / 2.0) + psi * the * sin(theta1) * (d49 * cos
    (theta1) * sin(theta2) * (d58 * cos(theta2) + d75 * cos(theta2)) / 20.0 -
    d49 * cos(theta1) * cos(theta2) * (d58 * sin(theta2) + d75 * sin(theta2)) /
    20.0) / 2.0) + psi * the * sin(theta1) * (d4 * d1 * (f_a_tmp * sin(theta3) +
    a_tmp_tmp_tmp * sin(theta2)) * (cos(theta2) * cos(theta3) - sin(theta2) *
    sin(theta3)) / 10.0 + d4 * d1 * (b_a_tmp_tmp_tmp * sin(theta3) - f_a_tmp *
    cos(theta3)) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) /
    10.0) / 2.0) - phi * psi * cos(theta1) * (phi * psi * sin(theta1) * sin
    (theta2) * (d11 * psi * cos(theta2) + d11 * the * cos(theta2)) / 20.0 - phi *
    psi * cos(theta2) * sin(theta1) * (d11 * psi * sin(theta2) + d11 * the * sin
    (theta2)) / 20.0) / 2.0) - psi * the * sin(theta1) * (((((rt_powd_snf(phi,
    3.0) * d3 * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * d3 * (j_a_tmp *
    j_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (k_a_tmp * k_a_tmp)
    / 20.0) - phi * d3 * (the * the) * (h_a_tmp * h_a_tmp) / 20.0) - phi * (psi *
    psi) * (the * the) * (i_a_tmp * i_a_tmp) / 20.0) - phi * (psi * psi) * (the *
    the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) + d64 * ((rt_powd_snf(phi, 3.0) *
    (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) *
    (j_a_tmp * j_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (k_a_tmp
    * k_a_tmp) / 20.0) / 2.0) + psi * the * sin(theta1) * ((rt_powd_snf(phi, 3.0)
    * (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi)
    * (j_a_tmp * j_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) *
    (k_a_tmp * k_a_tmp) / 20.0) / 2.0) - psi * the * sin(theta1) *
    (((((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp)
    * (d_a_tmp * d_a_tmp) / 20.0) - phi * (psi * psi) * (the * the) * (b_a_tmp *
    b_a_tmp) / 10.0) - phi * (psi * psi) * (the * the) * (a_tmp * a_tmp) *
    (c_a_tmp * c_a_tmp) / 20.0) - phi * (psi * psi) * (the * the) * (a_tmp *
    a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + d126) - psi * the * sin(theta1)
    * (((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp) / 20.0) - phi *
    (psi * psi) * (the * the) * (a_tmp * a_tmp) / 20.0) - phi * (psi * psi) *
    (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - d127) + d66 * d140 / 2.0)
    - d88) - phi * psi * cos(theta1) * ((phi * phi * (psi * psi) * the * cos
    (theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) / 10.0 - phi * phi * (psi * psi)
    * the * cos(theta1) * sin(theta1) / 5.0) + phi * phi * (psi * psi) * the *
    cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 10.0) / 2.0) + phi * psi *
    cos(theta1) * ((phi * phi * (psi * psi) * the * cos(theta1) * (c_a_tmp *
    c_a_tmp) * sin(theta1) / 20.0 - phi * phi * (psi * psi) * the * cos(theta1) *
    sin(theta1) / 10.0) + phi * phi * (psi * psi) * the * cos(theta1) * sin
    (theta1) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + d68) + d50 * ((phi * phi *
    (psi * psi) * the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) / 20.0 -
    phi * phi * (psi * psi) * the * cos(theta1) * sin(theta1) / 10.0) + phi *
    phi * (psi * psi) * the * cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) /
    20.0) / 2.0) - d84) - d10) + d70 * (((((phi * phi * (psi * psi) * the *
    (h_a_tmp * h_a_tmp) / 20.0 + phi * phi * (psi * psi) * the * (i_a_tmp *
    i_a_tmp) / 20.0) - phi * phi * (psi * psi) * the * (j_a_tmp * j_a_tmp) /
    20.0) - phi * phi * (psi * psi) * the * (k_a_tmp * k_a_tmp) / 20.0) - phi *
    phi * (psi * psi) * the * (a_tmp * a_tmp) / 10.0) + phi * phi * (psi * psi) *
    the * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) + psi * the * sin(theta1) * ((((psi
    * the * sin(theta1) * (phi * (the * the) * sin(theta1) + psi * (the * the) *
    sin(theta1)) / 10.0 - rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0) *
    (p_a_tmp * p_a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the,
    3.0) * (o_a_tmp * o_a_tmp) / 20.0) + psi * the * (phi * (the * the) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) + psi * (the * the) * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2))) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) / 20.0) + psi * the *
    (phi * (the * the) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) *
    cos(theta2) * cos(theta3)) + psi * (the * the) * (cos(theta1) * sin(theta2) *
    sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3))) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) / 20.0) /
    2.0) + psi * the * sin(theta1) * ((((psi * the * sin(theta1) * (phi * (the *
    the) * sin(theta1) + psi * (the * the) * sin(theta1)) / 10.0 - rt_powd_snf
    (phi, 3.0) * psi * rt_powd_snf(the, 3.0) * (c_a_tmp * c_a_tmp) / 20.0) -
    rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0) * (d_a_tmp * d_a_tmp) /
    20.0) + psi * the * cos(theta1) * sin(theta2) * (phi * (the * the) * cos
    (theta1) * sin(theta2) + psi * (the * the) * cos(theta1) * sin(theta2)) /
    20.0) + psi * the * cos(theta1) * cos(theta2) * (phi * (the * the) * cos
    (theta1) * cos(theta2) + psi * (the * the) * cos(theta1) * cos(theta2)) /
    20.0) / 2.0) + d129) - d70 * (((((phi * phi * (psi * psi) * the * (a_tmp *
    a_tmp) / 10.0 - phi * phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) / 10.0)
    + phi * phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp) /
    20.0) - phi * phi * (psi * psi) * the * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp)
    / 20.0) - phi * phi * (psi * psi) * the * (a_tmp * a_tmp) * (d_a_tmp *
    d_a_tmp) / 20.0) + phi * phi * (psi * psi) * the * (c_a_tmp * c_a_tmp) *
    (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + ob_C_23_tmp * d1 * c_a_tmp * d_a_tmp /
    8000.0) + d64 * ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) /
    10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp)
    * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + psi * the * sin(theta1) *
    ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf
    (phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0)
    + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp) * (d_a_tmp *
    d_a_tmp) / 20.0) / 2.0) + d69) - d95) - d70 * (phi * phi * (psi * psi) * the
    * (a_tmp * a_tmp) / 20.0 - phi * phi * (psi * psi) * the * (b_a_tmp *
    b_a_tmp) / 20.0) / 2.0) + d23) + d26 / 40.0) + qb_C_23_tmp * l_C_23_tmp /
    200.0) - d61) + phi * (the * the) * cos(theta1) * (cos(theta1) * ((3.0 * cos
    (theta1) * cos(theta2) / 10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1)
    * ((3.0 * cos(theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2)
    * sin(theta3) / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0))
    * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0
    * cos(theta3) * sin(theta2) / 10.0)) - d60) - d37) + 3.0 * (phi * phi) * psi
    * (the * the) * sin(theta1) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0
    * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 400.0) +
    d25 * d140 / 40.0) + d117 * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0) - 7.0 *
    (phi * phi) * psi * (the * the) * (3.0 * cos(theta1) * sin(theta2) * sin
    (theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) *
    (cos(theta1) * (3.0 * cos(theta1) * cos(theta2) * sin(theta3) / 10.0 + 3.0 *
    cos(theta1) * cos(theta3) * sin(theta2) / 10.0) + sin(theta1) * (3.0 * cos
    (theta2) * sin(theta1) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta1)
    * sin(theta2) / 10.0)) / 20.0) - 7.0 * (phi * phi) * psi * (the * the) *
    (3.0 * cos(theta1) * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta1) *
    cos(theta3) * sin(theta2) / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * sin
    (theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3)
    / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) /
    10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0) +
    ib_C_23_tmp * d22 / 20.0) + d120 * a_tmp * d_a_tmp / 800.0) + d142 * ((3.0 *
    cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + d108) / 40.0)
    + d124 * d113 * (d105 / 20.0 + d107 / 20.0) / 40.0) + d124 * (n_a_tmp_tmp -
    o_a_tmp_tmp) * (j_a_tmp_tmp_tmp * g_a_tmp / 20.0 - k_C_23_tmp * e_a_tmp /
    20.0) / 40.0) + d94 * sin(theta1) * (d59 / 20.0 + d106 / 20.0) *
    ((j_a_tmp_tmp_tmp * e_a_tmp / 10.0 - 3.0 * d_a_tmp / 10.0) + d104 * sin
    (theta2) / 10.0) / 20.0) - e_C_23_tmp_tmp * d1 * (g_a_tmp_tmp_tmp * e_a_tmp /
    20.0 + d122 * d_a_tmp / 20.0) * (cos(theta1) * ((d137 + d27) - k_a_tmp_tmp /
    10.0) + sin(theta1) * ((d112 + d29) - m_a_tmp_tmp / 10.0)) / 40.0) +
    rt_powd_snf(phi, 3.0) * rt_powd_snf(psi, 3.0) * the * (a_tmp * a_tmp) * sin
    (theta1) / 40.0) - ob_C_23_tmp * psi * (the * the) * (c_a_tmp * c_a_tmp) *
    b_a_tmp / 16000.0) + rb_C_23_tmp * b_a_tmp * (d_a_tmp * d_a_tmp) / 16000.0)
    - 7.0 * d11 * psi * (the * the) * (3.0 * a_tmp * sin(theta2) * sin(theta3) /
    20.0 - 3.0 * a_tmp * cos(theta2) * cos(theta3) / 20.0) * (cos(theta1) *
    ((l_a_tmp * c_a_tmp * sin(theta3) / 10.0 - 3.0 * a_tmp * sin(theta2) / 10.0)
    + l_a_tmp * cos(theta3) * sin(theta2) / 10.0) + sin(theta1) *
    ((j_a_tmp_tmp_tmp * b_a_tmp * sin(theta3) / 10.0 - 3.0 * b_a_tmp * sin
    (theta2) / 10.0) + d104 * sin(theta1) * sin(theta2) / 10.0)) / 20.0) + 7.0 *
    (phi * phi) * psi * (the * the) * (3.0 * sin(theta1) * sin(theta2) * sin
    (theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) *
    (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 + l_a_tmp * sin
    (theta2) * sin(theta3) / 10.0) - 3.0 * a_tmp * cos(theta2) * cos(theta3) /
    10.0) + sin(theta1) * ((3.0 * cos(theta2) * sin(theta1) / 10.0 +
    h_a_tmp_tmp_tmp * sin(theta2) * sin(theta3) / 10.0) - 3.0 * c_a_tmp * cos
    (theta3) * sin(theta1) / 10.0)) / 20.0) + y_C_23_tmp) + phi * (the * the) *
    cos(theta1) * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 +
    l_a_tmp * sin(theta2) * sin(theta3) / 10.0) - 3.0 * a_tmp * cos(theta2) *
    cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos(theta2) * sin(theta1) / 10.0
    + h_a_tmp_tmp_tmp * sin(theta2) * sin(theta3) / 10.0) - 3.0 * c_a_tmp * cos
    (theta3) * sin(theta1) / 10.0)) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 +
    3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 2.0) + fb_C_23_tmp) -
    tb_C_23_tmp) - phi * phi * rt_powd_snf(psi, 3.0) * (the * the) * (a_tmp *
    a_tmp) * sin(theta1) / 40.0) + wb_C_23_tmp) - o_C_23_tmp_tmp * ((3.0 * cos
    (theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3)
    * sin(theta2) / 10.0) / 400.0) + hb_C_23_tmp * l_C_23_tmp / 400.0) +
    o_C_23_tmp_tmp * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) * sin
    (theta3) / 10.0 - 3.0 * cos(theta1) * sin(theta2) / 10.0) + 3.0 * cos(theta1)
    * cos(theta3) * sin(theta2) / 10.0) + sin(theta1) * ((3.0 * cos(theta2) *
    sin(theta1) * sin(theta3) / 10.0 - 3.0 * sin(theta1) * sin(theta2) / 10.0) +
    3.0 * cos(theta3) * sin(theta1) * sin(theta2) / 10.0)) / 400.0) +
    e_a_tmp_tmp) - r_C_23_tmp) + jb_C_23_tmp) - h_a_tmp_tmp) - p_C_23_tmp) -
    u_C_23_tmp) - cb_C_23_tmp) - mb_C_23_tmp) - eb_C_23_tmp) + q_a_tmp_tmp) +
                    v_C_23_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
    cos(theta3) * sin(theta2) / 20.0) * l_C_23_tmp / 20.0) - r_a_tmp_tmp) +
                  s_C_23_tmp) - C_23_tmp) - b_C_23_tmp * (a_tmp * a_tmp) *
                c_a_tmp * d_a_tmp / 8000.0) - c_C_23_tmp) - b_C_23_tmp_tmp_tmp *
              bb_C_23_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin
    (theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0) -
             kb_C_23_tmp) - d_C_23_tmp) + e_C_23_tmp) + ub_C_23_tmp) -
         c_C_23_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin
           (theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0)) -
        hb_C_23_tmp * d140 / 400.0) - i_C_23_tmp_tmp / 400.0) + vb_C_23_tmp) +
     ab_C_23_tmp) + m_C_23_tmp;
  C_23[7] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((the *
    sin(theta1) * (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (o_a_tmp *
    o_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (p_a_tmp *
    p_a_tmp) / 20.0) / 2.0 - the * sin(theta1) * (phi * psi * (the * the) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) / 20.0 +
    phi * psi * (the * the) * (cos(theta1) * sin(theta2) * sin(theta3) - cos
    (theta1) * cos(theta2) * cos(theta3)) * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2)) / 20.0) / 2.0) + 7.0 * (phi * phi) * the * (3.0 *
    cos(theta2) * cos(theta3) / 20.0 - 3.0 * sin(theta2) * sin(theta3) / 20.0) /
    40.0) - d52) + the * sin(theta1) * (rt_powd_snf(phi, 3.0) * rt_powd_snf(the,
    3.0) * (c_a_tmp * c_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the,
    3.0) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - d14) + d43) + d6) + phi * psi *
    sin(theta1) * (rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0
    + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) -
    d15) + d53) + psi * the * sin(theta1) * (rt_powd_snf(phi, 3.0) * (psi * psi)
    * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp *
    b_a_tmp) / 20.0) / 2.0) + psi * the * cos(theta1) * ((phi * phi * (psi * psi)
    * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3)
    * sin(theta2)) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) *
    sin(theta1) * sin(theta2)) / 20.0 + phi * phi * (psi * psi) * the * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1)) / 20.0) - phi * phi * (psi * psi) * the * cos(theta1)
    * sin(theta1) / 10.0) / 2.0) - 3.0 * psi * the * sin(theta1) * (((psi * the *
    (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) * (phi * (the * the) * sin(theta1) * (cos(theta2) * sin(theta3) +
    cos(theta3) * sin(theta2)) - phi * (psi * psi) * (the * the) * sin(theta1) *
    (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))) / 20.0 + psi * the *
    (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) * (phi * (the * the) * sin(theta1) * (cos(theta2) * cos(theta3) -
    sin(theta2) * sin(theta3)) - phi * (psi * psi) * (the * the) * sin(theta1) *
    (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) / 20.0) - phi * psi
    * the * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) * (psi * psi
    * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos
    (theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1)
    * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0) - phi * psi * the * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) /
    2.0) + psi * the * sin(theta1) * ((psi * the * cos(theta1) * (phi * (the *
    the) * cos(theta1) + psi * (the * the) * cos(theta1)) / 20.0 - rt_powd_snf
    (phi, 3.0) * psi * rt_powd_snf(the, 3.0) / 20.0) + psi * the * sin(theta1) *
    (phi * (the * the) * sin(theta1) + psi * (the * the) * sin(theta1)) / 10.0) /
    2.0) + rt_powd_snf(phi, 4.0) * rt_powd_snf(psi, 3.0) * (a_tmp * a_tmp) * sin
    (theta1) / 20.0) - d45 * ((rt_powd_snf(phi, 3.0) * (psi * psi) * cos(theta1)
    * sin(theta1) * (d_a_tmp * d_a_tmp) / 10.0 - rt_powd_snf(phi, 3.0) * (psi *
    psi) * cos(theta1) * sin(theta1) / 5.0) + rt_powd_snf(phi, 3.0) * (psi * psi)
    * cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) / 10.0) / 2.0) + 7.0 *
    rt_powd_snf(phi, 4.0) * (the * the) * (3.0 * cos(theta2) * cos(theta3) /
    20.0 - 3.0 * sin(theta2) * sin(theta3) / 20.0) * (3.0 * cos(theta2) * sin
    (theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 20.0) - d0 * cos
    (theta1) * ((phi * psi * cos(theta2) * sin(theta1) * (phi * (the * the) *
    cos(theta1) * cos(theta2) + psi * (the * the) * cos(theta1) * cos(theta2)) /
    20.0 - phi * psi * cos(theta1) * (phi * (the * the) * sin(theta1) + psi *
    (the * the) * sin(theta1)) / 10.0) + phi * psi * sin(theta1) * sin(theta2) *
    (phi * (the * the) * cos(theta1) * sin(theta2) + psi * (the * the) * cos
    (theta1) * sin(theta2)) / 20.0) / 2.0) + d49 * sin(theta1) * (d54 * (phi *
    phi * psi * cos(theta2) + phi * phi * the * cos(theta2)) / 20.0 - d55 * (phi
    * phi * psi * sin(theta2) + phi * phi * the * sin(theta2)) / 20.0) / 2.0) +
    psi * the * sin(theta1) * (phi * (psi * psi) * (the * the) * (cos(theta1) *
    cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) *
    p_a_tmp / 10.0 + phi * (psi * psi) * (the * the) * (cos(theta1) * sin(theta2)
    * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * o_a_tmp / 10.0) /
    2.0) - phi * psi * cos(theta1) * (d64 * d_a_tmp * (d74 + d76) / 20.0 - d67 *
    b_a_tmp * (d77 + d78) / 20.0) / 2.0) - psi * the * sin(theta1) *
    (((((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (j_a_tmp * j_a_tmp) / 20.0) + d83 *
    (k_a_tmp * k_a_tmp) / 20.0) - d79 * (h_a_tmp * h_a_tmp) / 20.0) - d4 * d1 *
    (i_a_tmp * i_a_tmp) / 20.0) - d4 * d1 * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) +
    phi * psi * sin(theta1) * ((rt_powd_snf(phi, 3.0) * d3 * (a_tmp * a_tmp) /
    10.0 + rt_powd_snf(phi, 3.0) * d3 * (j_a_tmp * j_a_tmp) / 20.0) +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (k_a_tmp * k_a_tmp) / 20.0) / 2.0) +
    psi * the * sin(theta1) * ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp *
    a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (j_a_tmp * j_a_tmp) /
    20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (k_a_tmp * k_a_tmp) / 20.0) /
    2.0) - psi * the * sin(theta1) * (((((d8 * d3 * (a_tmp * a_tmp) / 10.0 + d83
    * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) + d83 * (b_a_tmp *
    b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) - phi * d3 * (the * the) * (b_a_tmp *
    b_a_tmp) / 10.0) - d4 * d1 * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) -
    phi * d3 * (the * the) * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0)
    + psi * the * sin(theta1) * (psi * the * (a_tmp * d_a_tmp * sin(theta3) -
    a_tmp * c_a_tmp * cos(theta3)) * (phi * phi * psi * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2)) + phi * phi * the * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2))) / 20.0 + psi * the * (a_tmp * c_a_tmp
    * sin(theta3) + a_tmp * g_a_tmp * sin(theta2)) * (phi * phi * psi * (cos
    (theta2) * cos(theta3) - sin(theta2) * sin(theta3)) + phi * phi * the * (cos
    (theta2) * cos(theta3) - sin(theta2) * sin(theta3))) / 20.0) / 2.0) - psi *
    the * sin(theta1) * (((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp)
    / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp) / 20.0) -
    phi * (psi * psi) * (the * the) * (a_tmp * a_tmp) / 20.0) - phi * (psi * psi)
    * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - d127) - d88) - phi *
    psi * cos(theta1) * ((phi * phi * (psi * psi) * the * cos(theta1) * (c_a_tmp
    * c_a_tmp) * sin(theta1) / 10.0 - phi * phi * (psi * psi) * the * cos(theta1)
    * sin(theta1) / 5.0) + phi * phi * (psi * psi) * the * cos(theta1) * sin
    (theta1) * (d_a_tmp * d_a_tmp) / 10.0) / 2.0) + phi * psi * cos(theta1) *
    ((phi * phi * (psi * psi) * the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin
    (theta1) / 20.0 - phi * phi * (psi * psi) * the * cos(theta1) * sin(theta1) /
    10.0) + phi * phi * (psi * psi) * the * cos(theta1) * sin(theta1) * (d_a_tmp
    * d_a_tmp) / 20.0) / 2.0) + d68) + psi * the * cos(theta1) * ((phi * phi *
    (psi * psi) * the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) / 20.0 -
    phi * phi * (psi * psi) * the * cos(theta1) * sin(theta1) / 10.0) + phi *
    phi * (psi * psi) * the * cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) /
    20.0) / 2.0) - d84) - d10) + psi * the * sin(theta1) * (((((phi * phi * (psi
    * psi) * the * (h_a_tmp * h_a_tmp) / 20.0 + phi * phi * (psi * psi) * the *
    (i_a_tmp * i_a_tmp) / 20.0) - phi * phi * (psi * psi) * the * (j_a_tmp *
    j_a_tmp) / 20.0) - phi * phi * (psi * psi) * the * (k_a_tmp * k_a_tmp) /
    20.0) - phi * phi * (psi * psi) * the * (a_tmp * a_tmp) / 10.0) + phi * phi *
    (psi * psi) * the * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) + psi * the * sin
    (theta1) * ((((psi * the * sin(theta1) * (phi * (the * the) * sin(theta1) +
    psi * (the * the) * sin(theta1)) / 10.0 - rt_powd_snf(phi, 3.0) * psi *
    rt_powd_snf(the, 3.0) * (p_a_tmp * p_a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) *
    psi * rt_powd_snf(the, 3.0) * (o_a_tmp * o_a_tmp) / 20.0) + psi * the * (phi
    * (the * the) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) + psi * (the * the) * (cos(theta1) * cos(theta2) *
    sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2))) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) / 20.0) +
    psi * the * (phi * (the * the) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) + psi * (the * the) * (cos(theta1) *
    sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3))) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) / 20.0) / 2.0) + psi * the * sin(theta1) * ((((psi * the * sin
    (theta1) * (phi * (the * the) * sin(theta1) + psi * (the * the) * sin(theta1))
    / 10.0 - rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0) * (c_a_tmp *
    c_a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0) *
    (d_a_tmp * d_a_tmp) / 20.0) + psi * the * cos(theta1) * sin(theta2) * (phi *
    (the * the) * cos(theta1) * sin(theta2) + psi * (the * the) * cos(theta1) *
    sin(theta2)) / 20.0) + psi * the * cos(theta1) * cos(theta2) * (phi * (the *
    the) * cos(theta1) * cos(theta2) + psi * (the * the) * cos(theta1) * cos
    (theta2)) / 20.0) / 2.0) + d129) - psi * the * sin(theta1) * (((((phi * phi *
    (psi * psi) * the * (a_tmp * a_tmp) / 10.0 - phi * phi * (psi * psi) * the *
    (b_a_tmp * b_a_tmp) / 10.0) + phi * phi * (psi * psi) * the * (b_a_tmp *
    b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) - phi * phi * (psi * psi) * the *
    (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) - phi * phi * (psi * psi) *
    the * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) + phi * phi * (psi * psi)
    * the * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + phi * psi
    * sin(theta1) * ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) /
    10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp)
    * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + psi * the * sin(theta1) *
    ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf
    (phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0)
    + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp) * (d_a_tmp *
    d_a_tmp) / 20.0) / 2.0) + d69) - d95) - psi * the * sin(theta1) * (phi * phi
    * (psi * psi) * the * (a_tmp * a_tmp) / 20.0 - phi * phi * (psi * psi) * the
    * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + d23) - d60) - d37) - 7.0 * (phi * phi)
    * psi * (the * the) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 20.0
    - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) * (cos(theta1) *
    (3.0 * cos(theta1) * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta1) *
     cos(theta3) * sin(theta2) / 10.0) + sin(theta1) * (3.0 * cos(theta2) * sin
    (theta1) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta1) * sin(theta2)
    / 10.0)) / 20.0) - 7.0 * (phi * phi) * psi * (the * the) * (3.0 * cos(theta1)
    * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta1) * cos(theta3) * sin
    (theta2) / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) * sin
    (theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) +
                        sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin
    (theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) /
                        40.0) + 7.0 * (phi * phi) * (psi * psi) * (the * the) *
                       (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 20.0 -
                        3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) *
                       (3.0 * cos(theta1) * cos(theta2) * sin(theta3) / 20.0 +
                        3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 20.0) /
                       20.0) + 7.0 * rt_powd_snf(phi, 4.0) * psi * (the * the) *
                      (3.0 * cos(theta2) * sin(theta1) * sin(theta3) / 20.0 +
                       3.0 * cos(theta3) * sin(theta1) * sin(theta2) / 20.0) *
                      (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3)
                       * sin(theta2) / 20.0) / 40.0) + 7.0 * rt_powd_snf(phi,
    4.0) * psi * (the * the) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) /
    20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) * (3.0 * cos
    (theta2) * cos(theta3) / 20.0 - 3.0 * sin(theta2) * sin(theta3) / 20.0) /
                     40.0) - d121 * d140 / 40.0) + rt_powd_snf(phi, 3.0) *
                   rt_powd_snf(psi, 3.0) * the * (a_tmp * a_tmp) * sin(theta1) /
                   40.0) - tb_C_23_tmp) - phi * phi * rt_powd_snf(psi, 3.0) *
                 (the * the) * (a_tmp * a_tmp) * sin(theta1) / 40.0) -
                h_a_tmp_tmp) - p_C_23_tmp) + q_a_tmp_tmp) - b_C_23_tmp_tmp *
             ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0)
              + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0) - d_C_23_tmp;
  d2 = d57 * h_a_tmp * p_a_tmp / 20.0 + d57 * i_a_tmp * o_a_tmp / 20.0;
  d4 = d58 * d7;
  d5 = d4 * j_a_tmp * p_a_tmp;
  d6 = d4 * k_a_tmp * o_a_tmp;
  d7 = d4 * h_a_tmp * p_a_tmp / 20.0;
  d4 = d4 * i_a_tmp * o_a_tmp / 20.0;
  d10 = d7 + d4;
  d13 = d57 * j_a_tmp * p_a_tmp / 20.0 + d57 * k_a_tmp * o_a_tmp / 20.0;
  d14 = d5 / 20.0 + d6 / 20.0;
  m_C_23_tmp = h_C_23_tmp_tmp * b_a_tmp;
  p_C_23_tmp = h_C_23_tmp_tmp * a_tmp;
  q_C_23_tmp = d123 * d3 * d1;
  b_C_23_tmp_tmp = m_C_23_tmp * m_a_tmp;
  u_C_23_tmp = b_C_23_tmp_tmp * o_C_23_tmp / 20.0;
  c_C_23_tmp_tmp = m_C_23_tmp * d22;
  m_C_23_tmp = c_C_23_tmp_tmp * (d109 - 0.1);
  e_C_23_tmp_tmp = p_C_23_tmp * n_a_tmp;
  o_C_23_tmp = e_C_23_tmp_tmp * o_C_23_tmp / 20.0;
  g_C_23_tmp_tmp = p_C_23_tmp * d113;
  p_C_23_tmp = g_C_23_tmp_tmp * (d109 - 0.1);
  v_C_23_tmp = C_23_tmp_tmp * d40;
  ab_C_23_tmp = ob_C_23_tmp * d3 * d1;
  C_23[2] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((phi * psi * cos(theta1) * ((d12 * the * (a_tmp_tmp + b_a_tmp_tmp) *
    (c_a_tmp_tmp_tmp * sin(theta3) + d_a_tmp_tmp_tmp * sin(theta2)) / 10.0 + d12
    * the * (c_a_tmp_tmp - d_a_tmp_tmp) * (e_a_tmp_tmp_tmp * sin(theta3) -
    g_a_tmp_tmp * sin(theta1)) / 10.0) - d12 * the * cos(theta1) * sin(theta1) /
    5.0) / 2.0 - the * sin(theta1) * (rt_powd_snf(phi, 3.0) * rt_powd_snf(the,
    3.0) * (o_a_tmp * o_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the,
    3.0) * (p_a_tmp * p_a_tmp) / 20.0) / 2.0) - the * sin(theta1) * (rt_powd_snf
    (phi, 3.0) * rt_powd_snf(the, 3.0) * (c_a_tmp * c_a_tmp) / 20.0 +
    rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (d_a_tmp * d_a_tmp) / 20.0) /
    2.0) - d42) - d43) - phi * the * cos(theta1) * (rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (c_a_tmp * c_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - phi * d2 / 2.0)
    - d53) - psi * the * sin(theta1) * (rt_powd_snf(phi, 3.0) * (psi * psi) *
    (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp *
    b_a_tmp) / 20.0) / 2.0) - psi * the * sin(theta1) * ((psi * the * cos(theta1)
    * (phi * (the * the) * cos(theta1) + psi * (the * the) * cos(theta1)) / 20.0
    - rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0) / 20.0) + psi * the *
    sin(theta1) * (phi * (the * the) * sin(theta1) + psi * (the * the) * sin
    (theta1)) / 10.0) / 2.0) - phi * psi * cos(theta1) * ((psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the * the) * (h_a_tmp *
    h_a_tmp) / 20.0) + psi * psi * (the * the) * (i_a_tmp * i_a_tmp) / 20.0) /
    2.0) + d21 * d2) - phi * psi * cos(theta1) * ((((phi * psi * cos(theta1) *
    (phi * phi * (the * the) * cos(theta1) + phi * phi * psi * the * cos(theta1))
    / 10.0 - rt_powd_snf(phi, 3.0) * psi * (the * the) * (c_a_tmp * c_a_tmp) /
    20.0) - rt_powd_snf(phi, 3.0) * psi * (the * the) * (d_a_tmp * d_a_tmp) /
    20.0) + phi * psi * sin(theta1) * sin(theta2) * (phi * phi * (the * the) *
    sin(theta1) * sin(theta2) + phi * phi * psi * the * sin(theta1) * sin(theta2))
    / 20.0) + phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (the * the) *
    cos(theta2) * sin(theta1) + phi * phi * psi * the * cos(theta2) * sin(theta1))
    / 20.0) / 2.0) - d17 * d10) - psi * the * sin(theta1) * (psi * the * sin
    (theta1) * (phi * phi * (the * the) * cos(theta1) + phi * phi * psi * the *
    cos(theta1)) / 10.0 - psi * the * cos(theta1) * (phi * phi * (the * the) *
    sin(theta1) + phi * phi * psi * the * sin(theta1)) / 20.0) / 2.0) + phi *
    psi * cos(theta1) * ((phi * psi * cos(theta2) * sin(theta1) * (phi * (the *
    the) * cos(theta1) * cos(theta2) + psi * (the * the) * cos(theta1) * cos
    (theta2)) / 20.0 - phi * psi * cos(theta1) * (phi * (the * the) * sin(theta1)
    + psi * (the * the) * sin(theta1)) / 10.0) + phi * psi * sin(theta1) * sin
    (theta2) * (phi * (the * the) * cos(theta1) * sin(theta2) + psi * (the * the)
    * cos(theta1) * sin(theta2)) / 20.0) / 2.0) + psi * the * sin(theta1) *
    (((((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (j_a_tmp * j_a_tmp) / 20.0) +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (k_a_tmp * k_a_tmp) / 20.0) - phi *
    (psi * psi) * (the * the) * (h_a_tmp * h_a_tmp) / 20.0) - phi * (psi * psi) *
    (the * the) * (i_a_tmp * i_a_tmp) / 20.0) - phi * (psi * psi) * (the * the) *
    (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - psi * the * sin(theta1) * ((rt_powd_snf
    (phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) *
    (psi * psi) * (j_a_tmp * j_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi *
    psi) * (k_a_tmp * k_a_tmp) / 20.0) / 2.0) + psi * the * sin(theta1) *
    (((((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp)
    * (d_a_tmp * d_a_tmp) / 20.0) - phi * (psi * psi) * (the * the) * (b_a_tmp *
    b_a_tmp) / 10.0) - phi * (psi * psi) * (the * the) * (a_tmp * a_tmp) *
    (c_a_tmp * c_a_tmp) / 20.0) - phi * (psi * psi) * (the * the) * (a_tmp *
    a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + d141 / 40.0) + psi * the * sin
    (theta1) * (((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp) / 20.0) - phi *
    (psi * psi) * (the * the) * (a_tmp * a_tmp) / 20.0) - phi * (psi * psi) *
    (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - phi * psi * cos(theta1) *
    (((phi * phi * (psi * psi) * (a_tmp * a_tmp) / 10.0 - psi * psi * (the * the)
    * (a_tmp * a_tmp) / 20.0) + phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) /
    20.0) - psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - phi *
    the * cos(theta1) * (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) *
    (o_a_tmp * o_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) *
    (p_a_tmp * p_a_tmp) / 20.0) / 2.0) + n_C_23_tmp * n_a_tmp / 40.0) - d20 *
    d13) + d88) + psi * the * sin(theta1) * ((phi * (psi * psi) * the * cos
    (theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) / 10.0 - phi * (psi * psi) *
    the * cos(theta1) * sin(theta1) / 5.0) + phi * (psi * psi) * the * cos
    (theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 10.0) / 2.0) - psi * the *
    sin(theta1) * ((phi * (psi * psi) * the * cos(theta1) * (c_a_tmp * c_a_tmp) *
    sin(theta1) / 20.0 - phi * (psi * psi) * the * cos(theta1) * sin(theta1) /
    10.0) + phi * (psi * psi) * the * cos(theta1) * sin(theta1) * (d_a_tmp *
    d_a_tmp) / 20.0) / 2.0) + d16 * d14) + phi * psi * cos(theta1) * ((phi * phi
    * (psi * psi) * the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) / 10.0
    - phi * phi * (psi * psi) * the * cos(theta1) * sin(theta1) / 5.0) + phi *
    phi * (psi * psi) * the * cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) /
    10.0) / 2.0) - phi * psi * cos(theta1) * ((phi * phi * (psi * psi) * the *
    cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) / 20.0 - phi * phi * (psi *
    psi) * the * cos(theta1) * sin(theta1) / 10.0) + phi * phi * (psi * psi) *
    the * cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - phi *
    psi * cos(theta1) * ((((phi * psi * cos(theta1) * (phi * phi * (the * the) *
    cos(theta1) + phi * phi * psi * the * cos(theta1)) / 10.0 - rt_powd_snf(phi,
    3.0) * psi * (the * the) * (o_a_tmp * o_a_tmp) / 20.0) - rt_powd_snf(phi,
    3.0) * psi * (the * the) * (p_a_tmp * p_a_tmp) / 20.0) + phi * psi * (phi *
    phi * (the * the) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) *
    sin(theta1) * sin(theta2)) + phi * phi * psi * the * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2)) / 20.0) + phi * psi * (phi * phi * (the * the) * (sin(theta1) *
    sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) + phi *
    phi * psi * the * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) *
    cos(theta3) * sin(theta1))) * (sin(theta1) * sin(theta2) * sin(theta3) - cos
    (theta2) * cos(theta3) * sin(theta1)) / 20.0) / 2.0) - d128) + d85) - phi *
    psi * cos(theta1) * ((psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0 +
    psi * psi * (the * the) * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) +
    psi * psi * (the * the) * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) /
    2.0) - psi * the * sin(theta1) * ((((psi * the * sin(theta1) * (phi * (the *
    the) * sin(theta1) + psi * (the * the) * sin(theta1)) / 10.0 - rt_powd_snf
    (phi, 3.0) * psi * rt_powd_snf(the, 3.0) * (p_a_tmp * p_a_tmp) / 20.0) -
    rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0) * (o_a_tmp * o_a_tmp) /
    20.0) + psi * the * (phi * (the * the) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) + psi * (the * the) *
    (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2))) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) / 20.0) + psi * the * (phi * (the * the) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) + psi * (the * the) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3))) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) / 20.0) / 2.0) - psi *
    the * sin(theta1) * ((((psi * the * sin(theta1) * (phi * (the * the) * sin
    (theta1) + psi * (the * the) * sin(theta1)) / 10.0 - rt_powd_snf(phi, 3.0) *
    psi * rt_powd_snf(the, 3.0) * (c_a_tmp * c_a_tmp) / 20.0) - rt_powd_snf(phi,
    3.0) * psi * rt_powd_snf(the, 3.0) * (d_a_tmp * d_a_tmp) / 20.0) + psi * the
    * cos(theta1) * sin(theta2) * (phi * (the * the) * cos(theta1) * sin(theta2)
    + psi * (the * the) * cos(theta1) * sin(theta2)) / 20.0) + psi * the * cos
    (theta1) * cos(theta2) * (phi * (the * the) * cos(theta1) * cos(theta2) +
    psi * (the * the) * cos(theta1) * cos(theta2)) / 20.0) / 2.0) + d50 * (d109
    - 0.1) / 2.0) - d64 * (d109 - 0.1) / 2.0) - psi * the * sin(theta1) *
    ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf
    (phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0)
    + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp) * (d_a_tmp *
    d_a_tmp) / 20.0) / 2.0) + d71 / 2.0) + d72 / 2.0) - d45 * (((((phi * phi *
    (psi * psi) * (a_tmp * a_tmp) / 10.0 - psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp) / 10.0) - psi * psi * (the * the) * (h_a_tmp * h_a_tmp) / 20.0) -
    psi * psi * (the * the) * (i_a_tmp * i_a_tmp) / 20.0) + phi * phi * (psi *
    psi) * (j_a_tmp * j_a_tmp) / 20.0) + phi * phi * (psi * psi) * (k_a_tmp *
    k_a_tmp) / 20.0) / 2.0) - d45 * (((((phi * phi * (psi * psi) * (a_tmp *
    a_tmp) / 10.0 - psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) - psi *
    psi * (the * the) * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + phi *
    phi * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) - psi *
    psi * (the * the) * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) + phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0)
    - d0 * cos(theta1) * (psi * psi * (the * the) * (a_tmp * a_tmp) / 20.0 + psi
    * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) + d49 * sin(theta1)
    * ((d98 / 10.0 + d100 / 10.0) - d81 * b_a_tmp / 5.0) / 2.0) - psi * the *
    sin(theta1) * ((d97 * j_a_tmp / 20.0 + d99 * k_a_tmp / 20.0) - d81 * sin
    (theta1) / 10.0) / 2.0) - d115 * cos(theta1) * (d135 * d_a_tmp / 20.0 + d119
    * d_a_tmp / 20.0) * ((j_a_tmp_tmp_tmp * sin(theta3) / 10.0 + d104 * sin
    (theta2) / 10.0) - 0.1) / 40.0) - 7.0 * phi * psi * sin(theta1) * (d63 * sin
    (theta2) / 20.0 + d103 * sin(theta2) / 20.0) * ((3.0 * c_a_tmp * sin(theta3)
    / 10.0 + 3.0 * g_a_tmp * sin(theta2) / 10.0) - 0.1) / 40.0) - d111 * psi *
    the * (h_a_tmp_tmp_tmp * d_a_tmp * sin(theta3) / 20.0 - j_a_tmp_tmp_tmp *
    g_a_tmp * sin(theta1) / 20.0) * (cos(theta1) * (f_a_tmp_tmp_tmp * sin(theta3)
    / 10.0 - g_a_tmp_tmp_tmp * cos(theta3) / 10.0) + sin(theta1) *
    (i_a_tmp_tmp_tmp * sin(theta3) / 10.0 - k_a_tmp_tmp_tmp * sin(theta1) / 10.0))
    / 40.0) - 3.0 * psi * the * cos(theta1) * (phi * phi * (the * the) / 20.0 +
    d11 * psi * the / 20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 *
    cos(theta3) * sin(theta2) / 10.0) - 0.1) / 20.0) - 3.0 * phi * psi * sin
    (theta1) * (phi * (the * the) / 20.0 + phi * phi * psi * (the * the) / 20.0)
    * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2)
    / 10.0) - 0.1) / 20.0) - 7.0 * (phi * phi) * psi * rt_powd_snf(the, 3.0) *
    (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) *
    cos(theta2) * cos(theta3) / 20.0) * (cos(theta1) * (3.0 * a_tmp * sin(theta2)
    * sin(theta3) / 10.0 - 3.0 * a_tmp * cos(theta2) * cos(theta3) / 10.0) + sin
    (theta1) * (3.0 * b_a_tmp * sin(theta2) * sin(theta3) / 10.0 - 3.0 * c_a_tmp
    * cos(theta3) * sin(theta1) / 10.0)) / 40.0) + 7.0 * rt_powd_snf(phi, 4.0) *
    psi * (the * the) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 20.0 -
    3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) * (3.0 * cos(theta2) *
    sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 40.0) - 7.0 *
    psi * the * cos(theta1) * (phi * phi * (the * the) * (3.0 * cos(theta2) *
    sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) + phi * phi *
    psi * the * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) *
    sin(theta2) / 20.0)) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos
    (theta3) * sin(theta2) / 10.0) - 0.1) / 40.0) - 7.0 * phi * psi * sin(theta1)
    * (phi * (the * the) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
    (theta3) * sin(theta2) / 20.0) + phi * phi * psi * (the * the) * (3.0 * cos
    (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0)) *
    ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) /
    10.0) - 0.1) / 40.0) - 7.0 * (phi * phi) * psi * (the * the) * (3.0 * sin
    (theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3)
    * sin(theta1) / 20.0) * d35 / 40.0) + d5 / 40.0) + d6 / 40.0) - 7.0 * (phi *
    phi) * psi * rt_powd_snf(the, 3.0) * (3.0 * sin(theta1) * sin(theta2) * sin
    (theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) *
    (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) /
    20.0) / 40.0) - kc_C_23_tmp) - d19 * d40 * m_a_tmp * n_a_tmp / 20.0) +
    q_C_23_tmp * m_a_tmp * n_a_tmp / 20.0) - phi * rt_powd_snf(psi, 3.0) * (the *
    the) * cos(theta1) * (b_a_tmp * b_a_tmp) / 40.0) - rt_powd_snf(phi, 3.0) *
    rt_powd_snf(psi, 3.0) * the * (a_tmp * a_tmp) * sin(theta1) / 40.0) - 3.0 *
    rt_powd_snf(phi, 3.0) * psi * the * sin(theta1) * ((3.0 * cos(theta2) * sin
    (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 400.0) -
    lc_C_23_tmp) - x_C_23_tmp / 800.0) - f_C_23_tmp_tmp * c_a_tmp * b_a_tmp /
    800.0) - 7.0 * rt_powd_snf(phi, 3.0) * (psi * psi) * (the * the) * (3.0 *
    sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos
    (theta3) * sin(theta1) / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * sin
    (theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3)
    / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) /
    10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0) -
                      mc_C_23_tmp) - f_C_23_tmp) + nc_C_23_tmp) + oc_C_23_tmp) -
                  pc_C_23_tmp) + g_C_23_tmp) - h_C_23_tmp) + qc_C_23_tmp) +
              i_C_23_tmp) - rc_C_23_tmp) - j_C_23_tmp) + u_C_23_tmp) +
          m_C_23_tmp / 20.0) - o_C_23_tmp) - p_C_23_tmp / 20.0) + sc_C_23_tmp) -
      v_C_23_tmp * a_tmp * (c_a_tmp * c_a_tmp) * b_a_tmp / 8000.0) + ab_C_23_tmp
     * a_tmp * (c_a_tmp * c_a_tmp) * b_a_tmp / 8000.0) + d_C_23_tmp_tmp * d35 /
    800.0;
  d1 = d45 * d2;
  d2 = d134 / 40.0;
  d5 = d64 * d13 / 2.0;
  d6 = d70 * d14 / 2.0;
  q_C_23_tmp = q_C_23_tmp * d113 * n_a_tmp / 20.0;
  m_C_23_tmp /= 40.0;
  p_C_23_tmp /= 40.0;
  C_23[5] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((psi * the * cos(theta1) * ((d105 / 10.0 - k_C_23_tmp / 10.0)
    + d104 * sin(theta2) / 10.0) / 2.0 - the * sin(theta1) * (d9 * (c_a_tmp *
    c_a_tmp) / 20.0 + d9 * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - d42) - d43) -
    phi * the * cos(theta1) * (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) *
    (c_a_tmp * c_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) *
    (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - the * sin(theta1) * (rt_powd_snf(phi,
    3.0) * rt_powd_snf(the, 3.0) * (o_a_tmp * o_a_tmp) / 20.0 + rt_powd_snf(phi,
    3.0) * rt_powd_snf(the, 3.0) * (p_a_tmp * p_a_tmp) / 20.0) / 2.0) + phi *
    psi * cos(theta1) * ((d12 * the * (a_tmp_tmp + b_a_tmp_tmp) *
    (c_a_tmp_tmp_tmp * sin(theta3) + d_a_tmp_tmp_tmp * sin(theta2)) / 10.0 + d12
    * the * (c_a_tmp_tmp - d_a_tmp_tmp) * (e_a_tmp_tmp_tmp * sin(theta3) -
    g_a_tmp_tmp * sin(theta1)) / 10.0) - d12 * the * cos(theta1) * sin(theta1) /
    5.0) / 2.0) - phi * psi * cos(theta1) * ((d12 * the * (f_a_tmp * sin(theta3)
    + a_tmp_tmp_tmp * sin(theta2)) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2)) / 20.0 + d12 * the *
    (b_a_tmp_tmp_tmp * sin(theta3) - f_a_tmp * cos(theta3)) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) / 20.0) -
    d11 * d3 * the * cos(theta1) * sin(theta1) / 10.0) / 2.0) - psi * the * sin
    (theta1) * (rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) -
    d64 * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) +
    3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0) - psi * the * sin(theta1) *
    ((psi * the * cos(theta1) * (phi * (the * the) * cos(theta1) + psi * (the *
    the) * cos(theta1)) / 20.0 - rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the,
    3.0) / 20.0) + psi * the * sin(theta1) * (phi * (the * the) * sin(theta1) +
    psi * (the * the) * sin(theta1)) / 10.0) / 2.0) - phi * psi * cos(theta1) *
    ((psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the *
    the) * (h_a_tmp * h_a_tmp) / 20.0) + psi * psi * (the * the) * (i_a_tmp *
    i_a_tmp) / 20.0) / 2.0) + d1 / 2.0) - phi * psi * cos(theta1) * ((((phi *
    psi * cos(theta1) * (phi * phi * (the * the) * cos(theta1) + phi * phi * psi
    * the * cos(theta1)) / 10.0 - rt_powd_snf(phi, 3.0) * psi * (the * the) *
    (c_a_tmp * c_a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) * psi * (the * the) *
    (d_a_tmp * d_a_tmp) / 20.0) + phi * psi * sin(theta1) * sin(theta2) * (phi *
    phi * (the * the) * sin(theta1) * sin(theta2) + phi * phi * psi * the * sin
    (theta1) * sin(theta2)) / 20.0) + phi * psi * cos(theta2) * sin(theta1) *
    (phi * phi * (the * the) * cos(theta2) * sin(theta1) + phi * phi * psi * the
    * cos(theta2) * sin(theta1)) / 20.0) / 2.0) - d50 * d10 / 2.0) - psi * the *
    sin(theta1) * (psi * the * sin(theta1) * (phi * phi * (the * the) * cos
    (theta1) + phi * phi * psi * the * cos(theta1)) / 10.0 - psi * the * cos
    (theta1) * (phi * phi * (the * the) * sin(theta1) + phi * phi * psi * the *
    sin(theta1)) / 20.0) / 2.0) + phi * psi * cos(theta1) * ((phi * psi * cos
    (theta2) * sin(theta1) * (phi * (the * the) * cos(theta1) * cos(theta2) +
    psi * (the * the) * cos(theta1) * cos(theta2)) / 20.0 - phi * psi * cos
    (theta1) * (phi * (the * the) * sin(theta1) + psi * (the * the) * sin(theta1))
    / 10.0) + phi * psi * sin(theta1) * sin(theta2) * (phi * (the * the) * cos
    (theta1) * sin(theta2) + psi * (the * the) * cos(theta1) * sin(theta2)) /
    20.0) / 2.0) + psi * the * sin(theta1) * (((((rt_powd_snf(phi, 3.0) * (psi *
    psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) *
    (j_a_tmp * j_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (k_a_tmp
    * k_a_tmp) / 20.0) - phi * (psi * psi) * (the * the) * (h_a_tmp * h_a_tmp) /
    20.0) - phi * (psi * psi) * (the * the) * (i_a_tmp * i_a_tmp) / 20.0) - phi *
    (psi * psi) * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - psi * the *
    sin(theta1) * ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0
    + rt_powd_snf(phi, 3.0) * (psi * psi) * (j_a_tmp * j_a_tmp) / 20.0) +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (k_a_tmp * k_a_tmp) / 20.0) / 2.0) +
    psi * the * sin(theta1) * (((((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp *
    a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) *
    (b_a_tmp * b_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp
    * b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) - phi * (psi * psi) * (the * the) *
    (b_a_tmp * b_a_tmp) / 10.0) - phi * (psi * psi) * (the * the) * (a_tmp *
    a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) - phi * (psi * psi) * (the * the) *
    (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - n_C_23_tmp * d22 /
    40.0) + psi * the * sin(theta1) * (((rt_powd_snf(phi, 3.0) * (psi * psi) *
    (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp *
    b_a_tmp) / 20.0) - phi * (psi * psi) * (the * the) * (a_tmp * a_tmp) / 20.0)
    - phi * (psi * psi) * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - phi
    * psi * cos(theta1) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) / 10.0 -
    psi * psi * (the * the) * (a_tmp * a_tmp) / 20.0) + phi * phi * (psi * psi) *
    (b_a_tmp * b_a_tmp) / 20.0) - psi * psi * (the * the) * (b_a_tmp * b_a_tmp) /
    10.0) / 2.0) - phi * the * cos(theta1) * (rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (o_a_tmp * o_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (p_a_tmp * p_a_tmp) / 20.0) / 2.0) + d2) - d5) + d88)
    + psi * the * sin(theta1) * ((phi * (psi * psi) * the * cos(theta1) *
    (c_a_tmp * c_a_tmp) * sin(theta1) / 10.0 - phi * (psi * psi) * the * cos
    (theta1) * sin(theta1) / 5.0) + phi * (psi * psi) * the * cos(theta1) * sin
    (theta1) * (d_a_tmp * d_a_tmp) / 10.0) / 2.0) - psi * the * sin(theta1) *
    ((phi * (psi * psi) * the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) /
    20.0 - phi * (psi * psi) * the * cos(theta1) * sin(theta1) / 10.0) + phi *
    (psi * psi) * the * cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 20.0) /
    2.0) + d6) + phi * psi * cos(theta1) * ((phi * phi * (psi * psi) * the * cos
    (theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) / 10.0 - phi * phi * (psi * psi)
    * the * cos(theta1) * sin(theta1) / 5.0) + phi * phi * (psi * psi) * the *
    cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 10.0) / 2.0) - phi * psi *
    cos(theta1) * ((phi * phi * (psi * psi) * the * cos(theta1) * (c_a_tmp *
    c_a_tmp) * sin(theta1) / 20.0 - phi * phi * (psi * psi) * the * cos(theta1) *
    sin(theta1) / 10.0) + phi * phi * (psi * psi) * the * cos(theta1) * sin
    (theta1) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - phi * psi * cos(theta1) *
    ((((phi * psi * cos(theta1) * (phi * phi * (the * the) * cos(theta1) + phi *
    phi * psi * the * cos(theta1)) / 10.0 - rt_powd_snf(phi, 3.0) * psi * (the *
    the) * (o_a_tmp * o_a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) * psi * (the *
    the) * (p_a_tmp * p_a_tmp) / 20.0) + phi * psi * (phi * phi * (the * the) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2)) + phi * phi * psi * the * (cos(theta2) * sin(theta1) * sin(theta3)
    + cos(theta3) * sin(theta1) * sin(theta2))) * (cos(theta2) * sin(theta1) *
    sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) / 20.0) + phi * psi *
    (phi * phi * (the * the) * (sin(theta1) * sin(theta2) * sin(theta3) - cos
    (theta2) * cos(theta3) * sin(theta1)) + phi * phi * psi * the * (sin(theta1)
    * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1)) / 20.0) / 2.0) - d128) + d85) - phi * psi * cos(theta1) * ((psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0 + psi * psi * (the * the) *
    (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + psi * psi * (the * the) *
    (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - psi * the * sin
    (theta1) * ((((psi * the * sin(theta1) * (phi * (the * the) * sin(theta1) +
    psi * (the * the) * sin(theta1)) / 10.0 - rt_powd_snf(phi, 3.0) * psi *
    rt_powd_snf(the, 3.0) * (p_a_tmp * p_a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) *
    psi * rt_powd_snf(the, 3.0) * (o_a_tmp * o_a_tmp) / 20.0) + psi * the * (phi
    * (the * the) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) + psi * (the * the) * (cos(theta1) * cos(theta2) *
    sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2))) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) / 20.0) +
    psi * the * (phi * (the * the) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) + psi * (the * the) * (cos(theta1) *
    sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3))) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) / 20.0) / 2.0) - psi * the * sin(theta1) * ((((psi * the * sin
    (theta1) * (phi * (the * the) * sin(theta1) + psi * (the * the) * sin(theta1))
    / 10.0 - rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0) * (c_a_tmp *
    c_a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0) *
    (d_a_tmp * d_a_tmp) / 20.0) + psi * the * cos(theta1) * sin(theta2) * (phi *
    (the * the) * cos(theta1) * sin(theta2) + psi * (the * the) * cos(theta1) *
    sin(theta2)) / 20.0) + psi * the * cos(theta1) * cos(theta2) * (phi * (the *
    the) * cos(theta1) * cos(theta2) + psi * (the * the) * cos(theta1) * cos
    (theta2)) / 20.0) / 2.0) - psi * the * sin(theta1) * ((rt_powd_snf(phi, 3.0)
    * (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi)
    * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) *
    (psi * psi) * (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) +
    d130) + d95) - phi * psi * cos(theta1) * (((((phi * phi * (psi * psi) *
    (a_tmp * a_tmp) / 10.0 - psi * psi * (the * the) * (b_a_tmp * b_a_tmp) /
    10.0) - psi * psi * (the * the) * (h_a_tmp * h_a_tmp) / 20.0) - psi * psi *
    (the * the) * (i_a_tmp * i_a_tmp) / 20.0) + phi * phi * (psi * psi) *
    (j_a_tmp * j_a_tmp) / 20.0) + phi * phi * (psi * psi) * (k_a_tmp * k_a_tmp) /
    20.0) / 2.0) - phi * psi * cos(theta1) * (((((phi * phi * (psi * psi) *
    (a_tmp * a_tmp) / 10.0 - psi * psi * (the * the) * (b_a_tmp * b_a_tmp) /
    10.0) - psi * psi * (the * the) * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) /
    20.0) + phi * phi * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) /
    20.0) - psi * psi * (the * the) * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) /
    20.0) + phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp) /
    20.0) / 2.0) - phi * psi * cos(theta1) * (psi * psi * (the * the) * (a_tmp *
    a_tmp) / 20.0 + psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0)
    + d131) - d132 / 2.0) - d26 / 40.0) - db_C_23_tmp * d140 / 40.0) - d136 *
    ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + d108)
    / 40.0) - d114 * n_a_tmp * (d138 + d139) / 40.0) - d36 * (d102 + d116) *
    ((d105 / 10.0 - k_C_23_tmp / 10.0) + d104 * d_a_tmp / 10.0) / 40.0) + d110 *
    rt_powd_snf(the, 3.0) * (j_a_tmp_tmp / 20.0 - k_a_tmp_tmp / 20.0) *
    (j_a_tmp_tmp_tmp * cos(theta3) / 20.0 - k_C_23_tmp * sin(theta3) / 20.0) /
    40.0) + d110 * rt_powd_snf(the, 3.0) * (g_a_tmp_tmp_tmp * e_a_tmp / 20.0 +
    d122 * d_a_tmp / 20.0) * (3.0 * c_a_tmp * sin(theta3) / 20.0 + 3.0 * g_a_tmp
    * sin(theta2) / 20.0) / 40.0) + d18 * d3 * rt_powd_snf(the, 4.0) *
    (f_a_tmp_tmp_tmp * sin(theta3) / 20.0 - g_a_tmp_tmp_tmp * cos(theta3) / 20.0)
    * (l_a_tmp * cos(theta2) * sin(theta3) / 20.0 + l_a_tmp * cos(theta3) * sin
    (theta2) / 20.0) / 20.0) - 3.0 * psi * the * cos(theta1) * (phi * phi * (the
    * the) / 20.0 + d11 * psi * the / 20.0) * ((3.0 * cos(theta2) * sin(theta3) /
    10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) /
    20.0) + 7.0 * rt_powd_snf(phi, 4.0) * psi * (the * the) * (j_a_tmp_tmp_tmp *
    sin(theta1) * sin(theta3) / 20.0 + d104 * sin(theta1) * sin(theta2) / 20.0) *
    (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) /
    20.0) / 40.0) + 7.0 * rt_powd_snf(phi, 4.0) * psi * (the * the) * (3.0 *
    b_a_tmp * sin(theta2) * sin(theta3) / 20.0 - 3.0 * c_a_tmp * cos(theta3) *
    sin(theta1) / 20.0) * (3.0 * cos(theta2) * cos(theta3) / 20.0 - 3.0 * sin
    (theta2) * sin(theta3) / 20.0) / 40.0) - 63.0 * (phi * phi) * psi *
    rt_powd_snf(the, 3.0) * cos(theta1) * (c_a_tmp * c_a_tmp) / 16000.0) - 3.0 *
    phi * psi * sin(theta1) * (phi * (the * the) / 20.0 + phi * phi * psi * (the
    * the) / 20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2)
    / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 20.0) - 7.0 * (phi * phi)
    * psi * rt_powd_snf(the, 3.0) * (3.0 * cos(theta1) * sin(theta2) * sin
    (theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) *
    (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 + 3.0 * cos(theta1) *
    sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta1) * cos(theta2) * cos
    (theta3) / 10.0) + sin(theta1) * ((3.0 * cos(theta2) * sin(theta1) / 10.0 +
    3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta2) *
    cos(theta3) * sin(theta1) / 10.0)) / 40.0) - phi * rt_powd_snf(psi, 3.0) *
    (the * the) * cos(theta1) * (b_a_tmp * b_a_tmp) / 40.0) + 63.0 * (phi * phi)
    * psi * rt_powd_snf(the, 3.0) * cos(theta1) * (d_a_tmp * d_a_tmp) / 16000.0)
    - rt_powd_snf(phi, 3.0) * rt_powd_snf(psi, 3.0) * the * (a_tmp * a_tmp) *
    sin(theta1) / 40.0) - 63.0 * rt_powd_snf(phi, 4.0) * psi * (the * the) *
    (c_a_tmp * c_a_tmp) * sin(theta1) / 16000.0) + 63.0 * rt_powd_snf(phi, 4.0) *
    psi * (the * the) * sin(theta1) * (d_a_tmp * d_a_tmp) / 16000.0) - 7.0 *
    (phi * phi) * psi * (the * the) * (3.0 * sin(theta1) * sin(theta2) * sin
    (theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) *
    (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 + 3.0 * cos(theta1) *
    sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta1) * cos(theta2) * cos
    (theta3) / 10.0) + sin(theta1) * ((3.0 * cos(theta2) * sin(theta1) / 10.0 +
    3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta2) *
    cos(theta3) * sin(theta1) / 10.0)) / 40.0) + q_C_23_tmp) - xb_C_23_tmp) -
    y_C_23_tmp) - gb_C_23_tmp) - t_C_23_tmp / 800.0) - fb_C_23_tmp) + w_C_23_tmp
    / 800.0) - yb_C_23_tmp) + lb_C_23_tmp) + r_C_23_tmp) - nb_C_23_tmp) -
                    jb_C_23_tmp) + sb_C_23_tmp) + mb_C_23_tmp) + u_C_23_tmp) +
                m_C_23_tmp) - o_C_23_tmp) - p_C_23_tmp) - bc_C_23_tmp) -
            s_C_23_tmp) - v_C_23_tmp * (a_tmp * a_tmp) * c_a_tmp * d_a_tmp /
           8000.0) - ab_C_23_tmp * c_a_tmp * (b_a_tmp * b_a_tmp) * d_a_tmp /
          8000.0) - b_C_23_tmp_tmp * l_C_23_tmp / 20.0) + ac_C_23_tmp) +
       e_C_23_tmp_tmp * l_C_23_tmp / 20.0) + j_C_23_tmp_tmp * b_a_tmp * d22 *
      ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0
       * cos(theta3) * sin(theta2) / 10.0) / 40.0) + C_23_tmp_tmp_tmp) -
    k_C_23_tmp_tmp * d113 * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin
    (theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  C_23[8] = ((((((((((((((((((((((((((((((((((((((((((((((((((((((((d15 - the *
    sin(theta1) * (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (c_a_tmp *
    c_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (d_a_tmp *
    d_a_tmp) / 20.0) / 2.0) - d42) - d43) - phi * the * cos(theta1) *
    (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (c_a_tmp * c_a_tmp) / 20.0
    + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (d_a_tmp * d_a_tmp) / 20.0)
    / 2.0) - the * sin(theta1) * (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) *
    (o_a_tmp * o_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) *
    (p_a_tmp * p_a_tmp) / 20.0) / 2.0) - d53) - psi * the * sin(theta1) *
    (rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf
    (phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - psi * the *
    sin(theta1) * ((psi * the * cos(theta1) * (phi * (the * the) * cos(theta1) +
    psi * (the * the) * cos(theta1)) / 20.0 - rt_powd_snf(phi, 3.0) * psi *
    rt_powd_snf(the, 3.0) / 20.0) + psi * the * sin(theta1) * (phi * (the * the)
    * sin(theta1) + psi * (the * the) * sin(theta1)) / 10.0) / 2.0) - phi * psi *
    cos(theta1) * ((psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0 + psi *
    psi * (the * the) * (h_a_tmp * h_a_tmp) / 20.0) + psi * psi * (the * the) *
    (i_a_tmp * i_a_tmp) / 20.0) / 2.0) + d1 / 2.0) - d45 * ((((phi * psi * cos
    (theta1) * (phi * phi * (the * the) * cos(theta1) + phi * phi * psi * the *
    cos(theta1)) / 10.0 - rt_powd_snf(phi, 3.0) * psi * (the * the) * (c_a_tmp *
    c_a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) * psi * (the * the) * (d_a_tmp *
    d_a_tmp) / 20.0) + phi * psi * sin(theta1) * sin(theta2) * (phi * phi * (the
    * the) * sin(theta1) * sin(theta2) + phi * phi * psi * the * sin(theta1) *
    sin(theta2)) / 20.0) + phi * psi * cos(theta2) * sin(theta1) * (phi * phi *
    (the * the) * cos(theta2) * sin(theta1) + phi * phi * psi * the * cos(theta2)
    * sin(theta1)) / 20.0) / 2.0) - d50 * (d7 + d4) / 2.0) - d49 * sin(theta1) *
    (psi * the * sin(theta1) * (phi * phi * (the * the) * cos(theta1) + phi *
    phi * psi * the * cos(theta1)) / 10.0 - psi * the * cos(theta1) * (phi * phi
    * (the * the) * sin(theta1) + phi * phi * psi * the * sin(theta1)) / 20.0) /
    2.0) + d0 * cos(theta1) * ((phi * psi * cos(theta2) * sin(theta1) * (phi *
    (the * the) * cos(theta1) * cos(theta2) + psi * (the * the) * cos(theta1) *
    cos(theta2)) / 20.0 - phi * psi * cos(theta1) * (phi * (the * the) * sin
    (theta1) + psi * (the * the) * sin(theta1)) / 10.0) + d65 * (phi * (the *
    the) * cos(theta1) * sin(theta2) + psi * (the * the) * cos(theta1) * sin
    (theta2)) / 20.0) / 2.0) + psi * the * sin(theta1) * (((((rt_powd_snf(phi,
    3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi *
    psi) * (j_a_tmp * j_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) *
    (k_a_tmp * k_a_tmp) / 20.0) - phi * (psi * psi) * (the * the) * (h_a_tmp *
    h_a_tmp) / 20.0) - d79 * (i_a_tmp * i_a_tmp) / 20.0) - d79 * (b_a_tmp *
    b_a_tmp) / 10.0) / 2.0) - psi * the * sin(theta1) * ((d83 * (a_tmp * a_tmp) /
    10.0 + d83 * (j_a_tmp * j_a_tmp) / 20.0) + d8 * d3 * (k_a_tmp * k_a_tmp) /
    20.0) / 2.0) + psi * the * sin(theta1) * (((((rt_powd_snf(phi, 3.0) * (psi *
    psi) * (a_tmp * a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) *
    (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) *
    (psi * psi) * (b_a_tmp * b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) - d79 *
    (b_a_tmp * b_a_tmp) / 10.0) - d79 * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) /
    20.0) - d79 * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - 7.0 *
    phi * psi * (the * the) * (3.0 * a_tmp * cos(theta2) * sin(theta3) / 20.0 +
    3.0 * a_tmp * cos(theta3) * sin(theta2) / 20.0) / 40.0) + psi * the * sin
    (theta1) * (((rt_powd_snf(phi, 3.0) * d3 * (a_tmp * a_tmp) / 10.0 +
    rt_powd_snf(phi, 3.0) * d3 * (b_a_tmp * b_a_tmp) / 20.0) - phi * d3 * (the *
    the) * (a_tmp * a_tmp) / 20.0) - phi * d3 * (the * the) * (b_a_tmp * b_a_tmp)
    / 10.0) / 2.0) - phi * psi * cos(theta1) * (((phi * phi * (psi * psi) *
    (a_tmp * a_tmp) / 10.0 - psi * psi * (the * the) * (a_tmp * a_tmp) / 20.0) +
    phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) / 20.0) - psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - phi * the * cos(theta1) *
    (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (o_a_tmp * o_a_tmp) / 20.0
    + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (p_a_tmp * p_a_tmp) / 20.0)
    / 2.0) + d2) - d5) + d88) + psi * the * sin(theta1) * ((phi * (psi * psi) *
    the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) / 10.0 - phi * (psi *
    psi) * the * cos(theta1) * sin(theta1) / 5.0) + phi * (psi * psi) * the *
    cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 10.0) / 2.0) - psi * the *
    sin(theta1) * ((phi * (psi * psi) * the * cos(theta1) * (c_a_tmp * c_a_tmp) *
    sin(theta1) / 20.0 - phi * (psi * psi) * the * cos(theta1) * sin(theta1) /
    10.0) + phi * (psi * psi) * the * cos(theta1) * sin(theta1) * (d_a_tmp *
    d_a_tmp) / 20.0) / 2.0) + d6) + phi * psi * cos(theta1) * ((phi * phi * (psi
    * psi) * the * cos(theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) / 10.0 - phi *
    phi * (psi * psi) * the * cos(theta1) * sin(theta1) / 5.0) + phi * phi *
    (psi * psi) * the * cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 10.0) /
    2.0) - phi * psi * cos(theta1) * ((phi * phi * (psi * psi) * the * cos
    (theta1) * (c_a_tmp * c_a_tmp) * sin(theta1) / 20.0 - phi * phi * (psi * psi)
    * the * cos(theta1) * sin(theta1) / 10.0) + phi * phi * (psi * psi) * the *
    cos(theta1) * sin(theta1) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - phi * psi *
    cos(theta1) * ((((phi * psi * cos(theta1) * (phi * phi * (the * the) * cos
    (theta1) + phi * phi * psi * the * cos(theta1)) / 10.0 - rt_powd_snf(phi,
    3.0) * psi * (the * the) * (o_a_tmp * o_a_tmp) / 20.0) - rt_powd_snf(phi,
    3.0) * psi * (the * the) * (p_a_tmp * p_a_tmp) / 20.0) + phi * psi * (phi *
    phi * (the * the) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) *
    sin(theta1) * sin(theta2)) + phi * phi * psi * the * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2)) / 20.0) + phi * psi * (phi * phi * (the * the) * (sin(theta1) *
    sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) + phi *
    phi * psi * the * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) *
    cos(theta3) * sin(theta1))) * (sin(theta1) * sin(theta2) * sin(theta3) - cos
    (theta2) * cos(theta3) * sin(theta1)) / 20.0) / 2.0) - d128) + d85) - phi *
    psi * cos(theta1) * ((psi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 10.0 +
    psi * psi * (the * the) * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) +
    psi * psi * (the * the) * (a_tmp * a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) /
    2.0) - psi * the * sin(theta1) * ((((psi * the * sin(theta1) * (phi * (the *
    the) * sin(theta1) + psi * (the * the) * sin(theta1)) / 10.0 - rt_powd_snf
    (phi, 3.0) * psi * rt_powd_snf(the, 3.0) * (p_a_tmp * p_a_tmp) / 20.0) -
    rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0) * (o_a_tmp * o_a_tmp) /
    20.0) + psi * the * (phi * (the * the) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) + psi * (the * the) *
    (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2))) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) / 20.0) + psi * the * (phi * (the * the) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) + psi * (the * the) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3))) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) / 20.0) / 2.0) - psi *
    the * sin(theta1) * ((((psi * the * sin(theta1) * (phi * (the * the) * sin
    (theta1) + psi * (the * the) * sin(theta1)) / 10.0 - rt_powd_snf(phi, 3.0) *
    psi * rt_powd_snf(the, 3.0) * (c_a_tmp * c_a_tmp) / 20.0) - rt_powd_snf(phi,
    3.0) * psi * rt_powd_snf(the, 3.0) * (d_a_tmp * d_a_tmp) / 20.0) + psi * the
    * cos(theta1) * sin(theta2) * (phi * (the * the) * cos(theta1) * sin(theta2)
    + psi * (the * the) * cos(theta1) * sin(theta2)) / 20.0) + psi * the * cos
    (theta1) * cos(theta2) * (phi * (the * the) * cos(theta1) * cos(theta2) +
    psi * (the * the) * cos(theta1) * cos(theta2)) / 20.0) / 2.0) - psi * the *
    sin(theta1) * ((rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) / 10.0
    + rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (b_a_tmp * b_a_tmp)
    * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) + d130) + d95) - phi * psi * cos(theta1)
    * (((((phi * phi * (psi * psi) * (a_tmp * a_tmp) / 10.0 - psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) / 10.0) - psi * psi * (the * the) * (h_a_tmp *
    h_a_tmp) / 20.0) - psi * psi * (the * the) * (i_a_tmp * i_a_tmp) / 20.0) +
    phi * phi * (psi * psi) * (j_a_tmp * j_a_tmp) / 20.0) + phi * phi * (psi *
    psi) * (k_a_tmp * k_a_tmp) / 20.0) / 2.0) - phi * psi * cos(theta1) *
    (((((phi * phi * (psi * psi) * (a_tmp * a_tmp) / 10.0 - psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) / 10.0) - psi * psi * (the * the) * (a_tmp *
    a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + phi * phi * (psi * psi) * (c_a_tmp *
    c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) - psi * psi * (the * the) * (a_tmp *
    a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) + phi * phi * (psi * psi) * (b_a_tmp *
    b_a_tmp) * (d_a_tmp * d_a_tmp) / 20.0) / 2.0) - phi * psi * cos(theta1) *
    (psi * psi * (the * the) * (a_tmp * a_tmp) / 20.0 + psi * psi * (the * the) *
     (b_a_tmp * b_a_tmp) / 10.0) / 2.0) + d131) - d133) + 7.0 * (phi * phi) *
    psi * rt_powd_snf(the, 3.0) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3)
    / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) * (3.0 * cos
    (theta2) * cos(theta3) / 20.0 - 3.0 * sin(theta2) * sin(theta3) / 20.0) /
    40.0) + 7.0 * (phi * phi) * psi * rt_powd_snf(the, 3.0) * (3.0 * cos(theta1)
    * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta1) * cos(theta3) * sin
    (theta2) / 20.0) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
                        (theta3) * sin(theta2) / 20.0) / 40.0) + 7.0 * (phi *
    phi) * (psi * psi) * rt_powd_snf(the, 4.0) * (3.0 * cos(theta1) * sin(theta2)
    * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0)
                       * (3.0 * cos(theta1) * cos(theta2) * sin(theta3) / 20.0 +
    3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 20.0) / 20.0) + 7.0 *
                      rt_powd_snf(phi, 4.0) * psi * (the * the) * (3.0 * cos
    (theta2) * sin(theta1) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta1)
    * sin(theta2) / 20.0) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
    (theta3) * sin(theta2) / 20.0) / 40.0) + 7.0 * rt_powd_snf(phi, 4.0) * psi *
                     (the * the) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) * (3.0 * cos
    (theta2) * cos(theta3) / 20.0 - 3.0 * sin(theta2) * sin(theta3) / 20.0) /
                     40.0) - phi * rt_powd_snf(psi, 3.0) * (the * the) * cos
                    (theta1) * (b_a_tmp * b_a_tmp) / 40.0) - rt_powd_snf(phi,
    3.0) * rt_powd_snf(psi, 3.0) * the * (a_tmp * a_tmp) * sin(theta1) / 40.0) +
                  q_C_23_tmp) + u_C_23_tmp) + m_C_23_tmp) - o_C_23_tmp) -
              p_C_23_tmp) + c_C_23_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) /
    10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) /
             40.0) - g_C_23_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 -
    3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
}

/*
 * File trailer for C_num_simp_23.c
 *
 * [EOF]
 */
