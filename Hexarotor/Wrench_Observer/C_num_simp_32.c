/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: C_num_simp_32.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 22-Jan-2019 17:30:33
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "C_num_simp_32.h"

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
  double d183;
  double d184;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d183 = fabs(u0);
    d184 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d183 == 1.0) {
        y = 1.0;
      } else if (d183 > 1.0) {
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
    } else if (d184 == 0.0) {
      y = 1.0;
    } else if (d184 == 1.0) {
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
 *                double C_32[9]
 * Return Type  : void
 */
void C_num_simp_32(double phi, double the, double psi, double theta1, double
                   theta2, double theta3, double C_32[9])
{
  double a_tmp;
  double b_a_tmp;
  double c_a_tmp;
  double d_a_tmp;
  double a_tmp_tmp;
  double e_a_tmp;
  double f_a_tmp;
  double b_a_tmp_tmp;
  double a_tmp_tmp_tmp;
  double c_a_tmp_tmp;
  double g_a_tmp;
  double b_a_tmp_tmp_tmp;
  double d_a_tmp_tmp;
  double e_a_tmp_tmp;
  double h_a_tmp;
  double i_a_tmp;
  double c_a_tmp_tmp_tmp;
  double f_a_tmp_tmp;
  double d_a_tmp_tmp_tmp;
  double g_a_tmp_tmp;
  double h_a_tmp_tmp;
  double i_a_tmp_tmp;
  double j_a_tmp;
  double e_a_tmp_tmp_tmp;
  double j_a_tmp_tmp;
  double f_a_tmp_tmp_tmp;
  double k_a_tmp_tmp;
  double k_a_tmp;
  double l_a_tmp_tmp;
  double m_a_tmp_tmp;
  double n_a_tmp_tmp;
  double o_a_tmp_tmp;
  double l_a_tmp;
  double a_tmp_tmp_tmp_tmp;
  double g_a_tmp_tmp_tmp;
  double p_a_tmp_tmp;
  double h_a_tmp_tmp_tmp;
  double i_a_tmp_tmp_tmp;
  double q_a_tmp_tmp;
  double r_a_tmp_tmp;
  double s_a_tmp_tmp;
  double m_a_tmp;
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
  double d147;
  double d148;
  double d149;
  double d150;
  double d151;
  double d152;
  double d153;
  double d154;
  double d155;
  double d156;
  double d157;
  double d158;
  double d159;
  double d160;
  double d161;
  double d162;
  double d163;
  double d164;
  double d165;
  double d166;
  double d167;
  double d168;
  double d169;
  double d170;
  double C_32_tmp;
  double d171;
  double d172;
  double d173;
  double d174;
  double d175;
  double b_C_32_tmp;
  double c_C_32_tmp;
  double d_C_32_tmp;
  double C_32_tmp_tmp;
  double e_C_32_tmp;
  double f_C_32_tmp;
  double g_C_32_tmp;
  double b_C_32_tmp_tmp;
  double h_C_32_tmp;
  double C_32_tmp_tmp_tmp;
  double c_C_32_tmp_tmp;
  double i_C_32_tmp;
  double j_C_32_tmp;
  double k_C_32_tmp;
  double l_C_32_tmp;
  double m_C_32_tmp;
  double d_C_32_tmp_tmp;
  double n_C_32_tmp;
  double o_C_32_tmp;
  double e_C_32_tmp_tmp;
  double p_C_32_tmp;
  double f_C_32_tmp_tmp;
  double q_C_32_tmp;
  double r_C_32_tmp;
  double s_C_32_tmp;
  double t_C_32_tmp;
  double g_C_32_tmp_tmp;
  double h_C_32_tmp_tmp;
  double i_C_32_tmp_tmp;
  double u_C_32_tmp;
  double j_C_32_tmp_tmp;
  double v_C_32_tmp;
  double k_C_32_tmp_tmp;
  double w_C_32_tmp;
  double l_C_32_tmp_tmp;
  double x_C_32_tmp;
  double m_C_32_tmp_tmp;
  double y_C_32_tmp;
  double n_C_32_tmp_tmp;
  double ab_C_32_tmp;
  double o_C_32_tmp_tmp;
  double bb_C_32_tmp;
  double p_C_32_tmp_tmp;
  double cb_C_32_tmp;
  double db_C_32_tmp;
  double eb_C_32_tmp;
  double fb_C_32_tmp;
  double q_C_32_tmp_tmp;
  double gb_C_32_tmp;
  double r_C_32_tmp_tmp;
  double hb_C_32_tmp;
  double s_C_32_tmp_tmp;
  double t_C_32_tmp_tmp;
  double ib_C_32_tmp;
  double u_C_32_tmp_tmp;
  double jb_C_32_tmp;
  double v_C_32_tmp_tmp;
  double w_C_32_tmp_tmp;
  double kb_C_32_tmp;
  double lb_C_32_tmp;
  double mb_C_32_tmp;
  double x_C_32_tmp_tmp;
  double nb_C_32_tmp;
  double ob_C_32_tmp;
  double pb_C_32_tmp;
  double qb_C_32_tmp;
  double rb_C_32_tmp;
  double sb_C_32_tmp;
  double tb_C_32_tmp;
  double d176;
  double d177;
  double d178;
  double d179;
  double d180;
  double d181;
  double d182;
  double ub_C_32_tmp;
  double vb_C_32_tmp;
  double wb_C_32_tmp;
  double xb_C_32_tmp;
  double yb_C_32_tmp;
  double ac_C_32_tmp;
  double bc_C_32_tmp;
  double cc_C_32_tmp;
  double dc_C_32_tmp;
  double y_C_32_tmp_tmp;
  double ab_C_32_tmp_tmp;
  double ec_C_32_tmp;
  double bb_C_32_tmp_tmp;
  double cb_C_32_tmp_tmp;
  double fc_C_32_tmp;
  double db_C_32_tmp_tmp;
  double gc_C_32_tmp;
  double eb_C_32_tmp_tmp;
  double hc_C_32_tmp;
  double ic_C_32_tmp;
  double jc_C_32_tmp;
  double fb_C_32_tmp_tmp;
  double kc_C_32_tmp;
  double gb_C_32_tmp_tmp;
  double lc_C_32_tmp;
  double mc_C_32_tmp;
  double nc_C_32_tmp;
  double oc_C_32_tmp;
  double pc_C_32_tmp;
  double qc_C_32_tmp;
  double rc_C_32_tmp;
  a_tmp = cos(theta1);
  b_a_tmp = sin(theta1);
  c_a_tmp = sin(theta2);
  d_a_tmp = sin(theta3);
  a_tmp_tmp = cos(theta2);
  e_a_tmp = a_tmp * a_tmp_tmp;
  f_a_tmp = cos(theta3);
  b_a_tmp_tmp = e_a_tmp * d_a_tmp;
  a_tmp_tmp_tmp = a_tmp * f_a_tmp;
  c_a_tmp_tmp = a_tmp_tmp_tmp * c_a_tmp;
  g_a_tmp = b_a_tmp_tmp + c_a_tmp_tmp;
  b_a_tmp_tmp_tmp = a_tmp * c_a_tmp;
  d_a_tmp_tmp = b_a_tmp_tmp_tmp * d_a_tmp;
  e_a_tmp_tmp = e_a_tmp * f_a_tmp;
  h_a_tmp = d_a_tmp_tmp - e_a_tmp_tmp;
  i_a_tmp = 3.0 * a_tmp;
  c_a_tmp_tmp_tmp = i_a_tmp * c_a_tmp;
  f_a_tmp_tmp = c_a_tmp_tmp_tmp * d_a_tmp;
  d_a_tmp_tmp_tmp = i_a_tmp * a_tmp_tmp;
  g_a_tmp_tmp = d_a_tmp_tmp_tmp * f_a_tmp;
  h_a_tmp_tmp = f_a_tmp_tmp / 20.0;
  i_a_tmp_tmp = g_a_tmp_tmp / 20.0;
  j_a_tmp = h_a_tmp_tmp - i_a_tmp_tmp;
  e_a_tmp_tmp_tmp = a_tmp_tmp * b_a_tmp;
  j_a_tmp_tmp = e_a_tmp_tmp_tmp * d_a_tmp;
  f_a_tmp_tmp_tmp = f_a_tmp * b_a_tmp;
  k_a_tmp_tmp = f_a_tmp_tmp_tmp * c_a_tmp;
  k_a_tmp = j_a_tmp_tmp + k_a_tmp_tmp;
  l_a_tmp_tmp = a_tmp_tmp * f_a_tmp;
  m_a_tmp_tmp = b_a_tmp * c_a_tmp;
  n_a_tmp_tmp = m_a_tmp_tmp * d_a_tmp;
  o_a_tmp_tmp = l_a_tmp_tmp * b_a_tmp;
  l_a_tmp = n_a_tmp_tmp - o_a_tmp_tmp;
  a_tmp_tmp_tmp_tmp = 3.0 * b_a_tmp;
  g_a_tmp_tmp_tmp = a_tmp_tmp_tmp_tmp * c_a_tmp;
  p_a_tmp_tmp = g_a_tmp_tmp_tmp * d_a_tmp;
  h_a_tmp_tmp_tmp = 3.0 * a_tmp_tmp;
  i_a_tmp_tmp_tmp = h_a_tmp_tmp_tmp * f_a_tmp;
  q_a_tmp_tmp = i_a_tmp_tmp_tmp * b_a_tmp;
  r_a_tmp_tmp = p_a_tmp_tmp / 20.0;
  s_a_tmp_tmp = q_a_tmp_tmp / 20.0;
  m_a_tmp = r_a_tmp_tmp - s_a_tmp_tmp;
  d0 = psi * psi;
  d1 = phi * psi;
  d2 = phi * phi;
  d3 = d2 * d0;
  d4 = d3 * a_tmp;
  d5 = the * the;
  d6 = d0 * d5;
  d7 = d6 * a_tmp;
  d8 = d4 * a_tmp_tmp;
  d9 = d1 * a_tmp_tmp;
  d10 = d2 * d5;
  d11 = d10 * a_tmp;
  d12 = d6 * b_a_tmp;
  d13 = a_tmp_tmp * d_a_tmp;
  d14 = f_a_tmp * c_a_tmp;
  d15 = d13 + d14;
  d16 = c_a_tmp * d_a_tmp;
  d17 = l_a_tmp_tmp - d16;
  d18 = d12 * g_a_tmp;
  d19 = d4 * k_a_tmp;
  d20 = d18 - d19;
  d21 = phi * the;
  d22 = d12 * h_a_tmp;
  d23 = d4 * l_a_tmp;
  d24 = d22 - d23;
  d25 = d7 * a_tmp_tmp;
  d26 = d8 * b_a_tmp;
  d27 = d25 * b_a_tmp;
  d28 = d26 - d27;
  d29 = d4 * b_a_tmp;
  d30 = d7 * b_a_tmp;
  d31 = d29 * c_a_tmp;
  d32 = d30 * c_a_tmp;
  d33 = d31 - d32;
  d34 = d4 * d15 - d11 * d15;
  d35 = d4 * d17 - d11 * d17;
  d36 = d1 * b_a_tmp;
  d37 = d29 - d30;
  d38 = d21 * a_tmp_tmp;
  d39 = d11 * a_tmp_tmp;
  d40 = d8 - d39;
  d41 = d21 * c_a_tmp;
  d42 = d4 * c_a_tmp;
  d43 = d11 * c_a_tmp;
  d44 = d42 - d43;
  d45 = d21 * b_a_tmp;
  d46 = d9 * b_a_tmp;
  d47 = d36 * c_a_tmp;
  d48 = d41 * d28 / 20.0 - d38 * d33 / 20.0;
  d49 = d36 * d37;
  d50 = d1 * k_a_tmp;
  d51 = d50 * d20;
  d52 = d1 * l_a_tmp;
  d53 = d52 * d24;
  d54 = ((d1 * d17 * d20 / 20.0 + d1 * d15 * d24 / 20.0) - d1 * d34 * l_a_tmp /
         20.0) - d1 * d35 * k_a_tmp / 20.0;
  d55 = 3.0 * phi * the * a_tmp;
  d56 = d21 * d17;
  d57 = d21 * d15;
  d58 = d56 * d20 / 20.0 + d57 * d24 / 20.0;
  d59 = f_a_tmp_tmp / 10.0;
  d60 = g_a_tmp_tmp / 10.0;
  d61 = p_a_tmp_tmp / 10.0;
  d62 = q_a_tmp_tmp / 10.0;
  d63 = a_tmp * (d59 - d60) + b_a_tmp * (d61 - d62);
  d64 = d47 * d33;
  d65 = 7.0 * phi * psi;
  d66 = d1 * a_tmp;
  d67 = phi * d54 / 2.0;
  d68 = phi * d58;
  d69 = d68 / 2.0;
  d70 = phi * d48 / 2.0;
  d71 = d1 * c_a_tmp;
  d72 = phi * (((d71 * d28 / 20.0 - d9 * d33 / 20.0) - d47 * d40 / 20.0) + d46 *
               d44 / 20.0) / 2.0;
  d34 = (d21 * d34 * d15 / 20.0 + d21 * d35 * d17 / 20.0) + d21 * k_a_tmp * d20 /
    20.0;
  d35 = d21 * l_a_tmp * d24;
  d73 = d49 / 40.0;
  d74 = d55 * d48 / 2.0;
  d75 = psi * the;
  d76 = d75 * b_a_tmp;
  d77 = d76 * d37;
  d78 = 3.0 * psi * the;
  d79 = d78 * b_a_tmp;
  d80 = 2.0 * d2;
  d81 = d80 * d0 * a_tmp;
  d82 = 2.0 * d0;
  d83 = d82 * d5 * a_tmp;
  d84 = d79 * (d81 * b_a_tmp - d83 * b_a_tmp);
  d85 = d75 * h_a_tmp;
  d86 = phi * d5;
  d87 = d86 * b_a_tmp;
  d88 = phi * d0;
  d89 = d88 * d5;
  d90 = d89 * b_a_tmp;
  d91 = d87 * d15 - d90 * d15;
  d92 = d75 * g_a_tmp;
  d93 = d87 * d17;
  d94 = d90 * d17;
  d95 = d93 - d94;
  d96 = 7.0 * d2;
  d97 = d75 * a_tmp;
  d98 = d97 * c_a_tmp;
  d99 = d97 * a_tmp_tmp;
  d100 = 3.0 * phi * psi;
  d101 = d100 * a_tmp;
  d102 = d3 * b_a_tmp;
  d103 = 3.0 * d2;
  d104 = 3.0 * f_a_tmp;
  d105 = h_a_tmp_tmp_tmp * d_a_tmp;
  d106 = d105 / 10.0;
  d107 = d104 * c_a_tmp;
  d108 = d107 / 10.0;
  d109 = d106 + d108;
  d110 = d96 * psi;
  d111 = d110 * the;
  d112 = h_a_tmp_tmp_tmp * b_a_tmp;
  d113 = d112 * d_a_tmp;
  d114 = d104 * b_a_tmp;
  d115 = d114 * c_a_tmp;
  d116 = d1 * the;
  d117 = d78 * a_tmp;
  d118 = d2 * psi;
  d119 = 7.0 * psi * the;
  d120 = d119 * a_tmp;
  d59 += d_a_tmp_tmp_tmp / 10.0;
  d121 = d59 - d60;
  d122 = a_tmp * d121;
  d61 += d112 / 10.0;
  d123 = d61 - d62;
  d124 = b_a_tmp * d123;
  d125 = d122 + d124;
  d126 = d10 * b_a_tmp;
  d127 = d102 * d63;
  d128 = d118 * the;
  d129 = d103 * psi;
  d130 = d129 * the;
  d131 = 21.0 * phi * psi;
  d132 = d_a_tmp_tmp_tmp * d_a_tmp;
  d133 = d132 / 10.0;
  d134 = i_a_tmp * f_a_tmp;
  d135 = d134 * c_a_tmp;
  d136 = d135 / 10.0;
  d137 = d113 / 10.0;
  d138 = d115 / 10.0;
  d139 = a_tmp * (d133 + d136) + b_a_tmp * (d137 + d138);
  d140 = ((d4 * h_a_tmp - d7 * h_a_tmp) - d102 * l_a_tmp) + d12 * l_a_tmp;
  d141 = ((d4 * g_a_tmp - d7 * g_a_tmp) - d102 * k_a_tmp) + d12 * k_a_tmp;
  d142 = d87 * c_a_tmp;
  d143 = d90 * c_a_tmp;
  d144 = d142 - d143;
  d145 = d116 * d17 * d20;
  d146 = d116 * d15 * d24;
  d147 = d99 * d144;
  d148 = d116 * c_a_tmp * d28;
  d149 = d116 * a_tmp_tmp;
  d150 = d149 * d33;
  d151 = d147 / 40.0;
  d152 = d148 / 40.0;
  d153 = d120 * (d118 * m_a_tmp + d2 * the * m_a_tmp);
  d154 = d117 * (d10 / 20.0 + d128 / 20.0) * (d109 - 0.1) / 20.0;
  d113 = d113 / 20.0 + d115 / 20.0;
  d115 = d51 / 40.0;
  d155 = d53 / 40.0;
  d156 = d75 * k_a_tmp * d20;
  d157 = d75 * l_a_tmp * d24;
  d54 = d101 * d54 / 2.0;
  d158 = d92 * d141;
  d159 = d85 * d140;
  d55 = d55 * d58 / 2.0;
  d160 = d111 * d113;
  d161 = d160 * d63;
  d162 = d111 * j_a_tmp * d125 / 40.0;
  d163 = d103 * d5;
  d164 = d120 * (d163 * c_a_tmp / 20.0 + d130 * c_a_tmp / 20.0);
  d165 = d111 * m_a_tmp * d139 / 20.0;
  d166 = d145 / 40.0;
  d167 = d146 / 40.0;
  d168 = d150 / 40.0;
  d169 = d102 * d125;
  d170 = d126 * d125;
  C_32_tmp = rt_powd_snf(the, 3.0);
  d171 = d110 * C_32_tmp * j_a_tmp;
  d172 = 3.0 * c_a_tmp;
  d173 = d172 / 10.0;
  d174 = d106 - d173;
  d175 = d105 / 20.0 + d107 / 20.0;
  b_C_32_tmp = 337.0 * d2 * d0 * the;
  c_C_32_tmp = 63.0 * d2;
  d_C_32_tmp = d65 * d5;
  C_32_tmp_tmp = d172 * d_a_tmp;
  e_C_32_tmp = i_a_tmp_tmp_tmp / 10.0 - C_32_tmp_tmp / 10.0;
  f_C_32_tmp = d111 * b_a_tmp;
  g_C_32_tmp = 21.0 * d2;
  b_C_32_tmp_tmp = d131 * d5;
  h_C_32_tmp = b_C_32_tmp_tmp * a_tmp;
  C_32_tmp_tmp_tmp = g_C_32_tmp * psi;
  c_C_32_tmp_tmp = C_32_tmp_tmp_tmp * the;
  i_C_32_tmp = c_C_32_tmp_tmp * a_tmp_tmp * b_a_tmp;
  j_C_32_tmp = c_C_32_tmp_tmp * b_a_tmp * c_a_tmp;
  k_C_32_tmp = d65 * the;
  l_C_32_tmp = c_C_32_tmp_tmp * a_tmp;
  m_C_32_tmp = g_C_32_tmp * d0;
  c_C_32_tmp_tmp = d86 * a_tmp_tmp * b_a_tmp;
  d_C_32_tmp_tmp = d89 * a_tmp_tmp * b_a_tmp;
  n_C_32_tmp = c_C_32_tmp_tmp - d_C_32_tmp_tmp;
  o_C_32_tmp = d98 * n_C_32_tmp;
  e_C_32_tmp_tmp = 7.0 * (phi * phi) * (psi * psi) * d5;
  p_C_32_tmp = e_C_32_tmp_tmp * j_a_tmp;
  f_C_32_tmp_tmp = d120 * (d129 * a_tmp_tmp * b_a_tmp / 20.0 + d103 * the *
    a_tmp_tmp * b_a_tmp / 20.0);
  q_C_32_tmp = f_C_32_tmp_tmp * (d109 - 0.1) / 40.0;
  r_C_32_tmp = c_C_32_tmp * d0;
  s_C_32_tmp = o_C_32_tmp / 40.0;
  t_C_32_tmp = C_32_tmp_tmp_tmp * d5;
  g_C_32_tmp_tmp = d110 * d5;
  h_C_32_tmp_tmp = g_C_32_tmp_tmp * b_a_tmp;
  i_C_32_tmp_tmp = h_C_32_tmp_tmp * j_a_tmp;
  u_C_32_tmp = i_C_32_tmp_tmp * (d109 - 0.1) / 40.0;
  j_C_32_tmp_tmp = 7.0 * (phi * phi) * (psi * psi) * the * b_a_tmp * j_a_tmp;
  v_C_32_tmp = j_C_32_tmp_tmp * (d109 - 0.1) / 40.0;
  k_C_32_tmp_tmp = i_a_tmp_tmp_tmp / 20.0;
  C_32_tmp_tmp /= 20.0;
  w_C_32_tmp = k_C_32_tmp_tmp - C_32_tmp_tmp;
  l_C_32_tmp_tmp = k_C_32_tmp * b_a_tmp * j_a_tmp;
  x_C_32_tmp = l_C_32_tmp_tmp * (d109 - 0.1) / 40.0;
  m_C_32_tmp_tmp = k_C_32_tmp * a_tmp * m_a_tmp;
  y_C_32_tmp = m_C_32_tmp_tmp * (d109 - 0.1) / 40.0;
  n_C_32_tmp_tmp = t_C_32_tmp * a_tmp;
  ab_C_32_tmp = n_C_32_tmp_tmp * a_tmp_tmp;
  o_C_32_tmp_tmp = ab_C_32_tmp * b_a_tmp;
  bb_C_32_tmp = o_C_32_tmp_tmp * (d109 - 0.1) / 800.0;
  p_C_32_tmp_tmp = m_C_32_tmp * the * a_tmp * a_tmp_tmp * b_a_tmp;
  cb_C_32_tmp = p_C_32_tmp_tmp * (d109 - 0.1) / 800.0;
  db_C_32_tmp = p_C_32_tmp * d63 / 40.0;
  eb_C_32_tmp = d64 / 40.0;
  fb_C_32_tmp = l_C_32_tmp * a_tmp_tmp;
  q_C_32_tmp_tmp = d_C_32_tmp * j_a_tmp;
  gb_C_32_tmp = q_C_32_tmp_tmp * d63 / 40.0;
  r_C_32_tmp_tmp = c_C_32_tmp * psi * C_32_tmp;
  hb_C_32_tmp = r_C_32_tmp_tmp * a_tmp_tmp * b_a_tmp * c_a_tmp / 16000.0;
  s_C_32_tmp_tmp = m_C_32_tmp * d5 * a_tmp * a_tmp_tmp;
  m_C_32_tmp = s_C_32_tmp_tmp * d63 / 800.0;
  t_C_32_tmp_tmp = d_C_32_tmp * a_tmp * d175;
  ib_C_32_tmp = t_C_32_tmp_tmp * (d109 - 0.1) / 40.0;
  u_C_32_tmp_tmp = h_C_32_tmp * a_tmp_tmp;
  jb_C_32_tmp = u_C_32_tmp_tmp * d63 / 800.0;
  v_C_32_tmp_tmp = h_C_32_tmp * c_a_tmp;
  h_C_32_tmp = v_C_32_tmp_tmp * (d109 - 0.1) / 800.0;
  w_C_32_tmp_tmp = C_32_tmp_tmp_tmp * C_32_tmp * a_tmp * a_tmp_tmp;
  kb_C_32_tmp = w_C_32_tmp_tmp * d63 / 800.0;
  lb_C_32_tmp = d76 * c_a_tmp * d33;
  mb_C_32_tmp = d130 * a_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 400.0;
  x_C_32_tmp_tmp = f_C_32_tmp * w_C_32_tmp;
  nb_C_32_tmp = x_C_32_tmp_tmp * (d109 - 0.1);
  ob_C_32_tmp = d111 * a_tmp * d175 * ((3.0 * cos(theta2) * sin(theta3) / 10.0 -
    3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  pb_C_32_tmp = i_C_32_tmp * (d109 - 0.1) / 800.0;
  qb_C_32_tmp = j_C_32_tmp * d63 / 800.0;
  rb_C_32_tmp = fb_C_32_tmp * d125 / 800.0;
  l_C_32_tmp = l_C_32_tmp * c_a_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 -
    3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 800.0;
  sb_C_32_tmp = d130 * b_a_tmp * e_C_32_tmp / 200.0;
  f_C_32_tmp = f_C_32_tmp * e_C_32_tmp * d175 / 20.0;
  i_C_32_tmp = i_C_32_tmp * d139 / 400.0;
  tb_C_32_tmp = j_C_32_tmp * e_C_32_tmp / 400.0;
  C_32[0] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((((((((((((d72 + d67) + d69) + d70) - d21 * ((d45 *
    d37 / 20.0 - d21 * (d4 - d11) / 20.0) + d21 * a_tmp * (d3 * (a_tmp * a_tmp)
    + d6 * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + d21 * ((d34 + d35 / 20.0) - phi
    * the * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi
    * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + d65 * j_a_tmp / 40.0)
    - d21 * (d49 / 20.0 + d66 * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi
    * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + d21 * ((d51 /
    20.0 + d53 / 20.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) /
    2.0) + d1 * d63 / 2.0) - d21 * ((((phi * the * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0 - d38 * d40 / 20.0) - d41 * d44 / 20.0) + d38 * b_a_tmp * d28 / 20.0)
    + d45 * c_a_tmp * d33 / 20.0) / 2.0) - d21 * ((phi * psi * cos(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0 + d46 * d28 / 20.0) + d64 / 20.0) / 2.0) + d74)
    + d73) - d77 / 20.0) + d84 / 10.0) + d85 * d91 / 40.0) + d92 * d95 / 40.0) -
    d3 * the * (g_a_tmp * g_a_tmp) / 40.0) - d3 * the * (h_a_tmp * h_a_tmp) /
    40.0) + d96 * d0 * the * (j_a_tmp * j_a_tmp) / 40.0) - 3.0 * psi * the * sin
    (theta1) * (d98 * (d8 - d39) / 20.0 - d99 * (d42 - d43) / 20.0) / 2.0) + phi
    * phi * (psi * psi) * the * (k_a_tmp * k_a_tmp) / 40.0) + phi * phi * (psi *
    psi) * the * (l_a_tmp * l_a_tmp) / 40.0) - 7.0 * (phi * phi) * (psi * psi) *
    the * (m_a_tmp * m_a_tmp) / 40.0) - d79 * (d75 * (d4 * d15 - d11 * d15) *
    h_a_tmp / 20.0 + d75 * (d4 * d17 - d11 * d17) * g_a_tmp / 20.0) / 2.0) + d97
    * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) - d6 * (a_tmp * a_tmp)) - d3 *
    (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 20.0)
    - d115) - d155) + d156 / 20.0) + d157 / 20.0) + phi * phi * (psi * psi) *
    the * (a_tmp * a_tmp) / 8.0) - d101 * (((phi * psi * sin(theta2) * (d2 * d0 *
    cos(theta1) * cos(theta2) * sin(theta1) - d0 * d5 * cos(theta1) * cos(theta2)
    * sin(theta1)) / 20.0 - phi * psi * cos(theta2) * (d2 * d0 * cos(theta1) *
    sin(theta1) * sin(theta2) - d0 * d5 * cos(theta1) * sin(theta1) * sin(theta2))
    / 20.0) - phi * psi * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * cos(theta2) - phi * phi * (the * the) * cos(theta1) * cos
    (theta2)) / 20.0) + phi * psi * cos(theta2) * sin(theta1) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta2) - phi * phi * (the * the) * cos
    (theta1) * sin(theta2)) / 20.0) / 2.0) - 7.0 * (phi * phi) * (psi * psi) *
    j_a_tmp * m_a_tmp / 20.0) - phi * phi * (psi * psi) * the * (b_a_tmp *
    b_a_tmp) / 8.0) + d6 * g_a_tmp * k_a_tmp / 20.0) + d6 * h_a_tmp * l_a_tmp /
    20.0) - d30 / 4.0) - d45 * (d109 - 0.1) / 2.0) - psi * the * (phi * phi *
    (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2)) - phi * phi * (the * the) * cos(theta1) * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2))) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) / 20.0) - psi * the *
    (phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * cos(theta3) - sin
    (theta2) * sin(theta3)) - phi * phi * (the * the) * cos(theta1) * (cos
    (theta2) * cos(theta3) - sin(theta2) * sin(theta3))) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) / 20.0) -
    d54) + d158 / 20.0) + d159 / 20.0) - d131 * a_tmp * a_tmp_tmp / 800.0) + d55)
    + d101 * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the)
    * (b_a_tmp * b_a_tmp)) / 20.0) - d117 * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) - d164 *
    (d109 - 0.1) / 40.0) + phi * phi * (psi * psi) * the * (b_a_tmp * b_a_tmp) *
    (c_a_tmp * c_a_tmp) / 40.0) + d98 * (((phi * phi * (psi * psi) * (a_tmp *
    a_tmp) * c_a_tmp - psi * psi * (the * the) * (a_tmp * a_tmp) * c_a_tmp) -
    phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) * c_a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) * c_a_tmp) / 20.0) - d151) + d30 * (c_a_tmp *
    c_a_tmp) / 20.0) + d161 / 20.0) + d165) - d127 * (d109 - 0.1)) + d126 * d63 *
    (d109 - 0.1)) - d162) - d152) - d166) - d167) - d154) + d153 * (d109 - 0.1) /
    40.0) + d168) - d169 * (d109 - 0.1) / 2.0) + d170 * (d109 - 0.1) / 2.0) -
    d171 * d63 / 40.0) - d127 * (d174 + d108) / 2.0) + d126 * d63 * ((d106 -
    d173) + d107 / 10.0) / 2.0) - d120 * (d10 * d175 + d128 * d175) * ((d105 /
    10.0 + d107 / 10.0) - 0.1) / 40.0) - d118 * C_32_tmp * (j_a_tmp_tmp +
    k_a_tmp_tmp) * d17 / 40.0) - d118 * rt_powd_snf(the, 3.0) * (m_a_tmp_tmp *
    sin(theta3) - l_a_tmp_tmp * sin(theta1)) * d15 / 40.0) + d96 * psi *
    rt_powd_snf(the, 3.0) * (g_a_tmp_tmp_tmp * sin(theta3) / 20.0 -
    i_a_tmp_tmp_tmp * sin(theta1) / 20.0) * d175 / 40.0) + 3.0 * phi * psi * d5 *
    a_tmp * (d109 - 0.1) / 400.0) + phi * psi * cos(theta2) * sin(theta1) * (d3 *
    cos(theta1) * cos(theta2) * sin(theta1) - d6 * cos(theta1) * cos(theta2) *
    sin(theta1)) / 40.0) - d75 * a_tmp_tmp * b_a_tmp * (d2 * d0 * cos(theta1) *
    cos(theta2) * sin(theta1) - d0 * d5 * cos(theta1) * cos(theta2) * sin(theta1))
    / 20.0) + sb_C_32_tmp) + d99 * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) *
    a_tmp_tmp - psi * psi * (the * the) * (a_tmp * a_tmp) * a_tmp_tmp) - d3 *
    a_tmp_tmp * (b_a_tmp * b_a_tmp)) + d6 * a_tmp_tmp * (b_a_tmp * b_a_tmp)) /
    20.0) - db_C_32_tmp) + eb_C_32_tmp) - lb_C_32_tmp / 20.0) - psi * the * cos
    (theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2)
    - phi * phi * (the * the) * cos(theta1) * cos(theta2)) / 20.0) - mb_C_32_tmp)
    + psi * the * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta2) - phi * phi * (the * the) * cos(theta1) * sin(theta2))
    / 20.0) - q_C_32_tmp) - b_C_32_tmp * (a_tmp * a_tmp) * (a_tmp_tmp *
    a_tmp_tmp) / 16000.0) - phi * phi * (psi * psi) * the * (a_tmp * a_tmp) *
    (c_a_tmp * c_a_tmp) / 40.0) + b_C_32_tmp * (a_tmp_tmp * a_tmp_tmp) *
    (b_a_tmp * b_a_tmp) / 16000.0) - r_C_32_tmp * a_tmp * (a_tmp_tmp * a_tmp_tmp)
    * b_a_tmp / 8000.0) + gb_C_32_tmp) + s_C_32_tmp) + d7 * (a_tmp_tmp *
    a_tmp_tmp) * b_a_tmp / 20.0) - hb_C_32_tmp) + m_C_32_tmp) + ib_C_32_tmp) +
                     f_C_32_tmp) + nb_C_32_tmp / 20.0) - u_C_32_tmp) -
                  v_C_32_tmp) - jb_C_32_tmp) - i_C_32_tmp) - ob_C_32_tmp) +
              h_C_32_tmp) + pb_C_32_tmp) + qb_C_32_tmp) + tb_C_32_tmp) +
          x_C_32_tmp) + rb_C_32_tmp) - y_C_32_tmp) - l_C_32_tmp) + kb_C_32_tmp)
     + bb_C_32_tmp) + cb_C_32_tmp;
  d44 = d88 * the;
  d51 = rt_powd_snf(phi, 3.0);
  d53 = d51 * d0;
  d64 = d53 * a_tmp;
  d106 = d64 * b_a_tmp;
  d117 = d106 / 5.0;
  d120 = d51 * psi;
  d126 = d120 * d5;
  d127 = the * a_tmp;
  d128 = 3.0 * the * b_a_tmp;
  C_32_tmp = d52 * d91 / 20.0 + d50 * d95 / 20.0;
  d173 = d129 * d5;
  d176 = rt_powd_snf(phi, 4.0);
  d177 = d65 * b_a_tmp;
  d178 = 7.0 * d51;
  d179 = d178 * psi * the;
  d180 = phi * C_32_tmp;
  d58 = d128 * d58 / 2.0;
  d128 = d128 * d48 / 2.0;
  d181 = d79 * (((psi * the * (cos(theta1) * sin(theta2) * sin(theta3) - cos
    (theta1) * cos(theta2) * cos(theta3)) * (phi * (the * the) * sin(theta1) *
    (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - phi * (psi * psi) *
    (the * the) * sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2))) / 20.0 + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2)) * (phi * (the * the) * sin(theta1) *
    (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) - phi * (psi * psi) *
    (the * the) * sin(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3))) / 20.0) - d145 / 20.0) - d146 / 20.0) / 2.0;
  d182 = d101 * (phi * psi * sin(theta1) * sin(theta2) * (phi * (the * the) *
    cos(theta2) * sin(theta1) - phi * (psi * psi) * (the * the) * cos(theta2) *
    sin(theta1)) / 20.0 - phi * psi * cos(theta2) * sin(theta1) * (phi * (the *
    the) * sin(theta1) * sin(theta2) - phi * (psi * psi) * (the * the) * sin
    (theta1) * sin(theta2)) / 20.0) / 2.0;
  d101 = d101 * C_32_tmp / 2.0;
  d79 = d79 * (((d147 / 20.0 + d148 / 20.0) - d150 / 20.0) - o_C_32_tmp / 20.0) /
    2.0;
  d148 = d100 * b_a_tmp * (d86 / 20.0 + d118 * d5 / 20.0);
  d150 = 7.0 * d176;
  b_C_32_tmp = d86 * a_tmp;
  o_C_32_tmp = r_C_32_tmp * the;
  C_32_tmp = b_C_32_tmp * d63;
  ub_C_32_tmp = 21.0 * d51;
  vb_C_32_tmp = ub_C_32_tmp * psi * the;
  wb_C_32_tmp = g_C_32_tmp_tmp * a_tmp;
  xb_C_32_tmp = d89 * a_tmp;
  yb_C_32_tmp = xb_C_32_tmp * d63;
  ac_C_32_tmp = n_C_32_tmp_tmp * c_a_tmp;
  bc_C_32_tmp = t_C_32_tmp * a_tmp_tmp * b_a_tmp;
  g_C_32_tmp_tmp = 3.0 * d51 * psi * the * b_a_tmp;
  cc_C_32_tmp = g_C_32_tmp_tmp * (d109 - 0.1) / 400.0;
  C_32_tmp_tmp_tmp = d178 * d0 * d5;
  n_C_32_tmp_tmp = C_32_tmp_tmp_tmp * m_a_tmp;
  dc_C_32_tmp = n_C_32_tmp_tmp * d63 / 40.0;
  y_C_32_tmp_tmp = 63.0 * d176;
  ab_C_32_tmp_tmp = y_C_32_tmp_tmp * psi * d5;
  ec_C_32_tmp = ab_C_32_tmp_tmp * a_tmp * a_tmp_tmp * c_a_tmp / 16000.0;
  bb_C_32_tmp_tmp = ub_C_32_tmp * d0 * d5 * a_tmp_tmp * b_a_tmp;
  ub_C_32_tmp = bb_C_32_tmp_tmp * d63 / 800.0;
  cb_C_32_tmp_tmp = d179 * b_a_tmp * d175;
  fc_C_32_tmp = cb_C_32_tmp_tmp * (d109 - 0.1) / 40.0;
  db_C_32_tmp_tmp = vb_C_32_tmp * a_tmp_tmp * b_a_tmp;
  gc_C_32_tmp = db_C_32_tmp_tmp * d63 / 800.0;
  eb_C_32_tmp_tmp = vb_C_32_tmp * b_a_tmp * c_a_tmp;
  vb_C_32_tmp = eb_C_32_tmp_tmp * (d109 - 0.1) / 800.0;
  hc_C_32_tmp = bc_C_32_tmp * d63 / 800.0;
  ic_C_32_tmp = b_C_32_tmp * d125 * (d109 - 0.1) / 2.0;
  jc_C_32_tmp = C_32_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin
    (theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0;
  t_C_32_tmp = t_C_32_tmp * b_a_tmp * c_a_tmp * ((3.0 * cos(theta2) * sin(theta3)
    / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0)
    / 800.0;
  fb_C_32_tmp_tmp = wb_C_32_tmp * w_C_32_tmp;
  kc_C_32_tmp = fb_C_32_tmp_tmp * (d109 - 0.1);
  gb_C_32_tmp_tmp = xb_C_32_tmp * d125;
  xb_C_32_tmp = gb_C_32_tmp_tmp * (d109 - 0.1) / 2.0;
  lc_C_32_tmp = ab_C_32_tmp * (d109 - 0.1) / 800.0;
  mc_C_32_tmp = yb_C_32_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0;
  nc_C_32_tmp = r_C_32_tmp * d5;
  oc_C_32_tmp = ac_C_32_tmp * d63 / 800.0;
  pc_C_32_tmp = h_C_32_tmp_tmp * d175 * ((3.0 * cos(theta2) * sin(theta3) / 10.0
    - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  qc_C_32_tmp = 7.0 * (phi * phi) * psi * (the * the) * (3.0 * sin(theta1) * sin
    (theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1)
    / 20.0) * d125 / 40.0;
  bc_C_32_tmp = bc_C_32_tmp * d125 / 800.0;
  rc_C_32_tmp = d173 * a_tmp * e_C_32_tmp / 200.0;
  wb_C_32_tmp = wb_C_32_tmp * e_C_32_tmp * d175 / 20.0;
  ab_C_32_tmp = ab_C_32_tmp * d139 / 400.0;
  ac_C_32_tmp = ac_C_32_tmp * e_C_32_tmp / 400.0;
  C_32[3] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((phi * ((d75 * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + d75 *
    g_a_tmp * (d18 - d19) / 20.0) + d75 * (d_a_tmp_tmp - e_a_tmp_tmp) * (d12 *
    h_a_tmp - d4 * l_a_tmp) / 20.0) / 2.0 - phi * (((((d36 * (phi * phi * (psi *
    psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    10.0 - d52 * d140 / 20.0) - d50 * d141 / 20.0) + d1 * g_a_tmp * (d18 - d19) /
    20.0) + d1 * h_a_tmp * (d12 * h_a_tmp - d4 * l_a_tmp) / 20.0) + phi * psi *
    cos(theta1) * (d81 * sin(theta1) - d83 * sin(theta1)) / 10.0)) + phi *
    (((((d44 * (a_tmp * a_tmp) / 10.0 - d44 * (b_a_tmp * b_a_tmp) / 10.0) - d44 *
    (g_a_tmp * g_a_tmp) / 20.0) - d88 * the * (h_a_tmp * h_a_tmp) / 20.0) + d88 *
    the * (k_a_tmp * k_a_tmp) / 20.0) + phi * d0 * the * (l_a_tmp * l_a_tmp) /
    20.0) / 2.0) - the * ((psi * the * sin(theta1) * (d3 * (a_tmp * a_tmp) + d6 *
    (b_a_tmp * b_a_tmp)) / 10.0 + psi * the * (b_a_tmp_tmp + c_a_tmp_tmp) * (d12
    * (b_a_tmp_tmp + c_a_tmp_tmp) - d4 * (j_a_tmp_tmp + k_a_tmp_tmp)) / 20.0) +
    psi * the * (b_a_tmp_tmp_tmp * sin(theta3) - e_a_tmp * cos(theta3)) * (d6 *
    sin(theta1) * (d_a_tmp_tmp - e_a_tmp_tmp) - d3 * cos(theta1) * (n_a_tmp_tmp
    - o_a_tmp_tmp)) / 20.0) / 2.0) + phi * (((((d88 * the * (a_tmp * a_tmp) /
    10.0 - d88 * the * (b_a_tmp * b_a_tmp) / 10.0) - d44 * (a_tmp * a_tmp) *
    (a_tmp_tmp * a_tmp_tmp) / 20.0) - d88 * the * (a_tmp * a_tmp) * (c_a_tmp *
    c_a_tmp) / 20.0) + d88 * the * (a_tmp_tmp * a_tmp_tmp) * (b_a_tmp * b_a_tmp)
    / 20.0) + phi * d0 * the * (b_a_tmp * b_a_tmp) * (c_a_tmp * c_a_tmp) / 20.0)
    / 2.0) + phi * (((((d1 * b_a_tmp * sin(theta2) * (((phi * phi * (psi * psi) *
    (a_tmp * a_tmp) * sin(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) *
    sin(theta2)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) * c_a_tmp) +
    psi * psi * (the * the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0 - phi *
    psi * cos(theta1) * (d81 * sin(theta1) - d83 * sin(theta1)) / 10.0) - phi *
    psi * sin(theta1) * (d2 * d0 * (a_tmp * a_tmp) + d0 * d5 * (b_a_tmp *
    b_a_tmp)) / 10.0) + phi * psi * cos(theta1) * a_tmp_tmp * (d4 * cos(theta2) *
    sin(theta1) - d7 * cos(theta2) * sin(theta1)) / 20.0) + d66 * c_a_tmp * (d3 *
    a_tmp * sin(theta1) * sin(theta2) - d6 * a_tmp * sin(theta1) * sin(theta2)) /
    20.0) + d46 * (((d3 * (a_tmp * a_tmp) * cos(theta2) - d6 * (a_tmp * a_tmp) *
    cos(theta2)) - d2 * d0 * cos(theta2) * (b_a_tmp * b_a_tmp)) + d0 * d5 * cos
    (theta2) * (b_a_tmp * b_a_tmp)) / 20.0)) + phi * (psi * the * sin(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0 - d97 * (d2 * d0 * cos(theta1) * sin(theta1) -
    d0 * d5 * cos(theta1) * sin(theta1)) / 20.0) / 2.0) - the * (psi * the * sin
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the * cos(theta1) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1)) / 20.0) / 2.0) + phi * (d47 * (phi * (the * the) *
    cos(theta2) * sin(theta1) - phi * (psi * psi) * (the * the) * cos(theta2) *
    sin(theta1)) / 20.0 - d46 * (phi * (the * the) * sin(theta1) * sin(theta2) -
    phi * (psi * psi) * (the * the) * sin(theta1) * sin(theta2)) / 20.0)) - phi *
    ((d53 * g_a_tmp * k_a_tmp / 10.0 + d53 * h_a_tmp * l_a_tmp / 10.0) - d117) /
    2.0) + phi * (((phi * psi * sin(theta2) * (d2 * d0 * cos(theta1) * cos
    (theta2) * sin(theta1) - d0 * d5 * cos(theta1) * cos(theta2) * sin(theta1)) /
    20.0 - phi * psi * cos(theta2) * (d2 * d0 * cos(theta1) * sin(theta1) * sin
    (theta2) - d0 * d5 * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) - phi *
    psi * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    cos(theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2)) / 20.0) +
    phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta2) - phi * phi * (the * the) * cos(theta1) * sin(theta2))
    / 20.0) / 2.0) - phi * ((d99 * d28 / 20.0 - psi * the * sin(theta1) * (phi *
    phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp)) / 10.0) + d98 * d33 / 20.0) / 2.0) + the * ((psi * the * cos
    (theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2)
    * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin
    (theta1)) / 20.0 - psi * the * sin(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) +
    psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) * sin(theta2)) / 20.0) / 2.0) + d180) + d67) + d69) - phi *
    (((phi * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) +
    psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - d36 * (((phi * phi *
    (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp * a_tmp)) -
    phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 20.0) - d66 * d37 / 20.0) + phi * psi * cos(theta1) *
    (2.0 * (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi *
    psi) * (the * the) * cos(theta1) * sin(theta1)) / 10.0)) + d70) + phi * (phi
    * (psi * psi) * the * (a_tmp * a_tmp) / 20.0 - phi * (psi * psi) * the *
    (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - phi * ((d106 * (c_a_tmp * c_a_tmp) /
    10.0 - d117) + d64 * (a_tmp_tmp * a_tmp_tmp) * b_a_tmp / 10.0) / 2.0) + phi *
    (d126 * g_a_tmp * d17 / 20.0 + d126 * h_a_tmp * d15 / 20.0) / 2.0) - d21 *
    ((((the * b_a_tmp * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + the * g_a_tmp * d20 / 20.0) +
    the * h_a_tmp * d24 / 20.0) + d21 * d91 * d15 / 20.0) + d21 * d95 * d17 /
    20.0) / 2.0) + d127 * (d109 - 0.1) / 2.0) - d21 * ((d21 * (d87 - d90) / 20.0
    - d127 * d37 / 20.0) + the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp
    * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) +
    d58) + d128) - d21 * ((((the * sin(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 +
    d38 * n_C_32_tmp / 20.0) - d127 * a_tmp_tmp * d28 / 20.0) + d41 * d144 /
    20.0) - d127 * c_a_tmp * d33 / 20.0) / 2.0) + d181) + psi * the * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) * (phi * (the * the) * sin(theta1) * (cos(theta2) * sin(theta3) +
    cos(theta3) * sin(theta2)) - phi * (psi * psi) * (the * the) * sin(theta1) *
    (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))) / 40.0) + psi * the
    * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) * (phi * (the * the) * sin(theta1) * (cos(theta2) * cos(theta3) -
    sin(theta2) * sin(theta3)) - phi * (psi * psi) * (the * the) * sin(theta1) *
    (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) / 40.0) + 7.0 *
    (phi * phi) * (psi * psi) * the * (j_a_tmp * j_a_tmp) / 40.0) + k_C_32_tmp *
    m_a_tmp / 40.0) - 7.0 * (phi * phi) * (psi * psi) * the * (m_a_tmp * m_a_tmp)
    / 40.0) - d116 * d63 / 2.0) - d182) + d176 * d0 * a_tmp * b_a_tmp / 20.0) -
    d101) - d79) - d151) - d177 * (3.0 * phi * d5 * c_a_tmp / 20.0 + d173 *
    c_a_tmp / 20.0) * (d109 - 0.1) / 40.0) + d179 * m_a_tmp * d63 / 40.0) - d152)
    - d145 / 40.0) - d146 / 40.0) + d153 * (d109 - 0.1) / 40.0) - d148 * (d109 -
    0.1) / 20.0) + d116 * cos(theta2) * (d31 - d32) / 40.0) - d173 * b_a_tmp *
    ((d105 / 10.0 - d172 / 10.0) + d104 * c_a_tmp / 10.0) / 400.0) - d110 * d5 *
    (f_a_tmp_tmp / 20.0 - g_a_tmp_tmp / 20.0) * (cos(theta1) * (d133 + d136) +
    sin(theta1) * (d137 + d138)) / 20.0) - d110 * d5 * (d_a_tmp_tmp_tmp *
    d_a_tmp / 20.0 + d134 * c_a_tmp / 20.0) * (cos(theta1) * (f_a_tmp_tmp / 10.0
    - g_a_tmp_tmp / 10.0) + sin(theta1) * (p_a_tmp_tmp / 10.0 - q_a_tmp_tmp /
    10.0)) / 20.0) - d150 * psi * d5 * (c_a_tmp_tmp_tmp * sin(theta3) / 20.0 -
    d_a_tmp_tmp_tmp * cos(theta3) / 20.0) * d175 / 40.0) - 21.0 * phi * psi *
    the * a_tmp_tmp * b_a_tmp / 800.0) - d177 * (phi * d5 * (h_a_tmp_tmp_tmp *
    d_a_tmp / 20.0 + d104 * c_a_tmp / 20.0) + d118 * d5 * (h_a_tmp_tmp_tmp *
    d_a_tmp / 20.0 + d104 * c_a_tmp / 20.0)) * (d109 - 0.1) / 40.0) - 7.0 * d2 *
    psi * (the * the) * (3.0 * b_a_tmp * sin(theta2) * sin(theta3) / 20.0 - 3.0 *
    a_tmp_tmp * cos(theta3) * sin(theta1) / 20.0) * (cos(theta1) * (i_a_tmp *
    sin(theta2) * sin(theta3) / 10.0 - i_a_tmp * cos(theta2) * cos(theta3) /
    10.0) + sin(theta1) * (a_tmp_tmp_tmp_tmp * sin(theta2) * sin(theta3) / 10.0
    - h_a_tmp_tmp_tmp * cos(theta3) * sin(theta1) / 10.0)) / 40.0) + p_C_32_tmp *
    m_a_tmp / 20.0) + cc_C_32_tmp) - qc_C_32_tmp) - C_32_tmp * (d109 - 0.1)) -
    dc_C_32_tmp) - q_C_32_tmp) - ic_C_32_tmp) + o_C_32_tmp * (a_tmp * a_tmp) *
    (a_tmp_tmp * a_tmp_tmp) / 16000.0) - rc_C_32_tmp) - o_C_32_tmp * (a_tmp_tmp *
    a_tmp_tmp) * (b_a_tmp * b_a_tmp) / 16000.0) - jc_C_32_tmp) + s_C_32_tmp) +
    ec_C_32_tmp) - t_C_32_tmp) + ub_C_32_tmp) + fc_C_32_tmp) - u_C_32_tmp) -
                       v_C_32_tmp) - gc_C_32_tmp) + vb_C_32_tmp) + yb_C_32_tmp *
                    (d109 - 0.1)) - wb_C_32_tmp) - kc_C_32_tmp / 20.0) +
                 x_C_32_tmp) - y_C_32_tmp) + xb_C_32_tmp) + ab_C_32_tmp) -
             lc_C_32_tmp) + mc_C_32_tmp) + nc_C_32_tmp * a_tmp * (a_tmp_tmp *
            a_tmp_tmp) * b_a_tmp / 8000.0) - oc_C_32_tmp) + hc_C_32_tmp) -
        ac_C_32_tmp) - pc_C_32_tmp) + bc_C_32_tmp) + bb_C_32_tmp) + cb_C_32_tmp;
  d24 = d120 * the;
  d31 = d1 * d5;
  d32 = d21 * (d56 * d141 / 20.0 + d57 * d140 / 20.0);
  n_C_32_tmp = e_C_32_tmp_tmp * b_a_tmp;
  q_C_32_tmp = e_C_32_tmp_tmp * a_tmp;
  u_C_32_tmp = rt_powd_snf(the, 4.0);
  v_C_32_tmp = 7.0 * (phi * phi) * (psi * psi) * u_C_32_tmp * j_a_tmp;
  x_C_32_tmp = d150 * d0 * d5;
  e_C_32_tmp_tmp = n_C_32_tmp * (3.0 * cos(theta1) * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 20.0);
  y_C_32_tmp = e_C_32_tmp_tmp * (d109 - 0.1);
  h_C_32_tmp_tmp = q_C_32_tmp * d113;
  bb_C_32_tmp = h_C_32_tmp_tmp * (d109 - 0.1);
  u_C_32_tmp *= r_C_32_tmp;
  cb_C_32_tmp = y_C_32_tmp_tmp * d0 * d5;
  n_C_32_tmp = n_C_32_tmp * j_a_tmp * e_C_32_tmp / 20.0;
  e_C_32_tmp = q_C_32_tmp * m_a_tmp * e_C_32_tmp / 20.0;
  C_32[6] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((phi
    * ((psi * the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) +
    psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + psi * the * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
    phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + psi * the * (cos(theta1)
    * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi)
    * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) / 20.0) / 2.0 - the * ((psi * the * sin(theta1) *
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
    (theta1))) / 20.0) / 2.0) + phi * (psi * the * sin(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0 - psi * the * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0) /
    2.0) - the * (psi * the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the *
    cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0) / 2.0) - phi * ((psi *
    the * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos
    (theta2) * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (phi * phi * (psi
    * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    10.0) + psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) + the * ((psi * the *
    cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
    * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) +
    psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi * the * ((((the * sin
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 + the * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0) + the * (cos(theta1) * sin(theta2) * sin(theta3) - cos
    (theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) + phi * the * (phi * (the * the) * sin(theta1) * (cos
    (theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - phi * (psi * psi) *
    (the * the) * sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2))) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) / 20.0)
    + phi * the * (phi * (the * the) * sin(theta1) * (cos(theta2) * cos(theta3)
    - sin(theta2) * sin(theta3)) - phi * (psi * psi) * (the * the) * sin(theta1)
    * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) * (cos(theta2) *
    cos(theta3) - sin(theta2) * sin(theta3)) / 20.0) / 2.0) - phi * the * ((phi *
    the * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) -
    psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0 - phi * the *
    (phi * phi * (psi * psi) * cos(theta1) - phi * phi * (the * the) * cos
    (theta1)) / 20.0) + phi * the * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) /
    2.0) + phi * the * ((((phi * the * (phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - phi * phi * (the *
    the) * cos(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)))
    * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) / 20.0 + phi * the
    * (phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * cos(theta3) - sin
    (theta2) * sin(theta3)) - phi * phi * (the * the) * cos(theta1) * (cos
    (theta2) * cos(theta3) - sin(theta2) * sin(theta3))) * (cos(theta2) * cos
    (theta3) - sin(theta2) * sin(theta3)) / 20.0) + phi * the * (cos(theta2) *
    sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi *
    psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos
    (theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) + phi * the * (sin(theta1) * sin(theta2) *
    sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) *
    cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) - phi * the * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) /
    2.0) - d32) - phi * the * ((phi * the * (phi * (the * the) * sin(theta1) -
    phi * (psi * psi) * (the * the) * sin(theta1)) / 20.0 - the * cos(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 20.0) + the * sin(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0) / 2.0) + d21 * (d24 * g_a_tmp * d17 / 20.0 + d24 * h_a_tmp * d15 /
    20.0) / 2.0) - phi * the * (phi * psi * sin(theta1) * (phi * phi * (psi *
    psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) *
    sin(theta1)) / 20.0 + phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) /
    2.0) - d21 * (d38 * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin
    (theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 20.0 - d41 * (((phi * phi * (psi
    * psi) * (a_tmp * a_tmp) * cos(theta2) - psi * psi * (the * the) * (a_tmp *
    a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos(theta2) * (b_a_tmp *
    b_a_tmp)) + psi * psi * (the * the) * cos(theta2) * (b_a_tmp * b_a_tmp)) /
    20.0)) + phi * the * ((phi * psi * (cos(theta2) * sin(theta1) * sin(theta3)
    + cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) /
    2.0) - d21 * (d31 * k_a_tmp * d17 / 20.0 + d31 * l_a_tmp * d15 / 20.0) / 2.0)
    - phi * the * ((((phi * the * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 -
    phi * the * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2)) / 20.0) -
    phi * the * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin
    (theta2) - phi * phi * (the * the) * cos(theta1) * sin(theta2)) / 20.0) +
    phi * the * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1)
    * cos(theta2) * sin(theta1)) / 20.0) + phi * the * sin(theta1) * sin(theta2)
    * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi *
    psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0)
    - phi * the * ((((the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + phi * the *
    cos(theta2) * (phi * (the * the) * cos(theta2) * sin(theta1) - phi * (psi *
    psi) * (the * the) * cos(theta2) * sin(theta1)) / 20.0) - the * cos(theta1) *
    cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin
    (theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
    / 20.0) + phi * the * sin(theta2) * (phi * (the * the) * sin(theta1) * sin
    (theta2) - phi * (psi * psi) * (the * the) * sin(theta1) * sin(theta2)) /
    20.0) - the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi * the * ((phi * psi * cos
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 + phi * psi * cos(theta2) * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + phi *
    psi * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1) * sin(theta2)) / 20.0) / 2.0) + d49 / 40.0) - d111 * j_a_tmp / 40.0)
    - d_C_32_tmp * (r_a_tmp_tmp - s_a_tmp_tmp) / 40.0) - d1 * k_a_tmp * (d18 -
    d19) / 40.0) - d1 * (n_a_tmp_tmp - o_a_tmp_tmp) * (d12 * h_a_tmp - d4 *
    l_a_tmp) / 40.0) - d97 * ((h_a_tmp_tmp_tmp * d_a_tmp / 10.0 + d104 * c_a_tmp
    / 10.0) - 0.1) / 2.0) + d36 * ((h_a_tmp_tmp_tmp * sin(theta3) / 10.0 + d104 *
    sin(theta2) / 10.0) - 0.1) / 2.0) + 3.0 * phi * psi * cos(theta1) * (d2 * d0
    * (a_tmp * a_tmp) + d0 * d5 * (b_a_tmp * b_a_tmp)) / 20.0) - 7.0 * psi * the
    * cos(theta1) * (d103 * d5 * sin(theta2) / 20.0 + d129 * the * sin(theta2) /
    20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin
    (theta2) / 10.0) - 0.1) / 40.0) - 7.0 * phi * psi * sin(theta1) * (3.0 * phi
    * d5 * sin(theta2) / 20.0 + d129 * d5 * sin(theta2) / 20.0) * ((3.0 * cos
    (theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) -
    0.1) / 40.0) + 7.0 * rt_powd_snf(phi, 3.0) * psi * the * (3.0 * b_a_tmp *
    sin(theta2) * sin(theta3) / 20.0 - 3.0 * a_tmp_tmp * cos(theta3) * sin
    (theta1) / 20.0) * (cos(theta1) * (i_a_tmp * sin(theta2) * sin(theta3) /
    10.0 - i_a_tmp * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) *
    (a_tmp_tmp_tmp_tmp * sin(theta2) * sin(theta3) / 10.0 - h_a_tmp_tmp_tmp *
    cos(theta3) * sin(theta1) / 10.0)) / 40.0) - d154) - 3.0 * phi * psi * sin
    (theta1) * (phi * (the * the) / 20.0 + phi * phi * psi * (the * the) / 20.0)
    * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2)
    / 10.0) - 0.1) / 20.0) - 7.0 * (phi * phi) * psi * rt_powd_snf(the, 3.0) *
    (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) *
    cos(theta2) * cos(theta3) / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * sin
    (theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3)
    / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) /
    10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0) - 7.0 *
    rt_powd_snf(phi, 4.0) * psi * (the * the) * (3.0 * cos(theta1) * sin(theta2)
    * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0)
    * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) /
    20.0) / 40.0) - 7.0 * psi * the * cos(theta1) * (phi * phi * (the * the) *
    (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) /
    20.0) + phi * phi * psi * the * (3.0 * cos(theta2) * sin(theta3) / 20.0 +
    3.0 * cos(theta3) * sin(theta2) / 20.0)) * ((3.0 * cos(theta2) * sin(theta3)
    / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 40.0) - 7.0 * phi *
    psi * sin(theta1) * (phi * (the * the) * (3.0 * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) + phi * phi * psi * (the *
    the) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin
    (theta2) / 20.0)) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos
    (theta3) * sin(theta2) / 10.0) - 0.1) / 40.0) - 7.0 * (phi * phi) * psi *
    (the * the) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 *
    cos(theta2) * cos(theta3) * sin(theta1) / 20.0) * (cos(theta1) * (3.0 * cos
    (theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2)
    * cos(theta3) / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin
    (theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) /
    40.0) + 7.0 * (phi * phi) * psi * rt_powd_snf(the, 3.0) * (3.0 * sin(theta1)
    * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin
    (theta1) / 20.0) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
    (theta3) * sin(theta2) / 20.0) / 40.0) + 3.0 * phi * psi * (the * the) * cos
    (theta1) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) *
    sin(theta2) / 10.0) - 0.1) / 400.0) + v_C_32_tmp * m_a_tmp / 20.0) -
    x_C_32_tmp * j_a_tmp * m_a_tmp / 20.0) + phi * psi * cos(theta2) * sin
    (theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1)
    - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 40.0)
    + cc_C_32_tmp) - db_C_32_tmp) + eb_C_32_tmp) + fb_C_32_tmp / 800.0) +
    b_C_32_tmp_tmp * a_tmp_tmp * b_a_tmp / 800.0) - dc_C_32_tmp) + gb_C_32_tmp)
    + ec_C_32_tmp) - hb_C_32_tmp) + m_C_32_tmp) + ib_C_32_tmp) + ub_C_32_tmp) +
                        fc_C_32_tmp) - jb_C_32_tmp) - gc_C_32_tmp) + h_C_32_tmp)
                    + vb_C_32_tmp) + n_C_32_tmp) + y_C_32_tmp / 20.0) -
                 e_C_32_tmp) - bb_C_32_tmp / 20.0) + kb_C_32_tmp) + u_C_32_tmp *
              a_tmp * (a_tmp_tmp * a_tmp_tmp) * b_a_tmp / 8000.0) - cb_C_32_tmp *
             a_tmp * (a_tmp_tmp * a_tmp_tmp) * b_a_tmp / 8000.0) + hc_C_32_tmp;
  d24 = 7.0 * phi * the * w_C_32_tmp / 40.0;
  d31 = d96 * d5;
  d38 = d157 / 40.0;
  d41 = 7.0 * (phi * phi) * (psi * psi) * d113 * m_a_tmp / 20.0;
  d44 = d158 / 40.0;
  d49 = d159 / 40.0;
  d51 = d161 / 40.0;
  d53 = 7.0 * (phi * phi) * (psi * psi) * the * j_a_tmp * d113 / 40.0;
  d56 = 7.0 * (phi * phi) * (psi * psi) * the * (3.0 * cos(theta1) * cos(theta2)
    * sin(theta3) / 20.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 20.0)
    * m_a_tmp / 40.0;
  h_C_32_tmp = r_C_32_tmp_tmp * a_tmp;
  m_C_32_tmp = i_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  q_C_32_tmp = j_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  db_C_32_tmp = l_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  fb_C_32_tmp = m_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  gb_C_32_tmp = o_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 800.0;
  hb_C_32_tmp = p_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 800.0;
  o_C_32_tmp = o_C_32_tmp * a_tmp * a_tmp_tmp * b_a_tmp * c_a_tmp / 8000.0;
  ib_C_32_tmp = d171 * d125 / 40.0;
  jb_C_32_tmp = 7.0 * psi * the * cos(theta1) * (phi * phi * (the * the) * (3.0 *
    cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) +
    phi * phi * psi * the * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
    (theta3) * sin(theta2) / 20.0)) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 -
    3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  kb_C_32_tmp = 3.0 * phi * psi * (the * the) * cos(theta1) * ((3.0 * cos(theta2)
    * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin
    (theta2) / 10.0) / 400.0;
  C_32_tmp = p_C_32_tmp * d125 / 40.0;
  ub_C_32_tmp = s_C_32_tmp_tmp * d125 / 800.0;
  vb_C_32_tmp = t_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  yb_C_32_tmp = u_C_32_tmp_tmp * d125 / 800.0;
  cc_C_32_tmp = v_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 800.0;
  dc_C_32_tmp = w_C_32_tmp_tmp * d125 / 800.0;
  ec_C_32_tmp = psi * the * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi)
    * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos
    (theta1) * cos(theta2) * sin(theta1)) / 40.0;
  lb_C_32_tmp /= 40.0;
  nb_C_32_tmp /= 40.0;
  fc_C_32_tmp = x_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  C_32[1] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((d72 + d67) + d68 / 2.0) + phi * d48 / 2.0) - d21 *
    ((phi * the * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin
    (theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0 - phi
    * the * (phi * phi * (psi * psi) * cos(theta1) - phi * phi * (the * the) *
    cos(theta1)) / 20.0) + phi * the * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) /
    2.0) + phi * psi * (d122 + d124) / 2.0) + phi * the * ((d34 + d35 / 20.0) -
    phi * the * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + 21.0 * phi * the *
    a_tmp_tmp / 800.0) - phi * the * (d36 * (d29 - d30) / 20.0 + d66 * (phi *
    phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp)) / 10.0) / 2.0) + d65 * (h_a_tmp_tmp_tmp * sin(theta1) * sin(theta3)
    / 20.0 + d104 * sin(theta1) * sin(theta2) / 20.0) / 40.0) + phi * the * ((d1
    * k_a_tmp * (d18 - d19) / 20.0 + d1 * l_a_tmp * (d22 - d23) / 20.0) - d1 *
    cos(theta1) * (d3 * (a_tmp * a_tmp) + d6 * (b_a_tmp * b_a_tmp)) / 10.0) /
    2.0) + d24) - phi * the * ((((d21 * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 -
    d21 * cos(theta2) * (d8 - d39) / 20.0) - d21 * sin(theta2) * (d4 * sin
    (theta2) - d11 * sin(theta2)) / 20.0) + d21 * cos(theta2) * sin(theta1) *
    (d8 * sin(theta1) - d25 * sin(theta1)) / 20.0) + d21 * sin(theta1) * sin
    (theta2) * (d4 * sin(theta1) * sin(theta2) - d7 * sin(theta1) * sin(theta2))
    / 20.0) / 2.0) - phi * the * ((phi * psi * cos(theta1) * (d2 * d0 * (a_tmp *
    a_tmp) + d0 * d5 * (b_a_tmp * b_a_tmp)) / 10.0 + d1 * cos(theta2) * sin
    (theta1) * (d4 * cos(theta2) * sin(theta1) - d7 * cos(theta2) * sin(theta1))
    / 20.0) + phi * psi * sin(theta1) * sin(theta2) * (d4 * sin(theta1) * sin
    (theta2) - d7 * sin(theta1) * sin(theta2)) / 20.0) / 2.0) + 3.0 * phi * the *
    cos(theta1) * (phi * the * sin(theta2) * (d3 * cos(theta1) * cos(theta2) *
    sin(theta1) - d6 * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0 - phi *
    the * cos(theta2) * (d3 * cos(theta1) * sin(theta1) * sin(theta2) - d6 * cos
    (theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) + d73) + d77 / 40.0) -
    d84 / 20.0) + d131 * b_a_tmp * c_a_tmp / 800.0) - d45 * ((3.0 * cos(theta2) *
    sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin
    (theta2) / 10.0) / 2.0) + psi * the * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (phi * (the * the) *
    sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - phi *
    (psi * psi) * (the * the) * sin(theta1) * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2))) / 40.0) + psi * the * (cos(theta1) * cos(theta2) *
    sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (phi * (the * the) *
    sin(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) - phi *
    (psi * psi) * (the * the) * sin(theta1) * (cos(theta2) * cos(theta3) - sin
    (theta2) * sin(theta3))) / 40.0) - 3.0 * psi * the * sin(theta1) * (psi *
    the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    cos(theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2)) / 20.0 -
    psi * the * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta2) - phi * phi * (the * the) * cos(theta1) * sin(theta2))
    / 20.0) / 2.0) - d31 * w_C_32_tmp * d175 / 20.0) - 3.0 * psi * the * sin
    (theta1) * (psi * the * (phi * phi * (psi * psi) * cos(theta1) * (cos(theta2)
    * sin(theta3) + cos(theta3) * sin(theta2)) - phi * phi * (the * the) * cos
    (theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) / 20.0 + psi * the * (phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * cos(theta3) - sin(theta2) * sin(theta3)) - phi * phi * (the * the)
    * cos(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) *
    (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) / 20.0) / 2.0) - psi * the * cos(theta1) * (((phi * phi * (psi *
    psi) * (a_tmp * a_tmp) - psi * psi * (the * the) * (a_tmp * a_tmp)) - phi *
    phi * (psi * psi) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 40.0) - d115) - d155) - d156 / 40.0) - d38) - 3.0 *
    phi * psi * cos(theta1) * (((phi * psi * sin(theta2) * (phi * phi * (psi *
    psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) *
    cos(theta1) * cos(theta2) * sin(theta1)) / 20.0 - phi * psi * cos(theta2) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi *
    psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) - phi *
    psi * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    cos(theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2)) / 20.0) +
    phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta2) - phi * phi * (the * the) * cos(theta1) * sin(theta2))
    / 20.0) / 2.0) - c_C_32_tmp * d5 * a_tmp_tmp * c_a_tmp / 8000.0) - d41) -
    psi * the * (phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2)) - phi * phi * (the * the) * cos(theta1)
    * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))) * (cos(theta1) *
    sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) / 20.0)
    - psi * the * (phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * cos
    (theta3) - sin(theta2) * sin(theta3)) - phi * phi * (the * the) * cos(theta1)
    * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) * (cos(theta1) *
    cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) / 20.0)
    - d54) - d44) - d49) + d55) + 3.0 * phi * psi * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 20.0) + 3.0 * psi * the * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 20.0) - psi * the *
    cos(theta1) * sin(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) *
    sin(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) * sin(theta2)) - phi
    * phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2)) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 40.0) + r_C_32_tmp * a_tmp_tmp *
    (b_a_tmp * b_a_tmp) * c_a_tmp / 8000.0) - d151) - d51) - f_C_32_tmp_tmp *
    ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 *
    cos(theta3) * sin(theta2) / 10.0) / 40.0) + q_C_32_tmp_tmp * d125 / 40.0) +
    d162) - d152) + d53) + d56) - d145 / 40.0) - d146 / 40.0) + d149 * d33 /
    40.0) - d164 * (d174 + d108) / 40.0) + d111 * d113 * (d122 + d124) / 40.0) -
    d102 * (d122 + d124) * ((d105 / 10.0 + d107 / 10.0) - 0.1) / 2.0) + d10 *
    sin(theta1) * (d122 + d124) * ((h_a_tmp_tmp_tmp * d_a_tmp / 10.0 + d104 *
    c_a_tmp / 10.0) - 0.1) / 2.0) - d110 * rt_powd_snf(the, 3.0) *
    (c_a_tmp_tmp_tmp * d_a_tmp / 20.0 - d_a_tmp_tmp_tmp * f_a_tmp / 20.0) * (3.0
    * a_tmp_tmp * cos(theta3) / 20.0 - 3.0 * c_a_tmp * sin(theta3) / 20.0) /
    40.0) - d96 * psi * rt_powd_snf(the, 3.0) * (d_a_tmp_tmp_tmp * sin(theta3) /
    20.0 + d134 * sin(theta2) / 20.0) * d175 / 40.0) - d2 * d0 * sin(theta1) *
    (cos(theta1) * (f_a_tmp_tmp / 10.0 - g_a_tmp_tmp / 10.0) + sin(theta1) *
    (p_a_tmp_tmp / 10.0 - q_a_tmp_tmp / 10.0)) * ((3.0 * cos(theta2) * sin
    (theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2)
    / 10.0) / 2.0) + phi * phi * (the * the) * sin(theta1) * (cos(theta1) *
    (c_a_tmp_tmp_tmp * d_a_tmp / 10.0 - d_a_tmp_tmp_tmp * f_a_tmp / 10.0) + sin
    (theta1) * (g_a_tmp_tmp_tmp * d_a_tmp / 10.0 - i_a_tmp_tmp_tmp * b_a_tmp /
    10.0)) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0)
    + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0) - 3.0 * psi * the * cos
    (theta1) * (phi * phi * (the * the) / 20.0 + phi * phi * psi * the / 20.0) *
    ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 *
    cos(theta3) * sin(theta2) / 10.0) / 20.0) + 7.0 * psi * the * cos(theta1) *
    (phi * phi * psi * (a_tmp_tmp_tmp_tmp * c_a_tmp * sin(theta3) / 20.0 -
    h_a_tmp_tmp_tmp * f_a_tmp * sin(theta1) / 20.0) + phi * phi * the *
    (a_tmp_tmp_tmp_tmp * c_a_tmp * sin(theta3) / 20.0 - h_a_tmp_tmp_tmp *
    f_a_tmp * sin(theta1) / 20.0)) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 -
    3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0)
    + h_C_32_tmp * (a_tmp_tmp * a_tmp_tmp) / 16000.0) - ib_C_32_tmp) + phi * psi
    * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
    * sin(theta1)) / 40.0) - d169 * ((3.0 * cos(theta2) * sin(theta3) / 10.0 -
    3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0)) -
    h_C_32_tmp * (c_a_tmp * c_a_tmp) / 16000.0) + ec_C_32_tmp) + d170 * ((3.0 *
    cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos
    (theta3) * sin(theta2) / 10.0)) - jb_C_32_tmp) - psi * the * cos(theta1) *
    cos(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * cos(theta2) -
    psi * psi * (the * the) * (a_tmp * a_tmp) * cos(theta2)) - phi * phi * (psi *
    psi) * cos(theta2) * (b_a_tmp * b_a_tmp)) + psi * psi * (the * the) * cos
    (theta2) * (b_a_tmp * b_a_tmp)) / 40.0) + eb_C_32_tmp) + lb_C_32_tmp) - psi *
    the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    cos(theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2)) / 20.0) +
    kb_C_32_tmp) + mb_C_32_tmp) + psi * the * cos(theta1) * cos(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta2) - phi * phi * (the * the) *
    cos(theta1) * sin(theta2)) / 20.0) - C_32_tmp) + s_C_32_tmp) - nb_C_32_tmp)
                     + ub_C_32_tmp) + vb_C_32_tmp) + ob_C_32_tmp) - pb_C_32_tmp)
                 - qb_C_32_tmp) + fc_C_32_tmp) - yb_C_32_tmp) - rb_C_32_tmp) -
             m_C_32_tmp) - q_C_32_tmp) + cc_C_32_tmp) + l_C_32_tmp) +
         db_C_32_tmp) - fb_C_32_tmp) + dc_C_32_tmp) + gb_C_32_tmp) + hb_C_32_tmp)
    - o_C_32_tmp;
  d18 = k_C_32_tmp * (3.0 * cos(theta1) * cos(theta2) * sin(theta3) / 20.0 + 3.0
                      * cos(theta1) * cos(theta3) * sin(theta2) / 20.0) / 40.0;
  d19 = d150 * d5 * w_C_32_tmp * d175 / 20.0;
  c_C_32_tmp = 7.0 * rt_powd_snf(phi, 4.0) * psi * (the * the) * d113 * d175 /
    40.0;
  h_C_32_tmp = 7.0 * rt_powd_snf(phi, 4.0) * psi * (the * the) * m_a_tmp *
    w_C_32_tmp / 40.0;
  k_C_32_tmp = d148 * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin
                        (theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) /
                       10.0) / 20.0;
  l_C_32_tmp = 7.0 * phi * psi * sin(theta1) * (phi * (the * the) * (3.0 * cos
    (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) +
    phi * phi * psi * (the * the) * (3.0 * cos(theta2) * sin(theta3) / 20.0 +
    3.0 * cos(theta3) * sin(theta2) / 20.0)) * ((3.0 * cos(theta2) * sin(theta3)
    / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0)
    / 40.0;
  r_C_32_tmp = g_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 400.0;
  mb_C_32_tmp = bb_C_32_tmp_tmp * d125 / 800.0;
  ob_C_32_tmp = cb_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0
    * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  pb_C_32_tmp = db_C_32_tmp_tmp * d125 / 800.0;
  qb_C_32_tmp = eb_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0
    * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 800.0;
  rb_C_32_tmp = 7.0 * (phi * phi) * psi * (the * the) * (3.0 * cos(theta1) * cos
    (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2)
    / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) /
    10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) *
               (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos
                (theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0;
  p_C_32_tmp = p_C_32_tmp * (3.0 * cos(theta1) * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 20.0) / 20.0;
  gc_C_32_tmp = 7.0 * (phi * phi) * psi * (the * the) * (3.0 * cos(theta1) * cos
    (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2)
    / 20.0) * d125 / 40.0;
  hc_C_32_tmp = kc_C_32_tmp / 40.0;
  kc_C_32_tmp = fb_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0
    * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  C_32[4] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((phi * (((((phi * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1)) * (((d3 * cos(theta1) * (b_a_tmp_tmp_tmp * sin(theta3) - e_a_tmp *
    cos(theta3)) - d6 * cos(theta1) * (b_a_tmp_tmp_tmp * sin(theta3) - e_a_tmp *
    cos(theta3))) - d2 * d0 * sin(theta1) * (m_a_tmp_tmp * sin(theta3) -
    l_a_tmp_tmp * sin(theta1))) + d0 * d5 * sin(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) -
    phi * psi * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2)) * (((d2 * d0 * cos(theta1) * (e_a_tmp * sin(theta3)
    + a_tmp_tmp_tmp * sin(theta2)) - d0 * d5 * cos(theta1) * (e_a_tmp * sin
    (theta3) + a_tmp_tmp_tmp * sin(theta2))) - d2 * d0 * sin(theta1) * (cos
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
    10.0) / 2.0 + phi * ((psi * the * sin(theta1) * (phi * phi * (psi * psi) *
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
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) /
    2.0) - the * ((psi * the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + psi * the *
    (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
    phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + psi * the * (cos(theta1)
    * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi)
    * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) / 20.0) / 2.0) - phi * (((((phi * psi * sin(theta1)
    * sin(theta2) * (((d2 * d0 * (a_tmp * a_tmp) * sin(theta2) - d0 * d5 *
    (a_tmp * a_tmp) * sin(theta2)) - phi * phi * (psi * psi) * (b_a_tmp *
    b_a_tmp) * sin(theta2)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp) *
    sin(theta2)) / 20.0 - phi * psi * cos(theta1) * (2.0 * d2 * (psi * psi) *
    cos(theta1) * sin(theta1) - 2.0 * d0 * (the * the) * cos(theta1) * sin
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
    psi * psi * (the * the) * cos(theta2) * (b_a_tmp * b_a_tmp)) / 20.0) / 2.0)
    + phi * (psi * the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp)
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the * cos
    (theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1)) / 20.0) / 2.0) - the * (psi * the *
    sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the * cos(theta1) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1)) / 20.0) / 2.0) + phi * (phi * psi * sin(theta1) *
    sin(theta2) * (phi * (the * the) * cos(theta2) * sin(theta1) - phi * (psi *
    psi) * (the * the) * cos(theta2) * sin(theta1)) / 20.0 - phi * psi * cos
    (theta2) * sin(theta1) * (phi * (the * the) * sin(theta1) * sin(theta2) -
    phi * (psi * psi) * (the * the) * sin(theta1) * sin(theta2)) / 20.0)) + d72)
    - phi * ((psi * the * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos
    (theta1) * cos(theta2) * sin(theta1)) / 20.0 - psi * the * sin(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0) + psi * the * cos(theta1) * sin(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) + the *
    ((psi * the * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1)
    * cos(theta2) * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0) + psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) + d180) + d67) + d69) +
    phi * (((phi * psi * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp)
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi * sin
    (theta1) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) - psi * psi * (the *
    the) * (a_tmp * a_tmp)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp)) +
    psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 20.0) - phi * psi * cos
    (theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1)) / 20.0) + phi * psi * cos(theta1) *
    (2.0 * (phi * phi) * (psi * psi) * cos(theta1) * sin(theta1) - 2.0 * (psi *
    psi) * (the * the) * cos(theta1) * sin(theta1)) / 10.0) / 2.0) + d70) - phi *
    the * ((((the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) +
    psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + the * (cos(theta1) *
    cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (psi *
    psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos
    (theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0) + the * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) *
    cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) + phi * the * (phi * (the * the) * sin(theta1) * (cos
    (theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - phi * (psi * psi) *
    (the * the) * sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2))) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) / 20.0)
    + phi * the * (phi * (the * the) * sin(theta1) * (cos(theta2) * cos(theta3)
    - sin(theta2) * sin(theta3)) - phi * (psi * psi) * (the * the) * sin(theta1)
    * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) * (cos(theta2) *
    cos(theta3) - sin(theta2) * sin(theta3)) / 20.0) / 2.0) - d96 * the *
    w_C_32_tmp / 40.0) - phi * the * ((phi * the * (phi * (the * the) * sin
    (theta1) - phi * (psi * psi) * (the * the) * sin(theta1)) / 20.0 - the * cos
    (theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1)) / 20.0) + the * sin(theta1) * (phi *
    phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp)) / 10.0) / 2.0) - g_C_32_tmp * the * a_tmp_tmp / 800.0) + d127 *
    ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 *
    cos(theta3) * sin(theta2) / 10.0) / 2.0) + d58) + d128) - phi * the *
    ((((the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + phi * the * cos(theta2) *
    (phi * (the * the) * cos(theta2) * sin(theta1) - phi * (psi * psi) * (the *
    the) * cos(theta2) * sin(theta1)) / 20.0) - the * cos(theta1) * cos(theta2) *
    (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + phi *
    the * sin(theta2) * (phi * (the * the) * sin(theta1) * sin(theta2) - phi *
    (psi * psi) * (the * the) * sin(theta1) * sin(theta2)) / 20.0) - the * cos
    (theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1)
    * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin(theta1) * sin
    (theta2)) / 20.0) / 2.0) - d18) + d181) + psi * the * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (phi *
    (the * the) * sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2)) - phi * (psi * psi) * (the * the) * sin(theta1) * (cos(theta2) *
    sin(theta3) + cos(theta3) * sin(theta2))) / 40.0) + psi * the * (cos(theta1)
    * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) *
    (phi * (the * the) * sin(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) *
    sin(theta3)) - phi * (psi * psi) * (the * the) * sin(theta1) * (cos(theta2) *
    cos(theta3) - sin(theta2) * sin(theta3))) / 40.0) - d19) - d116 * d125 / 2.0)
    - d182) - y_C_32_tmp_tmp * d5 * a_tmp_tmp * c_a_tmp / 8000.0) - d101) - d79)
    - n_C_32_tmp_tmp * d125 / 40.0) - d147 / 40.0) - f_C_32_tmp_tmp * ((3.0 *
    cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos
    (theta3) * sin(theta2) / 10.0) / 40.0) - b_C_32_tmp * d125 * (d174 + d107 /
    10.0)) - d116 * sin(theta2) * (d26 - d27) / 40.0) + 7.0 * (phi * phi) * (psi
    * psi) * the * (h_a_tmp_tmp - i_a_tmp_tmp) * (d112 * d_a_tmp / 20.0 + d114 *
    c_a_tmp / 20.0) / 40.0) + 7.0 * (phi * phi) * (psi * psi) * the * (d132 /
    20.0 + d135 / 20.0) * (g_a_tmp_tmp_tmp * sin(theta3) / 20.0 -
    i_a_tmp_tmp_tmp * sin(theta1) / 20.0) / 40.0) - d1 * the * (cos(theta2) *
    cos(theta3) - sin(theta2) * sin(theta3)) * (d6 * sin(theta1) * (b_a_tmp_tmp
    + c_a_tmp_tmp) - d3 * cos(theta1) * (j_a_tmp_tmp + k_a_tmp_tmp)) / 40.0) -
    phi * psi * the * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) *
    (d6 * sin(theta1) * (b_a_tmp_tmp_tmp * sin(theta3) - e_a_tmp * cos(theta3))
    - d3 * cos(theta1) * (m_a_tmp_tmp * sin(theta3) - l_a_tmp_tmp * sin(theta1)))
    / 40.0) + phi * psi * the * cos(theta2) * (d3 * cos(theta1) * sin(theta1) *
    sin(theta2) - d6 * cos(theta1) * sin(theta1) * sin(theta2)) / 40.0) + 3.0 *
    d2 * psi * (the * the) * sin(theta1) * ((3.0 * cos(theta2) * sin(theta3) /
    10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) /
    400.0) + 7.0 * rt_powd_snf(phi, 3.0) * psi * the * (3.0 * b_a_tmp * sin
    (theta2) * sin(theta3) / 20.0 - 3.0 * a_tmp_tmp * cos(theta3) * sin(theta1) /
    20.0) * (cos(theta1) * ((3.0 * a_tmp * cos(theta2) / 10.0 + i_a_tmp *
    c_a_tmp * sin(theta3) / 10.0) - i_a_tmp * cos(theta2) * cos(theta3) / 10.0)
    + sin(theta1) * ((3.0 * a_tmp_tmp * sin(theta1) / 10.0 + a_tmp_tmp_tmp_tmp *
    c_a_tmp * sin(theta3) / 10.0) - h_a_tmp_tmp_tmp * cos(theta3) * sin(theta1) /
    10.0)) / 40.0) - 7.0 * phi * psi * sin(theta1) * (3.0 * phi * (the * the) *
    sin(theta2) / 20.0 + d103 * psi * (the * the) * sin(theta2) / 20.0) * ((3.0 *
    cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos
    (theta3) * sin(theta2) / 10.0) / 40.0) + rb_C_32_tmp) - p_C_32_tmp) - 21.0 *
    phi * psi * the * a_tmp * c_a_tmp / 800.0) + 7.0 * psi * the * cos(theta1) *
    (phi * phi * psi * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0 -
    3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) + phi * phi * the *
    (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) *
    cos(theta3) * sin(theta1) / 20.0)) * ((3.0 * cos(theta2) * sin(theta3) /
    10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) /
    40.0) - c_C_32_tmp) - h_C_32_tmp) - k_C_32_tmp) - gc_C_32_tmp) +
    ab_C_32_tmp_tmp * (a_tmp_tmp * a_tmp_tmp) * b_a_tmp / 16000.0) -
    ab_C_32_tmp_tmp * b_a_tmp * (c_a_tmp * c_a_tmp) / 16000.0) - l_C_32_tmp) -
    ic_C_32_tmp) + r_C_32_tmp) - jc_C_32_tmp) + s_C_32_tmp) + t_C_32_tmp) +
                       mb_C_32_tmp) + ob_C_32_tmp) + hc_C_32_tmp) - m_C_32_tmp)
                   - q_C_32_tmp) - pb_C_32_tmp) + xb_C_32_tmp) + lc_C_32_tmp) +
               qb_C_32_tmp) + mc_C_32_tmp) + nc_C_32_tmp * (a_tmp * a_tmp) *
             a_tmp_tmp * c_a_tmp / 8000.0) + oc_C_32_tmp) - kc_C_32_tmp) +
          db_C_32_tmp) + pc_C_32_tmp) - fb_C_32_tmp) + gb_C_32_tmp_tmp * ((3.0 *
         cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 *
        cos(theta3) * sin(theta2) / 10.0)) + gb_C_32_tmp) + hb_C_32_tmp) -
    o_C_32_tmp;
  b_C_32_tmp = v_C_32_tmp * (3.0 * cos(theta1) * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2) / 20.0) / 20.0;
  g_C_32_tmp = x_C_32_tmp * d113 * m_a_tmp / 20.0;
  m_C_32_tmp = y_C_32_tmp / 40.0;
  o_C_32_tmp = bb_C_32_tmp / 40.0;
  q_C_32_tmp = e_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  t_C_32_tmp = h_C_32_tmp_tmp * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  C_32[7] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((phi *
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
    (theta1))) / 20.0) / 2.0 - the * ((psi * the * sin(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0 + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) +
    psi * the * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) /
    2.0) + phi * (psi * the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the *
    cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0) / 2.0) - the * (psi *
    the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the * cos(theta1) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) *
    cos(theta1) * sin(theta1)) / 20.0) / 2.0) - phi * ((psi * the * cos(theta1) *
    cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin
    (theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
    / 20.0 - psi * the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp)
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) + psi * the * cos
    (theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1)
    * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin(theta1) * sin
    (theta2)) / 20.0) / 2.0) + the * ((psi * the * cos(theta1) * cos(theta2) *
    (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0 - psi *
    the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) + psi * the * cos(theta1) * sin
    (theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2)
    - psi * psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0)
    / 2.0) - phi * the * ((((the * sin(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 +
    the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) *
    sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
    phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + the * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (psi *
    psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos
    (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) / 20.0) + phi * the * (phi * (the * the) * sin
    (theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - phi *
    (psi * psi) * (the * the) * sin(theta1) * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2))) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2)) / 20.0) + phi * the * (phi * (the * the) * sin(theta1) * (cos
    (theta2) * cos(theta3) - sin(theta2) * sin(theta3)) - phi * (psi * psi) *
    (the * the) * sin(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3))) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) / 20.0)
    / 2.0) - phi * the * ((phi * the * sin(theta1) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1)) / 20.0 - phi * the * (phi * phi * (psi * psi) * cos(theta1) - phi *
    phi * (the * the) * cos(theta1)) / 20.0) + phi * the * cos(theta1) * (phi *
    phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp)) / 10.0) / 2.0) + phi * the * ((((phi * the * (phi * phi * (psi *
    psi) * cos(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))
    - phi * phi * (the * the) * cos(theta1) * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2))) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2)) / 20.0 + phi * the * (phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * cos(theta3) - sin(theta2) * sin(theta3)) - phi * phi * (the * the)
    * cos(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) *
    (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) / 20.0) + phi * the *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
    phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + phi * the * (sin(theta1)
    * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi)
    * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) / 20.0) - phi * the * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0) / 2.0) + d32 / 2.0) - phi * the * ((phi * the * (phi * (the * the) *
    sin(theta1) - phi * (psi * psi) * (the * the) * sin(theta1)) / 20.0 - the *
    cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0) + the * sin(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) - phi * the * (phi * psi * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 20.0 + phi * psi * cos(theta1) * (phi *
    phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp)) / 10.0) / 2.0) + phi * the * (phi * the * cos(theta2) * (((phi *
    phi * (psi * psi) * (a_tmp * a_tmp) * sin(theta2) - psi * psi * (the * the) *
    (a_tmp * a_tmp) * sin(theta2)) - phi * phi * (psi * psi) * (b_a_tmp *
    b_a_tmp) * sin(theta2)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp) *
    sin(theta2)) / 20.0 - phi * the * sin(theta2) * (((phi * phi * (psi * psi) *
    (a_tmp * a_tmp) * cos(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) *
    cos(theta2)) - phi * phi * (psi * psi) * cos(theta2) * (b_a_tmp * b_a_tmp))
    + psi * psi * (the * the) * cos(theta2) * (b_a_tmp * b_a_tmp)) / 20.0) / 2.0)
    + phi * the * ((phi * psi * (cos(theta2) * sin(theta1) * sin(theta3) + cos
    (theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) /
    2.0) - phi * the * ((((phi * the * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 -
    phi * the * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2)) / 20.0) -
    phi * the * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin
    (theta2) - phi * phi * (the * the) * cos(theta1) * sin(theta2)) / 20.0) +
    phi * the * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1)
    * cos(theta2) * sin(theta1)) / 20.0) + phi * the * sin(theta1) * sin(theta2)
    * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi *
    psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0)
    - phi * the * ((((the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + phi * the *
    cos(theta2) * (phi * (the * the) * cos(theta2) * sin(theta1) - phi * (psi *
    psi) * (the * the) * cos(theta2) * sin(theta1)) / 20.0) - the * cos(theta1) *
    cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin
    (theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
    / 20.0) + phi * the * sin(theta2) * (phi * (the * the) * sin(theta1) * sin
    (theta2) - phi * (psi * psi) * (the * the) * sin(theta1) * sin(theta2)) /
    20.0) - the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi * the * ((phi * psi * cos
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 + phi * psi * cos(theta2) * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + phi *
    psi * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1) * sin(theta2)) / 20.0) / 2.0) - d97 * ((3.0 * cos(theta2) * sin
    (theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2)
    / 10.0) / 2.0) + d73) + d36 * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0
    * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0) +
    d_C_32_tmp * (3.0 * cos(theta1) * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
    cos(theta1) * cos(theta3) * sin(theta2) / 20.0) / 40.0) - d160 / 40.0) - d50
    * d20 / 40.0) - d52 * (d22 - d23) / 40.0) + d100 * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 20.0) - C_32_tmp_tmp_tmp * (r_a_tmp_tmp - s_a_tmp_tmp) * (cos(theta1) *
    d121 + sin(theta1) * d123) / 40.0) + d65 * d5 * (f_a_tmp_tmp / 20.0 -
    g_a_tmp_tmp / 20.0) * (cos(theta1) * (d59 - d60) + sin(theta1) * (d61 - d62))
    / 40.0) - d119 * cos(theta1) * (d163 * c_a_tmp / 20.0 + d130 * c_a_tmp /
    20.0) * ((h_a_tmp_tmp_tmp * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) +
    3.0 * f_a_tmp * sin(theta2) / 10.0) / 40.0) + d178 * psi * the *
    (g_a_tmp_tmp_tmp * sin(theta3) / 20.0 - i_a_tmp_tmp_tmp * sin(theta1) / 20.0)
    * (cos(theta1) * ((d_a_tmp_tmp_tmp / 10.0 + f_a_tmp_tmp / 10.0) -
    d_a_tmp_tmp_tmp * f_a_tmp / 10.0) + sin(theta1) * ((d112 / 10.0 +
    p_a_tmp_tmp / 10.0) - i_a_tmp_tmp_tmp * b_a_tmp / 10.0)) / 40.0) - 7.0 * phi
    * psi * sin(theta1) * (3.0 * phi * d5 * sin(theta2) / 20.0 + d129 * d5 * sin
    (theta2) / 20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin
    (theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0) - 7.0 *
    d2 * psi * rt_powd_snf(the, 3.0) * (i_a_tmp * sin(theta2) * sin(theta3) /
    20.0 - i_a_tmp * cos(theta2) * cos(theta3) / 20.0) * (3.0 * cos(theta2) *
    cos(theta3) / 20.0 - 3.0 * sin(theta2) * sin(theta3) / 20.0) / 40.0) - 7.0 *
    d2 * psi * rt_powd_snf(the, 3.0) * (3.0 * a_tmp * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * a_tmp * cos(theta3) * sin(theta2) / 20.0) * (3.0 * cos(theta2) *
    sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 40.0) -
    b_C_32_tmp) - 3.0 * psi * the * cos(theta1) * (phi * phi * (the * the) /
    20.0 + phi * phi * psi * the / 20.0) * ((3.0 * cos(theta2) * sin(theta3) /
    10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) /
    20.0) - c_C_32_tmp) - h_C_32_tmp) + 63.0 * (phi * phi) * psi * rt_powd_snf
    (the, 3.0) * cos(theta1) * (a_tmp_tmp * a_tmp_tmp) / 16000.0) - k_C_32_tmp)
    - ib_C_32_tmp) + phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (psi *
    psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) *
    cos(theta1) * cos(theta2) * sin(theta1)) / 40.0) - 63.0 * (phi * phi) * psi *
    rt_powd_snf(the, 3.0) * cos(theta1) * (c_a_tmp * c_a_tmp) / 16000.0) + 63.0 *
    rt_powd_snf(phi, 4.0) * psi * (the * the) * (a_tmp_tmp * a_tmp_tmp) * sin
    (theta1) / 16000.0) - 63.0 * rt_powd_snf(phi, 4.0) * psi * (the * the) * sin
    (theta1) * (c_a_tmp * c_a_tmp) / 16000.0) - qc_C_32_tmp) - g_C_32_tmp) -
    jb_C_32_tmp) - l_C_32_tmp) + eb_C_32_tmp) + kb_C_32_tmp) + v_C_32_tmp_tmp /
                       800.0) + r_C_32_tmp) - j_C_32_tmp / 800.0) - C_32_tmp) +
                   ub_C_32_tmp) + mb_C_32_tmp) + vb_C_32_tmp) + ob_C_32_tmp) -
               yb_C_32_tmp) - pb_C_32_tmp) - m_C_32_tmp) + o_C_32_tmp) +
           cc_C_32_tmp) + qb_C_32_tmp) + u_C_32_tmp * (a_tmp * a_tmp) *
         a_tmp_tmp * c_a_tmp / 8000.0) + cb_C_32_tmp * a_tmp_tmp * (b_a_tmp *
         b_a_tmp) * c_a_tmp / 8000.0) + dc_C_32_tmp) + q_C_32_tmp) + bc_C_32_tmp)
    - t_C_32_tmp;
  C_32[2] = (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((phi *
    (((phi * psi * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
    * sin(theta1)) / 20.0 - phi * psi * cos(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1) * sin(theta2)) / 20.0) - phi * psi * sin(theta1) *
    sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) - phi *
    phi * (the * the) * cos(theta1) * cos(theta2)) / 20.0) + phi * psi * cos
    (theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta2)
    - phi * phi * (the * the) * cos(theta1) * sin(theta2)) / 20.0) / 2.0 + phi *
    (((phi * psi * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi)
    * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) / 20.0 + phi * psi * (cos(theta2) * sin(theta3) +
    cos(theta3) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) -
    phi * psi * (phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2)) - phi * phi * (the * the) * cos(theta1)
    * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))) * (sin(theta1) *
    sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) / 20.0)
    - phi * psi * (phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * cos
    (theta3) - sin(theta2) * sin(theta3)) - phi * phi * (the * the) * cos(theta1)
    * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) * (cos(theta2) *
    sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) / 20.0)
    / 2.0) + phi * (phi * the * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
    phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0 + phi * the * (cos(theta2) *
    sin(theta3) + cos(theta3) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) / 2.0) + phi * (phi * the * sin(theta2) * (phi * phi *
    (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0 - phi * the * cos
    (theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2)
    - psi * psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0)
    / 2.0) - phi * the * ((phi * the * sin(theta1) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1)) / 20.0 - phi * the * (phi * phi * (psi * psi) * cos(theta1) - phi *
    phi * (the * the) * cos(theta1)) / 20.0) + phi * the * cos(theta1) * (phi *
    phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp)) / 10.0) / 2.0) + phi * the * ((((phi * the * (phi * phi * (psi *
    psi) * cos(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))
    - phi * phi * (the * the) * cos(theta1) * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2))) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2)) / 20.0 + phi * the * (phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * cos(theta3) - sin(theta2) * sin(theta3)) - phi * phi * (the * the)
    * cos(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) *
    (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) / 20.0) + phi * the *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
    phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + phi * the * (sin(theta1)
    * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi)
    * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) / 20.0) - phi * the * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0) / 2.0) - phi * the * (phi * psi * sin(theta1) * (phi * phi * (psi *
    psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) *
    sin(theta1)) / 20.0 + phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) /
    2.0) + 7.0 * phi * psi * (3.0 * cos(theta2) * sin(theta1) * sin(theta3) /
    20.0 + 3.0 * cos(theta3) * sin(theta1) * sin(theta2) / 20.0) / 40.0) + phi *
    the * ((phi * psi * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) *
    sin(theta1) * sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 20.0 +
    phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) -
    phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + d24) - phi * the *
    ((((phi * the * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) +
    psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - phi * the * cos
    (theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) - phi * phi *
    (the * the) * cos(theta1) * cos(theta2)) / 20.0) - phi * the * sin(theta2) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta2) - phi * phi * (the *
    the) * cos(theta1) * sin(theta2)) / 20.0) + phi * the * cos(theta2) * sin
    (theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1)
    - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0)
    + phi * the * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi * the * ((phi * psi * cos
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 + phi * psi * cos(theta2) * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + phi *
    psi * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1) * sin(theta2)) / 20.0) / 2.0) + d74) + d73) + d77 / 40.0) - d84 /
    20.0) + d85 * d91 / 40.0) + d92 * (d93 - d94) / 40.0) - d78 * sin(theta1) *
    (psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2))
    / 20.0 - psi * the * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta2) - phi * phi * (the * the) * cos(theta1) * sin
    (theta2)) / 20.0) / 2.0) - d31 * (k_C_32_tmp_tmp - C_32_tmp_tmp) *
    (h_a_tmp_tmp_tmp * d_a_tmp / 20.0 + d104 * c_a_tmp / 20.0) / 20.0) - 3.0 *
    psi * the * sin(theta1) * (psi * the * (phi * phi * (psi * psi) * cos(theta1)
    * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - phi * phi * (the
    * the) * cos(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)))
    * h_a_tmp / 20.0 + psi * the * (phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * cos(theta3) - sin(theta2) * sin(theta3)) - phi * phi * (the * the)
    * cos(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) *
    g_a_tmp / 20.0) / 2.0) - psi * the * cos(theta1) * (((d3 * (a_tmp * a_tmp) -
    d6 * (a_tmp * a_tmp)) - d3 * (b_a_tmp * b_a_tmp)) + d0 * d5 * (b_a_tmp *
    b_a_tmp)) / 40.0) - phi * psi * (e_a_tmp_tmp_tmp * sin(theta3) +
    f_a_tmp_tmp_tmp * sin(theta2)) * (d6 * sin(theta1) * (e_a_tmp * sin(theta3)
    + a_tmp_tmp_tmp * sin(theta2)) - d3 * cos(theta1) * (e_a_tmp_tmp_tmp * sin
    (theta3) + f_a_tmp_tmp_tmp * sin(theta2))) / 40.0) - phi * psi * (sin(theta1)
    * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) * (d0
    * d5 * sin(theta1) * (b_a_tmp_tmp_tmp * sin(theta3) - e_a_tmp * cos(theta3))
    - d2 * d0 * cos(theta1) * (m_a_tmp_tmp * sin(theta3) - l_a_tmp_tmp * sin
    (theta1))) / 40.0) - psi * the * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2)) * (d0 * d5 * sin(theta1) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) - d2 * d0 * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3)
    + cos(theta3) * sin(theta1) * sin(theta2))) / 40.0) - d38) - 3.0 * phi * psi
    * cos(theta1) * (((phi * psi * sin(theta2) * (d4 * a_tmp_tmp * sin(theta1) -
    d7 * a_tmp_tmp * sin(theta1)) / 20.0 - phi * psi * cos(theta2) * (d4 *
    b_a_tmp * sin(theta2) - d7 * b_a_tmp * sin(theta2)) / 20.0) - phi * psi *
    sin(theta1) * sin(theta2) * (d3 * cos(theta1) * cos(theta2) - d10 * cos
    (theta1) * cos(theta2)) / 20.0) + phi * psi * cos(theta2) * sin(theta1) *
    (d2 * d0 * cos(theta1) * sin(theta2) - d2 * d5 * cos(theta1) * sin(theta2)) /
    20.0) / 2.0) - d41) - psi * the * (phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - phi * phi * (the *
    the) * cos(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)))
    * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) / 20.0) - psi * the * (phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) - phi * phi * (the *
    the) * cos(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)))
    * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) / 20.0) - 3.0 * phi * psi * cos(theta1) * (((phi * psi * (cos
    (theta2) * cos(theta3) - sin(theta2) * sin(theta3)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0 + phi * psi * (cos(theta2) * sin(theta3) + cos(theta3) *
    sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi *
    phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) - phi * psi * (d2 * d0 *
    cos(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - d2 *
    d5 * cos(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1)) / 20.0) - phi * psi * (phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) - phi * phi * (the *
    the) * cos(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)))
    * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2)) / 20.0) / 2.0) - d44) - d49) + d55) + 3.0 * phi * psi * cos(theta1)
    * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 20.0) + 3.0 * psi * the * cos(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 20.0) - psi * the * cos(theta1) * sin(theta2) * (((phi * phi * (psi * psi)
    * (a_tmp * a_tmp) * sin(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) *
    sin(theta2)) - phi * phi * (psi * psi) * (b_a_tmp * b_a_tmp) * sin(theta2))
    + psi * psi * (the * the) * (b_a_tmp * b_a_tmp) * sin(theta2)) / 40.0) -
    d151) - d51) - d165) - d152) + d53) + d56) - d166) - d167) + d168) - 7.0 *
    (phi * phi) * psi * the * (3.0 * cos(theta2) * sin(theta1) * sin(theta3) /
    20.0 + 3.0 * cos(theta3) * sin(theta1) * sin(theta2) / 20.0) * (cos(theta1) *
    ((3.0 * cos(theta1) * cos(theta2) / 10.0 + 3.0 * cos(theta1) * sin(theta2) *
      sin(theta3) / 10.0) - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0)
    + sin(theta1) * ((3.0 * cos(theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1)
                      * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta2) *
                     cos(theta3) * sin(theta1) / 10.0)) / 40.0) - 7.0 * (phi *
    phi) * psi * rt_powd_snf(the, 3.0) * (3.0 * cos(theta1) * sin(theta2) * sin
    (theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) *
    (3.0 * cos(theta2) * cos(theta3) / 20.0 - 3.0 * sin(theta2) * sin(theta3) /
     20.0) / 40.0) - 7.0 * (phi * phi) * psi * rt_powd_snf(the, 3.0) * (3.0 *
    cos(theta1) * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta1) * cos
    (theta3) * sin(theta2) / 20.0) * (3.0 * cos(theta2) * sin(theta3) / 20.0 +
    3.0 * cos(theta3) * sin(theta2) / 20.0) / 40.0) + phi * psi * cos(theta2) *
    sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin
                   (theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
                   * sin(theta1)) / 40.0) + ec_C_32_tmp) - sb_C_32_tmp) - psi *
                      the * cos(theta1) * cos(theta2) * (((phi * phi * (psi *
    psi) * (a_tmp * a_tmp) * cos(theta2) - psi * psi * (the * the) * (a_tmp *
    a_tmp) * cos(theta2)) - phi * phi * (psi * psi) * cos(theta2) * (b_a_tmp *
    b_a_tmp)) + psi * psi * (the * the) * cos(theta2) * (b_a_tmp * b_a_tmp)) /
                      40.0) + eb_C_32_tmp) + lb_C_32_tmp) - psi * the * cos
                   (theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2))
                   / 20.0) + psi * the * cos(theta1) * cos(theta2) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta2) - phi * phi * (the * the) * cos
    (theta1) * sin(theta2)) / 20.0) + s_C_32_tmp) - f_C_32_tmp) - nb_C_32_tmp) +
              i_C_32_tmp) - fc_C_32_tmp) - tb_C_32_tmp;
  C_32[5] = (((((((((((((((((((((((((((((((((((((((((((((((phi * (((((phi * psi *
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
    10.0) / 2.0 + phi * ((psi * the * sin(theta1) * (phi * phi * (psi * psi) *
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
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 20.0) /
    2.0) - the * ((psi * the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + psi * the *
    (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
    phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 20.0) + psi * the * (cos(theta1)
    * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi)
    * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) / 20.0) / 2.0) - phi * (((((phi * psi * sin(theta1)
    * sin(theta2) * (((phi * phi * (psi * psi) * (a_tmp * a_tmp) * sin(theta2) -
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
    b_a_tmp)) / 20.0) / 2.0) + phi * (psi * the * sin(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0 - psi * the * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0) /
    2.0) - the * (d76 * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 - d97 * d37 / 20.0) / 2.0) + phi *
    (d47 * (c_C_32_tmp_tmp - d_C_32_tmp_tmp) / 20.0 - d46 * (d142 - d143) / 20.0))
    + phi * (((d71 * d28 / 20.0 - d9 * d33 / 20.0) - d47 * d40 / 20.0) + d9 *
    b_a_tmp * (d42 - d43) / 20.0) / 2.0) - phi * ((d97 * a_tmp_tmp * (d26 - d27)
    / 20.0 - d75 * b_a_tmp * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) + d97 * sin(theta2) * (d29 *
    c_a_tmp - d30 * c_a_tmp) / 20.0) / 2.0) + the * ((d97 * cos(theta2) * (d8 *
    b_a_tmp - d25 * b_a_tmp) / 20.0 - d75 * sin(theta1) * (d3 * (a_tmp * a_tmp)
    + d6 * (b_a_tmp * b_a_tmp)) / 10.0) + d75 * a_tmp * sin(theta2) * (d29 * sin
    (theta2) - d30 * sin(theta2)) / 20.0) / 2.0) + phi * (phi * psi *
    (m_a_tmp_tmp * sin(theta3) - l_a_tmp_tmp * sin(theta1)) * (d86 * sin(theta1)
    * (d13 + d14) - d89 * sin(theta1) * (d13 + d14)) / 20.0 + phi * psi *
    (e_a_tmp_tmp_tmp * sin(theta3) + f_a_tmp_tmp_tmp * sin(theta2)) * (d86 * sin
    (theta1) * (l_a_tmp_tmp - d16) - d89 * sin(theta1) * (l_a_tmp_tmp - d16)) /
    20.0)) + phi * (((phi * psi * (l_a_tmp_tmp - d16) * (d12 * g_a_tmp - d4 *
    k_a_tmp) / 20.0 + phi * psi * (d13 + d14) * (d12 * h_a_tmp - d4 * l_a_tmp) /
    20.0) - phi * psi * (d4 * d15 - d11 * d15) * (b_a_tmp * c_a_tmp * sin(theta3)
    - a_tmp_tmp * f_a_tmp * sin(theta1)) / 20.0) - phi * psi * (d4 * d17 - d11 *
    d17) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) *
    sin(theta2)) / 20.0) / 2.0) + phi * (phi * the * (cos(theta2) * cos(theta3)
    - sin(theta2) * sin(theta3)) * (d0 * d5 * sin(theta1) * (e_a_tmp * sin
    (theta3) + a_tmp_tmp_tmp * sin(theta2)) - d2 * d0 * cos(theta1) *
    (e_a_tmp_tmp_tmp * sin(theta3) + f_a_tmp_tmp_tmp * sin(theta2))) / 20.0 +
    phi * the * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) * (d0 *
    d5 * sin(theta1) * (b_a_tmp_tmp_tmp * sin(theta3) - e_a_tmp * cos(theta3)) -
    d2 * d0 * cos(theta1) * (m_a_tmp_tmp * sin(theta3) - l_a_tmp_tmp * sin
    (theta1))) / 20.0) / 2.0) + phi * (((phi * psi * sin(theta1) * (d2 * d0 *
    (a_tmp * a_tmp) + d0 * d5 * (b_a_tmp * b_a_tmp)) / 10.0 - phi * psi * sin
    (theta1) * (((d3 * (a_tmp * a_tmp) - d6 * (a_tmp * a_tmp)) - d2 * d0 *
    (b_a_tmp * b_a_tmp)) + d0 * d5 * (b_a_tmp * b_a_tmp)) / 20.0) - phi * psi *
    cos(theta1) * (d2 * d0 * cos(theta1) * sin(theta1) - d0 * d5 * cos(theta1) *
    sin(theta1)) / 20.0) + phi * psi * cos(theta1) * (d80 * d0 * cos(theta1) *
    sin(theta1) - d82 * d5 * cos(theta1) * sin(theta1)) / 10.0) / 2.0) + phi *
    (phi * the * sin(theta2) * (d2 * d0 * cos(theta1) * cos(theta2) * sin(theta1)
    - d0 * d5 * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0 - phi * the *
    cos(theta2) * (d2 * d0 * cos(theta1) * sin(theta1) * sin(theta2) - d0 * d5 *
    cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi * the *
    ((((the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + the * (a_tmp * a_tmp_tmp *
    sin(theta3) + a_tmp * f_a_tmp * sin(theta2)) * (d0 * d5 * sin(theta1) *
    (e_a_tmp * sin(theta3) + a_tmp_tmp_tmp * sin(theta2)) - d2 * d0 * cos(theta1)
    * (e_a_tmp_tmp_tmp * sin(theta3) + f_a_tmp_tmp_tmp * sin(theta2))) / 20.0) +
    the * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) *
    cos(theta3)) * (d0 * d5 * sin(theta1) * (a_tmp * c_a_tmp * sin(theta3) -
    a_tmp * a_tmp_tmp * cos(theta3)) - d2 * d0 * cos(theta1) * (b_a_tmp *
    c_a_tmp * sin(theta3) - a_tmp_tmp * f_a_tmp * sin(theta1))) / 20.0) + phi *
    the * (phi * d5 * sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) *
    sin(theta2)) - d88 * d5 * sin(theta1) * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2))) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2)) / 20.0) + phi * the * (phi * d5 * sin(theta1) * (cos(theta2) * cos
    (theta3) - sin(theta2) * sin(theta3)) - d88 * d5 * sin(theta1) * (cos(theta2)
    * cos(theta3) - sin(theta2) * sin(theta3))) * (cos(theta2) * cos(theta3) -
    sin(theta2) * sin(theta3)) / 20.0) / 2.0) - 7.0 * (phi * phi) * the * (3.0 *
    cos(theta2) * cos(theta3) / 20.0 - 3.0 * sin(theta2) * sin(theta3) / 20.0) /
    40.0) - phi * the * ((phi * the * (phi * (the * the) * sin(theta1) - phi *
    (psi * psi) * (the * the) * sin(theta1)) / 20.0 - the * cos(theta1) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) *
    cos(theta1) * sin(theta1)) / 20.0) + the * sin(theta1) * (phi * phi * (psi *
    psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) /
    10.0) / 2.0) + d58) + d128) - phi * the * ((((the * sin(theta1) * (phi * phi
    * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp)) / 10.0 + phi * the * cos(theta2) * (phi * (the * the) * cos(theta2)
    * sin(theta1) - phi * (psi * psi) * (the * the) * cos(theta2) * sin(theta1))
    / 20.0) - the * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1)
    * cos(theta2) * sin(theta1)) / 20.0) + phi * the * sin(theta2) * (phi * (the
    * the) * sin(theta1) * sin(theta2) - phi * (psi * psi) * (the * the) * sin
    (theta1) * sin(theta2)) / 20.0) - the * cos(theta1) * sin(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - d18)
    + d181) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1)
    * cos(theta2) * cos(theta3)) * (phi * (the * the) * sin(theta1) * (cos
    (theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - phi * (psi * psi) *
    (the * the) * sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2))) / 40.0) + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2)) * (phi * (the * the) * sin(theta1) *
    (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) - phi * (psi * psi) *
    (the * the) * sin(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3))) / 40.0) - d19) - d182) - d101) - d79) - d151) - d152) + d53) +
    d56) - d166) - d167) + d168) + 7.0 * (phi * phi) * psi * (the * the) * (3.0 *
    cos(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos
    (theta2) * cos(theta3) / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * cos
    (theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta1) * cos(theta3) * sin(theta2)
    / 10.0) + sin(theta1) * (3.0 * cos(theta2) * sin(theta1) * sin(theta3) /
    10.0 + 3.0 * cos(theta3) * sin(theta1) * sin(theta2) / 10.0)) / 20.0) +
                       rb_C_32_tmp) - p_C_32_tmp) - c_C_32_tmp) - h_C_32_tmp) +
                   gc_C_32_tmp) + rc_C_32_tmp) + s_C_32_tmp) + wb_C_32_tmp) +
               hc_C_32_tmp) - ab_C_32_tmp) + kc_C_32_tmp) + ac_C_32_tmp;
  C_32[8] = (((((((((((((((((((((((((((((((((((phi * ((psi * the * sin(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0 + psi * the * (a_tmp * a_tmp_tmp * sin(theta3) +
    a_tmp * f_a_tmp * sin(theta2)) * (d0 * d5 * sin(theta1) * (e_a_tmp * sin
    (theta3) + a_tmp_tmp_tmp * sin(theta2)) - d2 * d0 * cos(theta1) *
    (e_a_tmp_tmp_tmp * sin(theta3) + f_a_tmp_tmp_tmp * sin(theta2))) / 20.0) +
    psi * the * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) * (d0 * d5 * sin(theta1) * (a_tmp * c_a_tmp * sin
    (theta3) - a_tmp * a_tmp_tmp * cos(theta3)) - d2 * d0 * cos(theta1) *
    (b_a_tmp * c_a_tmp * sin(theta3) - a_tmp_tmp * f_a_tmp * sin(theta1))) /
    20.0) / 2.0 - the * ((psi * the * sin(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 +
    psi * the * (a_tmp * a_tmp_tmp * sin(theta3) + a_tmp * f_a_tmp * sin(theta2))
    * (d0 * d5 * sin(theta1) * (e_a_tmp * sin(theta3) + a_tmp_tmp_tmp * sin
    (theta2)) - d2 * d0 * cos(theta1) * (e_a_tmp_tmp_tmp * sin(theta3) +
    f_a_tmp_tmp_tmp * sin(theta2))) / 20.0) + psi * the * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (d0 * d5
    * sin(theta1) * (a_tmp * c_a_tmp * sin(theta3) - a_tmp * a_tmp_tmp * cos
    (theta3)) - d2 * d0 * cos(theta1) * (b_a_tmp * c_a_tmp * sin(theta3) -
    a_tmp_tmp * f_a_tmp * sin(theta1))) / 20.0) / 2.0) + phi * (psi * the * sin
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 - psi * the * cos(theta1) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1)) / 20.0) / 2.0) - the * (psi * the * sin(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0 - psi * the * cos(theta1) * (phi * phi * (psi *
    psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) *
    sin(theta1)) / 20.0) / 2.0) - phi * ((psi * the * cos(theta1) * cos(theta2) *
    (d2 * d0 * cos(theta1) * cos(theta2) * sin(theta1) - d0 * d5 * cos(theta1) *
    cos(theta2) * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (phi * phi *
    (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp))
    / 10.0) + psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos
    (theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0) + the * ((psi * the *
    cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
    * sin(theta1)) / 20.0 - psi * the * sin(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) +
    psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi * the * ((((the * sin
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 + the * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0) + the * (cos(theta1) * sin(theta2) * sin(theta3) - cos
    (theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) + phi * the * (phi * (the * the) * sin(theta1) * (cos
    (theta2) * sin(theta3) + cos(theta3) * sin(theta2)) - phi * d0 * (the * the)
    * sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))) *
    (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) / 20.0) + phi * the *
    (phi * (the * the) * sin(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) *
    sin(theta3)) - phi * (psi * psi) * (the * the) * sin(theta1) * (cos(theta2) *
    cos(theta3) - sin(theta2) * sin(theta3))) * (cos(theta2) * cos(theta3) - sin
    (theta2) * sin(theta3)) / 20.0) / 2.0) - phi * the * ((phi * the * sin
    (theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1)) / 20.0 - phi * the * (phi * phi *
    (psi * psi) * cos(theta1) - phi * phi * (the * the) * cos(theta1)) / 20.0) +
    phi * the * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi *
    psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) + phi * the *
    ((((phi * the * (phi * phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2)) - phi * phi * (the * the) * cos(theta1)
    * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))) * (cos(theta2) *
    sin(theta3) + cos(theta3) * sin(theta2)) / 20.0 + phi * the * (phi * phi *
    (psi * psi) * cos(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3)) - phi * phi * (the * the) * cos(theta1) * (cos(theta2) * cos
    (theta3) - sin(theta2) * sin(theta3))) * (cos(theta2) * cos(theta3) - sin
    (theta2) * sin(theta3)) / 20.0) + phi * the * (cos(theta2) * sin(theta1) *
    sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0) + phi * the * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) - phi * the * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) /
    2.0) + phi * the * (phi * the * (cos(theta2) * cos(theta3) - sin(theta2) *
    sin(theta3)) * (((phi * phi * (psi * psi) * cos(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - psi *
    psi * (the * the) * cos(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2))) - phi * phi * (psi * psi) * sin
    (theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2))) + psi * psi * (the * the) * sin(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0 + phi * the * (cos(theta2) * sin(theta3) + cos(theta3) *
    sin(theta2)) * (((phi * phi * (psi * psi) * cos(theta1) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - psi *
    psi * (the * the) * cos(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3))) - phi * phi * (psi * psi) * sin
    (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1))) + psi * psi * (the * the) * sin(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) / 2.0) - phi * the * ((phi * the * (phi * (the * the) *
    sin(theta1) - phi * (psi * psi) * (the * the) * sin(theta1)) / 20.0 - the *
    cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * sin(theta1)) / 20.0) + the * sin(theta1) *
    (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) *
    (b_a_tmp * b_a_tmp)) / 10.0) / 2.0) - phi * the * (phi * psi * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 20.0 + phi * psi * cos(theta1) * (phi *
    phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp *
    b_a_tmp)) / 10.0) / 2.0) + phi * the * (phi * the * cos(theta2) * (((phi *
    phi * (psi * psi) * (a_tmp * a_tmp) * sin(theta2) - psi * psi * (the * the) *
    (a_tmp * a_tmp) * sin(theta2)) - phi * phi * (psi * psi) * (b_a_tmp *
    b_a_tmp) * sin(theta2)) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp) *
    sin(theta2)) / 20.0 - phi * the * sin(theta2) * (((phi * phi * (psi * psi) *
    (a_tmp * a_tmp) * cos(theta2) - psi * psi * (the * the) * (a_tmp * a_tmp) *
    cos(theta2)) - phi * phi * (psi * psi) * cos(theta2) * (b_a_tmp * b_a_tmp))
    + psi * psi * (the * the) * cos(theta2) * (b_a_tmp * b_a_tmp)) / 20.0) / 2.0)
    + phi * the * ((phi * psi * (cos(theta2) * sin(theta1) * sin(theta3) + cos
    (theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0) /
    2.0) - phi * the * ((((phi * the * cos(theta1) * (phi * phi * (psi * psi) *
    (a_tmp * a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 -
    phi * the * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) - phi * phi * (the * the) * cos(theta1) * cos(theta2)) / 20.0) -
    phi * the * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin
    (theta2) - phi * phi * (the * the) * cos(theta1) * sin(theta2)) / 20.0) +
    phi * the * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1)
    * cos(theta2) * sin(theta1)) / 20.0) + phi * the * sin(theta1) * sin(theta2)
    * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi *
    psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 20.0) / 2.0)
    - phi * the * ((((the * sin(theta1) * (phi * phi * (psi * psi) * (a_tmp *
    a_tmp) + psi * psi * (the * the) * (b_a_tmp * b_a_tmp)) / 10.0 + phi * the *
    cos(theta2) * (phi * (the * the) * cos(theta2) * sin(theta1) - phi * (psi *
    psi) * (the * the) * cos(theta2) * sin(theta1)) / 20.0) - the * cos(theta1) *
    cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin
    (theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
    / 20.0) + phi * the * sin(theta2) * (phi * (the * the) * sin(theta1) * sin
    (theta2) - phi * (psi * psi) * (the * the) * sin(theta1) * sin(theta2)) /
    20.0) - the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi * the * ((phi * psi * cos
    (theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi * (the *
    the) * (b_a_tmp * b_a_tmp)) / 10.0 + phi * psi * cos(theta2) * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi *
    psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 20.0) + phi *
    psi * sin(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1) * sin(theta2)) / 20.0) / 2.0) + d73) + 7.0 * phi * psi * (the * the)
    * (3.0 * cos(theta1) * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta1) *
       cos(theta3) * sin(theta2) / 20.0) / 40.0) - 7.0 * (phi * phi) * psi * the
    * (3.0 * cos(theta2) * sin(theta1) * sin(theta3) / 20.0 + 3.0 * cos(theta3) *
       sin(theta1) * sin(theta2) / 20.0) / 40.0) - d115) - d155) + 3.0 * phi *
    psi * cos(theta1) * (phi * phi * (psi * psi) * (a_tmp * a_tmp) + psi * psi *
    (the * the) * (b_a_tmp * b_a_tmp)) / 20.0) - 7.0 * (phi * phi) * psi *
    rt_powd_snf(the, 3.0) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) /
    20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) * (3.0 * cos
    (theta2) * cos(theta3) / 20.0 - 3.0 * sin(theta2) * sin(theta3) / 20.0) /
    40.0) - 7.0 * (phi * phi) * psi * rt_powd_snf(the, 3.0) * (3.0 * cos(theta1)
    * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta1) * cos(theta3) * sin
    (theta2) / 20.0) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
                        (theta3) * sin(theta2) / 20.0) / 40.0) - b_C_32_tmp) -
                      c_C_32_tmp) - h_C_32_tmp) + phi * psi * cos(theta2) * sin
                    (theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos
    (theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
    * sin(theta1)) / 40.0) - g_C_32_tmp) + eb_C_32_tmp) - n_C_32_tmp) -
                m_C_32_tmp) + e_C_32_tmp) + o_C_32_tmp) - q_C_32_tmp) +
    t_C_32_tmp;
}

/*
 * File trailer for C_num_simp_32.c
 *
 * [EOF]
 */
