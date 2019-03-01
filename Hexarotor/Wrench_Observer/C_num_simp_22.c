/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: C_num_simp_22.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 22-Jan-2019 14:59:06
 */

/* Include Files */
#include <math.h>
#include "rt_nonfinite.h"
#include "C_num_simp_22.h"

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
  double d97;
  double d98;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d97 = fabs(u0);
    d98 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d97 == 1.0) {
        y = 1.0;
      } else if (d97 > 1.0) {
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
    } else if (d98 == 0.0) {
      y = 1.0;
    } else if (d98 == 1.0) {
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
 *                double C_22[9]
 * Return Type  : void
 */
void C_num_simp_22(double phi, double the, double psi, double theta1, double
                   theta2, double theta3, double C_22[9])
{
  double a_tmp;
  double b_a_tmp;
  double c_a_tmp;
  double d_a_tmp;
  double e_a_tmp;
  double f_a_tmp;
  double g_a_tmp;
  double a_tmp_tmp;
  double b_a_tmp_tmp;
  double c_a_tmp_tmp;
  double h_a_tmp;
  double d_a_tmp_tmp;
  double e_a_tmp_tmp;
  double f_a_tmp_tmp;
  double i_a_tmp;
  double g_a_tmp_tmp;
  double h_a_tmp_tmp;
  double i_a_tmp_tmp;
  double j_a_tmp_tmp;
  double j_a_tmp;
  double k_a_tmp;
  double k_a_tmp_tmp;
  double l_a_tmp_tmp;
  double m_a_tmp_tmp;
  double l_a_tmp;
  double n_a_tmp_tmp;
  double o_a_tmp_tmp;
  double m_a_tmp;
  double p_a_tmp_tmp;
  double n_a_tmp;
  double a_tmp_tmp_tmp_tmp;
  double a_tmp_tmp_tmp;
  double q_a_tmp_tmp;
  double b_a_tmp_tmp_tmp;
  double c_a_tmp_tmp_tmp;
  double r_a_tmp_tmp;
  double s_a_tmp_tmp;
  double t_a_tmp_tmp;
  double o_a_tmp;
  double p_a_tmp;
  double b_a_tmp_tmp_tmp_tmp;
  double d_a_tmp_tmp_tmp;
  double u_a_tmp_tmp;
  double e_a_tmp_tmp_tmp;
  double f_a_tmp_tmp_tmp;
  double v_a_tmp_tmp;
  double q_a_tmp;
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
  double C_22_tmp;
  double b_C_22_tmp;
  double c_C_22_tmp;
  double d_C_22_tmp;
  double e_C_22_tmp;
  double f_C_22_tmp;
  double C_22_tmp_tmp;
  double g_C_22_tmp;
  double h_C_22_tmp;
  double i_C_22_tmp;
  double j_C_22_tmp;
  double b_C_22_tmp_tmp;
  double k_C_22_tmp;
  double l_C_22_tmp;
  double m_C_22_tmp;
  double n_C_22_tmp;
  double o_C_22_tmp;
  double c_C_22_tmp_tmp;
  double p_C_22_tmp;
  double q_C_22_tmp;
  double r_C_22_tmp;
  double s_C_22_tmp;
  double t_C_22_tmp;
  double d_C_22_tmp_tmp;
  double e_C_22_tmp_tmp;
  double u_C_22_tmp;
  double f_C_22_tmp_tmp;
  double g_C_22_tmp_tmp;
  double v_C_22_tmp;
  double h_C_22_tmp_tmp;
  double w_C_22_tmp;
  double i_C_22_tmp_tmp;
  double x_C_22_tmp;
  double y_C_22_tmp;
  double ab_C_22_tmp;
  double bb_C_22_tmp;
  double cb_C_22_tmp;
  double db_C_22_tmp;
  double eb_C_22_tmp;
  double fb_C_22_tmp;
  double gb_C_22_tmp;
  double j_C_22_tmp_tmp;
  double k_C_22_tmp_tmp;
  double hb_C_22_tmp;
  double l_C_22_tmp_tmp;
  double m_C_22_tmp_tmp;
  double ib_C_22_tmp;
  double jb_C_22_tmp;
  double kb_C_22_tmp;
  double lb_C_22_tmp;
  double mb_C_22_tmp;
  double nb_C_22_tmp;
  double n_C_22_tmp_tmp;
  double ob_C_22_tmp;
  double o_C_22_tmp_tmp;
  double pb_C_22_tmp;
  double qb_C_22_tmp;
  double rb_C_22_tmp;
  double sb_C_22_tmp;
  double tb_C_22_tmp;
  double ub_C_22_tmp;
  double vb_C_22_tmp;
  double wb_C_22_tmp;
  double xb_C_22_tmp;
  double yb_C_22_tmp;
  double ac_C_22_tmp;
  double bc_C_22_tmp;
  double cc_C_22_tmp;
  double dc_C_22_tmp;
  double ec_C_22_tmp;
  double fc_C_22_tmp;
  double gc_C_22_tmp;
  double hc_C_22_tmp;
  double ic_C_22_tmp;
  double jc_C_22_tmp;
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
  double p_C_22_tmp_tmp;
  double q_C_22_tmp_tmp;
  double r_C_22_tmp_tmp;
  double kc_C_22_tmp;
  double lc_C_22_tmp;
  double s_C_22_tmp_tmp;
  double mc_C_22_tmp;
  double nc_C_22_tmp;
  double t_C_22_tmp_tmp;
  double u_C_22_tmp_tmp;
  double oc_C_22_tmp;
  double v_C_22_tmp_tmp;
  double pc_C_22_tmp;
  double qc_C_22_tmp;
  double rc_C_22_tmp;
  double sc_C_22_tmp;
  double w_C_22_tmp_tmp;
  double tc_C_22_tmp;
  double x_C_22_tmp_tmp;
  double uc_C_22_tmp;
  double vc_C_22_tmp;
  double wc_C_22_tmp;
  double C_22_tmp_tmp_tmp;
  double b_C_22_tmp_tmp_tmp;
  double y_C_22_tmp_tmp;
  double xc_C_22_tmp;
  double yc_C_22_tmp;
  double c_C_22_tmp_tmp_tmp;
  double d_C_22_tmp_tmp_tmp;
  double ab_C_22_tmp_tmp;
  double ad_C_22_tmp;
  double bb_C_22_tmp_tmp;
  double e_C_22_tmp_tmp_tmp;
  double f_C_22_tmp_tmp_tmp;
  double cb_C_22_tmp_tmp;
  double db_C_22_tmp_tmp;
  double bd_C_22_tmp;
  double cd_C_22_tmp;
  double dd_C_22_tmp;
  double ed_C_22_tmp;
  double fd_C_22_tmp;
  double gd_C_22_tmp;
  double hd_C_22_tmp;
  double eb_C_22_tmp_tmp;
  double id_C_22_tmp;
  double jd_C_22_tmp;
  double kd_C_22_tmp;
  double ld_C_22_tmp;
  double md_C_22_tmp;
  double nd_C_22_tmp;
  double od_C_22_tmp;
  double pd_C_22_tmp;
  double qd_C_22_tmp;
  double rd_C_22_tmp;
  double sd_C_22_tmp;
  double td_C_22_tmp;
  double ud_C_22_tmp;
  double vd_C_22_tmp;
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
  double g_C_22_tmp_tmp_tmp;
  double wd_C_22_tmp;
  double xd_C_22_tmp;
  double yd_C_22_tmp;
  double ae_C_22_tmp;
  double be_C_22_tmp;
  double ce_C_22_tmp;
  double de_C_22_tmp;
  double ee_C_22_tmp;
  double fe_C_22_tmp;
  double ge_C_22_tmp;
  double he_C_22_tmp;
  double ie_C_22_tmp;
  double je_C_22_tmp;
  double ke_C_22_tmp;
  double le_C_22_tmp;
  double me_C_22_tmp;
  double ne_C_22_tmp;
  double d95;
  double d96;
  a_tmp = cos(theta2);
  b_a_tmp = sin(theta2);
  c_a_tmp = sin(theta1);
  d_a_tmp = cos(theta1);
  e_a_tmp = sin(theta3);
  f_a_tmp = d_a_tmp * a_tmp;
  g_a_tmp = cos(theta3);
  a_tmp_tmp = d_a_tmp * g_a_tmp;
  b_a_tmp_tmp = f_a_tmp * e_a_tmp;
  c_a_tmp_tmp = a_tmp_tmp * b_a_tmp;
  h_a_tmp = b_a_tmp_tmp + c_a_tmp_tmp;
  d_a_tmp_tmp = d_a_tmp * b_a_tmp;
  e_a_tmp_tmp = d_a_tmp_tmp * e_a_tmp;
  f_a_tmp_tmp = f_a_tmp * g_a_tmp;
  i_a_tmp = e_a_tmp_tmp - f_a_tmp_tmp;
  g_a_tmp_tmp = a_tmp * c_a_tmp;
  h_a_tmp_tmp = g_a_tmp * c_a_tmp;
  i_a_tmp_tmp = g_a_tmp_tmp * e_a_tmp;
  j_a_tmp_tmp = h_a_tmp_tmp * b_a_tmp;
  j_a_tmp = i_a_tmp_tmp + j_a_tmp_tmp;
  k_a_tmp = a_tmp * g_a_tmp;
  k_a_tmp_tmp = c_a_tmp * b_a_tmp;
  l_a_tmp_tmp = k_a_tmp_tmp * e_a_tmp;
  m_a_tmp_tmp = k_a_tmp * c_a_tmp;
  l_a_tmp = l_a_tmp_tmp - m_a_tmp_tmp;
  n_a_tmp_tmp = a_tmp * e_a_tmp;
  o_a_tmp_tmp = g_a_tmp * b_a_tmp;
  m_a_tmp = n_a_tmp_tmp + o_a_tmp_tmp;
  p_a_tmp_tmp = b_a_tmp * e_a_tmp;
  n_a_tmp = k_a_tmp - p_a_tmp_tmp;
  a_tmp_tmp_tmp_tmp = 3.0 * c_a_tmp;
  a_tmp_tmp_tmp = a_tmp_tmp_tmp_tmp * b_a_tmp;
  q_a_tmp_tmp = a_tmp_tmp_tmp * e_a_tmp;
  b_a_tmp_tmp_tmp = 3.0 * a_tmp;
  c_a_tmp_tmp_tmp = b_a_tmp_tmp_tmp * g_a_tmp;
  r_a_tmp_tmp = c_a_tmp_tmp_tmp * c_a_tmp;
  s_a_tmp_tmp = q_a_tmp_tmp / 20.0;
  t_a_tmp_tmp = r_a_tmp_tmp / 20.0;
  o_a_tmp = s_a_tmp_tmp - t_a_tmp_tmp;
  p_a_tmp = 3.0 * d_a_tmp;
  b_a_tmp_tmp_tmp_tmp = p_a_tmp * b_a_tmp;
  d_a_tmp_tmp_tmp = b_a_tmp_tmp_tmp_tmp * e_a_tmp;
  u_a_tmp_tmp = d_a_tmp_tmp_tmp / 20.0;
  e_a_tmp_tmp_tmp = p_a_tmp * a_tmp;
  f_a_tmp_tmp_tmp = e_a_tmp_tmp_tmp * g_a_tmp;
  v_a_tmp_tmp = f_a_tmp_tmp_tmp / 20.0;
  q_a_tmp = u_a_tmp_tmp - v_a_tmp_tmp;
  d0 = the * the;
  d1 = phi * psi;
  d2 = d1 * d0;
  d3 = d2 * h_a_tmp;
  d4 = d2 * i_a_tmp;
  d5 = d3 * n_a_tmp / 20.0 + d4 * m_a_tmp / 20.0;
  d6 = psi * psi;
  d7 = phi * d6;
  d8 = d7 * the;
  d9 = d8 * h_a_tmp;
  d10 = d8 * i_a_tmp;
  d11 = phi * the;
  d12 = d2 * d_a_tmp;
  d13 = d12 * c_a_tmp;
  d14 = d13 / 10.0;
  d15 = d9 * j_a_tmp;
  d16 = d15 / 20.0;
  d17 = d10 * l_a_tmp;
  d18 = d17 / 20.0;
  d19 = d8 * d_a_tmp;
  d20 = d19 * c_a_tmp;
  d21 = phi * phi;
  d22 = 7.0 * d21;
  d23 = 3.0 * g_a_tmp;
  d24 = 3.0 * b_a_tmp;
  C_22_tmp = d21 * d0;
  b_C_22_tmp = psi * the;
  c_C_22_tmp = d21 * the;
  d_C_22_tmp = d6 * d0;
  e_C_22_tmp = C_22_tmp * d_a_tmp;
  f_C_22_tmp = 3.0 * psi * the;
  C_22_tmp_tmp = d21 * d6;
  g_C_22_tmp = C_22_tmp_tmp * d_a_tmp;
  h_C_22_tmp = b_C_22_tmp * h_a_tmp;
  i_C_22_tmp = b_C_22_tmp * i_a_tmp;
  j_C_22_tmp = 63.0 * d21;
  b_C_22_tmp_tmp = d_C_22_tmp * d_a_tmp;
  k_C_22_tmp = b_C_22_tmp_tmp * c_a_tmp;
  l_C_22_tmp = b_C_22_tmp * d_a_tmp;
  m_C_22_tmp = C_22_tmp * c_a_tmp;
  n_C_22_tmp = l_C_22_tmp * b_a_tmp;
  o_C_22_tmp = d7 * d0;
  c_C_22_tmp_tmp = j_C_22_tmp * d6;
  p_C_22_tmp = c_C_22_tmp_tmp * a_tmp;
  q_C_22_tmp = j_C_22_tmp * d0 * a_tmp;
  r_C_22_tmp = f_C_22_tmp * d_a_tmp;
  s_C_22_tmp = l_C_22_tmp * a_tmp;
  t_C_22_tmp = rt_powd_snf(the, 3.0);
  d_C_22_tmp_tmp = phi * phi * psi * a_tmp;
  e_C_22_tmp_tmp = c_C_22_tmp * a_tmp;
  u_C_22_tmp = d_C_22_tmp_tmp + e_C_22_tmp_tmp;
  f_C_22_tmp_tmp = phi * phi * psi * b_a_tmp;
  g_C_22_tmp_tmp = c_C_22_tmp * b_a_tmp;
  v_C_22_tmp = f_C_22_tmp_tmp + g_C_22_tmp_tmp;
  h_C_22_tmp_tmp = phi * phi * psi * the * j_a_tmp;
  w_C_22_tmp = C_22_tmp * j_a_tmp + h_C_22_tmp_tmp;
  i_C_22_tmp_tmp = phi * phi * psi * the * l_a_tmp;
  x_C_22_tmp = C_22_tmp * l_a_tmp + i_C_22_tmp_tmp;
  y_C_22_tmp = 3.0 * phi * psi;
  ab_C_22_tmp = phi * phi * psi * m_a_tmp + c_C_22_tmp * m_a_tmp;
  bb_C_22_tmp = phi * phi * psi * n_a_tmp + c_C_22_tmp * n_a_tmp;
  cb_C_22_tmp = g_C_22_tmp * a_tmp;
  db_C_22_tmp = cb_C_22_tmp - e_C_22_tmp * a_tmp;
  eb_C_22_tmp = g_C_22_tmp * b_a_tmp - e_C_22_tmp * b_a_tmp;
  fb_C_22_tmp = g_C_22_tmp * m_a_tmp - e_C_22_tmp * m_a_tmp;
  gb_C_22_tmp = g_C_22_tmp * n_a_tmp - e_C_22_tmp * n_a_tmp;
  j_C_22_tmp_tmp = m_C_22_tmp * b_a_tmp;
  k_C_22_tmp_tmp = phi * phi * psi * the * sin(theta1) * b_a_tmp;
  hb_C_22_tmp = j_C_22_tmp_tmp + k_C_22_tmp_tmp;
  l_C_22_tmp_tmp = C_22_tmp * a_tmp;
  m_C_22_tmp_tmp = phi * phi * psi * the * a_tmp;
  ib_C_22_tmp = l_C_22_tmp_tmp * c_a_tmp + m_C_22_tmp_tmp * c_a_tmp;
  jb_C_22_tmp = 3.0 * phi * the;
  kb_C_22_tmp = 7.0 * phi * d6;
  lb_C_22_tmp = o_C_22_tmp * h_a_tmp;
  mb_C_22_tmp = o_C_22_tmp * i_a_tmp;
  nb_C_22_tmp = y_C_22_tmp * d_a_tmp;
  n_C_22_tmp_tmp = 7.0 * phi * d0;
  ob_C_22_tmp = n_C_22_tmp_tmp * q_a_tmp * (3.0 * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 20.0;
  o_C_22_tmp_tmp = b_a_tmp_tmp_tmp * c_a_tmp;
  pb_C_22_tmp = o_C_22_tmp_tmp * e_a_tmp / 20.0 + d23 * c_a_tmp * b_a_tmp / 20.0;
  qb_C_22_tmp = 63.0 * phi * d0 * d_a_tmp * a_tmp * b_a_tmp / 8000.0;
  rb_C_22_tmp = lb_C_22_tmp * n_a_tmp / 20.0;
  sb_C_22_tmp = mb_C_22_tmp * m_a_tmp / 20.0;
  tb_C_22_tmp = f_C_22_tmp * c_a_tmp;
  ub_C_22_tmp = kb_C_22_tmp * the * q_a_tmp * o_a_tmp / 20.0;
  vb_C_22_tmp = d20 / 4.0;
  wb_C_22_tmp = n_C_22_tmp * u_C_22_tmp;
  xb_C_22_tmp = s_C_22_tmp * v_C_22_tmp;
  yb_C_22_tmp = i_C_22_tmp * ab_C_22_tmp;
  ac_C_22_tmp = h_C_22_tmp * bb_C_22_tmp;
  bc_C_22_tmp = jb_C_22_tmp * d_a_tmp;
  cc_C_22_tmp = 337.0 * phi * d6;
  dc_C_22_tmp = r_C_22_tmp * b_a_tmp;
  ec_C_22_tmp = C_22_tmp_tmp * d0 * d_a_tmp * c_a_tmp / 40.0;
  fc_C_22_tmp = phi * phi * psi * t_C_22_tmp;
  gc_C_22_tmp = h_C_22_tmp * w_C_22_tmp;
  hc_C_22_tmp = i_C_22_tmp * x_C_22_tmp;
  ic_C_22_tmp = n_C_22_tmp * hb_C_22_tmp;
  jc_C_22_tmp = s_C_22_tmp * ib_C_22_tmp;
  C_22[0] = (((((((((((((((((((((((((((((((((((((((((((((((phi * d5 / 2.0 + phi *
    (d9 * n_a_tmp / 20.0 + d10 * m_a_tmp / 20.0) / 2.0) + d11 * ((d3 * j_a_tmp /
    20.0 + d4 * l_a_tmp / 20.0) - d14) / 2.0) + d11 * ((d16 + d18) - d20 / 10.0)
    / 2.0) + d11 * ((d12 * (a_tmp * a_tmp) * c_a_tmp / 20.0 - d14) + d13 *
    (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + d11 * ((d19 * (a_tmp * a_tmp) * c_a_tmp
    / 20.0 - d20 / 10.0) + d20 * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + d22 * d6 *
    (q_a_tmp_tmp / 20.0 - r_a_tmp_tmp / 20.0) * (b_a_tmp_tmp_tmp * e_a_tmp /
    20.0 + d23 * b_a_tmp / 20.0) / 20.0) - d22 * d0 * (a_tmp_tmp_tmp * e_a_tmp /
    20.0 - c_a_tmp_tmp_tmp * c_a_tmp / 20.0) * (3.0 * a_tmp * sin(theta3) / 20.0
    + 3.0 * g_a_tmp * sin(theta2) / 20.0) / 20.0) + 7.0 * d21 * (the * the) *
    (b_a_tmp_tmp_tmp * cos(theta3) / 20.0 - d24 * e_a_tmp / 20.0) * (3.0 * cos
    (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) /
    10.0) + tb_C_22_tmp * (e_C_22_tmp + d21 * psi * the * d_a_tmp) / 20.0) -
    l_C_22_tmp * (m_C_22_tmp + d21 * psi * the * c_a_tmp) / 40.0) - yb_C_22_tmp /
    40.0) - ac_C_22_tmp / 40.0) - nb_C_22_tmp * (phi * (psi * psi) * the * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) / 20.0 +
    phi * (psi * psi) * the * (cos(theta1) * sin(theta2) * sin(theta3) - cos
    (theta1) * cos(theta2) * cos(theta3)) * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2)) / 20.0) / 2.0) + bc_C_22_tmp * d5 / 2.0) +
    ob_C_22_tmp) + 7.0 * (phi * phi) * (psi * psi) * q_a_tmp * o_a_tmp / 20.0) -
    d_C_22_tmp * h_a_tmp * j_a_tmp / 20.0) - d_C_22_tmp * i_a_tmp * l_a_tmp /
    20.0) + q_C_22_tmp * b_a_tmp / 8000.0) + k_C_22_tmp / 4.0) + 7.0 * (phi *
    phi) * (psi * psi) * pb_C_22_tmp * o_a_tmp / 10.0) + f_C_22_tmp *
    fb_C_22_tmp * i_a_tmp / 40.0) + f_C_22_tmp * gb_C_22_tmp * h_a_tmp / 40.0) -
    gc_C_22_tmp / 40.0) - hc_C_22_tmp / 40.0) - p_C_22_tmp * (c_a_tmp * c_a_tmp)
    * b_a_tmp / 8000.0) - k_C_22_tmp * (b_a_tmp * b_a_tmp) / 20.0) - ic_C_22_tmp
    / 40.0) - fc_C_22_tmp * d_a_tmp * c_a_tmp / 40.0) - qb_C_22_tmp) -
    wb_C_22_tmp / 40.0) - rb_C_22_tmp) - sb_C_22_tmp) + xb_C_22_tmp / 40.0) -
    ec_C_22_tmp) - p_C_22_tmp * c_a_tmp * b_a_tmp / 8000.0) + q_C_22_tmp *
                       c_a_tmp * b_a_tmp / 8000.0) + dc_C_22_tmp * db_C_22_tmp /
                      40.0) - d16) - d18) + ub_C_22_tmp) + vb_C_22_tmp) -
                 r_C_22_tmp * a_tmp * eb_C_22_tmp / 40.0) - jc_C_22_tmp / 40.0)
               + c_C_22_tmp_tmp * d_a_tmp * (a_tmp * a_tmp) * c_a_tmp / 8000.0)
              - b_C_22_tmp_tmp * (a_tmp * a_tmp) * c_a_tmp / 20.0) - cc_C_22_tmp
             * the * d_a_tmp * (a_tmp * a_tmp) * c_a_tmp / 8000.0) - phi * (psi *
    psi) * the * cos(theta1) * sin(theta1) * (b_a_tmp * b_a_tmp) / 20.0;
  d3 = C_22_tmp_tmp * the;
  d4 = rt_powd_snf(phi, 3.0);
  d9 = d4 * t_C_22_tmp;
  d10 = 3.0 * d6;
  d12 = d4 * psi;
  d13 = d12 * d0;
  d14 = d1 * d_a_tmp;
  d19 = d14 * (phi * phi * (the * the) * cos(theta1) + phi * phi * psi * the *
               cos(theta1)) / 10.0;
  d25 = d1 * c_a_tmp;
  d26 = d4 * d6;
  d27 = d1 * a_tmp;
  d28 = d25 * b_a_tmp;
  d29 = d27 * c_a_tmp;
  d30 = d12 * the;
  d31 = d_C_22_tmp * c_a_tmp;
  d32 = d31 * h_a_tmp - g_C_22_tmp * j_a_tmp;
  d31 = d31 * i_a_tmp - g_C_22_tmp * l_a_tmp;
  d33 = cb_C_22_tmp * c_a_tmp - b_C_22_tmp_tmp * a_tmp * c_a_tmp;
  d34 = g_C_22_tmp * c_a_tmp;
  d35 = d34 * b_a_tmp - k_C_22_tmp * b_a_tmp;
  d36 = psi * d0;
  d37 = phi * phi * psi * d0;
  d38 = 3.0 * d21;
  d39 = d37 / 20.0;
  d40 = phi * d0;
  d41 = d38 * the;
  d42 = d22 * the;
  d43 = d22 * psi;
  d44 = phi * (d10 * d0 / 25.0 - d38 * d6 / 25.0) / 2.0;
  d10 = d10 * t_C_22_tmp / 50.0;
  d45 = d11 * m_a_tmp;
  d46 = d11 * n_a_tmp;
  d47 = d11 * a_tmp;
  d48 = rt_powd_snf(phi, 4.0);
  d49 = d1 * j_a_tmp;
  d50 = d1 * l_a_tmp;
  d51 = jb_C_22_tmp * (d40 / 20.0 + d39) / 400.0;
  d52 = d11 * b_a_tmp;
  d53 = C_22_tmp / 20.0 + phi * phi * psi * the / 20.0;
  d54 = d28 * u_C_22_tmp / 20.0 - d29 * v_C_22_tmp / 20.0;
  d55 = phi * d54 / 2.0;
  d56 = 7.0 * the * q_a_tmp / 40.0;
  d57 = ((d26 * j_a_tmp * n_a_tmp / 20.0 + d26 * l_a_tmp * m_a_tmp / 20.0) + d50
         * ab_C_22_tmp / 20.0) + d49 * bb_C_22_tmp / 20.0;
  d58 = phi * d57 / 2.0;
  d59 = d30 * j_a_tmp * n_a_tmp / 20.0 + d30 * l_a_tmp * m_a_tmp / 20.0;
  d60 = phi * d59 / 2.0;
  d61 = d43 * o_a_tmp / 40.0;
  d62 = d42 * o_a_tmp / 40.0;
  d63 = d41 * d53 / 400.0;
  d64 = 21.0 * the * d_a_tmp;
  d65 = 3.0 * the * c_a_tmp;
  d66 = 29.0 * d48 * t_C_22_tmp / 200.0;
  d67 = (d19 - d13 / 20.0) + d25 * (phi * phi * (the * the) * sin(theta1) + phi *
    phi * psi * the * sin(theta1)) / 20.0;
  d68 = phi * d67 / 2.0;
  d69 = phi * (6.0 * d4 * psi * d0 / 25.0 - y_C_22_tmp * (C_22_tmp + phi * phi *
    psi * the) / 25.0) / 2.0;
  d70 = d28 * hb_C_22_tmp;
  d71 = 7.0 * d4;
  d72 = d71 * d6;
  d73 = 7.0 * phi * psi;
  d74 = d73 * the;
  d75 = 21.0 * d21;
  p_C_22_tmp = 21.0 * (phi * phi) * the * b_a_tmp;
  p_C_22_tmp_tmp = 3.0 * (phi * phi) * psi * a_tmp * c_a_tmp / 20.0;
  q_C_22_tmp_tmp = d41 * a_tmp * c_a_tmp / 20.0;
  q_C_22_tmp = p_C_22_tmp_tmp + q_C_22_tmp_tmp;
  r_C_22_tmp_tmp = 7.0 * psi * the;
  u_C_22_tmp = r_C_22_tmp_tmp * d_a_tmp;
  v_C_22_tmp = phi * phi * psi * o_a_tmp + c_C_22_tmp * o_a_tmp;
  cb_C_22_tmp = 3.0 * cos(theta2) * sin(theta3) / 10.0;
  kc_C_22_tmp = 3.0 * cos(theta3) * sin(theta2) / 10.0;
  lc_C_22_tmp = u_C_22_tmp * v_C_22_tmp;
  s_C_22_tmp_tmp = d24 / 10.0;
  mc_C_22_tmp = (cb_C_22_tmp - s_C_22_tmp_tmp) + kc_C_22_tmp;
  nc_C_22_tmp = u_C_22_tmp * q_C_22_tmp;
  t_C_22_tmp_tmp = cb_C_22_tmp + kc_C_22_tmp;
  u_C_22_tmp_tmp = 63.0 * d4;
  oc_C_22_tmp = u_C_22_tmp_tmp * d6;
  v_C_22_tmp_tmp = d43 * d0;
  pc_C_22_tmp = v_C_22_tmp_tmp * c_a_tmp * q_a_tmp;
  qc_C_22_tmp = 7.0 * (phi * phi) * (psi * psi) * the * c_a_tmp * q_a_tmp;
  rc_C_22_tmp = d74 * c_a_tmp * q_a_tmp;
  sc_C_22_tmp = d74 * d_a_tmp * o_a_tmp;
  w_C_22_tmp_tmp = 21.0 * (phi * phi) * psi * d0;
  tc_C_22_tmp = w_C_22_tmp_tmp * d_a_tmp * a_tmp * c_a_tmp;
  x_C_22_tmp_tmp = d75 * d6;
  uc_C_22_tmp = x_C_22_tmp_tmp * the * d_a_tmp * a_tmp * c_a_tmp;
  vc_C_22_tmp = c_C_22_tmp_tmp * the;
  wc_C_22_tmp = d38 * d0;
  C_22_tmp_tmp_tmp = d40 * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
    (theta3) * sin(theta2) / 20.0);
  b_C_22_tmp_tmp_tmp = d37 * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
    (theta3) * sin(theta2) / 20.0);
  y_C_22_tmp_tmp = C_22_tmp_tmp_tmp + b_C_22_tmp_tmp_tmp;
  xc_C_22_tmp = 7.0 * phi * the * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
    cos(theta3) * sin(theta2) / 20.0) * y_C_22_tmp_tmp / 40.0;
  yc_C_22_tmp = d43 * the;
  c_C_22_tmp_tmp_tmp = wc_C_22_tmp * b_a_tmp;
  d_C_22_tmp_tmp_tmp = 3.0 * (phi * phi) * psi * the * b_a_tmp;
  ab_C_22_tmp_tmp = c_C_22_tmp_tmp_tmp / 20.0 + d_C_22_tmp_tmp_tmp / 20.0;
  ad_C_22_tmp = p_C_22_tmp * ab_C_22_tmp_tmp / 800.0;
  bb_C_22_tmp_tmp = d42 * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
    (theta3) * sin(theta2) / 20.0);
  e_C_22_tmp_tmp_tmp = C_22_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
    cos(theta3) * sin(theta2) / 20.0);
  f_C_22_tmp_tmp_tmp = phi * phi * psi * the * (3.0 * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0);
  cb_C_22_tmp_tmp = e_C_22_tmp_tmp_tmp + f_C_22_tmp_tmp_tmp;
  db_C_22_tmp_tmp = bb_C_22_tmp_tmp * cb_C_22_tmp_tmp;
  bd_C_22_tmp = db_C_22_tmp_tmp / 40.0;
  cd_C_22_tmp = 21.0 * (phi * phi) * psi * the;
  dd_C_22_tmp = 21.0 * phi * psi;
  ed_C_22_tmp = yc_C_22_tmp * o_a_tmp * v_C_22_tmp / 40.0;
  fd_C_22_tmp = cd_C_22_tmp * a_tmp * c_a_tmp;
  gd_C_22_tmp = fd_C_22_tmp * q_C_22_tmp / 800.0;
  q_C_22_tmp = p_C_22_tmp * q_C_22_tmp / 400.0;
  v_C_22_tmp = d42 * v_C_22_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
    cos(theta3) * sin(theta2) / 20.0) / 20.0;
  hd_C_22_tmp = 7.0 * (phi * phi) * (psi * psi) * the * q_a_tmp;
  eb_C_22_tmp_tmp = dd_C_22_tmp * the;
  id_C_22_tmp = eb_C_22_tmp_tmp * d_a_tmp * a_tmp / 800.0;
  jd_C_22_tmp = lc_C_22_tmp * mc_C_22_tmp / 40.0;
  kd_C_22_tmp = nc_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 40.0;
  ld_C_22_tmp = vc_C_22_tmp * d_a_tmp * a_tmp;
  md_C_22_tmp = pc_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 40.0;
  nd_C_22_tmp = qc_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 40.0;
  od_C_22_tmp = rc_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 40.0;
  pc_C_22_tmp = pc_C_22_tmp * mc_C_22_tmp / 40.0;
  qc_C_22_tmp = qc_C_22_tmp * mc_C_22_tmp / 40.0;
  pd_C_22_tmp = sc_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 40.0;
  rc_C_22_tmp = rc_C_22_tmp * mc_C_22_tmp / 40.0;
  sc_C_22_tmp = sc_C_22_tmp * mc_C_22_tmp / 40.0;
  qd_C_22_tmp = tc_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 800.0;
  rd_C_22_tmp = uc_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 800.0;
  tc_C_22_tmp = tc_C_22_tmp * mc_C_22_tmp / 800.0;
  uc_C_22_tmp = uc_C_22_tmp * mc_C_22_tmp / 800.0;
  sd_C_22_tmp = ld_C_22_tmp * c_a_tmp * b_a_tmp / 8000.0;
  td_C_22_tmp = d72 * the;
  ud_C_22_tmp = e_a_tmp_tmp_tmp * e_a_tmp / 20.0 + p_a_tmp * g_a_tmp * b_a_tmp /
    20.0;
  vd_C_22_tmp = oc_C_22_tmp * the;
  C_22[3] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((d66 - d10) - d55) - phi * (((((d8 * (d_a_tmp * d_a_tmp) / 10.0 - d8 *
    (c_a_tmp * c_a_tmp) / 10.0) - d8 * (h_a_tmp * h_a_tmp) / 20.0) - d8 *
    (i_a_tmp * i_a_tmp) / 20.0) + d8 * (j_a_tmp * j_a_tmp) / 20.0) + d8 *
    (l_a_tmp * l_a_tmp) / 20.0) / 2.0) - phi * (((((phi * (psi * psi) * the *
    (d_a_tmp * d_a_tmp) / 10.0 - phi * (psi * psi) * the * (c_a_tmp * c_a_tmp) /
    10.0) - phi * (psi * psi) * the * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) /
    20.0) - phi * (psi * psi) * the * (d_a_tmp * d_a_tmp) * (b_a_tmp * b_a_tmp) /
    20.0) + d8 * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + phi * (psi *
    psi) * the * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - d56)
    - phi * (d3 * j_a_tmp * n_a_tmp / 20.0 + d3 * l_a_tmp * m_a_tmp / 20.0)) +
    phi * (d9 * (m_a_tmp * m_a_tmp) / 20.0 + d9 * (n_a_tmp * n_a_tmp) / 20.0) /
    2.0) - phi * (((C_22_tmp_tmp * (d_a_tmp * d_a_tmp) / 10.0 - d_C_22_tmp *
    (d_a_tmp * d_a_tmp) / 20.0) + C_22_tmp_tmp * (c_a_tmp * c_a_tmp) / 20.0) -
    d_C_22_tmp * (c_a_tmp * c_a_tmp) / 10.0) / 2.0) + d44) - phi * ((((d19 - d13
    * (m_a_tmp * m_a_tmp) / 20.0) - d13 * (n_a_tmp * n_a_tmp) / 20.0) + d1 *
    w_C_22_tmp * j_a_tmp / 20.0) + d1 * x_C_22_tmp * l_a_tmp / 20.0) / 2.0) -
    d68) + d69) - d58) - 3.0 * phi * (((d1 * b_a_tmp * d33 / 20.0 - d27 * d35 /
    20.0) - d28 * db_C_22_tmp / 20.0) + d29 * eb_C_22_tmp / 20.0) / 2.0) - d60)
    - the * ((psi * psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0 + psi * psi *
    (the * the) * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 20.0) + psi * psi *
    (the * the) * (d_a_tmp * d_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - 3.0
    * phi * (((d1 * n_a_tmp * d32 / 20.0 + d1 * m_a_tmp * d31 / 20.0) - d1 *
    fb_C_22_tmp * l_a_tmp / 20.0) - d1 * gb_C_22_tmp * j_a_tmp / 20.0) / 2.0) -
    phi * (((((phi * phi * (psi * psi) * (d_a_tmp * d_a_tmp) / 10.0 - psi * psi *
    (the * the) * (c_a_tmp * c_a_tmp) / 10.0) - d_C_22_tmp * (h_a_tmp * h_a_tmp)
    / 20.0) - d_C_22_tmp * (i_a_tmp * i_a_tmp) / 20.0) + C_22_tmp_tmp * (j_a_tmp
    * j_a_tmp) / 20.0) + C_22_tmp_tmp * (l_a_tmp * l_a_tmp) / 20.0) / 2.0) - 3.0
    * phi * (d46 * d32 / 20.0 + d45 * d31 / 20.0) / 2.0) - phi * (((((phi * phi *
    (psi * psi) * (d_a_tmp * d_a_tmp) / 10.0 - psi * psi * (the * the) *
    (c_a_tmp * c_a_tmp) / 10.0) - psi * psi * (the * the) * (d_a_tmp * d_a_tmp) *
    (a_tmp * a_tmp) / 20.0) + C_22_tmp_tmp * (a_tmp * a_tmp) * (c_a_tmp *
    c_a_tmp) / 20.0) - psi * psi * (the * the) * (d_a_tmp * d_a_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) + phi * phi * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) / 2.0) + phi * (d9 * (a_tmp * a_tmp) / 20.0 + d9 * (b_a_tmp
    * b_a_tmp) / 20.0) / 2.0) - the * (psi * psi * (the * the) * (d_a_tmp *
    d_a_tmp) / 20.0 + psi * psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0) /
    2.0) - 3.0 * phi * (d52 * d33 / 20.0 - d47 * d35 / 20.0) / 2.0) - phi * (phi
    * (psi * psi) * the * (d_a_tmp * d_a_tmp) / 20.0 - phi * (psi * psi) * the *
    (c_a_tmp * c_a_tmp) / 20.0) / 2.0) - the * ((psi * psi * (the * the) *
    (c_a_tmp * c_a_tmp) / 10.0 + psi * psi * (the * the) * (h_a_tmp * h_a_tmp) /
    20.0) + psi * psi * (the * the) * (i_a_tmp * i_a_tmp) / 20.0) / 2.0) - phi *
    ((((d19 - d13 * (a_tmp * a_tmp) / 20.0) - d13 * (b_a_tmp * b_a_tmp) / 20.0)
    + d70 / 20.0) + d29 * ib_C_22_tmp / 20.0) / 2.0) + d61) - d11 * ((((d36 *
    (h_a_tmp * h_a_tmp) / 20.0 + d36 * (i_a_tmp * i_a_tmp) / 20.0) + d36 *
    (c_a_tmp * c_a_tmp) / 10.0) - d37 * (m_a_tmp * m_a_tmp) / 20.0) - d37 *
    (n_a_tmp * n_a_tmp) / 20.0) / 2.0) + d62) + d65 * d5 / 2.0) - d63) - d11 *
    ((((psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0 + d36 * (d_a_tmp *
    d_a_tmp) * (a_tmp * a_tmp) / 20.0) + psi * (the * the) * (d_a_tmp * d_a_tmp)
    * (b_a_tmp * b_a_tmp) / 20.0) - d37 * (a_tmp * a_tmp) / 20.0) - d37 *
    (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + d64 * a_tmp / 800.0) - d51) - d11 *
    (3.0 * psi * d0 / 25.0 - 6.0 * d21 * psi * d0 / 25.0) / 2.0) + d72 *
    (o_a_tmp * o_a_tmp) / 40.0) - d11 * ((psi * (the * the) * (d_a_tmp * d_a_tmp)
    / 20.0 - d39) + psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0) / 2.0) - d74
    * (u_a_tmp_tmp - v_a_tmp_tmp) / 40.0) - kb_C_22_tmp * d0 * (q_a_tmp *
    q_a_tmp) / 40.0) - 7.0 * (phi * phi) * (psi * psi) * the * (q_a_tmp *
    q_a_tmp) / 40.0) - 3.0 * psi * the * sin(theta1) * (lb_C_22_tmp * n_a_tmp /
    10.0 + mb_C_22_tmp * m_a_tmp / 10.0) / 2.0) - d75 * psi * a_tmp * c_a_tmp /
    800.0) - 21.0 * d21 * the * a_tmp * c_a_tmp / 800.0) - 21.0 * phi * the *
    b_a_tmp * (3.0 * phi * (the * the) * b_a_tmp / 20.0 + d38 * psi * (the * the)
    * b_a_tmp / 20.0) / 800.0) + nb_C_22_tmp * (C_22_tmp_tmp * the *
    (g_a_tmp_tmp * e_a_tmp + h_a_tmp_tmp * b_a_tmp) * (cos(theta2) * cos(theta3)
    - sin(theta2) * sin(theta3)) / 20.0 + C_22_tmp_tmp * the * (k_a_tmp_tmp *
    e_a_tmp - k_a_tmp * c_a_tmp) * (cos(theta2) * sin(theta3) + cos(theta3) *
    sin(theta2)) / 20.0) / 2.0) + oc_C_22_tmp * (a_tmp * a_tmp) * (c_a_tmp *
    c_a_tmp) / 16000.0) + ob_C_22_tmp) - xc_C_22_tmp) - q_C_22_tmp) + v_C_22_tmp)
    + d73 * t_C_22_tmp * (q_a_tmp * q_a_tmp) / 40.0) - ad_C_22_tmp) -
    bd_C_22_tmp) + nc_C_22_tmp * mc_C_22_tmp / 40.0) - hd_C_22_tmp * pb_C_22_tmp
    / 20.0) - 7.0 * (phi * phi) * (psi * psi) * the * ud_C_22_tmp * o_a_tmp /
    20.0) - lc_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 40.0) - qb_C_22_tmp) -
    rb_C_22_tmp) - sb_C_22_tmp) + id_C_22_tmp) - jd_C_22_tmp) + td_C_22_tmp *
    o_a_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin
    (theta2) / 20.0) / 20.0) + 63.0 * phi * psi * t_C_22_tmp * (d_a_tmp *
    d_a_tmp) * (a_tmp * a_tmp) / 16000.0) + kd_C_22_tmp) - 63.0 * phi * d6 * d0 *
                     (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 16000.0) -
                    vc_C_22_tmp * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) /
                    16000.0) + ed_C_22_tmp) - vd_C_22_tmp * a_tmp * c_a_tmp *
                  b_a_tmp / 8000.0) + md_C_22_tmp) + nd_C_22_tmp) + od_C_22_tmp)
              + pc_C_22_tmp) + qc_C_22_tmp) - pd_C_22_tmp) + rc_C_22_tmp) -
          sc_C_22_tmp) + gd_C_22_tmp) - qd_C_22_tmp) - rd_C_22_tmp) -
      tc_C_22_tmp) - uc_C_22_tmp) + sd_C_22_tmp;
  d5 = wc_C_22_tmp / 400.0;
  d8 = d34 - k_C_22_tmp;
  d19 = d11 * c_a_tmp;
  d20 /= 5.0;
  d39 = d73 * d0;
  d41 = d39 * q_a_tmp;
  d42 = 3.0 * d4;
  d76 = 3.0 * d48;
  d77 = d76 * d6 * the;
  d78 = d42 * psi * the;
  d79 = d78 / 25.0 - 6.0 * phi * the * (phi * phi * psi + phi * phi * the) /
    25.0;
  d80 = d77 / 50.0;
  d81 = d11 * d79 / 2.0;
  d82 = r_C_22_tmp_tmp * q_a_tmp / 40.0;
  d83 = d13 * j_a_tmp * n_a_tmp;
  d84 = d13 * l_a_tmp * m_a_tmp;
  d85 = d11 * (d83 / 20.0 + d84 / 20.0) / 2.0;
  d86 = 7.0 * (phi * phi) * (the * the) * (3.0 * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 40.0;
  d75 = d75 * d0 * b_a_tmp / 800.0;
  d87 = d11 * (d52 * ib_C_22_tmp / 20.0 - d47 * hb_C_22_tmp / 20.0) / 2.0;
  d88 = d41 / 40.0;
  d89 = yc_C_22_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3)
                       * sin(theta2) / 20.0) / 40.0;
  d90 = 21.0 * psi * the * d_a_tmp * a_tmp / 800.0;
  d91 = cd_C_22_tmp * b_a_tmp / 800.0;
  d92 = d11 * (h_C_22_tmp_tmp * n_a_tmp / 20.0 + i_C_22_tmp_tmp * m_a_tmp / 20.0);
  d93 = d_a_tmp * ((e_a_tmp_tmp_tmp / 10.0 + d_a_tmp_tmp_tmp / 10.0) -
                   f_a_tmp_tmp_tmp / 10.0);
  d94 = c_a_tmp * ((o_C_22_tmp_tmp / 10.0 + q_a_tmp_tmp / 10.0) - r_a_tmp_tmp /
                   10.0);
  g_C_22_tmp_tmp_tmp = j_C_22_tmp * psi;
  h_C_22_tmp_tmp = g_C_22_tmp_tmp_tmp * t_C_22_tmp;
  hb_C_22_tmp = h_C_22_tmp_tmp * d_a_tmp;
  lb_C_22_tmp = y_C_22_tmp * d0 * d_a_tmp;
  mb_C_22_tmp = 7.0 * (phi * phi) * (psi * psi) * d0 * q_a_tmp;
  lc_C_22_tmp = x_C_22_tmp_tmp * d0 * d_a_tmp * a_tmp;
  i_C_22_tmp_tmp = dd_C_22_tmp * d0 * d_a_tmp;
  nc_C_22_tmp = i_C_22_tmp_tmp * a_tmp;
  wc_C_22_tmp = d39 * d_a_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
    cos(theta3) * sin(theta2) / 20.0);
  cd_C_22_tmp = i_C_22_tmp_tmp * b_a_tmp;
  dd_C_22_tmp = 21.0 * (phi * phi) * psi * t_C_22_tmp * d_a_tmp * a_tmp;
  wd_C_22_tmp = d71 * psi;
  xd_C_22_tmp = rt_powd_snf(psi, 3.0);
  yd_C_22_tmp = u_C_22_tmp_tmp * psi;
  ae_C_22_tmp = lb_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 400.0;
  be_C_22_tmp = 7.0 * psi * the * cos(theta1) * (phi * phi * (the * the) * (3.0 *
    cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) +
    phi * phi * psi * the * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
    (theta3) * sin(theta2) / 20.0)) * mc_C_22_tmp / 40.0;
  ce_C_22_tmp = mb_C_22_tmp * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) *
    sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) +
    sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 *
                   cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0;
  de_C_22_tmp = nc_C_22_tmp / 800.0;
  lb_C_22_tmp = lb_C_22_tmp * mc_C_22_tmp / 400.0;
  ee_C_22_tmp = mb_C_22_tmp * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) /
    10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
    (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos
    (theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0;
  fe_C_22_tmp = d41 * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) * sin
    (theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) +
                       sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin
    (theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) /
    40.0;
  fd_C_22_tmp = fd_C_22_tmp * ab_C_22_tmp_tmp / 400.0;
  ge_C_22_tmp = h_C_22_tmp_tmp * a_tmp * c_a_tmp * b_a_tmp / 16000.0;
  he_C_22_tmp = lc_C_22_tmp * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) *
    sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) +
    sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 *
                   cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 800.0;
  ie_C_22_tmp = wc_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 40.0;
  lc_C_22_tmp = lc_C_22_tmp * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) /
    10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
    (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos
    (theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 800.0;
  je_C_22_tmp = nc_C_22_tmp * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) *
    sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) +
    sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 *
                   cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 800.0;
  wc_C_22_tmp = wc_C_22_tmp * mc_C_22_tmp / 40.0;
  ke_C_22_tmp = cd_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 800.0;
  le_C_22_tmp = nc_C_22_tmp * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) /
    10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
    (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos
    (theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 800.0;
  cd_C_22_tmp = cd_C_22_tmp * mc_C_22_tmp / 800.0;
  me_C_22_tmp = dd_C_22_tmp * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) *
    sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) +
    sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 *
                   cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 800.0;
  dd_C_22_tmp = dd_C_22_tmp * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) /
    10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
    (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos
    (theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 800.0;
  ne_C_22_tmp = yd_C_22_tmp * d0;
  C_22[6] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((((((((((((((((((((d44 - d10) - phi * (((phi * phi * (psi * psi) *
    (d_a_tmp * d_a_tmp) / 10.0 - psi * psi * (the * the) * (d_a_tmp * d_a_tmp) /
    20.0) + phi * phi * (psi * psi) * (c_a_tmp * c_a_tmp) / 20.0) - psi * psi *
    (the * the) * (c_a_tmp * c_a_tmp) / 10.0) / 2.0) - d5) - the * ((psi * psi *
    (the * the) * (c_a_tmp * c_a_tmp) / 10.0 + psi * psi * (the * the) *
    (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 20.0) + psi * psi * (the * the) *
    (d_a_tmp * d_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - phi * (((((phi *
    phi * (psi * psi) * (d_a_tmp * d_a_tmp) / 10.0 - psi * psi * (the * the) *
    (c_a_tmp * c_a_tmp) / 10.0) - psi * psi * (the * the) * (h_a_tmp * h_a_tmp) /
    20.0) - psi * psi * (the * the) * (i_a_tmp * i_a_tmp) / 20.0) + phi * phi *
    (psi * psi) * (j_a_tmp * j_a_tmp) / 20.0) + phi * phi * (psi * psi) *
    (l_a_tmp * l_a_tmp) / 20.0) / 2.0) - phi * (((((phi * phi * (psi * psi) *
    (d_a_tmp * d_a_tmp) / 10.0 - psi * psi * (the * the) * (c_a_tmp * c_a_tmp) /
    10.0) - psi * psi * (the * the) * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) /
    20.0) + phi * phi * (psi * psi) * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) /
    20.0) - psi * psi * (the * the) * (d_a_tmp * d_a_tmp) * (b_a_tmp * b_a_tmp) /
    20.0) + phi * phi * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) /
    20.0) / 2.0) - the * (psi * psi * (the * the) * (d_a_tmp * d_a_tmp) / 20.0 +
    psi * psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0) / 2.0) - the * ((psi *
    psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0 + psi * psi * (the * the) *
    (h_a_tmp * h_a_tmp) / 20.0) + psi * psi * (the * the) * (i_a_tmp * i_a_tmp) /
    20.0) / 2.0) + jb_C_22_tmp * ((d19 * d8 / 20.0 - d11 * (g_C_22_tmp -
    e_C_22_tmp) / 20.0) + d11 * d_a_tmp * (phi * phi * (psi * psi) * (d_a_tmp *
    d_a_tmp) + psi * psi * (the * the) * (c_a_tmp * c_a_tmp)) / 10.0) / 2.0) -
    phi * the * ((((psi * (the * the) * (h_a_tmp * h_a_tmp) / 20.0 + psi * (the *
    the) * (i_a_tmp * i_a_tmp) / 20.0) + psi * (the * the) * (c_a_tmp * c_a_tmp)
    / 10.0) - phi * phi * psi * (the * the) * (m_a_tmp * m_a_tmp) / 20.0) - phi *
    phi * psi * (the * the) * (n_a_tmp * n_a_tmp) / 20.0) / 2.0) - 3.0 * (phi *
    phi) * psi * the / 400.0) - jb_C_22_tmp * ((((d11 * fb_C_22_tmp * m_a_tmp /
    20.0 + d11 * gb_C_22_tmp * n_a_tmp / 20.0) + d11 * j_a_tmp * d32 / 20.0) +
    d11 * l_a_tmp * d31 / 20.0) - phi * the * cos(theta1) * (phi * phi * (psi *
    psi) * (d_a_tmp * d_a_tmp) + psi * psi * (the * the) * (c_a_tmp * c_a_tmp)) /
    10.0) / 2.0) - d38 * the * (C_22_tmp / 20.0 + phi * phi * psi * the / 20.0) /
    400.0) - d11 * (d26 * (d_a_tmp * d_a_tmp) / 10.0 + d26 * (c_a_tmp * c_a_tmp)
    / 20.0) / 2.0) + d11 * (((d9 * j_a_tmp * n_a_tmp / 20.0 + d9 * l_a_tmp *
    m_a_tmp / 20.0) + d11 * w_C_22_tmp * n_a_tmp / 20.0) + d11 * x_C_22_tmp *
    m_a_tmp / 20.0) / 2.0) - phi * the * ((((psi * (the * the) * (c_a_tmp *
    c_a_tmp) / 10.0 + psi * (the * the) * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) /
    20.0) + psi * (the * the) * (d_a_tmp * d_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0)
    - d37 * (a_tmp * a_tmp) / 20.0) - d37 * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) -
    d11 * ((((d30 * (d_a_tmp * d_a_tmp) / 10.0 - d45 * ab_C_22_tmp / 20.0) - d46
    * bb_C_22_tmp / 20.0) + d30 * (j_a_tmp * j_a_tmp) / 20.0) + d12 * the *
    (l_a_tmp * l_a_tmp) / 20.0) / 2.0) - d11 * ((d12 * the * (d_a_tmp * d_a_tmp)
    / 10.0 - d11 * (phi * phi * psi + c_C_22_tmp) / 20.0) + d12 * the * (c_a_tmp
    * c_a_tmp) / 20.0) / 2.0) - d11 * ((((d30 * (d_a_tmp * d_a_tmp) / 10.0 - d47
    * (d_C_22_tmp_tmp + e_C_22_tmp_tmp) / 20.0) - d11 * sin(theta2) *
    (f_C_22_tmp_tmp + g_C_22_tmp_tmp) / 20.0) + d30 * (a_tmp * a_tmp) * (c_a_tmp
    * c_a_tmp) / 20.0) + d12 * the * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) /
    20.0) / 2.0) - d11 * ((rt_powd_snf(phi, 3.0) * (psi * psi) * (d_a_tmp *
    d_a_tmp) / 10.0 + d26 * (j_a_tmp * j_a_tmp) / 20.0) + d26 * (l_a_tmp *
    l_a_tmp) / 20.0) / 2.0) - d80) - d82) - d81) + d85) - d86) + jb_C_22_tmp *
    (d25 * d8 / 20.0 + d14 * (phi * phi * (psi * psi) * (d_a_tmp * d_a_tmp) +
    psi * psi * (the * the) * (c_a_tmp * c_a_tmp)) / 10.0) / 2.0) - jb_C_22_tmp *
    ((d49 * d32 / 20.0 + d50 * d31 / 20.0) - phi * psi * cos(theta1) * (phi *
    phi * (psi * psi) * (d_a_tmp * d_a_tmp) + psi * psi * (the * the) * (c_a_tmp
    * c_a_tmp)) / 10.0) / 2.0) - d51) - phi * the * (3.0 * psi * (the * the) /
    25.0 - 6.0 * (phi * phi) * psi * (the * the) / 25.0) / 2.0) + 7.0 *
    rt_powd_snf(phi, 3.0) * (psi * psi) * (o_a_tmp * o_a_tmp) / 40.0) - phi *
    the * ((psi * (the * the) * (d_a_tmp * d_a_tmp) / 20.0 - phi * phi * psi *
    (the * the) / 20.0) + psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0) / 2.0)
    + d11 * (d2 * j_a_tmp * n_a_tmp / 20.0 + d2 * l_a_tmp * m_a_tmp / 20.0) /
    2.0) + d92) + jb_C_22_tmp * ((((phi * the * cos(theta1) * (phi * phi * (psi *
    psi) * (d_a_tmp * d_a_tmp) + psi * psi * (the * the) * (c_a_tmp * c_a_tmp)) /
    10.0 - d47 * db_C_22_tmp / 20.0) - d52 * eb_C_22_tmp / 20.0) + d47 * c_a_tmp
    * d33 / 20.0) + d19 * b_a_tmp * d35 / 20.0) / 2.0) - d11 * ((rt_powd_snf(phi,
    3.0) * (psi * psi) * (d_a_tmp * d_a_tmp) / 10.0 + d26 * (a_tmp * a_tmp) *
    (c_a_tmp * c_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp
    * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - d75) + jb_C_22_tmp * ((phi
    * psi * cos(theta1) * (phi * phi * (psi * psi) * (d_a_tmp * d_a_tmp) + psi *
    psi * (the * the) * (c_a_tmp * c_a_tmp)) / 10.0 + d29 * d33 / 20.0) + d28 *
    d35 / 20.0) / 2.0) - d87) - 7.0 * phi * (psi * psi) * (the * the) * (q_a_tmp
    * q_a_tmp) / 40.0) + nb_C_22_tmp * ((psi * psi * (the * the) * (c_a_tmp *
    c_a_tmp) / 10.0 + psi * psi * (the * the) * (h_a_tmp * h_a_tmp) / 20.0) +
    psi * psi * (the * the) * (i_a_tmp * i_a_tmp) / 20.0) / 2.0) - 7.0 * (phi *
    phi) * (psi * psi) * the * (o_a_tmp * o_a_tmp) / 40.0) - d88) - 21.0 * phi *
    the * sin(theta2) * (3.0 * phi * (the * the) * sin(theta2) / 20.0 + 3.0 *
    (phi * phi) * psi * (the * the) * sin(theta2) / 20.0) / 800.0) + nb_C_22_tmp
    * (((phi * phi * (psi * psi) * (d_a_tmp * d_a_tmp) / 10.0 - psi * psi * (the
    * the) * (d_a_tmp * d_a_tmp) / 20.0) + phi * phi * (psi * psi) * (c_a_tmp *
    c_a_tmp) / 20.0) - psi * psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0) /
    2.0) + 63.0 * rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) *
    (c_a_tmp * c_a_tmp) / 16000.0) - tb_C_22_tmp * ((phi * (psi * psi) * the *
    cos(theta1) * (a_tmp * a_tmp) * sin(theta1) / 10.0 - d20) + phi * (psi * psi)
    * the * cos(theta1) * sin(theta1) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) +
    tb_C_22_tmp * ((phi * (psi * psi) * the * cos(theta1) * (a_tmp * a_tmp) *
    sin(theta1) / 20.0 - phi * (psi * psi) * the * cos(theta1) * sin(theta1) /
    10.0) + phi * (psi * psi) * the * cos(theta1) * sin(theta1) * (b_a_tmp *
    b_a_tmp) / 20.0) / 2.0) - xc_C_22_tmp) - d89) + nb_C_22_tmp * ((psi * psi *
    (the * the) * (c_a_tmp * c_a_tmp) / 10.0 + psi * psi * (the * the) *
    (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 20.0) + psi * psi * (the * the) *
    (d_a_tmp * d_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + 7.0 * phi * psi *
    rt_powd_snf(the, 3.0) * (q_a_tmp * q_a_tmp) / 40.0) - ad_C_22_tmp) +
    nb_C_22_tmp * (((((phi * phi * (psi * psi) * (d_a_tmp * d_a_tmp) / 10.0 -
    psi * psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0) - psi * psi * (the *
    the) * (h_a_tmp * h_a_tmp) / 20.0) - psi * psi * (the * the) * (i_a_tmp *
    i_a_tmp) / 20.0) + phi * phi * (psi * psi) * (j_a_tmp * j_a_tmp) / 20.0) +
    phi * phi * (psi * psi) * (l_a_tmp * l_a_tmp) / 20.0) / 2.0) - bd_C_22_tmp)
    + d90) + nb_C_22_tmp * (((((phi * phi * (psi * psi) * (d_a_tmp * d_a_tmp) /
    10.0 - psi * psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0) - psi * psi *
    (the * the) * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 20.0) + phi * phi *
    (psi * psi) * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) - psi * psi *
    (the * the) * (d_a_tmp * d_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) + phi * phi *
    (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - d91)
    + nb_C_22_tmp * (psi * psi * (the * the) * (d_a_tmp * d_a_tmp) / 20.0 + psi *
    psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0) / 2.0) - tb_C_22_tmp * ((d15
    / 10.0 + d17 / 10.0) - d20) / 2.0) + tb_C_22_tmp * ((phi * (psi * psi) * the
    * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
    (theta1) * sin(theta2)) / 20.0 + phi * (psi * psi) * the * (cos(theta1) *
    sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1)) / 20.0) - phi * (psi * psi) * the * cos(theta1) * sin(theta1) /
    10.0) / 2.0) + u_C_22_tmp * ab_C_22_tmp_tmp * (t_C_22_tmp_tmp - 0.1) / 40.0)
    + d41 * (d93 + d94) / 40.0) + r_C_22_tmp * d53 * ((cb_C_22_tmp + kc_C_22_tmp)
    - 0.1) / 20.0) - yc_C_22_tmp * (s_a_tmp_tmp - t_a_tmp_tmp) * (C_22_tmp *
    (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) /
    20.0) + phi * phi * psi * the * (3.0 * cos(theta2) * sin(theta3) / 20.0 +
    3.0 * cos(theta3) * sin(theta2) / 20.0)) / 20.0) + r_C_22_tmp_tmp * cos
    (theta1) * (c_C_22_tmp_tmp_tmp / 20.0 + d_C_22_tmp_tmp_tmp / 20.0) *
    ((b_a_tmp_tmp_tmp * e_a_tmp / 10.0 - 3.0 * b_a_tmp / 10.0) + d23 * sin
    (theta2) / 10.0) / 40.0) + d43 * t_C_22_tmp * (b_a_tmp_tmp_tmp_tmp * e_a_tmp
    / 20.0 - e_a_tmp_tmp_tmp * g_a_tmp / 20.0) * (d_a_tmp * (d_a_tmp_tmp_tmp /
    10.0 - f_a_tmp_tmp_tmp / 10.0) + c_a_tmp * (q_a_tmp_tmp / 10.0 - r_a_tmp_tmp
    / 10.0)) / 40.0) + d22 * psi * rt_powd_snf(the, 3.0) * (b_a_tmp_tmp_tmp_tmp *
    sin(theta3) / 20.0 - e_a_tmp_tmp_tmp * cos(theta3) / 20.0) * (3.0 * cos
    (theta2) * cos(theta3) / 20.0 - 3.0 * sin(theta2) * sin(theta3) / 20.0) /
    20.0) + d22 * psi * rt_powd_snf(the, 3.0) * (p_a_tmp * a_tmp * sin(theta3) /
    20.0 + p_a_tmp * g_a_tmp * sin(theta2) / 20.0) * (3.0 * cos(theta2) * sin
    (theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 20.0) +
    u_C_22_tmp * (d21 * d0 * (b_a_tmp_tmp_tmp * e_a_tmp / 20.0 + d23 * b_a_tmp /
    20.0) + phi * phi * psi * the * (b_a_tmp_tmp_tmp * e_a_tmp / 20.0 + d23 *
    b_a_tmp / 20.0)) * (t_C_22_tmp_tmp - 0.1) / 40.0) + 3.0 * psi * the * cos
    (theta1) * (phi * phi * (the * the) / 20.0 + phi * phi * psi * the / 20.0) *
    mc_C_22_tmp / 20.0) - 7.0 * (phi * phi) * psi * rt_powd_snf(the, 3.0) *
    o_a_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin
    (theta2) / 20.0) / 40.0) - wd_C_22_tmp * d0 * o_a_tmp * (3.0 * cos(theta2) *
    sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 20.0) + 63.0 *
    phi * psi * rt_powd_snf(the, 3.0) * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) /
    16000.0) - hb_C_22_tmp * (a_tmp * a_tmp) / 16000.0) + 7.0 * (phi * phi) *
    psi * rt_powd_snf(the, 3.0) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3)
    / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) * (cos(theta1)
    * ((3.0 * cos(theta1) * cos(theta2) / 10.0 + 3.0 * cos(theta1) * sin(theta2)
    * sin(theta3) / 10.0) - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0)
    + sin(theta1) * ((3.0 * cos(theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1)
    * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin
    (theta1) / 10.0)) / 40.0) + ae_C_22_tmp) + 3.0 * phi * xd_C_22_tmp * d0 *
    d_a_tmp * (c_a_tmp * c_a_tmp) / 40.0) + hb_C_22_tmp * (b_a_tmp * b_a_tmp) /
    16000.0) + be_C_22_tmp) + ce_C_22_tmp) + de_C_22_tmp) - d16) - d18) +
    ub_C_22_tmp) + lb_C_22_tmp) + vb_C_22_tmp) - 63.0 * phi * (psi * psi) * (the
    * the) * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 16000.0) + ee_C_22_tmp) -
                      vc_C_22_tmp * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) /
                      16000.0) + fe_C_22_tmp) + ed_C_22_tmp) - 337.0 * phi *
                   (psi * psi) * the * cos(theta1) * (a_tmp * a_tmp) * sin
                   (theta1) / 8000.0) + fd_C_22_tmp) - phi * (psi * psi) * the *
                 cos(theta1) * sin(theta1) * (b_a_tmp * b_a_tmp) / 20.0) +
                ge_C_22_tmp) + ne_C_22_tmp * a_tmp * c_a_tmp * b_a_tmp / 8000.0)
              - he_C_22_tmp) + ie_C_22_tmp) - lc_C_22_tmp) - je_C_22_tmp) +
          wc_C_22_tmp) + ke_C_22_tmp) - le_C_22_tmp) + cd_C_22_tmp) -
      me_C_22_tmp) - dd_C_22_tmp) + gd_C_22_tmp;
  d2 = d42 * d6;
  d15 = 3.0 * phi * d6 * d0;
  d17 = d2 / 50.0;
  d19 = d15 / 50.0;
  d20 = 29.0 * d4 * psi * t_C_22_tmp / 200.0;
  d41 = yb_C_22_tmp / 20.0;
  d45 = ac_C_22_tmp / 20.0;
  d12 *= t_C_22_tmp;
  d46 = d40 * d_a_tmp;
  x_C_22_tmp_tmp = d36 * d_a_tmp;
  v_a_tmp_tmp = wb_C_22_tmp / 20.0;
  u_a_tmp_tmp = xb_C_22_tmp / 20.0;
  r_C_22_tmp_tmp = f_C_22_tmp * (d40 + d36) / 50.0;
  vc_C_22_tmp = l_C_22_tmp * (d46 + x_C_22_tmp_tmp);
  yc_C_22_tmp = vc_C_22_tmp / 40.0;
  c_C_22_tmp_tmp_tmp = phi * (the * the) * sin(theta1) + d36 * c_a_tmp;
  d_C_22_tmp_tmp_tmp = tb_C_22_tmp * c_C_22_tmp_tmp_tmp / 20.0;
  o_C_22_tmp_tmp = d40 * h_a_tmp + d36 * h_a_tmp;
  d95 = b_C_22_tmp * o_C_22_tmp_tmp * h_a_tmp;
  i_C_22_tmp_tmp = d40 * i_a_tmp + d36 * i_a_tmp;
  d96 = b_C_22_tmp * i_C_22_tmp_tmp * i_a_tmp;
  C_22_tmp = d46 * a_tmp + x_C_22_tmp_tmp * a_tmp;
  c_C_22_tmp = d40 * a_tmp * c_a_tmp - o_C_22_tmp * a_tmp * c_a_tmp;
  d_C_22_tmp_tmp = s_C_22_tmp * C_22_tmp;
  w_C_22_tmp = d_C_22_tmp_tmp / 40.0;
  C_22[1] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((((((((((((((d55 + d56) + d58) + d60) - d17) - d61) -
    d62) + d63) + phi * the * (rt_powd_snf(phi, 3.0) * (psi * psi) * (d_a_tmp *
    d_a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) /
    20.0) / 2.0) + phi * the * ((((rt_powd_snf(phi, 3.0) * psi * the * (d_a_tmp *
    d_a_tmp) / 10.0 - phi * the * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2)) * (phi * phi * psi * (cos(theta2) * sin(theta3) + cos(theta3) *
    sin(theta2)) + phi * phi * the * (cos(theta2) * sin(theta3) + cos(theta3) *
    sin(theta2))) / 20.0) - phi * the * (cos(theta2) * cos(theta3) - sin(theta2)
    * sin(theta3)) * (phi * phi * psi * (cos(theta2) * cos(theta3) - sin(theta2)
    * sin(theta3)) + phi * phi * the * (cos(theta2) * cos(theta3) - sin(theta2) *
    sin(theta3))) / 20.0) + rt_powd_snf(phi, 3.0) * psi * the * (j_a_tmp *
    j_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * psi * the * (l_a_tmp * l_a_tmp) /
    20.0) / 2.0) + phi * the * ((rt_powd_snf(phi, 3.0) * psi * the * (d_a_tmp *
    d_a_tmp) / 10.0 - phi * the * (phi * phi * psi + phi * phi * the) / 20.0) +
    rt_powd_snf(phi, 3.0) * psi * the * (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + phi
    * the * ((((rt_powd_snf(phi, 3.0) * psi * the * (d_a_tmp * d_a_tmp) / 10.0 -
    phi * the * cos(theta2) * (phi * phi * psi * cos(theta2) + phi * phi * the *
    cos(theta2)) / 20.0) - phi * the * sin(theta2) * (phi * phi * psi * sin
    (theta2) + phi * phi * the * sin(theta2)) / 20.0) + rt_powd_snf(phi, 3.0) *
    psi * the * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + rt_powd_snf(phi,
    3.0) * psi * the * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0)
    - d2 * (d_a_tmp * d_a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) * (psi * psi) *
    (c_a_tmp * c_a_tmp) / 40.0) + phi * the * ((rt_powd_snf(phi, 3.0) * (psi *
    psi) * (d_a_tmp * d_a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) *
    (j_a_tmp * j_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (l_a_tmp
    * l_a_tmp) / 20.0) / 2.0) + d19) - d20) + d77 / 50.0) - d64 * a_tmp / 800.0)
    + d11 * d79 / 2.0) + 3.0 * phi * the * (d40 / 20.0 + d37 / 20.0) / 400.0) -
    rt_powd_snf(phi, 3.0) * d6 * (j_a_tmp * j_a_tmp) / 40.0) - rt_powd_snf(phi,
    3.0) * (psi * psi) * (l_a_tmp * l_a_tmp) / 40.0) + 7.0 * rt_powd_snf(phi,
    3.0) * (psi * psi) * (o_a_tmp * o_a_tmp) / 40.0) + phi * the * ((d26 *
    (d_a_tmp * d_a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp *
    a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + d26 * (c_a_tmp * c_a_tmp) * (b_a_tmp *
    b_a_tmp) / 20.0) / 2.0) + r_C_22_tmp_tmp) + 7.0 * phi * psi * the * (3.0 *
    cos(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos
    (theta2) * cos(theta3) / 20.0) / 40.0) - f_C_22_tmp * i_a_tmp * (phi * (the *
    the) * c_a_tmp * m_a_tmp - phi * d6 * (the * the) * c_a_tmp * m_a_tmp) /
    40.0) - f_C_22_tmp * h_a_tmp * (phi * (the * the) * sin(theta1) * n_a_tmp -
    phi * d6 * (the * the) * sin(theta1) * n_a_tmp) / 40.0) + o_C_22_tmp *
    (h_a_tmp * h_a_tmp) / 40.0) + d3 * (h_a_tmp * h_a_tmp) / 40.0) + o_C_22_tmp *
    (i_a_tmp * i_a_tmp) / 40.0) + d3 * (i_a_tmp * i_a_tmp) / 40.0) - 7.0 * phi *
    (psi * psi) * (the * the) * (q_a_tmp * q_a_tmp) / 40.0) - 7.0 * (phi * phi) *
    (psi * psi) * the * (q_a_tmp * q_a_tmp) / 40.0) - d3 * (j_a_tmp * j_a_tmp) /
    40.0) - d3 * (l_a_tmp * l_a_tmp) / 40.0) + 7.0 * (phi * phi) * (psi * psi) *
    the * (o_a_tmp * o_a_tmp) / 20.0) + tb_C_22_tmp * (v_a_tmp_tmp - u_a_tmp_tmp)
    / 2.0) - nb_C_22_tmp * d54 / 2.0) + 21.0 * (phi * phi) * psi * cos(theta2) *
    sin(theta1) / 800.0) + 21.0 * (phi * phi) * the * cos(theta2) * sin(theta1) /
    800.0) + tb_C_22_tmp * (d41 + d45) / 2.0) + d41) + d45) - d12 * (m_a_tmp *
    m_a_tmp) / 40.0) - d12 * (n_a_tmp * n_a_tmp) / 40.0) + 21.0 * phi * the *
    sin(theta2) * (3.0 * phi * (the * the) * sin(theta2) / 20.0 + 3.0 * (phi *
    phi) * psi * (the * the) * sin(theta2) / 20.0) / 800.0) + yc_C_22_tmp) -
    337.0 * d4 * d6 * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 16000.0) -
    rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp *
    b_a_tmp) / 40.0) - ob_C_22_tmp) + xc_C_22_tmp) + d_C_22_tmp_tmp_tmp) -
    nb_C_22_tmp * d57 / 2.0) + o_C_22_tmp * (d_a_tmp * d_a_tmp) / 40.0) - d3 *
    (d_a_tmp * d_a_tmp) / 8.0) - d12 * (a_tmp * a_tmp) / 40.0) + q_C_22_tmp) +
    bc_C_22_tmp * d59 / 2.0) + d15 * (c_a_tmp * c_a_tmp) / 20.0) + d3 * (c_a_tmp
    * c_a_tmp) / 8.0) - d12 * (b_a_tmp * b_a_tmp) / 40.0) - v_C_22_tmp) - 7.0 *
    phi * psi * rt_powd_snf(the, 3.0) * (q_a_tmp * q_a_tmp) / 40.0) +
    ad_C_22_tmp) + d95 / 40.0) + d96 / 40.0) + bb_C_22_tmp_tmp * cb_C_22_tmp_tmp
    / 40.0) - phi * phi * (psi * psi) * the * (c_a_tmp * c_a_tmp) * (b_a_tmp *
    b_a_tmp) / 40.0) + r_C_22_tmp * cos(theta2) * (phi * (the * the) * sin
    (theta1) * b_a_tmp - phi * (psi * psi) * (the * the) * sin(theta1) * b_a_tmp)
    / 40.0) - u_C_22_tmp * (p_C_22_tmp_tmp + q_C_22_tmp_tmp) * ((3.0 * cos
    (theta2) * sin(theta3) / 10.0 - d24 / 10.0) + d23 * b_a_tmp / 10.0) / 40.0)
    + b_C_22_tmp * cos(theta1) * sin(theta2) * (d46 * b_a_tmp + x_C_22_tmp_tmp *
    b_a_tmp) / 40.0) + y_C_22_tmp * the * b_a_tmp * (g_C_22_tmp * cos(theta2) *
    sin(theta1) - b_C_22_tmp_tmp * cos(theta2) * sin(theta1)) / 40.0) - d22 * d6
    * the * (b_a_tmp_tmp_tmp_tmp * sin(theta3) / 20.0 - e_a_tmp_tmp_tmp * cos
    (theta3) / 20.0) * (b_a_tmp_tmp_tmp * sin(theta1) * sin(theta3) / 20.0 + d23
    * sin(theta1) * sin(theta2) / 20.0) / 20.0) - d22 * d6 * the * (p_a_tmp *
    a_tmp * sin(theta3) / 20.0 + p_a_tmp * g_a_tmp * sin(theta2) / 20.0) * (3.0 *
    c_a_tmp * sin(theta2) * sin(theta3) / 20.0 - 3.0 * a_tmp * cos(theta3) * sin
    (theta1) / 20.0) / 20.0) + 3.0 * phi * psi * the * n_a_tmp * (d6 * d0 * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) - d21 * d6 * cos(theta1) * (cos(theta2) * sin(theta1)
    * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 40.0) + 3.0 *
    phi * psi * the * m_a_tmp * d31 / 40.0) + 7.0 * psi * the * cos(theta1) *
    (phi * phi * psi * (a_tmp_tmp_tmp_tmp * b_a_tmp * sin(theta3) / 20.0 -
    b_a_tmp_tmp_tmp * g_a_tmp * sin(theta1) / 20.0) + phi * phi * the *
    (a_tmp_tmp_tmp_tmp * b_a_tmp * sin(theta3) / 20.0 - b_a_tmp_tmp_tmp *
    g_a_tmp * sin(theta1) / 20.0)) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 +
    3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 40.0) + qb_C_22_tmp) - 3.0 *
    phi * psi * the * a_tmp * d35 / 40.0) + v_a_tmp_tmp) + rb_C_22_tmp) +
    sb_C_22_tmp) - v_C_22_tmp_tmp * q_a_tmp * (3.0 * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 20.0) - hd_C_22_tmp * (3.0 *
    cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) /
    20.0) - id_C_22_tmp) - u_a_tmp_tmp) + jd_C_22_tmp) - 63.0 * phi * psi *
    rt_powd_snf(the, 3.0) * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 16000.0) -
    kd_C_22_tmp) + cc_C_22_tmp * d0 * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) /
    16000.0) + 337.0 * d21 * d6 * the * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) /
    16000.0) + phi * (psi * psi) * (the * the) * (d_a_tmp * d_a_tmp) * (b_a_tmp *
    b_a_tmp) / 40.0) + phi * phi * (psi * psi) * the * (d_a_tmp * d_a_tmp) *
    (b_a_tmp * b_a_tmp) / 40.0) - 137.0 * d21 * d6 * the * (a_tmp * a_tmp) *
                       (c_a_tmp * c_a_tmp) / 8000.0) - dc_C_22_tmp * c_C_22_tmp /
                      40.0) + w_C_22_tmp) - ed_C_22_tmp) + g_C_22_tmp_tmp_tmp *
                   d0 * d_a_tmp * a_tmp * b_a_tmp / 8000.0) + ld_C_22_tmp *
                  b_a_tmp / 8000.0) - md_C_22_tmp) - nd_C_22_tmp) - od_C_22_tmp)
              - pc_C_22_tmp) - qc_C_22_tmp) + pd_C_22_tmp) - rc_C_22_tmp) +
          sc_C_22_tmp) - gd_C_22_tmp) + qd_C_22_tmp) + rd_C_22_tmp) +
      tc_C_22_tmp) + uc_C_22_tmp) + sd_C_22_tmp;
  b_C_22_tmp_tmp = d3 * h_a_tmp;
  f_C_22_tmp = b_C_22_tmp_tmp * j_a_tmp;
  e_C_22_tmp_tmp = d3 * i_a_tmp;
  g_C_22_tmp = e_C_22_tmp_tmp * l_a_tmp;
  u_C_22_tmp = phi * phi * (psi * psi) * the * cos(theta1) * sin(theta1) / 10.0;
  f_C_22_tmp_tmp = d26 * d_a_tmp;
  x_C_22_tmp = f_C_22_tmp_tmp * c_a_tmp;
  ab_C_22_tmp = x_C_22_tmp / 5.0;
  g_C_22_tmp_tmp = phi * phi * psi * the * cos(theta1) * c_a_tmp;
  bb_C_22_tmp = g_C_22_tmp_tmp / 10.0;
  db_C_22_tmp = d26 * the;
  eb_C_22_tmp = db_C_22_tmp * j_a_tmp * n_a_tmp;
  fb_C_22_tmp = db_C_22_tmp * l_a_tmp * m_a_tmp;
  gb_C_22_tmp = c_C_22_tmp_tmp * d0;
  h_C_22_tmp_tmp = (f_C_22_tmp / 10.0 + g_C_22_tmp / 10.0) - phi * phi * (psi *
    psi) * the * cos(theta1) * sin(theta1) / 5.0;
  hb_C_22_tmp = phi * h_C_22_tmp_tmp / 2.0;
  f_C_22_tmp = (f_C_22_tmp / 20.0 + g_C_22_tmp / 20.0) - u_C_22_tmp;
  g_C_22_tmp = d72 * d0;
  ob_C_22_tmp = 7.0 * d48;
  qb_C_22_tmp = 63.0 * d48;
  rb_C_22_tmp = mb_C_22_tmp * o_a_tmp / 20.0;
  sb_C_22_tmp = (d1 * o_C_22_tmp_tmp * j_a_tmp / 20.0 - phi * psi * cos(theta1) *
                 (phi * (the * the) * sin(theta1) + psi * (the * the) * sin
                  (theta1)) / 10.0) + d1 * i_C_22_tmp_tmp * l_a_tmp / 20.0;
  wb_C_22_tmp = (d29 * C_22_tmp / 20.0 - phi * psi * cos(theta1) * (phi * (the *
    the) * sin(theta1) + psi * (the * the) * sin(theta1)) / 10.0) + d28 * (phi *
    (the * the) * cos(theta1) * sin(theta2) + psi * (the * the) * cos(theta1) *
    sin(theta2)) / 20.0;
  C_22[4] = (((((((((((((((((((((((((((((((((((((phi * (phi * psi * sin(theta1) *
    sin(theta2) * (d21 * psi * cos(theta2) + d21 * the * cos(theta2)) / 20.0 -
    phi * psi * cos(theta2) * sin(theta1) * (d21 * psi * sin(theta2) + d21 * the
    * sin(theta2)) / 20.0) / 2.0 + phi * (d21 * d6 * the * (g_a_tmp_tmp * sin
    (theta3) + h_a_tmp_tmp * sin(theta2)) * (cos(theta2) * cos(theta3) - sin
    (theta2) * sin(theta3)) / 20.0 + d21 * d6 * the * (k_a_tmp_tmp * sin(theta3)
    - k_a_tmp * sin(theta1)) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
    (theta2)) / 20.0) / 2.0) + phi * (d25 * (phi * (the * the) * cos(theta1) +
    psi * (the * the) * cos(theta1)) / 20.0 - d14 * (phi * (the * the) * sin
    (theta1) + psi * (the * the) * sin(theta1)) / 10.0) / 2.0) + phi *
    ((C_22_tmp_tmp * the * d_a_tmp * (a_tmp * a_tmp) * c_a_tmp / 10.0 - d21 * d6
    * the * cos(theta1) * c_a_tmp / 5.0) + d21 * d6 * the * cos(theta1) * sin
    (theta1) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) - 3.0 * phi * (d28 * (phi *
    (the * the) * cos(theta2) * sin(theta1) - phi * d6 * (the * the) * cos
    (theta2) * sin(theta1)) / 20.0 - d29 * (phi * (the * the) * sin(theta1) *
    sin(theta2) - phi * d6 * (the * the) * sin(theta1) * sin(theta2)) / 20.0) /
    2.0) - the * ((d21 * d6 * the * cos(theta1) * (a_tmp * a_tmp) * sin(theta1) /
    20.0 - u_C_22_tmp) + phi * phi * (psi * psi) * the * cos(theta1) * sin
    (theta1) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + d58) + phi * ((d26 * h_a_tmp
    * j_a_tmp / 10.0 + d26 * i_a_tmp * l_a_tmp / 10.0) - ab_C_22_tmp) / 2.0) +
    d60) - 3.0 * phi * (d50 * (phi * (the * the) * sin(theta1) * (cos(theta2) *
    sin(theta3) + cos(theta3) * sin(theta2)) - phi * (psi * psi) * (the * the) *
    sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))) /
    20.0 + d49 * (phi * (the * the) * sin(theta1) * (cos(theta2) * cos(theta3) -
    sin(theta2) * sin(theta3)) - phi * (psi * psi) * (the * the) * sin(theta1) *
    (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) / 20.0) / 2.0) +
    phi * sb_C_22_tmp / 2.0) + hb_C_22_tmp) - the * f_C_22_tmp / 2.0) + phi *
    ((x_C_22_tmp * (b_a_tmp * b_a_tmp) / 10.0 - ab_C_22_tmp) + f_C_22_tmp_tmp *
    (a_tmp * a_tmp) * c_a_tmp / 10.0) / 2.0) + phi * wb_C_22_tmp / 2.0) - d11 *
    ((phi * phi * psi * the * h_a_tmp * j_a_tmp / 20.0 + phi * phi * psi * the *
    i_a_tmp * l_a_tmp / 20.0) - bb_C_22_tmp) / 2.0) + d65 * d59 / 2.0) - d11 *
    ((phi * phi * psi * the * cos(theta1) * (a_tmp * a_tmp) * c_a_tmp / 20.0 -
    bb_C_22_tmp) + g_C_22_tmp_tmp * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) +
    ob_C_22_tmp * d0 * (3.0 * cos(theta2) * cos(theta3) / 20.0 - 3.0 * sin
    (theta2) * sin(theta3) / 20.0) * (3.0 * cos(theta2) * sin(theta3) / 20.0 +
    3.0 * cos(theta3) * sin(theta2) / 20.0) / 10.0) - tb_C_22_tmp * (eb_C_22_tmp
    / 20.0 + fb_C_22_tmp / 20.0) / 2.0) + q_C_22_tmp) - v_C_22_tmp) - d48 * d6 *
    d_a_tmp * c_a_tmp / 20.0) + qb_C_22_tmp * d0 * a_tmp * b_a_tmp / 8000.0) +
    d71 * d0 * q_a_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
    (theta3) * sin(theta2) / 20.0) / 20.0) - td_C_22_tmp * q_a_tmp * o_a_tmp /
    20.0) + d13 * d_a_tmp * c_a_tmp / 40.0) - db_C_22_tmp * d_a_tmp * c_a_tmp /
                       20.0) + mb_C_22_tmp * ud_C_22_tmp / 10.0) - eb_C_22_tmp /
                     40.0) - fb_C_22_tmp / 40.0) - rb_C_22_tmp) + ec_C_22_tmp) -
                 u_C_22_tmp_tmp * d0 * d_a_tmp * a_tmp * b_a_tmp / 8000.0) -
                g_C_22_tmp * q_a_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 +
    3.0 * cos(theta3) * sin(theta2) / 20.0) / 20.0) - vd_C_22_tmp * d_a_tmp *
               (a_tmp * a_tmp) * c_a_tmp / 8000.0) + oc_C_22_tmp * d0 * d_a_tmp *
              a_tmp * b_a_tmp / 8000.0) - gb_C_22_tmp * d_a_tmp * (a_tmp * a_tmp)
             * c_a_tmp / 8000.0) - gb_C_22_tmp * (d_a_tmp * d_a_tmp) * a_tmp *
    b_a_tmp / 8000.0;
  d2 = b_C_22_tmp * c_a_tmp;
  d3 = fc_C_22_tmp * h_a_tmp * n_a_tmp / 20.0 + fc_C_22_tmp * i_a_tmp * m_a_tmp /
    20.0;
  d15 = the * d3 / 2.0;
  d24 = d11 * (d52 * C_22_tmp / 20.0 - d47 * (phi * (the * the) * cos(theta1) *
    sin(theta2) + psi * (the * the) * cos(theta1) * sin(theta2)) / 20.0) / 2.0;
  d26 = d21 * t_C_22_tmp;
  d28 = the * d_a_tmp;
  d41 = 3.0 * (phi * phi) * psi * (the * the) / 400.0;
  d45 = 21.0 * phi * d0 * b_a_tmp / 800.0;
  d26 = d11 * (((d11 * o_C_22_tmp_tmp * n_a_tmp / 20.0 + d11 * i_C_22_tmp_tmp *
                 m_a_tmp / 20.0) + d26 * h_a_tmp * n_a_tmp / 20.0) + d26 *
               i_a_tmp * m_a_tmp / 20.0) / 2.0;
  d48 = v_C_22_tmp_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
    (theta3) * sin(theta2) / 20.0) / 40.0;
  d49 = d74 * o_a_tmp / 40.0;
  d50 = w_C_22_tmp_tmp * b_a_tmp / 800.0;
  d54 = d73 * c_a_tmp;
  C_22_tmp = ob_C_22_tmp * psi * d0;
  q_C_22_tmp = qb_C_22_tmp * psi * d0;
  u_C_22_tmp = v_C_22_tmp_tmp * o_a_tmp;
  v_C_22_tmp = d54 * y_C_22_tmp_tmp;
  x_C_22_tmp = d78 * c_a_tmp;
  f_C_22_tmp_tmp = 21.0 * d4;
  ab_C_22_tmp = f_C_22_tmp_tmp * d6 * d0 * a_tmp * c_a_tmp;
  bb_C_22_tmp = 7.0 * rt_powd_snf(phi, 3.0) * psi * the * c_a_tmp * (3.0 * cos
    (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0);
  db_C_22_tmp = f_C_22_tmp_tmp * psi * the;
  eb_C_22_tmp = db_C_22_tmp * a_tmp * c_a_tmp;
  db_C_22_tmp = db_C_22_tmp * c_a_tmp * b_a_tmp;
  fb_C_22_tmp = w_C_22_tmp_tmp * a_tmp * c_a_tmp;
  gb_C_22_tmp = y_C_22_tmp * c_a_tmp;
  mb_C_22_tmp = C_22_tmp * q_a_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 +
    3.0 * cos(theta3) * sin(theta2) / 20.0) / 40.0;
  xb_C_22_tmp = eb_C_22_tmp_tmp * a_tmp * c_a_tmp / 800.0;
  yb_C_22_tmp = v_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 40.0;
  ac_C_22_tmp = u_C_22_tmp * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) *
    sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) +
    sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 *
                   cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0;
  cc_C_22_tmp = C_22_tmp * pb_C_22_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0
    + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 20.0;
  C_22_tmp = C_22_tmp * o_a_tmp * (3.0 * cos(theta2) * cos(theta3) / 20.0 - 3.0 *
    sin(theta2) * sin(theta3) / 20.0) / 20.0;
  dc_C_22_tmp = 3.0 * phi * psi * sin(theta1) * (phi * (the * the) / 20.0 + phi *
    phi * psi * (the * the) / 20.0) * mc_C_22_tmp / 20.0;
  ec_C_22_tmp = x_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 400.0;
  u_C_22_tmp = u_C_22_tmp * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) /
    10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
    (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos
    (theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0;
  v_C_22_tmp = v_C_22_tmp * mc_C_22_tmp / 40.0;
  kc_C_22_tmp = 7.0 * rt_powd_snf(phi, 3.0) * (psi * psi) * (the * the) * (3.0 *
    sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos
    (theta3) * sin(theta1) / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * sin
    (theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3)
    / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) /
    10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0;
  x_C_22_tmp = x_C_22_tmp * mc_C_22_tmp / 400.0;
  nc_C_22_tmp = nc_C_22_tmp * (3.0 * phi * (the * the) * sin(theta2) / 20.0 +
    3.0 * (phi * phi) * psi * (the * the) * sin(theta2) / 20.0) / 400.0;
  oc_C_22_tmp = q_C_22_tmp * d_a_tmp * a_tmp * b_a_tmp / 16000.0;
  pc_C_22_tmp = ab_C_22_tmp * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) *
    sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) +
    sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 *
                   cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 800.0;
  qc_C_22_tmp = bb_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 40.0;
  ab_C_22_tmp = ab_C_22_tmp * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) /
    10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
    (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos
    (theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 800.0;
  rc_C_22_tmp = eb_C_22_tmp * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) *
    sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) +
    sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 *
                   cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 800.0;
  bb_C_22_tmp = bb_C_22_tmp * mc_C_22_tmp / 40.0;
  sc_C_22_tmp = db_C_22_tmp * (t_C_22_tmp_tmp - 0.1) / 800.0;
  eb_C_22_tmp = eb_C_22_tmp * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) /
    10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
    (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos
    (theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 800.0;
  db_C_22_tmp = db_C_22_tmp * mc_C_22_tmp / 800.0;
  tc_C_22_tmp = fb_C_22_tmp * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) *
    sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) +
    sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 *
                   cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 800.0;
  fb_C_22_tmp = fb_C_22_tmp * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) /
    10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
    (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos
    (theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 800.0;
  C_22[7] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((((((((((((((d10 + 3.0 * the * ((d2 * (phi * phi *
    (psi * psi) * (d_a_tmp * d_a_tmp) + psi * psi * (the * the) * (c_a_tmp *
    c_a_tmp)) / 10.0 + h_C_22_tmp * d32 / 20.0) + i_C_22_tmp * d31 / 20.0) / 2.0)
    + 3.0 * the * (psi * the * sin(theta1) * (phi * phi * (psi * psi) * (d_a_tmp
    * d_a_tmp) + psi * psi * (the * the) * (c_a_tmp * c_a_tmp)) / 10.0 -
    l_C_22_tmp * d8 / 20.0) / 2.0) + phi * ((phi * phi * (psi * psi) * the * cos
    (theta1) * (a_tmp * a_tmp) * sin(theta1) / 10.0 - phi * phi * (psi * psi) *
    the * cos(theta1) * sin(theta1) / 5.0) + phi * phi * (psi * psi) * the * cos
    (theta1) * sin(theta1) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) + the * ((psi *
    psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0 + psi * psi * (the * the) *
    (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 20.0) + psi * psi * (the * the) *
    (d_a_tmp * d_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - 3.0 * the *
    ((s_C_22_tmp * d33 / 20.0 - psi * the * sin(theta1) * (phi * phi * (psi *
    psi) * (d_a_tmp * d_a_tmp) + psi * psi * (the * the) * (c_a_tmp * c_a_tmp)) /
    10.0) + n_C_22_tmp * d35 / 20.0) / 2.0) - 3.0 * phi * (the * the) / 400.0) +
    the * (psi * psi * (the * the) * (d_a_tmp * d_a_tmp) / 20.0 + psi * psi *
    (the * the) * (c_a_tmp * c_a_tmp) / 10.0) / 2.0) + hb_C_22_tmp) + the *
    ((psi * psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0 + psi * psi * (the *
    the) * (h_a_tmp * h_a_tmp) / 20.0) + psi * psi * (the * the) * (i_a_tmp *
    i_a_tmp) / 20.0) / 2.0) - d15) - d17) + jb_C_22_tmp * ((((the * c_a_tmp *
    (phi * phi * (psi * psi) * (d_a_tmp * d_a_tmp) + psi * psi * (the * the) *
    (c_a_tmp * c_a_tmp)) / 10.0 + the * h_a_tmp * d32 / 20.0) + the * i_a_tmp *
    d31 / 20.0) + d11 * (phi * (the * the) * sin(theta1) * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2)) - phi * (psi * psi) * (the * the) *
    sin(theta1) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))) *
    m_a_tmp / 20.0) + d11 * (phi * (the * the) * sin(theta1) * (cos(theta2) *
    cos(theta3) - sin(theta2) * sin(theta3)) - phi * (psi * psi) * (the * the) *
    sin(theta1) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) *
    n_a_tmp / 20.0) / 2.0) - d61) + phi * the * ((((psi * (the * the) * (h_a_tmp
    * h_a_tmp) / 20.0 + psi * (the * the) * (i_a_tmp * i_a_tmp) / 20.0) + psi *
    (the * the) * (c_a_tmp * c_a_tmp) / 10.0) - phi * phi * psi * (the * the) *
    (m_a_tmp * m_a_tmp) / 20.0) - phi * phi * psi * (the * the) * (n_a_tmp *
    n_a_tmp) / 20.0) / 2.0) + d24) + d63) + phi * the * (rt_powd_snf(phi, 3.0) *
    (psi * psi) * (d_a_tmp * d_a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi *
    psi) * (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + d11 * ((((psi * (the * the) *
    (c_a_tmp * c_a_tmp) / 10.0 + psi * (the * the) * (d_a_tmp * d_a_tmp) *
    (a_tmp * a_tmp) / 20.0) + psi * (the * the) * (d_a_tmp * d_a_tmp) * (b_a_tmp
    * b_a_tmp) / 20.0) - phi * phi * psi * (the * the) * (a_tmp * a_tmp) / 20.0)
    - phi * phi * psi * (the * the) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + d11 *
    ((((rt_powd_snf(phi, 3.0) * psi * the * (d_a_tmp * d_a_tmp) / 10.0 - phi *
    the * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) * (phi * phi *
    psi * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) + phi * phi *
    the * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))) / 20.0) - phi
    * the * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) * (phi * phi
    * psi * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) + phi * phi *
    the * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3))) / 20.0) +
    rt_powd_snf(phi, 3.0) * psi * the * (j_a_tmp * j_a_tmp) / 20.0) +
    rt_powd_snf(phi, 3.0) * psi * the * (l_a_tmp * l_a_tmp) / 20.0) / 2.0) + phi
    * the * ((rt_powd_snf(phi, 3.0) * psi * the * (d_a_tmp * d_a_tmp) / 10.0 -
    phi * the * (phi * phi * psi + phi * phi * the) / 20.0) + rt_powd_snf(phi,
    3.0) * psi * the * (c_a_tmp * c_a_tmp) / 20.0) / 2.0) + phi * the *
    ((((rt_powd_snf(phi, 3.0) * psi * the * (d_a_tmp * d_a_tmp) / 10.0 - phi *
    the * cos(theta2) * (phi * phi * psi * cos(theta2) + phi * phi * the * cos
    (theta2)) / 20.0) - phi * the * sin(theta2) * (phi * phi * psi * sin(theta2)
    + phi * phi * the * sin(theta2)) / 20.0) + rt_powd_snf(phi, 3.0) * psi * the
    * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) *
    psi * the * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - 3.0 *
    d4 * (psi * psi) * (d_a_tmp * d_a_tmp) / 20.0) - n_C_22_tmp_tmp *
    (b_a_tmp_tmp_tmp * sin(theta3) / 20.0 + d23 * sin(theta2) / 20.0) / 40.0) -
    rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) / 40.0) +
    jb_C_22_tmp * ((d11 * (phi * (the * the) * sin(theta1) - phi * (psi * psi) *
    (the * the) * sin(theta1)) / 20.0 - d28 * (d34 - k_C_22_tmp) / 20.0) + the *
    sin(theta1) * (C_22_tmp_tmp * (d_a_tmp * d_a_tmp) + d_C_22_tmp * (c_a_tmp *
    c_a_tmp)) / 10.0) / 2.0) - d11 * (phi * phi * psi * d0 * (f_a_tmp * e_a_tmp
    + a_tmp_tmp * b_a_tmp) * n_a_tmp / 20.0 + phi * phi * psi * d0 *
    (d_a_tmp_tmp * e_a_tmp - f_a_tmp * g_a_tmp) * m_a_tmp / 20.0)) + phi * the *
    ((rt_powd_snf(phi, 3.0) * (psi * psi) * (d_a_tmp * d_a_tmp) / 10.0 +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (j_a_tmp * j_a_tmp) / 20.0) +
    rt_powd_snf(phi, 3.0) * (psi * psi) * (l_a_tmp * l_a_tmp) / 20.0) / 2.0) +
    d19) - d41) + d80) - d45) + d81) - d11 * (d30 * h_a_tmp * n_a_tmp / 20.0 +
    d30 * i_a_tmp * m_a_tmp / 20.0) / 2.0) + d51) + phi * the * (3.0 * psi *
    (the * the) / 25.0 - 6.0 * (phi * phi) * psi * (the * the) / 25.0) / 2.0) -
    d26) - rt_powd_snf(phi, 3.0) * (psi * psi) * (j_a_tmp * j_a_tmp) / 40.0) -
    rt_powd_snf(phi, 3.0) * (psi * psi) * (l_a_tmp * l_a_tmp) / 40.0) + 7.0 *
    rt_powd_snf(phi, 3.0) * (psi * psi) * (o_a_tmp * o_a_tmp) / 40.0) + phi *
    the * ((psi * (the * the) * (d_a_tmp * d_a_tmp) / 20.0 - phi * phi * psi *
    (the * the) / 20.0) + psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0) / 2.0)
    + phi * the * ((rt_powd_snf(phi, 3.0) * (psi * psi) * (d_a_tmp * d_a_tmp) /
    10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) * (c_a_tmp *
    c_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp)
    * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) + jb_C_22_tmp * ((((the * sin(theta1) *
    (phi * phi * (psi * psi) * (d_a_tmp * d_a_tmp) + psi * psi * (the * the) *
    (c_a_tmp * c_a_tmp)) / 10.0 + d47 * c_C_22_tmp / 20.0) - d28 * a_tmp * d33 /
    20.0) + d52 * (phi * (the * the) * sin(theta1) * sin(theta2) - phi * (psi *
    psi) * (the * the) * sin(theta1) * sin(theta2)) / 20.0) - d28 * b_a_tmp *
    d35 / 20.0) / 2.0) - nb_C_22_tmp * h_C_22_tmp_tmp / 2.0) + nb_C_22_tmp *
    f_C_22_tmp / 2.0) + tb_C_22_tmp * (rt_powd_snf(phi, 3.0) * (psi * psi) *
    (d_a_tmp * d_a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp *
    c_a_tmp) / 20.0) / 2.0) - d48) + phi * (psi * psi) * (the * the) * (h_a_tmp *
    h_a_tmp) / 40.0) + phi * (psi * psi) * (the * the) * (i_a_tmp * i_a_tmp) /
    40.0) - 7.0 * phi * (psi * psi) * (the * the) * (q_a_tmp * q_a_tmp) / 40.0)
    - d49) + 7.0 * (phi * phi) * (psi * psi) * the * (o_a_tmp * o_a_tmp) / 40.0)
    - tb_C_22_tmp * (((((rt_powd_snf(phi, 3.0) * (psi * psi) * (d_a_tmp *
    d_a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (j_a_tmp * j_a_tmp) /
    20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (l_a_tmp * l_a_tmp) / 20.0) -
    phi * (psi * psi) * (the * the) * (h_a_tmp * h_a_tmp) / 20.0) - phi * (psi *
    psi) * (the * the) * (i_a_tmp * i_a_tmp) / 20.0) - o_C_22_tmp * (c_a_tmp *
    c_a_tmp) / 10.0) / 2.0) + tb_C_22_tmp * ((rt_powd_snf(phi, 3.0) * (psi * psi)
    * (d_a_tmp * d_a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) *
    (j_a_tmp * j_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (l_a_tmp
    * l_a_tmp) / 20.0) / 2.0) - d50) - tb_C_22_tmp * (((((rt_powd_snf(phi, 3.0) *
    (psi * psi) * (d_a_tmp * d_a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi *
    psi) * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0)
    * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) - phi *
    (psi * psi) * (the * the) * (c_a_tmp * c_a_tmp) / 10.0) - phi * (psi * psi) *
    (the * the) * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 20.0) - phi * (psi *
    psi) * (the * the) * (d_a_tmp * d_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0)
    + 21.0 * (phi * phi) * psi * cos(theta2) * sin(theta1) / 800.0) -
    tb_C_22_tmp * (((rt_powd_snf(phi, 3.0) * (psi * psi) * (d_a_tmp * d_a_tmp) /
    10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) / 20.0) -
    phi * (psi * psi) * (the * the) * (d_a_tmp * d_a_tmp) / 20.0) - phi * (psi *
    psi) * (the * the) * (c_a_tmp * c_a_tmp) / 10.0) / 2.0) + 21.0 * phi * the *
    sin(theta2) * (3.0 * phi * (the * the) * sin(theta2) / 20.0 + 3.0 * (phi *
    phi) * psi * (the * the) * sin(theta2) / 20.0) / 800.0) - 337.0 *
    rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) /
    16000.0) - rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) *
    (b_a_tmp * b_a_tmp) / 40.0) - nb_C_22_tmp * ((phi * phi * (psi * psi) * the *
    cos(theta1) * (a_tmp * a_tmp) * sin(theta1) / 10.0 - phi * phi * (psi * psi)
    * the * cos(theta1) * sin(theta1) / 5.0) + phi * phi * (psi * psi) * the *
    cos(theta1) * sin(theta1) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) + nb_C_22_tmp
    * ((phi * phi * (psi * psi) * the * cos(theta1) * (a_tmp * a_tmp) * sin
    (theta1) / 20.0 - phi * phi * (psi * psi) * the * cos(theta1) * sin(theta1) /
    10.0) + phi * phi * (psi * psi) * the * cos(theta1) * sin(theta1) * (b_a_tmp
    * b_a_tmp) / 20.0) / 2.0) + xc_C_22_tmp) + phi * (psi * psi) * (the * the) *
    (d_a_tmp * d_a_tmp) / 40.0) + 3.0 * phi * (psi * psi) * (the * the) *
    (c_a_tmp * c_a_tmp) / 20.0) - 7.0 * phi * psi * rt_powd_snf(the, 3.0) *
    (q_a_tmp * q_a_tmp) / 40.0) + tb_C_22_tmp * ((rt_powd_snf(phi, 3.0) * (psi *
    psi) * (d_a_tmp * d_a_tmp) / 10.0 + rt_powd_snf(phi, 3.0) * (psi * psi) *
    (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi
    * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) +
    p_C_22_tmp * ab_C_22_tmp_tmp / 800.0) + bb_C_22_tmp_tmp *
    (e_C_22_tmp_tmp_tmp + f_C_22_tmp_tmp_tmp) / 40.0) + g_C_22_tmp * o_a_tmp *
    (d93 + d94) / 40.0) + d54 * (3.0 * phi * (the * the) * sin(theta2) / 20.0 +
    3.0 * (phi * phi) * psi * (the * the) * sin(theta2) / 20.0) * ((3.0 * cos
    (theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) -
    0.1) / 40.0) + d73 * d0 * (d_a_tmp_tmp_tmp / 20.0 - f_a_tmp_tmp_tmp / 20.0) *
    (d40 * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin
    (theta2) / 20.0) + d37 * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
    (theta3) * sin(theta2) / 20.0)) / 20.0) + wd_C_22_tmp * the * (a_tmp_tmp_tmp
    * e_a_tmp / 20.0 - c_a_tmp_tmp_tmp * c_a_tmp / 20.0) * (cos(theta1) *
    (d_a_tmp_tmp_tmp / 10.0 - f_a_tmp_tmp_tmp / 10.0) + sin(theta1) *
    (q_a_tmp_tmp / 10.0 - r_a_tmp_tmp / 10.0)) / 40.0) - d71 * d6 * the *
    (b_a_tmp_tmp_tmp_tmp * sin(theta3) / 20.0 - e_a_tmp_tmp_tmp * cos(theta3) /
    20.0) * (a_tmp_tmp_tmp_tmp * sin(theta2) * sin(theta3) / 20.0 -
    b_a_tmp_tmp_tmp * cos(theta3) * sin(theta1) / 20.0) / 20.0) - rt_powd_snf
    (phi, 3.0) * d6 * the * cos(theta1) * sin(theta1) / 20.0) + gb_C_22_tmp *
    (phi * (the * the) / 20.0 + d21 * psi * (the * the) / 20.0) *
    (t_C_22_tmp_tmp - 0.1) / 20.0) + 7.0 * rt_powd_snf(phi, 3.0) * psi * the *
    (3.0 * c_a_tmp * sin(theta2) * sin(theta3) / 20.0 - 3.0 * a_tmp * cos(theta3)
    * sin(theta1) / 20.0) * (cos(theta1) * ((3.0 * d_a_tmp * cos(theta2) / 10.0
    + p_a_tmp * b_a_tmp * sin(theta3) / 10.0) - p_a_tmp * cos(theta2) * cos
    (theta3) / 10.0) + sin(theta1) * ((3.0 * a_tmp * sin(theta1) / 10.0 +
    a_tmp_tmp_tmp_tmp * b_a_tmp * sin(theta3) / 10.0) - b_a_tmp_tmp_tmp * cos
    (theta3) * sin(theta1) / 10.0)) / 40.0) + 7.0 * phi * psi * sin(theta1) *
    (3.0 * phi * (the * the) * sin(theta2) / 20.0 + d38 * psi * (the * the) *
    sin(theta2) / 20.0) * mc_C_22_tmp / 40.0) + wd_C_22_tmp * t_C_22_tmp *
    q_a_tmp * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin
    (theta2) / 20.0) / 20.0) + mb_C_22_tmp) + xb_C_22_tmp) + yb_C_22_tmp) +
    ac_C_22_tmp) + cc_C_22_tmp) + C_22_tmp) - 63.0 * phi * psi * rt_powd_snf(the,
    3.0) * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 16000.0) + dc_C_22_tmp) + d42
    * xd_C_22_tmp * the * (d_a_tmp * d_a_tmp) * c_a_tmp / 40.0) - q_C_22_tmp *
    (a_tmp * a_tmp) * c_a_tmp / 16000.0) + ec_C_22_tmp) + q_C_22_tmp * c_a_tmp *
    (b_a_tmp * b_a_tmp) / 16000.0) + u_C_22_tmp) + v_C_22_tmp) + kc_C_22_tmp) +
                       x_C_22_tmp) + 337.0 * phi * (psi * psi) * (the * the) *
                      (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 16000.0) + phi *
                     (psi * psi) * (the * the) * (d_a_tmp * d_a_tmp) * (b_a_tmp *
    b_a_tmp) / 40.0) + 63.0 * (phi * phi) * (psi * psi) * the * (a_tmp * a_tmp) *
                    (c_a_tmp * c_a_tmp) / 16000.0) - ed_C_22_tmp) - nc_C_22_tmp)
                 - yd_C_22_tmp * t_C_22_tmp * d_a_tmp * a_tmp * b_a_tmp / 8000.0)
                - oc_C_22_tmp) - pc_C_22_tmp) + qc_C_22_tmp) - ab_C_22_tmp) -
            63.0 * rt_powd_snf(phi, 3.0) * (psi * psi) * the * cos(theta1) *
            (a_tmp * a_tmp) * sin(theta1) / 8000.0) - rc_C_22_tmp) + bb_C_22_tmp)
         + sc_C_22_tmp) - eb_C_22_tmp) + db_C_22_tmp) - tc_C_22_tmp) -
     gd_C_22_tmp) - fb_C_22_tmp;
  d4 = rt_powd_snf(the, 4.0);
  d10 = gc_C_22_tmp / 20.0;
  d11 = hc_C_22_tmp / 20.0;
  d23 = ic_C_22_tmp / 20.0;
  d28 = jc_C_22_tmp / 20.0;
  C_22[2] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((((((((((((((((((((((((d5 - d66) - phi * (rt_powd_snf
    (phi, 3.0) * rt_powd_snf(the, 3.0) * (m_a_tmp * m_a_tmp) / 20.0 +
    rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (n_a_tmp * n_a_tmp) / 20.0) /
    2.0) + phi * ((((phi * psi * cos(theta1) * (phi * phi * (the * the) * cos
    (theta1) + phi * phi * psi * the * cos(theta1)) / 10.0 - rt_powd_snf(phi,
    3.0) * psi * (the * the) * (m_a_tmp * m_a_tmp) / 20.0) - rt_powd_snf(phi,
    3.0) * psi * (the * the) * (n_a_tmp * n_a_tmp) / 20.0) + phi * psi * (phi *
    phi * (the * the) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) *
    sin(theta1) * sin(theta2)) + phi * phi * psi * the * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2)) / 20.0) + phi * psi * (phi * phi * (the * the) * (sin(theta1) *
    sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) + phi *
    phi * psi * the * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) *
    cos(theta3) * sin(theta1))) * (sin(theta1) * sin(theta2) * sin(theta3) - cos
    (theta2) * cos(theta3) * sin(theta1)) / 20.0) / 2.0) + d68) - d69) - phi *
    (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (a_tmp * a_tmp) / 20.0 +
    rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (b_a_tmp * b_a_tmp) / 20.0) /
    2.0) + phi * ((((phi * psi * cos(theta1) * (phi * phi * (the * the) * cos
    (theta1) + phi * phi * psi * the * cos(theta1)) / 10.0 - rt_powd_snf(phi,
    3.0) * psi * (the * the) * (a_tmp * a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) *
    psi * (the * the) * (b_a_tmp * b_a_tmp) / 20.0) + phi * psi * sin(theta1) *
    sin(theta2) * (phi * phi * (the * the) * sin(theta1) * sin(theta2) + phi *
    phi * psi * the * sin(theta1) * sin(theta2)) / 20.0) + phi * psi * cos
    (theta2) * sin(theta1) * (phi * phi * (the * the) * cos(theta2) * sin(theta1)
    + phi * phi * psi * the * cos(theta2) * sin(theta1)) / 20.0) / 2.0) + d17) +
    3.0 * (phi * phi) * psi * the / 400.0) + d63) - phi * the * (((rt_powd_snf
    (phi, 3.0) * rt_powd_snf(the, 3.0) * (cos(theta2) * sin(theta1) * sin(theta3)
    + cos(theta3) * sin(theta1) * sin(theta2)) * (cos(theta2) * cos(theta3) -
    sin(theta2) * sin(theta3)) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the,
    3.0) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) *
    sin(theta1)) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) /
    20.0) + phi * the * (phi * phi * (the * the) * (cos(theta2) * sin(theta1) *
    sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) + phi * phi * psi *
    the * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) *
    sin(theta2))) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) /
    20.0) + phi * the * (phi * phi * (the * the) * (sin(theta1) * sin(theta2) *
    sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) + phi * phi * psi *
    the * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) *
    sin(theta1))) * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) /
    20.0) / 2.0) + 3.0 * rt_powd_snf(phi, 3.0) * (psi * psi) * (d_a_tmp *
    d_a_tmp) / 20.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp)
    / 40.0) - d19) + d20) + d82) - d85) + d86) - d51) + rt_powd_snf(phi, 3.0) *
    (psi * psi) * (j_a_tmp * j_a_tmp) / 40.0) + rt_powd_snf(phi, 3.0) * (psi *
    psi) * (l_a_tmp * l_a_tmp) / 40.0) - 7.0 * rt_powd_snf(phi, 3.0) * (psi *
    psi) * (o_a_tmp * o_a_tmp) / 40.0) - d76 * d4 * d_a_tmp / 40.0) + d75) -
    r_C_22_tmp_tmp) + d87) - bc_C_22_tmp * (rt_powd_snf(phi, 3.0) * rt_powd_snf
    (the, 3.0) * (a_tmp * a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf
    (the, 3.0) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - gb_C_22_tmp * d8 / 40.0) -
    o_C_22_tmp * (h_a_tmp * h_a_tmp) / 40.0) - d7 * d0 * (i_a_tmp * i_a_tmp) /
    40.0) + kb_C_22_tmp * d0 * (q_a_tmp * q_a_tmp) / 40.0) - 3.0 * phi * psi *
    cos(theta1) * ((((phi * psi * cos(theta1) * (phi * phi * (the * the) * cos
    (theta1) + phi * phi * psi * the * cos(theta1)) / 10.0 - rt_powd_snf(phi,
    3.0) * psi * (the * the) * (a_tmp * a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) *
    psi * (the * the) * (b_a_tmp * b_a_tmp) / 20.0) + d70 / 20.0) + d29 *
    ib_C_22_tmp / 20.0) / 2.0) - d22 * d6 * the * (o_a_tmp * o_a_tmp) / 40.0) -
    3.0 * psi * the * sin(theta1) * (b_C_22_tmp * sin(theta1) * (e_C_22_tmp +
    phi * phi * psi * the * cos(theta1)) / 10.0 - b_C_22_tmp * cos(theta1) *
    (m_C_22_tmp + phi * phi * psi * the * sin(theta1)) / 20.0) / 2.0) - 3.0 *
    psi * the * sin(theta1) * (phi * phi * (the * the) * cos(theta1) + d21 * psi
    * the * cos(theta1)) / 10.0) + d88) + psi * the * cos(theta1) * (phi * phi *
    (the * the) * sin(theta1) + phi * phi * psi * the * sin(theta1)) / 20.0) +
    rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0) * (m_a_tmp * m_a_tmp) /
    40.0) + rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0) * (n_a_tmp *
    n_a_tmp) / 40.0) - 21.0 * phi * the * sin(theta2) * (3.0 * phi * (the * the)
    * sin(theta2) / 20.0 + 3.0 * (phi * phi) * psi * (the * the) * sin(theta2) /
    20.0) / 800.0) - yc_C_22_tmp) - bc_C_22_tmp * (rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (m_a_tmp * m_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (n_a_tmp * n_a_tmp) / 20.0) / 2.0) + 337.0 *
    rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) * (c_a_tmp * c_a_tmp) /
    16000.0) + y_C_22_tmp * j_a_tmp * d32 / 40.0) + y_C_22_tmp * l_a_tmp * d31 /
    40.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (c_a_tmp * c_a_tmp) * (b_a_tmp
    * b_a_tmp) / 40.0) - xc_C_22_tmp) - nb_C_22_tmp * ((((phi * psi * cos(theta1)
    * (phi * phi * (the * the) * cos(theta1) + phi * phi * psi * the * cos
    (theta1)) / 10.0 - rt_powd_snf(phi, 3.0) * psi * (the * the) * (m_a_tmp *
    m_a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) * psi * (the * the) * (n_a_tmp *
    n_a_tmp) / 20.0) + phi * psi * (phi * phi * (the * the) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) + phi *
    phi * psi * the * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) *
    sin(theta1) * sin(theta2))) * (cos(theta2) * sin(theta1) * sin(theta3) + cos
    (theta3) * sin(theta1) * sin(theta2)) / 20.0) + phi * psi * (phi * phi *
    (the * the) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
    (theta3) * sin(theta1)) + phi * phi * psi * the * (sin(theta1) * sin(theta2)
    * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) * (sin(theta1) *
    sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) / 20.0)
    / 2.0) - nb_C_22_tmp * d67 / 2.0) - d_C_22_tmp_tmp_tmp) + tb_C_22_tmp *
    ((d10 - psi * the * sin(theta1) * (phi * phi * (the * the) * cos(theta1) +
    phi * phi * psi * the * cos(theta1)) / 10.0) + d11) / 2.0) - phi * (psi *
    psi) * (the * the) * (d_a_tmp * d_a_tmp) / 40.0) + rt_powd_snf(phi, 3.0) *
    psi * rt_powd_snf(the, 3.0) * (a_tmp * a_tmp) / 40.0) + d89) - 3.0 * phi *
    (psi * psi) * (the * the) * (c_a_tmp * c_a_tmp) / 20.0) + rt_powd_snf(phi,
    3.0) * psi * rt_powd_snf(the, 3.0) * (b_a_tmp * b_a_tmp) / 40.0) + 7.0 * phi
    * psi * rt_powd_snf(the, 3.0) * (q_a_tmp * q_a_tmp) / 40.0) + ad_C_22_tmp) -
    psi * the * (phi * (the * the) * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2)) + psi * (the * the) * (cos(theta1) *
    cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2))) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) / 40.0) - psi * the * (phi * (the * the) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) + psi *
    (the * the) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3))) * (cos(theta1) * sin(theta2) * sin(theta3) - cos
    (theta1) * cos(theta2) * cos(theta3)) / 40.0) + tb_C_22_tmp * ((d23 - psi *
    the * sin(theta1) * (phi * phi * (the * the) * cos(theta1) + phi * phi * psi
    * the * cos(theta1)) / 10.0) + d28) / 2.0) + d10) + d11) + bd_C_22_tmp) -
    d90) - 9.0 * phi * psi * d_a_tmp * (phi * phi * (psi * psi) * (d_a_tmp *
    d_a_tmp) + psi * psi * (the * the) * (c_a_tmp * c_a_tmp)) / 20.0) + d91) -
    7.0 * psi * the * cos(theta1) * (3.0 * (phi * phi) * (the * the) * sin
    (theta2) / 20.0 + 3.0 * (phi * phi) * psi * the * sin(theta2) / 20.0) *
    ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) /
    10.0) - 0.1) / 40.0) + d23) - 7.0 * phi * psi * (the * the) * (3.0 * cos
    (theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2)
    * cos(theta3) / 20.0) * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) /
    10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
    (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos
    (theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0) -
    psi * the * cos(theta1) * sin(theta2) * (phi * (the * the) * cos(theta1) *
    sin(theta2) + psi * (the * the) * cos(theta1) * sin(theta2)) / 40.0) - 7.0 *
    (phi * phi) * psi * rt_powd_snf(the, 3.0) * (3.0 * cos(theta1) * sin(theta2)
    * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0)
    * o_a_tmp / 20.0) - 3.0 * psi * the * cos(theta1) * (phi * phi * (the * the)
    / 20.0 + phi * phi * psi * the / 20.0) * ((3.0 * cos(theta2) * sin(theta3) /
    10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 20.0) + 7.0 * (phi *
    phi) * psi * the * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0 -
    3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) * (phi * phi * (the *
    the) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin
    (theta2) / 20.0) + phi * phi * psi * the * (3.0 * cos(theta2) * sin(theta3) /
    20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0)) / 20.0) - 7.0 * psi * the *
    cos(theta1) * (3.0 * (phi * phi) * (the * the) * sin(theta2) / 20.0 + 3.0 *
    (phi * phi) * psi * the * sin(theta2) / 20.0) * ((3.0 * cos(theta2) * sin
    (theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2)
    / 10.0) / 40.0) - 7.0 * (phi * phi) * psi * rt_powd_snf(the, 3.0) * (3.0 *
    cos(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos
    (theta2) * cos(theta3) / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * sin
    (theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3)
    / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) /
    10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0) + 7.0 *
    (phi * phi) * psi * rt_powd_snf(the, 3.0) * (3.0 * cos(theta1) * sin(theta2)
    * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0)
    * (3.0 * cos(theta2) * cos(theta3) / 20.0 - 3.0 * sin(theta2) * sin(theta3) /
    20.0) / 20.0) + 7.0 * (phi * phi) * psi * rt_powd_snf(the, 3.0) * (3.0 * cos
    (theta1) * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta1) * cos(theta3)
    * sin(theta2) / 20.0) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
    (theta3) * sin(theta2) / 20.0) / 20.0) - 7.0 * psi * the * cos(theta1) *
    (phi * phi * (the * the) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
    cos(theta3) * sin(theta2) / 20.0) + phi * phi * psi * the * (3.0 * cos
    (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0)) *
    (t_C_22_tmp_tmp - 0.1) / 40.0) - r_C_22_tmp * d53 * ((cb_C_22_tmp -
    s_C_22_tmp_tmp) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 20.0) +
    fc_C_22_tmp * (i_a_tmp_tmp + j_a_tmp_tmp) * n_a_tmp / 40.0) + phi * phi *
    psi * rt_powd_snf(the, 3.0) * (l_a_tmp_tmp - m_a_tmp_tmp) * m_a_tmp / 40.0)
    - d43 * rt_powd_snf(the, 3.0) * (a_tmp_tmp_tmp * e_a_tmp / 20.0 -
    c_a_tmp_tmp_tmp * c_a_tmp / 20.0) * (3.0 * a_tmp * sin(theta3) / 20.0 + 3.0 *
    g_a_tmp * sin(theta2) / 20.0) / 40.0) + 63.0 * phi * psi * rt_powd_snf(the,
    3.0) * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 16000.0) - j_C_22_tmp * psi *
    rt_powd_snf(the, 3.0) * cos(theta1) * (a_tmp * a_tmp) / 16000.0) - 7.0 * d21
    * psi * rt_powd_snf(the, 3.0) * (p_a_tmp * sin(theta2) * sin(theta3) / 20.0
    - p_a_tmp * cos(theta2) * cos(theta3) / 20.0) * (cos(theta1) * ((p_a_tmp *
    cos(theta2) / 10.0 + b_a_tmp_tmp_tmp_tmp * sin(theta3) / 10.0) - p_a_tmp *
    a_tmp * cos(theta3) / 10.0) + sin(theta1) * ((b_a_tmp_tmp_tmp * sin(theta1) /
    10.0 + a_tmp_tmp_tmp * sin(theta3) / 10.0) - b_a_tmp_tmp_tmp * g_a_tmp * sin
    (theta1) / 10.0)) / 40.0) - ae_C_22_tmp) - rb_C_22_tmp) - y_C_22_tmp * a_tmp
    * c_a_tmp * d33 / 40.0) + 63.0 * (phi * phi) * psi * rt_powd_snf(the, 3.0) *
    cos(theta1) * (b_a_tmp * b_a_tmp) / 16000.0) - be_C_22_tmp) - ce_C_22_tmp) -
    gb_C_22_tmp * b_a_tmp * d35 / 40.0) - de_C_22_tmp) + d16) + d18) -
    ub_C_22_tmp) - lb_C_22_tmp) - vb_C_22_tmp) - 337.0 * phi * (psi * psi) *
    (the * the) * (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 16000.0) - ee_C_22_tmp)
    + d28) - phi * (psi * psi) * (the * the) * (d_a_tmp * d_a_tmp) * (b_a_tmp *
    b_a_tmp) / 40.0) - 63.0 * (phi * phi) * (psi * psi) * the * (a_tmp * a_tmp) *
    (c_a_tmp * c_a_tmp) / 16000.0) - fe_C_22_tmp) - w_C_22_tmp) - ed_C_22_tmp) +
                    337.0 * phi * (psi * psi) * the * cos(theta1) * (a_tmp *
    a_tmp) * sin(theta1) / 8000.0) - fd_C_22_tmp) + phi * (psi * psi) * the *
                  cos(theta1) * sin(theta1) * (b_a_tmp * b_a_tmp) / 20.0) +
                 ge_C_22_tmp) + he_C_22_tmp) - ie_C_22_tmp) + lc_C_22_tmp) +
             je_C_22_tmp) - 63.0 * (phi * phi) * psi * rt_powd_snf(the, 3.0) *
            cos(theta1) * (a_tmp * a_tmp) * c_a_tmp / 8000.0) - wc_C_22_tmp) -
          ke_C_22_tmp) + le_C_22_tmp) - cd_C_22_tmp) + me_C_22_tmp) - 63.0 *
      (phi * phi) * (psi * psi) * (the * the) * cos(theta1) * (a_tmp * a_tmp) *
      sin(theta1) / 8000.0) + dd_C_22_tmp) - gd_C_22_tmp;
  d2 = d2 * c_C_22_tmp_tmp_tmp / 10.0;
  C_22[5] =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((((((((phi * (((phi * phi * (psi * psi) * (d_a_tmp *
    d_a_tmp) / 10.0 - psi * psi * (the * the) * (d_a_tmp * d_a_tmp) / 20.0) +
    phi * phi * (psi * psi) * (c_a_tmp * c_a_tmp) / 20.0) - psi * psi * (the *
    the) * (c_a_tmp * c_a_tmp) / 10.0) / 2.0 - 3.0 * phi * ((psi * the * sin
    (theta1) * (phi * phi * (psi * psi) * (d_a_tmp * d_a_tmp) + psi * psi * (the
    * the) * (c_a_tmp * c_a_tmp)) / 10.0 + psi * the * (cos(theta1) * cos(theta2)
    * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (psi * psi * (the
    * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1)
    * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 20.0) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin
    (theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1))) / 20.0) / 2.0) - phi * (rt_powd_snf(phi, 3.0) * rt_powd_snf(the,
    3.0) * (m_a_tmp * m_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the,
    3.0) * (n_a_tmp * n_a_tmp) / 20.0) / 2.0) - d66) - d44) - 3.0 * phi * (psi *
    the * sin(theta1) * (phi * phi * (psi * psi) * (d_a_tmp * d_a_tmp) + psi *
    psi * (the * the) * (c_a_tmp * c_a_tmp)) / 10.0 - psi * the * cos(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 20.0) / 2.0) - phi * (phi * psi * sin
    (theta1) * (phi * (the * the) * cos(theta1) + psi * (the * the) * cos(theta1))
    / 20.0 - phi * psi * cos(theta1) * (phi * (the * the) * sin(theta1) + psi *
    (the * the) * sin(theta1)) / 10.0)) - phi * ((phi * phi * (psi * psi) * the *
    cos(theta1) * (a_tmp * a_tmp) * sin(theta1) / 10.0 - phi * phi * (psi * psi)
    * the * cos(theta1) * sin(theta1) / 5.0) + phi * phi * (psi * psi) * the *
    cos(theta1) * sin(theta1) * (b_a_tmp * b_a_tmp) / 10.0) / 2.0) + phi *
    ((((phi * psi * cos(theta1) * (phi * phi * (the * the) * cos(theta1) + phi *
    phi * psi * the * cos(theta1)) / 10.0 - rt_powd_snf(phi, 3.0) * psi * (the *
    the) * (m_a_tmp * m_a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) * psi * (the *
    the) * (n_a_tmp * n_a_tmp) / 20.0) + phi * psi * (phi * phi * (the * the) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2)) + phi * phi * psi * the * (cos(theta2) * sin(theta1) * sin(theta3)
    + cos(theta3) * sin(theta1) * sin(theta2))) * (cos(theta2) * sin(theta1) *
    sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) / 20.0) + phi * psi *
    (phi * phi * (the * the) * (sin(theta1) * sin(theta2) * sin(theta3) - cos
    (theta2) * cos(theta3) * sin(theta1)) + phi * phi * psi * the * (sin(theta1)
    * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1)) / 20.0) / 2.0) + d68) - d69) + 3.0 * phi * ((psi * the * cos
    (theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2)
    * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin
    (theta1)) / 20.0 - psi * the * sin(theta1) * (phi * phi * (psi * psi) *
    (d_a_tmp * d_a_tmp) + psi * psi * (the * the) * (c_a_tmp * c_a_tmp)) / 10.0)
    + psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos
    (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1)
    * sin(theta1) * sin(theta2)) / 20.0) / 2.0) - phi * sb_C_22_tmp) + 3.0 * phi
    * d0 / 400.0) + phi * (((((phi * phi * (psi * psi) * (d_a_tmp * d_a_tmp) /
    10.0 - psi * psi * (the * the) * (c_a_tmp * c_a_tmp) / 10.0) - psi * psi *
    (the * the) * (h_a_tmp * h_a_tmp) / 20.0) - psi * psi * (the * the) *
    (i_a_tmp * i_a_tmp) / 20.0) + phi * phi * (psi * psi) * (j_a_tmp * j_a_tmp) /
    20.0) + phi * phi * (psi * psi) * (l_a_tmp * l_a_tmp) / 20.0) / 2.0) + phi *
    (((((phi * phi * (psi * psi) * (d_a_tmp * d_a_tmp) / 10.0 - psi * psi * (the
    * the) * (c_a_tmp * c_a_tmp) / 10.0) - psi * psi * (the * the) * (d_a_tmp *
    d_a_tmp) * (a_tmp * a_tmp) / 20.0) + phi * phi * (psi * psi) * (a_tmp *
    a_tmp) * (c_a_tmp * c_a_tmp) / 20.0) - psi * psi * (the * the) * (d_a_tmp *
    d_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) + phi * phi * (psi * psi) * (c_a_tmp *
    c_a_tmp) * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - phi * (d9 * (a_tmp * a_tmp) /
    20.0 + d9 * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - phi * ((b_C_22_tmp_tmp *
    j_a_tmp / 10.0 + e_C_22_tmp_tmp * l_a_tmp / 10.0) - phi * phi * (psi * psi) *
    the * cos(theta1) * sin(theta1) / 5.0) / 2.0) - phi * (d13 * h_a_tmp *
    (k_a_tmp - p_a_tmp_tmp) / 20.0 + d13 * i_a_tmp * (n_a_tmp_tmp + o_a_tmp_tmp)
    / 20.0) / 2.0) + phi * ((((d14 * (phi * phi * (the * the) * cos(theta1) +
    phi * phi * psi * the * cos(theta1)) / 10.0 - d13 * (a_tmp * a_tmp) / 20.0)
    - d13 * (b_a_tmp * b_a_tmp) / 20.0) + d25 * sin(theta2) * (j_C_22_tmp_tmp +
    k_C_22_tmp_tmp) / 20.0) + d27 * sin(theta1) * (l_C_22_tmp_tmp * sin(theta1)
    + m_C_22_tmp_tmp * sin(theta1)) / 20.0) / 2.0) + the * (phi * phi * psi *
    rt_powd_snf(the, 3.0) * (b_a_tmp_tmp + c_a_tmp_tmp) * (cos(theta2) * cos
    (theta3) - sin(theta2) * sin(theta3)) / 20.0 + phi * phi * psi * rt_powd_snf
    (the, 3.0) * (e_a_tmp_tmp - f_a_tmp_tmp) * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2)) / 20.0) / 2.0) - phi * ((d1 * cos(theta2) * sin
    (theta1) * (d40 * d_a_tmp * cos(theta2) + d36 * d_a_tmp * cos(theta2)) /
    20.0 - phi * psi * cos(theta1) * (phi * d0 * sin(theta1) + psi * d0 * sin
    (theta1)) / 10.0) + phi * psi * sin(theta1) * sin(theta2) * (d40 * cos
    (theta1) * sin(theta2) + d36 * cos(theta1) * sin(theta2)) / 20.0)) + d61) -
    phi * the * (phi * the * sin(theta2) * (phi * d0 * cos(theta1) * cos(theta2)
    + psi * d0 * cos(theta1) * cos(theta2)) / 20.0 - phi * the * cos(theta2) *
    (phi * d0 * cos(theta1) * sin(theta2) + psi * d0 * cos(theta1) * sin(theta2))
    / 20.0) / 2.0) + d63) - d65 * (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0)
    * (m_a_tmp * m_a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0)
    * (n_a_tmp * n_a_tmp) / 20.0) / 2.0) + 7.0 * phi * (the * the) * (3.0 * cos
    (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) /
    40.0) + d41) + d20) + d45) - d65 * (rt_powd_snf(phi, 3.0) * rt_powd_snf(the,
    3.0) * (a_tmp * a_tmp) / 20.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0)
    * (b_a_tmp * b_a_tmp) / 20.0) / 2.0) - d51) + d26) - 7.0 * rt_powd_snf(phi,
    3.0) * (psi * psi) * (o_a_tmp * o_a_tmp) / 40.0) - d42 * d4 * c_a_tmp / 40.0)
    - r_C_22_tmp_tmp) + d48) - tb_C_22_tmp * ((vc_C_22_tmp / 20.0 - d12 / 20.0)
    + d2) / 2.0) + 7.0 * phi * (psi * psi) * (the * the) * (q_a_tmp * q_a_tmp) /
    40.0) + d49) - 7.0 * (phi * phi) * (psi * psi) * the * (o_a_tmp * o_a_tmp) /
    40.0) + nb_C_22_tmp * wb_C_22_tmp / 2.0) + d50) - 21.0 * (phi * phi) * psi *
    cos(theta2) * sin(theta1) / 800.0) + rt_powd_snf(phi, 3.0) * psi *
    rt_powd_snf(the, 3.0) * (m_a_tmp * m_a_tmp) / 40.0) + rt_powd_snf(phi, 3.0) *
    psi * rt_powd_snf(the, 3.0) * (n_a_tmp * n_a_tmp) / 40.0) - 21.0 * phi * the
    * sin(theta2) * (3.0 * phi * (the * the) * sin(theta2) / 20.0 + 3.0 * (phi *
    phi) * psi * (the * the) * sin(theta2) / 20.0) / 800.0) - yc_C_22_tmp) -
    63.0 * rt_powd_snf(phi, 3.0) * (psi * psi) * (a_tmp * a_tmp) * (c_a_tmp *
    c_a_tmp) / 16000.0) + nb_C_22_tmp * (phi * psi * sin(theta1) * (phi * (the *
    the) * cos(theta1) + psi * (the * the) * cos(theta1)) / 20.0 - phi * psi *
    cos(theta1) * (phi * (the * the) * sin(theta1) + psi * (the * the) * sin
    (theta1)) / 10.0) / 2.0) - xc_C_22_tmp) - d_C_22_tmp_tmp_tmp) + rt_powd_snf
    (phi, 3.0) * psi * rt_powd_snf(the, 3.0) * (a_tmp * a_tmp) / 40.0) -
    tb_C_22_tmp * ((((d2 - rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0) *
    (n_a_tmp * n_a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the,
    3.0) * (m_a_tmp * m_a_tmp) / 20.0) + d95 / 20.0) + d96 / 20.0) / 2.0) -
    tb_C_22_tmp * ((((d2 - rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0) *
    (a_tmp * a_tmp) / 20.0) - rt_powd_snf(phi, 3.0) * psi * rt_powd_snf(the, 3.0)
    * (b_a_tmp * b_a_tmp) / 20.0) + psi * the * cos(theta1) * sin(theta2) * (phi
    * (the * the) * cos(theta1) * sin(theta2) + psi * (the * the) * cos(theta1) *
    sin(theta2)) / 20.0) + d_C_22_tmp_tmp / 20.0) / 2.0) + rt_powd_snf(phi, 3.0)
    * psi * rt_powd_snf(the, 3.0) * (b_a_tmp * b_a_tmp) / 40.0) + 7.0 * phi *
    psi * rt_powd_snf(the, 3.0) * (q_a_tmp * q_a_tmp) / 40.0) + ad_C_22_tmp) -
    psi * the * (phi * (the * the) * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2)) + psi * (the * the) * (cos(theta1) *
    cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2))) * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) / 40.0) - psi * the * (phi * (the * the) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) + psi *
    (the * the) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
    (theta2) * cos(theta3))) * (cos(theta1) * sin(theta2) * sin(theta3) - cos
    (theta1) * cos(theta2) * cos(theta3)) / 40.0) + nb_C_22_tmp * sb_C_22_tmp /
    2.0) + db_C_22_tmp_tmp / 40.0) - 7.0 * rt_powd_snf(phi, 3.0) * (psi * psi) *
    (the * the) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 *
    cos(theta2) * cos(theta3) * sin(theta1) / 20.0) * (cos(theta1) * ((3.0 * cos
    (theta1) * cos(theta2) / 10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1)
    * ((3.0 * cos(theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2)
    * sin(theta3) / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0))
    / 40.0) - 7.0 * phi * psi * sin(theta1) * (3.0 * phi * (the * the) * sin
    (theta2) / 20.0 + 3.0 * (phi * phi) * psi * (the * the) * sin(theta2) / 20.0)
    * (t_C_22_tmp_tmp - 0.1) / 40.0) - d39 * q_a_tmp * (C_22_tmp_tmp_tmp +
    b_C_22_tmp_tmp_tmp) / 20.0) - 7.0 * rt_powd_snf(phi, 3.0) * psi * the *
    (s_a_tmp_tmp - t_a_tmp_tmp) * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2)
    * sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0)
    + sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 *
    cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0) - b_C_22_tmp * cos
    (theta1) * sin(theta2) * (d46 * sin(theta2) + x_C_22_tmp_tmp * sin(theta2)) /
    40.0) + wd_C_22_tmp * d0 * (b_a_tmp_tmp_tmp_tmp * e_a_tmp / 20.0 -
    e_a_tmp_tmp_tmp * g_a_tmp / 20.0) * (a_tmp_tmp_tmp_tmp * b_a_tmp * sin
    (theta3) / 20.0 - b_a_tmp_tmp_tmp * g_a_tmp * sin(theta1) / 20.0) / 20.0) +
    d71 * d6 * the * (b_a_tmp_tmp_tmp_tmp * sin(theta3) / 20.0 - e_a_tmp_tmp_tmp
    * cos(theta3) / 20.0) * (a_tmp_tmp_tmp_tmp * sin(theta2) * sin(theta3) /
    20.0 - b_a_tmp_tmp_tmp * cos(theta3) * sin(theta1) / 20.0) / 20.0) +
    rt_powd_snf(phi, 3.0) * d6 * the * cos(theta1) * sin(theta1) / 20.0) - 3.0 *
    phi * psi * sin(theta1) * (phi * (the * the) / 20.0 + d21 * psi * (the * the)
    / 20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin
    (theta2) / 10.0) - 0.1) / 20.0) - 7.0 * rt_powd_snf(phi, 3.0) * psi * the *
    (3.0 * c_a_tmp * sin(theta2) * sin(theta3) / 20.0 - 3.0 * a_tmp * cos(theta3)
    * sin(theta1) / 20.0) * (cos(theta1) * ((3.0 * d_a_tmp * cos(theta2) / 10.0
    + p_a_tmp * b_a_tmp * sin(theta3) / 10.0) - p_a_tmp * cos(theta2) * cos
    (theta3) / 10.0) + sin(theta1) * ((3.0 * a_tmp * sin(theta1) / 10.0 +
    a_tmp_tmp_tmp_tmp * b_a_tmp * sin(theta3) / 10.0) - b_a_tmp_tmp_tmp * cos
    (theta3) * sin(theta1) / 10.0)) / 40.0) - 7.0 * phi * psi * sin(theta1) *
    (3.0 * phi * (the * the) * sin(theta2) / 20.0 + d38 * psi * (the * the) *
    sin(theta2) / 20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin
    (theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0) +
    mb_C_22_tmp) - xb_C_22_tmp) - yb_C_22_tmp) - ac_C_22_tmp) + cc_C_22_tmp) +
    C_22_tmp) + 63.0 * phi * psi * rt_powd_snf(the, 3.0) * (d_a_tmp * d_a_tmp) *
    (a_tmp * a_tmp) / 16000.0) - dc_C_22_tmp) + rb_C_22_tmp) - 63.0 *
    rt_powd_snf(phi, 4.0) * psi * (the * the) * (a_tmp * a_tmp) * sin(theta1) /
    16000.0) - ec_C_22_tmp) + 63.0 * rt_powd_snf(phi, 4.0) * psi * (the * the) *
    sin(theta1) * (b_a_tmp * b_a_tmp) / 16000.0) - u_C_22_tmp) - v_C_22_tmp) -
    kc_C_22_tmp) - x_C_22_tmp) + 63.0 * phi * (psi * psi) * (the * the) *
                       (d_a_tmp * d_a_tmp) * (a_tmp * a_tmp) / 16000.0) - 63.0 *
                      (phi * phi) * (psi * psi) * the * (a_tmp * a_tmp) *
                      (c_a_tmp * c_a_tmp) / 16000.0) - w_C_22_tmp) - ed_C_22_tmp)
                   + nc_C_22_tmp) - oc_C_22_tmp) + pc_C_22_tmp) - qc_C_22_tmp) +
               ab_C_22_tmp) + ne_C_22_tmp * d_a_tmp * (a_tmp * a_tmp) * c_a_tmp /
              8000.0) + 63.0 * rt_powd_snf(phi, 3.0) * (psi * psi) * the * cos
             (theta1) * (a_tmp * a_tmp) * sin(theta1) / 8000.0) + rc_C_22_tmp) -
           bb_C_22_tmp) - sc_C_22_tmp) + eb_C_22_tmp) - db_C_22_tmp) + 63.0 *
       (phi * phi) * (psi * psi) * (the * the) * cos(theta1) * (a_tmp * a_tmp) *
       sin(theta1) / 8000.0) + tc_C_22_tmp) - gd_C_22_tmp) + fb_C_22_tmp;
  C_22_tmp = 7.0 * (phi * phi) * (psi * psi) * d4 * q_a_tmp;
  b_C_22_tmp = ob_C_22_tmp * d6 * d0;
  c_C_22_tmp = c_C_22_tmp_tmp * d4;
  d_C_22_tmp = qb_C_22_tmp * d6 * d0;
  C_22[8] = (((((((((((((((((((((d15 - phi * d3 / 2.0) - d24) - phi * the *
    (((rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (cos(theta2) * sin(theta1)
    * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (cos(theta2) *
    cos(theta3) - sin(theta2) * sin(theta3)) / 20.0 + rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (sin(theta1) * sin(theta2) * sin(theta3) - cos
    (theta2) * cos(theta3) * sin(theta1)) * (cos(theta2) * sin(theta3) + cos
    (theta3) * sin(theta2)) / 20.0) + phi * the * (phi * phi * (the * the) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2)) + phi * phi * psi * the * (cos(theta2) * sin(theta1) * sin(theta3)
    + cos(theta3) * sin(theta1) * sin(theta2))) * (cos(theta2) * cos(theta3) -
    sin(theta2) * sin(theta3)) / 20.0) + phi * the * (phi * phi * (the * the) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
    (theta1)) + phi * phi * psi * the * (sin(theta1) * sin(theta2) * sin(theta3)
    - cos(theta2) * cos(theta3) * sin(theta1))) * (cos(theta2) * sin(theta3) +
    cos(theta3) * sin(theta2)) / 20.0) / 2.0) + phi * the * (phi * phi * psi *
    (the * the) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
    (theta3) * sin(theta2)) * (cos(theta2) * cos(theta3) - sin(theta2) * sin
    (theta3)) / 20.0 + phi * phi * psi * (the * the) * (cos(theta1) * sin(theta2)
    * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (cos(theta2) *
    sin(theta3) + cos(theta3) * sin(theta2)) / 20.0) / 2.0) - d85) + d26) - d92 /
    2.0) + d87) - 7.0 * phi * psi * (the * the) * (3.0 * cos(theta1) * sin
    (theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3)
    / 20.0) * (phi * (the * the) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0
    * cos(theta3) * sin(theta2) / 20.0) + phi * phi * psi * (the * the) * (3.0 *
    cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0)) /
    20.0) + 7.0 * (phi * phi) * psi * the * (3.0 * sin(theta1) * sin(theta2) *
    sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) *
                        (phi * phi * (the * the) * (3.0 * cos(theta2) * sin
    (theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) + phi * phi * psi *
    the * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin
           (theta2) / 20.0)) / 20.0) + C_22_tmp * ud_C_22_tmp / 10.0) + d83 /
                      40.0) + d84 / 40.0) - C_22_tmp * o_a_tmp / 20.0) +
                   b_C_22_tmp * q_a_tmp * o_a_tmp / 20.0) + b_C_22_tmp *
                  pb_C_22_tmp * o_a_tmp / 10.0) + nc_C_22_tmp) - fd_C_22_tmp) -
               c_C_22_tmp * d_a_tmp * (a_tmp * a_tmp) * c_a_tmp / 8000.0) +
              d_C_22_tmp * d_a_tmp * (a_tmp * a_tmp) * c_a_tmp / 8000.0) -
             c_C_22_tmp * (d_a_tmp * d_a_tmp) * a_tmp * b_a_tmp / 8000.0) -
    d_C_22_tmp * a_tmp * (c_a_tmp * c_a_tmp) * b_a_tmp / 8000.0;
}

/*
 * File trailer for C_num_simp_22.c
 *
 * [EOF]
 */
