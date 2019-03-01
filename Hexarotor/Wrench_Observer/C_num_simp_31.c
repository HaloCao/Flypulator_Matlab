/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: C_num_simp_31.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 22-Jan-2019 18:58:29
 */

/* Include Files */
#include <math.h>
#include "C_num_simp_31.h"

/* Function Definitions */

/*
 * Arguments    : double phi
 *                double the
 *                double psi
 *                double theta1
 *                double theta2
 *                double theta3
 *                double C_31[9]
 * Return Type  : void
 */
void C_num_simp_31(double phi, double the, double psi, double theta1, double
                   theta2, double theta3, double C_31[9])
{
  double C_31_tmp;
  double b_C_31_tmp;
  double c_C_31_tmp;
  double C_31_tmp_tmp;
  double d_C_31_tmp;
  double e_C_31_tmp;
  double f_C_31_tmp;
  double g_C_31_tmp;
  double h_C_31_tmp;
  double i_C_31_tmp;
  double b_C_31_tmp_tmp;
  double j_C_31_tmp;
  double k_C_31_tmp;
  double l_C_31_tmp;
  double m_C_31_tmp;
  double n_C_31_tmp;
  double c_C_31_tmp_tmp;
  double o_C_31_tmp;
  double p_C_31_tmp;
  double d_C_31_tmp_tmp;
  double e_C_31_tmp_tmp;
  double f_C_31_tmp_tmp;
  double g_C_31_tmp_tmp;
  double h_C_31_tmp_tmp;
  double i_C_31_tmp_tmp;
  double q_C_31_tmp;
  double r_C_31_tmp;
  double s_C_31_tmp;
  double t_C_31_tmp;
  double j_C_31_tmp_tmp;
  double u_C_31_tmp;
  double v_C_31_tmp;
  double w_C_31_tmp;
  double x_C_31_tmp;
  double y_C_31_tmp;
  double ab_C_31_tmp;
  double bb_C_31_tmp;
  double cb_C_31_tmp;
  double db_C_31_tmp;
  double eb_C_31_tmp;
  double fb_C_31_tmp;
  C_31_tmp = phi * psi;
  b_C_31_tmp = sin(theta2);
  c_C_31_tmp = sin(theta3);
  C_31_tmp_tmp = cos(theta1);
  d_C_31_tmp = 3.0 * C_31_tmp_tmp;
  e_C_31_tmp = cos(theta2);
  f_C_31_tmp = cos(theta3);
  g_C_31_tmp = sin(theta1);
  h_C_31_tmp = 3.0 * e_C_31_tmp;
  i_C_31_tmp = d_C_31_tmp * b_C_31_tmp * c_C_31_tmp;
  b_C_31_tmp_tmp = d_C_31_tmp * e_C_31_tmp;
  j_C_31_tmp = b_C_31_tmp_tmp * f_C_31_tmp;
  k_C_31_tmp = h_C_31_tmp * f_C_31_tmp;
  l_C_31_tmp = psi * the;
  m_C_31_tmp = 3.0 * b_C_31_tmp;
  n_C_31_tmp = h_C_31_tmp * c_C_31_tmp / 10.0;
  c_C_31_tmp_tmp = 3.0 * f_C_31_tmp;
  o_C_31_tmp = c_C_31_tmp_tmp * b_C_31_tmp / 10.0;
  p_C_31_tmp = phi * phi;
  d_C_31_tmp_tmp = 3.0 * g_C_31_tmp * b_C_31_tmp * c_C_31_tmp;
  e_C_31_tmp_tmp = k_C_31_tmp * g_C_31_tmp;
  f_C_31_tmp_tmp = i_C_31_tmp / 10.0;
  g_C_31_tmp_tmp = j_C_31_tmp / 10.0;
  h_C_31_tmp_tmp = d_C_31_tmp_tmp / 10.0;
  i_C_31_tmp_tmp = e_C_31_tmp_tmp / 10.0;
  q_C_31_tmp = C_31_tmp_tmp * (f_C_31_tmp_tmp - g_C_31_tmp_tmp) + g_C_31_tmp *
    (h_C_31_tmp_tmp - i_C_31_tmp_tmp);
  r_C_31_tmp = l_C_31_tmp * C_31_tmp_tmp;
  s_C_31_tmp = (n_C_31_tmp + o_C_31_tmp) - 0.1;
  t_C_31_tmp = C_31_tmp * g_C_31_tmp;
  j_C_31_tmp_tmp = m_C_31_tmp * c_C_31_tmp;
  u_C_31_tmp = k_C_31_tmp / 10.0 - j_C_31_tmp_tmp / 10.0;
  m_C_31_tmp = (n_C_31_tmp - m_C_31_tmp / 10.0) + o_C_31_tmp;
  i_C_31_tmp = i_C_31_tmp / 20.0 - j_C_31_tmp / 20.0;
  j_C_31_tmp = 21.0 * p_C_31_tmp;
  n_C_31_tmp = 7.0 * p_C_31_tmp;
  l_C_31_tmp = l_C_31_tmp * g_C_31_tmp * m_C_31_tmp / 2.0;
  o_C_31_tmp = C_31_tmp * the;
  p_C_31_tmp = n_C_31_tmp * psi * the;
  v_C_31_tmp = j_C_31_tmp * psi * the;
  w_C_31_tmp = r_C_31_tmp * u_C_31_tmp;
  C_31[0] = ((((t_C_31_tmp * s_C_31_tmp / 2.0 - o_C_31_tmp * q_C_31_tmp / 2.0) -
               p_C_31_tmp * i_C_31_tmp / 40.0) - w_C_31_tmp) - l_C_31_tmp) +
    v_C_31_tmp * C_31_tmp_tmp * e_C_31_tmp / 800.0;
  x_C_31_tmp = the * the;
  y_C_31_tmp = 7.0 * phi * psi;
  ab_C_31_tmp = d_C_31_tmp_tmp / 20.0 - e_C_31_tmp_tmp / 20.0;
  bb_C_31_tmp = 21.0 * phi * psi;
  cb_C_31_tmp = y_C_31_tmp * x_C_31_tmp;
  db_C_31_tmp = C_31_tmp * C_31_tmp_tmp * m_C_31_tmp / 2.0;
  x_C_31_tmp *= bb_C_31_tmp;
  u_C_31_tmp *= t_C_31_tmp;
  C_31[3] = ((((C_31_tmp * q_C_31_tmp / 2.0 - cb_C_31_tmp * ab_C_31_tmp / 40.0)
               - r_C_31_tmp * s_C_31_tmp / 2.0) - u_C_31_tmp) + db_C_31_tmp) +
    x_C_31_tmp * e_C_31_tmp * g_C_31_tmp / 800.0;
  q_C_31_tmp = phi * the;
  h_C_31_tmp *= g_C_31_tmp;
  eb_C_31_tmp = h_C_31_tmp * c_C_31_tmp;
  d_C_31_tmp_tmp = c_C_31_tmp_tmp * g_C_31_tmp * b_C_31_tmp;
  c_C_31_tmp *= b_C_31_tmp_tmp;
  d_C_31_tmp = d_C_31_tmp * f_C_31_tmp * b_C_31_tmp;
  f_C_31_tmp = the * C_31_tmp_tmp;
  e_C_31_tmp_tmp = y_C_31_tmp * the;
  c_C_31_tmp_tmp = q_C_31_tmp * g_C_31_tmp;
  fb_C_31_tmp = bb_C_31_tmp * the;
  q_C_31_tmp *= C_31_tmp_tmp * (c_C_31_tmp / 10.0 + d_C_31_tmp / 10.0) +
    g_C_31_tmp * (eb_C_31_tmp / 10.0 + d_C_31_tmp_tmp / 10.0);
  C_31[6] = (((((f_C_31_tmp * s_C_31_tmp / 2.0 + y_C_31_tmp * i_C_31_tmp / 40.0)
                - q_C_31_tmp) + e_C_31_tmp_tmp * ab_C_31_tmp / 40.0) -
              c_C_31_tmp_tmp * s_C_31_tmp / 2.0) - bb_C_31_tmp * C_31_tmp_tmp *
             e_C_31_tmp / 800.0) - fb_C_31_tmp * e_C_31_tmp * g_C_31_tmp / 800.0;
  h_C_31_tmp = C_31_tmp_tmp * ((b_C_31_tmp_tmp / 10.0 + f_C_31_tmp_tmp) -
    g_C_31_tmp_tmp) + g_C_31_tmp * ((h_C_31_tmp / 10.0 + h_C_31_tmp_tmp) -
    i_C_31_tmp_tmp);
  i_C_31_tmp = k_C_31_tmp / 20.0 - j_C_31_tmp_tmp / 20.0;
  k_C_31_tmp = eb_C_31_tmp / 20.0 + d_C_31_tmp_tmp / 20.0;
  p_C_31_tmp = p_C_31_tmp * k_C_31_tmp / 40.0;
  n_C_31_tmp = n_C_31_tmp * the * i_C_31_tmp / 40.0;
  C_31[1] = (((((t_C_31_tmp * m_C_31_tmp / 2.0 - j_C_31_tmp * the * e_C_31_tmp /
                 800.0) - n_C_31_tmp) + l_C_31_tmp) - o_C_31_tmp * h_C_31_tmp /
              2.0) - p_C_31_tmp) - v_C_31_tmp * g_C_31_tmp * b_C_31_tmp / 800.0;
  c_C_31_tmp = c_C_31_tmp / 20.0 + d_C_31_tmp / 20.0;
  d_C_31_tmp = 7.0 * phi * the * i_C_31_tmp / 40.0;
  i_C_31_tmp = cb_C_31_tmp * c_C_31_tmp / 40.0;
  C_31[4] = (((((C_31_tmp * h_C_31_tmp / 2.0 + 21.0 * phi * the * e_C_31_tmp /
                 800.0) + d_C_31_tmp) - r_C_31_tmp * m_C_31_tmp / 2.0) +
              i_C_31_tmp) - db_C_31_tmp) + x_C_31_tmp * C_31_tmp_tmp *
    b_C_31_tmp / 800.0;
  C_31_tmp = y_C_31_tmp * k_C_31_tmp / 40.0;
  c_C_31_tmp = e_C_31_tmp_tmp * c_C_31_tmp / 40.0;
  C_31[7] = ((((f_C_31_tmp * m_C_31_tmp / 2.0 + C_31_tmp) - c_C_31_tmp) +
              bb_C_31_tmp * g_C_31_tmp * b_C_31_tmp / 800.0) - c_C_31_tmp_tmp *
             m_C_31_tmp / 2.0) - fb_C_31_tmp * C_31_tmp_tmp * b_C_31_tmp / 800.0;
  C_31[2] = (w_C_31_tmp - p_C_31_tmp) - n_C_31_tmp;
  C_31[5] = (d_C_31_tmp + i_C_31_tmp) + u_C_31_tmp;
  C_31[8] = (C_31_tmp + q_C_31_tmp) - c_C_31_tmp;
}

/*
 * File trailer for C_num_simp_31.c
 *
 * [EOF]
 */
