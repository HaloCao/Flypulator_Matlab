/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: C_num_simp_13.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 22-Jan-2019 19:21:59
 */

/* Include Files */
#include <math.h>
#include "C_num_simp_13.h"

/* Function Definitions */

/*
 * Arguments    : double phi
 *                double the
 *                double psi
 *                double theta1
 *                double theta2
 *                double theta3
 *                double C_13[9]
 * Return Type  : void
 */
void C_num_simp_13(double phi, double the, double psi, double theta1, double
                   theta2, double theta3, double C_13[9])
{
  double C_13_tmp;
  double b_C_13_tmp;
  double C_13_tmp_tmp;
  double c_C_13_tmp;
  double d_C_13_tmp;
  double e_C_13_tmp;
  double f_C_13_tmp;
  double g_C_13_tmp;
  double b_C_13_tmp_tmp;
  double h_C_13_tmp;
  double c_C_13_tmp_tmp;
  double i_C_13_tmp;
  double j_C_13_tmp;
  double k_C_13_tmp;
  double l_C_13_tmp;
  double m_C_13_tmp;
  double n_C_13_tmp;
  double d_C_13_tmp_tmp;
  double o_C_13_tmp;
  double p_C_13_tmp;
  double q_C_13_tmp;
  double r_C_13_tmp;
  double s_C_13_tmp;
  double t_C_13_tmp;
  double u_C_13_tmp;
  double v_C_13_tmp;
  double C_13_tmp_tmp_tmp;
  double e_C_13_tmp_tmp;
  double w_C_13_tmp;
  double f_C_13_tmp_tmp;
  double x_C_13_tmp;
  double y_C_13_tmp;
  double ab_C_13_tmp;
  double g_C_13_tmp_tmp;
  double h_C_13_tmp_tmp;
  double i_C_13_tmp_tmp;
  double j_C_13_tmp_tmp;
  double bb_C_13_tmp;
  double cb_C_13_tmp;
  double k_C_13_tmp_tmp;
  C_13_tmp = sin(theta2);
  b_C_13_tmp = sin(theta3);
  C_13_tmp_tmp = cos(theta1);
  c_C_13_tmp = 3.0 * C_13_tmp_tmp;
  d_C_13_tmp = cos(theta2);
  e_C_13_tmp = cos(theta3);
  f_C_13_tmp = sin(theta1);
  g_C_13_tmp = 3.0 * d_C_13_tmp;
  b_C_13_tmp_tmp = c_C_13_tmp * C_13_tmp;
  h_C_13_tmp = b_C_13_tmp_tmp * b_C_13_tmp;
  c_C_13_tmp_tmp = c_C_13_tmp * d_C_13_tmp;
  i_C_13_tmp = c_C_13_tmp_tmp * e_C_13_tmp;
  j_C_13_tmp = psi * the;
  k_C_13_tmp = g_C_13_tmp * e_C_13_tmp;
  l_C_13_tmp = 3.0 * C_13_tmp;
  m_C_13_tmp = phi * psi;
  n_C_13_tmp = g_C_13_tmp * b_C_13_tmp / 10.0;
  d_C_13_tmp_tmp = 3.0 * e_C_13_tmp;
  o_C_13_tmp = d_C_13_tmp_tmp * C_13_tmp / 10.0;
  p_C_13_tmp = j_C_13_tmp * f_C_13_tmp;
  q_C_13_tmp = (n_C_13_tmp + o_C_13_tmp) - 0.1;
  r_C_13_tmp = phi * phi;
  s_C_13_tmp = 7.0 * r_C_13_tmp;
  t_C_13_tmp = l_C_13_tmp * b_C_13_tmp;
  r_C_13_tmp *= 21.0;
  u_C_13_tmp = m_C_13_tmp * f_C_13_tmp;
  l_C_13_tmp = (n_C_13_tmp - l_C_13_tmp / 10.0) + o_C_13_tmp;
  n_C_13_tmp = p_C_13_tmp * l_C_13_tmp / 2.0;
  o_C_13_tmp = h_C_13_tmp / 10.0;
  v_C_13_tmp = i_C_13_tmp / 10.0;
  C_13_tmp_tmp_tmp = 3.0 * f_C_13_tmp * C_13_tmp;
  e_C_13_tmp_tmp = C_13_tmp_tmp_tmp * b_C_13_tmp;
  w_C_13_tmp = e_C_13_tmp_tmp / 10.0;
  f_C_13_tmp_tmp = k_C_13_tmp * f_C_13_tmp;
  x_C_13_tmp = f_C_13_tmp_tmp / 10.0;
  y_C_13_tmp = m_C_13_tmp * the;
  ab_C_13_tmp = s_C_13_tmp * psi * the;
  g_C_13_tmp_tmp = k_C_13_tmp / 10.0;
  h_C_13_tmp_tmp = t_C_13_tmp / 10.0;
  i_C_13_tmp_tmp = j_C_13_tmp * C_13_tmp_tmp;
  j_C_13_tmp_tmp = g_C_13_tmp_tmp - h_C_13_tmp_tmp;
  j_C_13_tmp = i_C_13_tmp_tmp * j_C_13_tmp_tmp;
  bb_C_13_tmp = r_C_13_tmp * psi * the;
  cb_C_13_tmp = C_13_tmp_tmp * (o_C_13_tmp - v_C_13_tmp) + f_C_13_tmp *
    (w_C_13_tmp - x_C_13_tmp);
  h_C_13_tmp = h_C_13_tmp / 20.0 - i_C_13_tmp / 20.0;
  C_13[0] = (((((n_C_13_tmp - y_C_13_tmp * cb_C_13_tmp / 2.0) + ab_C_13_tmp *
                h_C_13_tmp / 40.0) - j_C_13_tmp) + u_C_13_tmp * q_C_13_tmp / 2.0)
             + p_C_13_tmp * q_C_13_tmp) - bb_C_13_tmp * C_13_tmp_tmp *
    d_C_13_tmp / 800.0;
  i_C_13_tmp = g_C_13_tmp * f_C_13_tmp;
  k_C_13_tmp_tmp = k_C_13_tmp / 20.0 - t_C_13_tmp / 20.0;
  k_C_13_tmp = s_C_13_tmp * the * k_C_13_tmp_tmp / 40.0;
  t_C_13_tmp = i_C_13_tmp * b_C_13_tmp;
  d_C_13_tmp_tmp = d_C_13_tmp_tmp * f_C_13_tmp * C_13_tmp;
  s_C_13_tmp = t_C_13_tmp / 20.0 + d_C_13_tmp_tmp / 20.0;
  p_C_13_tmp = ab_C_13_tmp * s_C_13_tmp / 40.0;
  i_C_13_tmp = C_13_tmp_tmp * ((c_C_13_tmp_tmp / 10.0 + o_C_13_tmp) - v_C_13_tmp)
    + f_C_13_tmp * ((i_C_13_tmp / 10.0 + w_C_13_tmp) - x_C_13_tmp);
  g_C_13_tmp = (g_C_13_tmp / 10.0 - g_C_13_tmp_tmp) + h_C_13_tmp_tmp;
  C_13[3] = (((((((k_C_13_tmp + r_C_13_tmp * the * d_C_13_tmp / 800.0) +
                  u_C_13_tmp * l_C_13_tmp / 2.0) + n_C_13_tmp) - y_C_13_tmp *
                i_C_13_tmp / 2.0) + p_C_13_tmp) - j_C_13_tmp) + i_C_13_tmp_tmp *
             g_C_13_tmp) + bb_C_13_tmp * f_C_13_tmp * C_13_tmp / 800.0;
  C_13[6] = (k_C_13_tmp + p_C_13_tmp) - j_C_13_tmp;
  j_C_13_tmp = m_C_13_tmp * C_13_tmp_tmp;
  k_C_13_tmp = the * the;
  g_C_13_tmp_tmp = 7.0 * phi * psi;
  n_C_13_tmp = g_C_13_tmp_tmp * k_C_13_tmp;
  o_C_13_tmp = u_C_13_tmp * j_C_13_tmp_tmp;
  p_C_13_tmp = j_C_13_tmp * l_C_13_tmp / 2.0;
  h_C_13_tmp_tmp = 21.0 * phi * psi;
  k_C_13_tmp *= h_C_13_tmp_tmp;
  r_C_13_tmp = e_C_13_tmp_tmp / 20.0 - f_C_13_tmp_tmp / 20.0;
  C_13[1] = (((((m_C_13_tmp * cb_C_13_tmp / 2.0 + n_C_13_tmp * r_C_13_tmp / 40.0)
                - j_C_13_tmp * q_C_13_tmp) - i_C_13_tmp_tmp * q_C_13_tmp / 2.0)
              - o_C_13_tmp) - p_C_13_tmp) - k_C_13_tmp * d_C_13_tmp * f_C_13_tmp
    / 800.0;
  j_C_13_tmp = 7.0 * phi * the * k_C_13_tmp_tmp;
  c_C_13_tmp_tmp *= b_C_13_tmp;
  e_C_13_tmp_tmp = c_C_13_tmp * e_C_13_tmp * C_13_tmp;
  f_C_13_tmp_tmp = c_C_13_tmp_tmp / 20.0 + e_C_13_tmp_tmp / 20.0;
  b_C_13_tmp = n_C_13_tmp * f_C_13_tmp_tmp / 40.0;
  C_13[4] = (((((((m_C_13_tmp * i_C_13_tmp / 2.0 - 21.0 * phi * the * d_C_13_tmp
                   / 800.0) - j_C_13_tmp / 40.0) - i_C_13_tmp_tmp * l_C_13_tmp /
                 2.0) - b_C_13_tmp) - o_C_13_tmp) - p_C_13_tmp) + u_C_13_tmp *
             g_C_13_tmp) - k_C_13_tmp * C_13_tmp_tmp * C_13_tmp / 800.0;
  C_13[7] = (-j_C_13_tmp / 40.0 - b_C_13_tmp) - o_C_13_tmp;
  b_C_13_tmp = phi * the;
  c_C_13_tmp = the * C_13_tmp_tmp;
  e_C_13_tmp = c_C_13_tmp_tmp / 10.0;
  g_C_13_tmp = e_C_13_tmp_tmp / 10.0;
  i_C_13_tmp = t_C_13_tmp / 10.0;
  j_C_13_tmp = d_C_13_tmp_tmp / 10.0;
  k_C_13_tmp = b_C_13_tmp * (C_13_tmp_tmp * (e_C_13_tmp + g_C_13_tmp) +
    f_C_13_tmp * (i_C_13_tmp + j_C_13_tmp));
  m_C_13_tmp = g_C_13_tmp_tmp * the;
  n_C_13_tmp = b_C_13_tmp * f_C_13_tmp;
  o_C_13_tmp = h_C_13_tmp_tmp * the;
  C_13[2] = (((((c_C_13_tmp * q_C_13_tmp / 2.0 - g_C_13_tmp_tmp * h_C_13_tmp /
                 40.0) - k_C_13_tmp) - m_C_13_tmp * r_C_13_tmp / 40.0) -
              n_C_13_tmp * q_C_13_tmp / 2.0) + h_C_13_tmp_tmp * C_13_tmp_tmp *
             d_C_13_tmp / 800.0) + o_C_13_tmp * d_C_13_tmp * f_C_13_tmp / 800.0;
  d_C_13_tmp = m_C_13_tmp * f_C_13_tmp_tmp / 40.0;
  h_C_13_tmp = g_C_13_tmp_tmp * s_C_13_tmp / 40.0;
  C_13[5] = ((((((c_C_13_tmp * l_C_13_tmp / 2.0 - b_C_13_tmp * (C_13_tmp_tmp *
    ((e_C_13_tmp - b_C_13_tmp_tmp / 10.0) + g_C_13_tmp) + f_C_13_tmp *
    ((i_C_13_tmp - C_13_tmp_tmp_tmp / 10.0) + j_C_13_tmp))) - h_C_13_tmp) -
                k_C_13_tmp) + d_C_13_tmp) - h_C_13_tmp_tmp * f_C_13_tmp *
              C_13_tmp / 800.0) - n_C_13_tmp * l_C_13_tmp / 2.0) + o_C_13_tmp *
    C_13_tmp_tmp * C_13_tmp / 800.0;
  C_13[8] = (d_C_13_tmp - k_C_13_tmp) - h_C_13_tmp;
}

/*
 * File trailer for C_num_simp_13.c
 *
 * [EOF]
 */
