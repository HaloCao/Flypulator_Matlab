/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: C_num_simp_12.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 22-Jan-2019 19:20:41
 */

/* Include Files */
#include <math.h>
#include "C_num_simp_12.h"

/* Function Definitions */

/*
 * Arguments    : double phi
 *                double the
 *                double psi
 *                double theta1
 *                double theta2
 *                double theta3
 *                double C_12[9]
 * Return Type  : void
 */
void C_num_simp_12(double phi, double the, double psi, double theta1, double
                   theta2, double theta3, double C_12[9])
{
  double C_12_tmp;
  double b_C_12_tmp;
  double c_C_12_tmp;
  double C_12_tmp_tmp_tmp;
  double C_12_tmp_tmp;
  double b_C_12_tmp_tmp;
  double c_C_12_tmp_tmp;
  double d_C_12_tmp_tmp;
  double e_C_12_tmp_tmp;
  double f_C_12_tmp_tmp;
  double g_C_12_tmp_tmp;
  double d_C_12_tmp;
  double e_C_12_tmp;
  double f_C_12_tmp;
  double g_C_12_tmp;
  double h_C_12_tmp_tmp;
  double b_C_12_tmp_tmp_tmp;
  double i_C_12_tmp_tmp;
  double h_C_12_tmp;
  double i_C_12_tmp;
  double j_C_12_tmp;
  double k_C_12_tmp;
  double l_C_12_tmp;
  double m_C_12_tmp;
  double n_C_12_tmp;
  double o_C_12_tmp;
  double p_C_12_tmp;
  double j_C_12_tmp_tmp;
  double k_C_12_tmp_tmp;
  double q_C_12_tmp;
  double l_C_12_tmp_tmp;
  double r_C_12_tmp;
  double m_C_12_tmp_tmp;
  double n_C_12_tmp_tmp;
  double s_C_12_tmp;
  double o_C_12_tmp_tmp;
  double t_C_12_tmp;
  double u_C_12_tmp;
  double p_C_12_tmp_tmp;
  double v_C_12_tmp;
  double w_C_12_tmp;
  double x_C_12_tmp;
  double y_C_12_tmp;
  double ab_C_12_tmp;
  double bb_C_12_tmp;
  double cb_C_12_tmp;
  double db_C_12_tmp;
  double eb_C_12_tmp;
  C_12_tmp = phi * phi;
  b_C_12_tmp = sin(theta1);
  c_C_12_tmp = 7.0 * C_12_tmp;
  C_12_tmp_tmp_tmp = cos(theta2);
  C_12_tmp_tmp = 3.0 * C_12_tmp_tmp_tmp;
  b_C_12_tmp_tmp = sin(theta3);
  c_C_12_tmp_tmp = cos(theta3);
  d_C_12_tmp_tmp = sin(theta2);
  e_C_12_tmp_tmp = C_12_tmp_tmp * c_C_12_tmp_tmp;
  f_C_12_tmp_tmp = 3.0 * b_C_12_tmp * d_C_12_tmp_tmp * b_C_12_tmp_tmp;
  g_C_12_tmp_tmp = e_C_12_tmp_tmp * b_C_12_tmp;
  d_C_12_tmp = f_C_12_tmp_tmp / 20.0 - g_C_12_tmp_tmp / 20.0;
  e_C_12_tmp = 3.0 * C_12_tmp;
  f_C_12_tmp = the * the;
  C_12_tmp *= 21.0;
  g_C_12_tmp = c_C_12_tmp * psi;
  h_C_12_tmp_tmp = C_12_tmp_tmp * b_C_12_tmp_tmp;
  b_C_12_tmp_tmp_tmp = 3.0 * c_C_12_tmp_tmp;
  i_C_12_tmp_tmp = b_C_12_tmp_tmp_tmp * d_C_12_tmp_tmp;
  h_C_12_tmp = h_C_12_tmp_tmp / 20.0 + i_C_12_tmp_tmp / 20.0;
  i_C_12_tmp = C_12_tmp * psi;
  j_C_12_tmp = c_C_12_tmp * the;
  k_C_12_tmp = j_C_12_tmp * d_C_12_tmp / 40.0;
  l_C_12_tmp = g_C_12_tmp * d_C_12_tmp / 40.0;
  m_C_12_tmp = C_12_tmp * the * C_12_tmp_tmp_tmp;
  n_C_12_tmp = i_C_12_tmp * C_12_tmp_tmp_tmp * b_C_12_tmp / 800.0;
  o_C_12_tmp = m_C_12_tmp * b_C_12_tmp / 800.0;
  p_C_12_tmp = e_C_12_tmp * f_C_12_tmp / 400.0;
  j_C_12_tmp_tmp = e_C_12_tmp * psi;
  k_C_12_tmp_tmp = j_C_12_tmp_tmp * the;
  e_C_12_tmp = k_C_12_tmp_tmp / 400.0;
  c_C_12_tmp = c_C_12_tmp * f_C_12_tmp * h_C_12_tmp / 40.0;
  C_12_tmp = C_12_tmp * f_C_12_tmp * d_C_12_tmp_tmp / 800.0;
  q_C_12_tmp = g_C_12_tmp * the;
  l_C_12_tmp_tmp = q_C_12_tmp * h_C_12_tmp;
  r_C_12_tmp = l_C_12_tmp_tmp / 40.0;
  m_C_12_tmp_tmp = i_C_12_tmp * the;
  n_C_12_tmp_tmp = m_C_12_tmp_tmp * d_C_12_tmp_tmp;
  s_C_12_tmp = n_C_12_tmp_tmp / 800.0;
  C_12[0] = ((((((((p_C_12_tmp - l_C_12_tmp) - k_C_12_tmp) + e_C_12_tmp) +
                 c_C_12_tmp) + C_12_tmp) + n_C_12_tmp) + o_C_12_tmp) +
             r_C_12_tmp) + s_C_12_tmp;
  o_C_12_tmp_tmp = cos(theta1);
  t_C_12_tmp = 3.0 * o_C_12_tmp_tmp;
  u_C_12_tmp = t_C_12_tmp * d_C_12_tmp_tmp * b_C_12_tmp_tmp;
  p_C_12_tmp_tmp = t_C_12_tmp * C_12_tmp_tmp_tmp;
  v_C_12_tmp = p_C_12_tmp_tmp * c_C_12_tmp_tmp;
  w_C_12_tmp = u_C_12_tmp / 10.0;
  x_C_12_tmp = v_C_12_tmp / 10.0;
  y_C_12_tmp = f_C_12_tmp_tmp / 10.0;
  ab_C_12_tmp = g_C_12_tmp_tmp / 10.0;
  f_C_12_tmp_tmp = phi * psi;
  bb_C_12_tmp = f_C_12_tmp_tmp * the;
  cb_C_12_tmp = 3.0 * d_C_12_tmp_tmp;
  u_C_12_tmp = u_C_12_tmp / 20.0 - v_C_12_tmp / 20.0;
  v_C_12_tmp = C_12_tmp_tmp * b_C_12_tmp;
  db_C_12_tmp = o_C_12_tmp_tmp * ((p_C_12_tmp_tmp / 10.0 + w_C_12_tmp) -
    x_C_12_tmp) + b_C_12_tmp * ((v_C_12_tmp / 10.0 + y_C_12_tmp) - ab_C_12_tmp);
  g_C_12_tmp_tmp = 21.0 * phi * the;
  eb_C_12_tmp = 7.0 * phi * the;
  w_C_12_tmp = o_C_12_tmp_tmp * (w_C_12_tmp - x_C_12_tmp) + b_C_12_tmp *
    (y_C_12_tmp - ab_C_12_tmp);
  x_C_12_tmp = e_C_12_tmp_tmp / 20.0 - cb_C_12_tmp * b_C_12_tmp_tmp / 20.0;
  C_12[3] = ((((((((j_C_12_tmp * x_C_12_tmp / 20.0 - k_C_12_tmp) - l_C_12_tmp) +
                  m_C_12_tmp / 800.0) + eb_C_12_tmp * u_C_12_tmp / 20.0) -
                bb_C_12_tmp * w_C_12_tmp / 2.0) + n_C_12_tmp) + o_C_12_tmp) -
             bb_C_12_tmp * db_C_12_tmp / 2.0) - g_C_12_tmp_tmp * o_C_12_tmp_tmp *
    C_12_tmp_tmp_tmp / 400.0;
  j_C_12_tmp = h_C_12_tmp_tmp / 10.0;
  k_C_12_tmp = i_C_12_tmp_tmp / 10.0;
  m_C_12_tmp = f_C_12_tmp_tmp * b_C_12_tmp;
  o_C_12_tmp = 7.0 * phi * psi;
  y_C_12_tmp = 21.0 * phi * psi;
  ab_C_12_tmp = (j_C_12_tmp - cb_C_12_tmp / 10.0) + k_C_12_tmp;
  bb_C_12_tmp = o_C_12_tmp * f_C_12_tmp;
  j_C_12_tmp = (j_C_12_tmp + k_C_12_tmp) - 0.1;
  C_12_tmp_tmp = y_C_12_tmp * f_C_12_tmp;
  k_C_12_tmp = C_12_tmp_tmp * o_C_12_tmp_tmp;
  cb_C_12_tmp = bb_C_12_tmp * u_C_12_tmp;
  v_C_12_tmp = v_C_12_tmp * b_C_12_tmp_tmp / 20.0 + b_C_12_tmp_tmp_tmp *
    b_C_12_tmp * d_C_12_tmp_tmp / 20.0;
  h_C_12_tmp_tmp = k_C_12_tmp * C_12_tmp_tmp_tmp;
  C_12[6] = ((((((((((((p_C_12_tmp + e_C_12_tmp) + c_C_12_tmp) + C_12_tmp) +
                     m_C_12_tmp * ab_C_12_tmp / 2.0) + cb_C_12_tmp / 20.0) +
                   q_C_12_tmp * u_C_12_tmp / 40.0) + q_C_12_tmp * v_C_12_tmp /
                  20.0) + r_C_12_tmp) + m_C_12_tmp * j_C_12_tmp / 2.0) +
               s_C_12_tmp) - h_C_12_tmp_tmp / 400.0) - m_C_12_tmp_tmp *
             o_C_12_tmp_tmp * C_12_tmp_tmp_tmp / 800.0) + m_C_12_tmp_tmp *
    b_C_12_tmp * d_C_12_tmp_tmp / 800.0;
  C_12_tmp = g_C_12_tmp_tmp * C_12_tmp_tmp_tmp;
  c_C_12_tmp = 7.0 * the * u_C_12_tmp / 40.0;
  e_C_12_tmp = 21.0 * the * o_C_12_tmp_tmp * C_12_tmp_tmp_tmp / 800.0;
  e_C_12_tmp_tmp = o_C_12_tmp * the;
  m_C_12_tmp = e_C_12_tmp_tmp * u_C_12_tmp / 40.0;
  b_C_12_tmp_tmp_tmp = y_C_12_tmp * the;
  g_C_12_tmp_tmp = b_C_12_tmp_tmp_tmp * o_C_12_tmp_tmp;
  p_C_12_tmp = g_C_12_tmp_tmp * C_12_tmp_tmp_tmp / 800.0;
  C_12[1] = ((((((((f_C_12_tmp_tmp * db_C_12_tmp / 2.0 - c_C_12_tmp) - C_12_tmp /
                   800.0) + e_C_12_tmp) + eb_C_12_tmp * d_C_12_tmp / 20.0) +
                f_C_12_tmp_tmp * w_C_12_tmp / 2.0) - eb_C_12_tmp * x_C_12_tmp /
               20.0) + m_C_12_tmp) - C_12_tmp * b_C_12_tmp / 400.0) - p_C_12_tmp;
  C_12_tmp = 3.0 * phi * f_C_12_tmp / 400.0;
  r_C_12_tmp = 7.0 * phi * f_C_12_tmp * h_C_12_tmp / 40.0;
  s_C_12_tmp = j_C_12_tmp_tmp * f_C_12_tmp / 400.0;
  w_C_12_tmp = 21.0 * phi * f_C_12_tmp * d_C_12_tmp_tmp / 800.0;
  g_C_12_tmp = g_C_12_tmp * f_C_12_tmp * h_C_12_tmp / 40.0;
  f_C_12_tmp = i_C_12_tmp * f_C_12_tmp * d_C_12_tmp_tmp / 800.0;
  C_12[4] = ((((((((C_12_tmp - c_C_12_tmp) + r_C_12_tmp) + s_C_12_tmp) +
                 e_C_12_tmp) + w_C_12_tmp) + m_C_12_tmp) + g_C_12_tmp) +
             f_C_12_tmp) - p_C_12_tmp;
  c_C_12_tmp = psi * the * o_C_12_tmp_tmp;
  e_C_12_tmp = p_C_12_tmp_tmp * b_C_12_tmp_tmp / 20.0 + t_C_12_tmp *
    c_C_12_tmp_tmp * d_C_12_tmp_tmp / 20.0;
  C_12[7] = ((((((((((((C_12_tmp + r_C_12_tmp) + s_C_12_tmp) + w_C_12_tmp) -
                     c_C_12_tmp * ab_C_12_tmp / 2.0) + g_C_12_tmp) + f_C_12_tmp)
                  - bb_C_12_tmp * e_C_12_tmp / 20.0) + bb_C_12_tmp * d_C_12_tmp /
                 40.0) + q_C_12_tmp * d_C_12_tmp / 20.0) - c_C_12_tmp *
               j_C_12_tmp / 2.0) - k_C_12_tmp * d_C_12_tmp_tmp / 800.0) -
             C_12_tmp_tmp * C_12_tmp_tmp_tmp * b_C_12_tmp / 800.0) -
    m_C_12_tmp_tmp * C_12_tmp_tmp_tmp * b_C_12_tmp / 400.0;
  C_12_tmp = phi * the * b_C_12_tmp;
  c_C_12_tmp = 7.0 * psi * the * u_C_12_tmp / 40.0;
  f_C_12_tmp = cb_C_12_tmp / 40.0;
  g_C_12_tmp = 21.0 * psi * the * o_C_12_tmp_tmp * C_12_tmp_tmp_tmp / 800.0;
  i_C_12_tmp = h_C_12_tmp_tmp / 800.0;
  C_12[2] = (((((((((((f_C_12_tmp - y_C_12_tmp * d_C_12_tmp_tmp / 400.0) -
                      o_C_12_tmp * u_C_12_tmp / 40.0) - c_C_12_tmp) - o_C_12_tmp
                    * v_C_12_tmp / 20.0) - o_C_12_tmp * h_C_12_tmp / 20.0) -
                  y_C_12_tmp * b_C_12_tmp * d_C_12_tmp_tmp / 800.0) - C_12_tmp *
                 ab_C_12_tmp / 2.0) - 3.0 * phi * psi / 200.0) - C_12_tmp *
               j_C_12_tmp / 2.0) + y_C_12_tmp * o_C_12_tmp_tmp *
              C_12_tmp_tmp_tmp / 800.0) + g_C_12_tmp) - i_C_12_tmp;
  C_12_tmp = the * o_C_12_tmp_tmp;
  C_12[5] = (((((((C_12_tmp * j_C_12_tmp / 2.0 - k_C_12_tmp_tmp / 200.0) -
                  l_C_12_tmp) + C_12_tmp * ab_C_12_tmp / 2.0) + e_C_12_tmp_tmp *
                e_C_12_tmp / 20.0) + n_C_12_tmp) - l_C_12_tmp_tmp / 20.0) -
             n_C_12_tmp_tmp / 400.0) + g_C_12_tmp_tmp * d_C_12_tmp_tmp / 800.0;
  C_12[8] = ((((((e_C_12_tmp_tmp * d_C_12_tmp / 40.0 - c_C_12_tmp) - l_C_12_tmp)
                + n_C_12_tmp) + f_C_12_tmp) + g_C_12_tmp) - b_C_12_tmp_tmp_tmp *
             C_12_tmp_tmp_tmp * b_C_12_tmp / 800.0) - i_C_12_tmp;
}

/*
 * File trailer for C_num_simp_12.c
 *
 * [EOF]
 */
