/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: C_num_simp_21.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 22-Jan-2019 19:23:25
 */

/* Include Files */
#include <math.h>
#include "C_num_simp_21.h"

/* Function Definitions */

/*
 * Arguments    : double phi
 *                double the
 *                double psi
 *                double theta1
 *                double theta2
 *                double theta3
 *                double C_21[9]
 * Return Type  : void
 */
void C_num_simp_21(double phi, double the, double psi, double theta1, double
                   theta2, double theta3, double C_21[9])
{
  double C_21_tmp;
  double b_C_21_tmp;
  double c_C_21_tmp;
  double C_21_tmp_tmp_tmp;
  double C_21_tmp_tmp;
  double b_C_21_tmp_tmp;
  double c_C_21_tmp_tmp;
  double d_C_21_tmp_tmp;
  double e_C_21_tmp_tmp;
  double b_C_21_tmp_tmp_tmp;
  double f_C_21_tmp_tmp;
  double d_C_21_tmp;
  double e_C_21_tmp;
  double f_C_21_tmp;
  double g_C_21_tmp;
  double g_C_21_tmp_tmp;
  double c_C_21_tmp_tmp_tmp;
  double h_C_21_tmp_tmp;
  double h_C_21_tmp;
  double i_C_21_tmp;
  double j_C_21_tmp;
  double k_C_21_tmp;
  double l_C_21_tmp;
  double m_C_21_tmp;
  double n_C_21_tmp;
  double o_C_21_tmp;
  double p_C_21_tmp;
  double q_C_21_tmp;
  double r_C_21_tmp;
  double s_C_21_tmp;
  double i_C_21_tmp_tmp;
  double t_C_21_tmp;
  double u_C_21_tmp;
  double v_C_21_tmp;
  double w_C_21_tmp;
  double x_C_21_tmp;
  double y_C_21_tmp;
  double ab_C_21_tmp;
  double bb_C_21_tmp;
  double cb_C_21_tmp;
  double db_C_21_tmp;
  double eb_C_21_tmp;
  double fb_C_21_tmp;
  double gb_C_21_tmp;
  double hb_C_21_tmp;
  double ib_C_21_tmp;
  double jb_C_21_tmp;
  double kb_C_21_tmp;
  double lb_C_21_tmp;
  double mb_C_21_tmp;
  double nb_C_21_tmp;
  double ob_C_21_tmp;
  double pb_C_21_tmp;
  C_21_tmp = sin(theta1);
  b_C_21_tmp = phi * phi;
  c_C_21_tmp = 7.0 * b_C_21_tmp;
  C_21_tmp_tmp_tmp = cos(theta2);
  C_21_tmp_tmp = 3.0 * C_21_tmp_tmp_tmp;
  b_C_21_tmp_tmp = sin(theta3);
  c_C_21_tmp_tmp = cos(theta3);
  d_C_21_tmp_tmp = sin(theta2);
  e_C_21_tmp_tmp = 3.0 * C_21_tmp * d_C_21_tmp_tmp * b_C_21_tmp_tmp;
  b_C_21_tmp_tmp_tmp = C_21_tmp_tmp * c_C_21_tmp_tmp;
  f_C_21_tmp_tmp = b_C_21_tmp_tmp_tmp * C_21_tmp;
  d_C_21_tmp = e_C_21_tmp_tmp / 20.0 - f_C_21_tmp_tmp / 20.0;
  e_C_21_tmp = 3.0 * b_C_21_tmp;
  f_C_21_tmp = the * the;
  b_C_21_tmp *= 21.0;
  g_C_21_tmp = c_C_21_tmp * psi;
  g_C_21_tmp_tmp = C_21_tmp_tmp * b_C_21_tmp_tmp;
  c_C_21_tmp_tmp_tmp = 3.0 * c_C_21_tmp_tmp;
  h_C_21_tmp_tmp = c_C_21_tmp_tmp_tmp * d_C_21_tmp_tmp;
  h_C_21_tmp = g_C_21_tmp_tmp / 20.0 + h_C_21_tmp_tmp / 20.0;
  i_C_21_tmp = b_C_21_tmp * psi;
  j_C_21_tmp = c_C_21_tmp * the;
  k_C_21_tmp = j_C_21_tmp * d_C_21_tmp / 40.0;
  l_C_21_tmp = g_C_21_tmp * d_C_21_tmp / 40.0;
  m_C_21_tmp = b_C_21_tmp * the * C_21_tmp_tmp_tmp;
  n_C_21_tmp = i_C_21_tmp * C_21_tmp_tmp_tmp * C_21_tmp / 800.0;
  o_C_21_tmp = m_C_21_tmp * C_21_tmp / 800.0;
  p_C_21_tmp = e_C_21_tmp * psi;
  e_C_21_tmp = e_C_21_tmp * f_C_21_tmp / 400.0;
  q_C_21_tmp = p_C_21_tmp * the / 400.0;
  c_C_21_tmp = c_C_21_tmp * f_C_21_tmp * h_C_21_tmp / 40.0;
  b_C_21_tmp = b_C_21_tmp * f_C_21_tmp * d_C_21_tmp_tmp / 800.0;
  r_C_21_tmp = g_C_21_tmp * the;
  s_C_21_tmp = r_C_21_tmp * h_C_21_tmp / 40.0;
  i_C_21_tmp_tmp = i_C_21_tmp * the;
  t_C_21_tmp = i_C_21_tmp_tmp * d_C_21_tmp_tmp / 800.0;
  C_21[0] = ((((((((l_C_21_tmp - e_C_21_tmp) + k_C_21_tmp) - q_C_21_tmp) -
                 c_C_21_tmp) - b_C_21_tmp) - n_C_21_tmp) - o_C_21_tmp) -
             s_C_21_tmp) - t_C_21_tmp;
  u_C_21_tmp = cos(theta1);
  v_C_21_tmp = 3.0 * u_C_21_tmp;
  w_C_21_tmp = v_C_21_tmp * C_21_tmp_tmp_tmp;
  x_C_21_tmp = v_C_21_tmp * d_C_21_tmp_tmp * b_C_21_tmp_tmp;
  y_C_21_tmp = w_C_21_tmp * c_C_21_tmp_tmp;
  ab_C_21_tmp = x_C_21_tmp / 10.0;
  bb_C_21_tmp = y_C_21_tmp / 10.0;
  cb_C_21_tmp = e_C_21_tmp_tmp / 10.0;
  db_C_21_tmp = f_C_21_tmp_tmp / 10.0;
  eb_C_21_tmp = phi * psi;
  x_C_21_tmp = x_C_21_tmp / 20.0 - y_C_21_tmp / 20.0;
  y_C_21_tmp = 3.0 * d_C_21_tmp_tmp;
  fb_C_21_tmp = C_21_tmp_tmp * C_21_tmp;
  gb_C_21_tmp = 7.0 * phi * psi;
  hb_C_21_tmp = 21.0 * phi * psi;
  ib_C_21_tmp = b_C_21_tmp_tmp_tmp / 20.0 - y_C_21_tmp * b_C_21_tmp_tmp / 20.0;
  jb_C_21_tmp = u_C_21_tmp * (ab_C_21_tmp - bb_C_21_tmp) + C_21_tmp *
    (cb_C_21_tmp - db_C_21_tmp);
  ab_C_21_tmp = u_C_21_tmp * ((w_C_21_tmp / 10.0 + ab_C_21_tmp) - bb_C_21_tmp) +
    C_21_tmp * ((fb_C_21_tmp / 10.0 + cb_C_21_tmp) - db_C_21_tmp);
  bb_C_21_tmp = 7.0 * the * x_C_21_tmp / 40.0;
  cb_C_21_tmp = 21.0 * the * u_C_21_tmp * C_21_tmp_tmp_tmp / 800.0;
  C_21_tmp_tmp = gb_C_21_tmp * the;
  db_C_21_tmp = C_21_tmp_tmp * x_C_21_tmp / 40.0;
  b_C_21_tmp_tmp_tmp = hb_C_21_tmp * the;
  e_C_21_tmp_tmp = b_C_21_tmp_tmp_tmp * u_C_21_tmp;
  kb_C_21_tmp = e_C_21_tmp_tmp * C_21_tmp_tmp_tmp / 800.0;
  C_21[3] = ((((((cb_C_21_tmp - eb_C_21_tmp * ab_C_21_tmp / 2.0) - 21.0 * phi *
                 the * C_21_tmp_tmp_tmp / 800.0) - bb_C_21_tmp) - eb_C_21_tmp *
               jb_C_21_tmp / 2.0) - 7.0 * phi * the * ib_C_21_tmp / 20.0) -
             db_C_21_tmp) + kb_C_21_tmp;
  lb_C_21_tmp = g_C_21_tmp_tmp / 10.0;
  mb_C_21_tmp = h_C_21_tmp_tmp / 10.0;
  nb_C_21_tmp = phi * the * C_21_tmp;
  ob_C_21_tmp = (lb_C_21_tmp + mb_C_21_tmp) - 0.1;
  y_C_21_tmp = (lb_C_21_tmp - y_C_21_tmp / 10.0) + mb_C_21_tmp;
  fb_C_21_tmp = fb_C_21_tmp * b_C_21_tmp_tmp / 20.0 + c_C_21_tmp_tmp_tmp *
    C_21_tmp * d_C_21_tmp_tmp / 20.0;
  lb_C_21_tmp = gb_C_21_tmp * f_C_21_tmp;
  f_C_21_tmp_tmp = hb_C_21_tmp * f_C_21_tmp;
  mb_C_21_tmp = f_C_21_tmp_tmp * u_C_21_tmp;
  g_C_21_tmp_tmp = 7.0 * psi * the * x_C_21_tmp / 40.0;
  h_C_21_tmp_tmp = lb_C_21_tmp * x_C_21_tmp / 40.0;
  c_C_21_tmp_tmp_tmp = 21.0 * psi * the * u_C_21_tmp * C_21_tmp_tmp_tmp / 800.0;
  pb_C_21_tmp = mb_C_21_tmp * C_21_tmp_tmp_tmp / 800.0;
  C_21[6] = ((((((((nb_C_21_tmp * y_C_21_tmp / 2.0 - g_C_21_tmp_tmp) -
                   gb_C_21_tmp * fb_C_21_tmp / 20.0) - hb_C_21_tmp * C_21_tmp *
                  d_C_21_tmp_tmp / 800.0) - gb_C_21_tmp * x_C_21_tmp / 40.0) -
                h_C_21_tmp_tmp) + nb_C_21_tmp * ob_C_21_tmp / 2.0) + hb_C_21_tmp
              * u_C_21_tmp * C_21_tmp_tmp_tmp / 800.0) + c_C_21_tmp_tmp_tmp) +
    pb_C_21_tmp;
  gb_C_21_tmp = eb_C_21_tmp * the;
  C_21[1] = ((((((j_C_21_tmp * ib_C_21_tmp / 20.0 - k_C_21_tmp) - l_C_21_tmp) +
                m_C_21_tmp / 800.0) + gb_C_21_tmp * jb_C_21_tmp / 2.0) +
              n_C_21_tmp) + o_C_21_tmp) + gb_C_21_tmp * ab_C_21_tmp / 2.0;
  j_C_21_tmp = 3.0 * phi * f_C_21_tmp / 400.0;
  k_C_21_tmp = 7.0 * phi * f_C_21_tmp * h_C_21_tmp / 40.0;
  m_C_21_tmp = p_C_21_tmp * f_C_21_tmp / 400.0;
  o_C_21_tmp = 21.0 * phi * f_C_21_tmp * d_C_21_tmp_tmp / 800.0;
  g_C_21_tmp = g_C_21_tmp * f_C_21_tmp * h_C_21_tmp / 40.0;
  f_C_21_tmp = i_C_21_tmp * f_C_21_tmp * d_C_21_tmp_tmp / 800.0;
  C_21[4] = ((((((((bb_C_21_tmp - j_C_21_tmp) - k_C_21_tmp) - m_C_21_tmp) -
                 cb_C_21_tmp) - o_C_21_tmp) + db_C_21_tmp) - g_C_21_tmp) -
             f_C_21_tmp) - kb_C_21_tmp;
  h_C_21_tmp = the * u_C_21_tmp;
  i_C_21_tmp = w_C_21_tmp * b_C_21_tmp_tmp / 20.0 + v_C_21_tmp * c_C_21_tmp_tmp *
    d_C_21_tmp_tmp / 20.0;
  p_C_21_tmp = C_21_tmp_tmp * d_C_21_tmp;
  v_C_21_tmp = b_C_21_tmp_tmp_tmp * C_21_tmp_tmp_tmp * C_21_tmp;
  C_21[7] = ((((((C_21_tmp_tmp * i_C_21_tmp / 20.0 - h_C_21_tmp * ob_C_21_tmp /
                  2.0) - h_C_21_tmp * y_C_21_tmp / 2.0) - l_C_21_tmp) -
               p_C_21_tmp / 20.0) + n_C_21_tmp) + e_C_21_tmp_tmp *
             d_C_21_tmp_tmp / 800.0) + v_C_21_tmp / 400.0;
  h_C_21_tmp = eb_C_21_tmp * C_21_tmp;
  C_21[2] = ((((((((((e_C_21_tmp + q_C_21_tmp) + c_C_21_tmp) + b_C_21_tmp) -
                   h_C_21_tmp * y_C_21_tmp / 2.0) + r_C_21_tmp * x_C_21_tmp /
                  40.0) + r_C_21_tmp * fb_C_21_tmp / 20.0) + s_C_21_tmp) -
               h_C_21_tmp * ob_C_21_tmp / 2.0) + t_C_21_tmp) - i_C_21_tmp_tmp *
             u_C_21_tmp * C_21_tmp_tmp_tmp / 800.0) + i_C_21_tmp_tmp * C_21_tmp *
    d_C_21_tmp_tmp / 800.0;
  b_C_21_tmp = psi * the * u_C_21_tmp;
  C_21[5] = ((((((((((j_C_21_tmp + k_C_21_tmp) + m_C_21_tmp) + o_C_21_tmp) +
                   b_C_21_tmp * y_C_21_tmp / 2.0) + g_C_21_tmp) + f_C_21_tmp) -
                lb_C_21_tmp * i_C_21_tmp / 20.0) + lb_C_21_tmp * d_C_21_tmp /
               40.0) + b_C_21_tmp * ob_C_21_tmp / 2.0) - mb_C_21_tmp *
             d_C_21_tmp_tmp / 800.0) - f_C_21_tmp_tmp * C_21_tmp_tmp_tmp *
    C_21_tmp / 800.0;
  C_21[8] = ((((((l_C_21_tmp + g_C_21_tmp_tmp) + p_C_21_tmp / 40.0) - n_C_21_tmp)
               + h_C_21_tmp_tmp) - c_C_21_tmp_tmp_tmp) - v_C_21_tmp / 800.0) -
    pb_C_21_tmp;
}

/*
 * File trailer for C_num_simp_21.c
 *
 * [EOF]
 */
