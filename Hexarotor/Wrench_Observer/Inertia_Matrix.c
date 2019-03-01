/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: Inertia_Matrix.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 19-Jan-2019 15:28:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Inertia_Matrix.h"

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
  double d0;
  double d1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d0 = fabs(u0);
    d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d0 == 1.0) {
        y = rtNaN;
      } else if (d0 > 1.0) {
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
    } else if (d1 == 0.0) {
      y = 1.0;
    } else if (d1 == 1.0) {
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
 * CORIOLIS_MATRIX Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : double phi
 *                double the
 *                double psi
 *                double theta1
 *                double theta2
 *                double theta3
 *                double M[81]
 * Return Type  : void
 */
void Inertia_Matrix(double phi, double the, double psi, double theta1, double
                    theta2, double theta3, double M[81])
{
  double a;
  double x;
  double b_x;
  double c_x;
  double b_a;
  double c_a;
  double d_a;
  double d_x;
  double e_x;
  double f_x;
  double g_x;
  double h_x;
  double i_x;
  double j_x;
  double k_x;
  double l_x;
  double m_x;
  double n_x;
  double o_x;
  double e_a;
  double f_a;
  double p_x;
  double q_x;
  double r_x;
  double s_x;
  double t_x;
  double u_x;
  double v_x;
  double w_x;
  double x_x;
  double y_x;
  double ab_x;
  double g_a;
  double h_a;
  double bb_x;
  double cb_x;
  double db_x;
  double eb_x;
  double fb_x;
  double gb_x;
  double hb_x;
  double ib_x;
  double jb_x;
  double kb_x;
  double lb_x;
  double i_a;
  double j_a;
  double mb_x;
  double nb_x;
  double ob_x;
  double pb_x;
  double qb_x;
  double rb_x;
  double sb_x;
  double tb_x;
  double ub_x;
  double vb_x;
  double wb_x;
  double xb_x;
  double yb_x;
  double ac_x;
  double bc_x;
  double cc_x;
  double dc_x;
  double ec_x;
  double k_a;
  double l_a;
  double m_a;
  double fc_x;
  double n_a;
  double gc_x;
  double hc_x;
  double ic_x;
  double o_a;
  double p_a;
  double jc_x;
  double kc_x;
  double lc_x;
  double mc_x;
  double nc_x;
  double oc_x;
  double pc_x;
  double qc_x;
  double rc_x;
  double sc_x;
  double tc_x;
  double q_a;
  double r_a;
  double uc_x;
  double vc_x;
  double wc_x;
  double xc_x;
  double yc_x;
  double ad_x;
  double bd_x;
  double cd_x;
  double dd_x;
  double ed_x;
  double fd_x;
  double s_a;
  double t_a;
  double gd_x;
  double hd_x;
  double id_x;
  double jd_x;
  double kd_x;
  double ld_x;
  double md_x;
  double nd_x;
  double od_x;
  double pd_x;
  double qd_x;
  double rd_x;
  double u_a;
  double v_a;
  double w_a;
  double x_a;
  double sd_x;
  double td_x;
  double ud_x;
  double vd_x;
  double wd_x;
  double xd_x;
  double yd_x;
  double ae_x;
  double be_x;
  double ce_x;
  double de_x;
  double ee_x;
  double y_a;
  double fe_x;
  double ab_a;
  double ge_x;
  double bb_a;
  double he_x;
  double ie_x;
  double je_x;
  double ke_x;
  double le_x;
  double me_x;
  double ne_x;
  double oe_x;
  double pe_x;
  double qe_x;
  double re_x;
  double se_x;
  double te_x;
  double ue_x;
  double ve_x;
  double we_x;
  double xe_x;
  double ye_x;
  double af_x;
  double bf_x;
  double cf_x;
  double df_x;
  double ef_x;
  double ff_x;
  double gf_x;
  double hf_x;
  double if_x;
  double jf_x;
  double kf_x;
  double lf_x;
  double mf_x;
  double nf_x;
  double of_x;
  double pf_x;
  double qf_x;
  double rf_x;
  double sf_x;
  double tf_x;
  double uf_x;
  double vf_x;
  double wf_x;
  double xf_x;
  double yf_x;
  double ag_x;
  double bg_x;
  double cg_x;
  double dg_x;
  double eg_x;
  double fg_x;
  double gg_x;
  double hg_x;
  double ig_x;
  double jg_x;
  double kg_x;
  double lg_x;
  double mg_x;
  double ng_x;
  double og_x;
  double pg_x;
  double qg_x;
  double cb_a;
  double rg_x;
  double sg_x;
  double tg_x;
  double ug_x;
  double vg_x;
  double db_a;
  double wg_x;
  double xg_x;
  double yg_x;
  double eb_a;
  double ah_x;
  double bh_x;
  double ch_x;
  double dh_x;
  double eh_x;
  double fh_x;
  double gh_x;
  double hh_x;
  double ih_x;
  double jh_x;
  double kh_x;
  double lh_x;
  double mh_x;
  double nh_x;
  double oh_x;
  double ph_x;
  double qh_x;
  double rh_x;
  double sh_x;
  double th_x;
  double uh_x;
  double vh_x;
  double wh_x;
  double xh_x;
  double yh_x;
  double ai_x;
  double bi_x;
  double ci_x;
  double di_x;
  double ei_x;
  double fi_x;
  double gi_x;
  double hi_x;
  double ii_x;
  double ji_x;
  double ki_x;
  double li_x;
  double mi_x;
  double ni_x;
  double oi_x;
  double pi_x;
  double qi_x;
  double ri_x;
  double si_x;
  double ti_x;
  double ui_x;
  double vi_x;
  double wi_x;
  double xi_x;
  double yi_x;
  double aj_x;
  double bj_x;
  double cj_x;
  double dj_x;
  double ej_x;
  double fj_x;
  double gj_x;
  double hj_x;
  double ij_x;
  double jj_x;
  double kj_x;
  double lj_x;
  a = 3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) /
    20.0;
  x = cos(theta1);
  b_x = sin(theta2);
  c_x = sin(theta1);
  b_a = cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) *
    sin(theta2);
  c_a = cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) *
    cos(theta3);
  d_a = 3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2)
    * cos(theta3) * sin(theta1) / 20.0;
  d_x = cos(theta1);
  e_x = cos(theta2);
  f_x = cos(theta2);
  g_x = sin(theta1);
  h_x = cos(theta1);
  i_x = sin(theta2);
  j_x = cos(theta2);
  k_x = sin(theta2);
  l_x = cos(theta2);
  m_x = cos(theta1);
  n_x = sin(theta1);
  o_x = sin(theta1);
  e_a = cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) *
    sin(theta2);
  f_a = cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) *
    cos(theta3);
  p_x = cos(theta2);
  q_x = sin(theta2);
  r_x = sin(theta1);
  s_x = cos(theta1);
  t_x = cos(theta2);
  u_x = cos(theta1);
  v_x = sin(theta2);
  w_x = cos(theta1);
  x_x = cos(theta1);
  y_x = sin(theta1);
  ab_x = sin(theta1);
  g_a = cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) *
    sin(theta2);
  h_a = cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) *
    cos(theta3);
  bb_x = cos(theta2);
  cb_x = sin(theta2);
  db_x = sin(theta1);
  eb_x = cos(theta1);
  fb_x = cos(theta2);
  gb_x = cos(theta1);
  hb_x = sin(theta2);
  ib_x = cos(theta1);
  jb_x = cos(theta1);
  kb_x = sin(theta1);
  lb_x = sin(theta1);
  i_a = cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) *
    sin(theta2);
  j_a = cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) *
    cos(theta3);
  mb_x = cos(theta2);
  nb_x = sin(theta2);
  ob_x = sin(theta1);
  pb_x = cos(theta1);
  qb_x = cos(theta2);
  rb_x = cos(theta1);
  sb_x = sin(theta2);
  tb_x = cos(theta1);
  ub_x = cos(theta2);
  vb_x = sin(theta2);
  wb_x = cos(theta1);
  xb_x = cos(theta2);
  yb_x = sin(theta1);
  ac_x = sin(theta1);
  bc_x = sin(theta2);
  cc_x = cos(theta1);
  dc_x = sin(theta1);
  ec_x = cos(theta1);
  k_a = cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) *
    sin(theta2);
  l_a = sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) *
    sin(theta1);
  m_a = 3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2)
    / 20.0;
  fc_x = sin(theta2);
  n_a = 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1)
    * cos(theta2) * cos(theta3) / 20.0;
  gc_x = cos(theta1);
  hc_x = cos(theta2);
  ic_x = cos(theta1);
  o_a = cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) *
    sin(theta2);
  p_a = sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) *
    sin(theta1);
  jc_x = cos(theta2);
  kc_x = sin(theta2);
  lc_x = cos(theta1);
  mc_x = cos(theta2);
  nc_x = sin(theta1);
  oc_x = sin(theta1);
  pc_x = sin(theta2);
  qc_x = cos(theta1);
  rc_x = sin(theta1);
  sc_x = sin(theta1);
  tc_x = cos(theta1);
  q_a = cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) *
    sin(theta2);
  r_a = sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) *
    sin(theta1);
  uc_x = cos(theta2);
  vc_x = sin(theta2);
  wc_x = cos(theta1);
  xc_x = cos(theta2);
  yc_x = sin(theta1);
  ad_x = sin(theta1);
  bd_x = sin(theta2);
  cd_x = cos(theta1);
  dd_x = sin(theta1);
  ed_x = sin(theta1);
  fd_x = cos(theta1);
  s_a = cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) *
    sin(theta2);
  t_a = sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) *
    sin(theta1);
  gd_x = cos(theta2);
  hd_x = sin(theta2);
  id_x = cos(theta1);
  jd_x = cos(theta2);
  kd_x = sin(theta1);
  ld_x = sin(theta1);
  md_x = sin(theta2);
  nd_x = cos(theta1);
  od_x = sin(theta1);
  pd_x = sin(theta1);
  qd_x = cos(theta2);
  rd_x = sin(theta2);
  u_a = cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2);
  v_a = cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3);
  w_a = 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1)
    * cos(theta2) * cos(theta3) / 20.0;
  x_a = 3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2)
    * cos(theta3) * sin(theta1) / 20.0;
  sd_x = cos(theta1);
  td_x = cos(theta2);
  ud_x = cos(theta2);
  vd_x = sin(theta1);
  wd_x = cos(theta1);
  xd_x = sin(theta1);
  yd_x = cos(theta1);
  ae_x = sin(theta1);
  be_x = cos(theta1);
  ce_x = sin(theta1);
  de_x = cos(theta1);
  ee_x = sin(theta1);
  y_a = cos(theta1) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0 -
                       3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) +
    sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 *
                   cos(theta2) * cos(theta3) * sin(theta1) / 10.0);
  fe_x = cos(theta1);
  ab_a = (3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin
          (theta2) / 10.0) - 0.1;
  ge_x = sin(theta1);
  bb_a = (3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin
          (theta2) / 10.0) - 0.1;
  he_x = cos(theta1);
  ie_x = sin(theta1);
  je_x = cos(theta1);
  ke_x = sin(theta1);
  le_x = cos(theta1);
  me_x = sin(theta1);
  ne_x = cos(theta1);
  oe_x = sin(theta1);
  pe_x = cos(theta1);
  qe_x = sin(theta1);
  re_x = cos(theta1);
  se_x = sin(theta1);
  te_x = cos(theta1);
  ue_x = sin(theta1);
  ve_x = cos(theta1);
  we_x = sin(theta1);
  xe_x = cos(theta1);
  ye_x = sin(theta1);
  af_x = cos(theta1);
  bf_x = sin(theta1);
  cf_x = cos(theta1);
  df_x = sin(theta1);
  ef_x = cos(theta1);
  ff_x = sin(theta1);
  gf_x = cos(theta1);
  hf_x = sin(theta1);
  if_x = cos(theta1);
  jf_x = sin(theta1);
  kf_x = cos(theta1);
  lf_x = sin(theta1);
  mf_x = cos(theta1);
  nf_x = sin(theta1);
  of_x = cos(theta1);
  pf_x = sin(theta1);
  qf_x = cos(theta1);
  rf_x = sin(theta1);
  sf_x = cos(theta1);
  tf_x = sin(theta1);
  uf_x = cos(theta1);
  vf_x = sin(theta1);
  wf_x = cos(theta1);
  xf_x = sin(theta1);
  yf_x = cos(theta1);
  ag_x = sin(theta1);
  bg_x = cos(theta1);
  cg_x = sin(theta1);
  dg_x = cos(theta1);
  eg_x = sin(theta1);
  fg_x = cos(theta1);
  gg_x = sin(theta1);
  hg_x = cos(theta1);
  ig_x = sin(theta1);
  jg_x = cos(theta1);
  kg_x = sin(theta1);
  lg_x = cos(theta1);
  mg_x = sin(theta1);
  ng_x = cos(theta1);
  og_x = sin(theta1);
  pg_x = cos(theta1);
  qg_x = sin(theta1);
  cb_a = cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 + 3.0 * cos
    (theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta1) * cos
                        (theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 *
    cos(theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin
    (theta3) / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0);
  rg_x = cos(theta1);
  sg_x = sin(theta1);
  tg_x = cos(theta1);
  ug_x = sin(theta1);
  vg_x = cos(theta1);
  db_a = (3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) +
    3.0 * cos(theta3) * sin(theta2) / 10.0;
  wg_x = cos(theta1);
  xg_x = sin(theta1);
  yg_x = sin(theta1);
  eb_a = (3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) +
    3.0 * cos(theta3) * sin(theta2) / 10.0;
  ah_x = cos(theta1);
  bh_x = sin(theta1);
  ch_x = cos(theta1);
  dh_x = sin(theta1);
  eh_x = cos(theta1);
  fh_x = sin(theta1);
  gh_x = cos(theta1);
  hh_x = sin(theta1);
  ih_x = cos(theta1);
  jh_x = sin(theta1);
  kh_x = cos(theta1);
  lh_x = sin(theta1);
  mh_x = cos(theta1);
  nh_x = sin(theta1);
  oh_x = cos(theta1);
  ph_x = sin(theta1);
  qh_x = cos(theta1);
  rh_x = sin(theta1);
  sh_x = cos(theta1);
  th_x = sin(theta1);
  uh_x = cos(theta1);
  vh_x = sin(theta1);
  wh_x = cos(theta1);
  xh_x = sin(theta1);
  yh_x = cos(theta1);
  ai_x = sin(theta1);
  bi_x = cos(theta1);
  ci_x = sin(theta1);
  di_x = cos(theta1);
  ei_x = sin(theta1);
  fi_x = cos(theta1);
  gi_x = sin(theta1);
  hi_x = cos(theta1);
  ii_x = sin(theta1);
  ji_x = cos(theta1);
  ki_x = sin(theta1);
  li_x = cos(theta1);
  mi_x = sin(theta1);
  ni_x = cos(theta1);
  oi_x = sin(theta1);
  pi_x = cos(theta1);
  qi_x = sin(theta1);
  ri_x = cos(theta1);
  si_x = sin(theta1);
  ti_x = cos(theta1);
  ui_x = sin(theta1);
  vi_x = cos(theta1);
  wi_x = sin(theta1);
  xi_x = cos(theta1);
  yi_x = sin(theta1);
  aj_x = cos(theta1);
  bj_x = sin(theta1);
  cj_x = cos(theta1);
  dj_x = sin(theta1);
  ej_x = cos(theta1);
  fj_x = sin(theta1);
  gj_x = cos(theta1);
  hj_x = sin(theta1);
  ij_x = cos(theta1);
  jj_x = sin(theta1);
  kj_x = cos(theta1);
  lj_x = sin(theta1);
  M[0] = 4.0;
  M[9] = 0.0;
  M[18] = 0.0;
  M[27] = 0.0;
  M[36] = (phi * phi * the / 40.0 + phi * phi * the * (3.0 * cos(theta2) * sin
            (theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 2.0) +
    3.0 * (phi * phi) * the * sin(theta2) / 40.0;
  M[45] = phi * phi * psi * the * (3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) / 2.0 - 3.0 *
    (phi * phi) * psi * the * cos(theta2) * sin(theta1) / 40.0;
  M[54] = -(3.0 * psi * the * cos(theta1) * ((3.0 * cos(theta2) * sin(theta3) /
              10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1)) / 2.0;
  M[63] = -(3.0 * psi * the * cos(theta1) * ((3.0 * cos(theta2) * sin(theta3) /
              10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2)
             / 10.0)) / 2.0;
  M[72] = 0.0;
  M[1] = 0.0;
  M[10] = 4.0;
  M[19] = 0.0;
  M[28] = (-(phi * the) / 40.0 - 3.0 * phi * the * sin(theta2) / 40.0) - phi *
    the * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin
           (theta2) / 20.0) / 2.0;
  M[37] = 0.0;
  M[46] = 3.0 * phi * psi * (the * the) * cos(theta1) * cos(theta2) / 40.0 - phi
    * psi * (the * the) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 20.0
    - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) / 2.0;
  M[55] = -(3.0 * phi * psi * sin(theta1) * ((3.0 * cos(theta2) * sin(theta3) /
              10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1)) / 2.0;
  M[64] = -(3.0 * phi * psi * sin(theta1) * ((3.0 * cos(theta2) * sin(theta3) /
              10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2)
             / 10.0)) / 2.0;
  M[73] = 0.0;
  M[2] = 0.0;
  M[11] = 0.0;
  M[20] = 4.0;
  M[29] = 3.0 * phi * psi * cos(theta2) * sin(theta1) / 40.0 - phi * psi * (3.0 *
    sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos
    (theta3) * sin(theta1) / 20.0) / 2.0;
  M[38] = phi * psi * the * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) /
    20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) / 2.0 - 3.0 *
    phi * psi * the * cos(theta1) * cos(theta2) / 40.0;
  M[47] = 0.0;
  M[56] = -(3.0 * phi * the * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) *
              sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3)
              / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin
              (theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) /
              10.0))) / 2.0;
  M[65] = -(3.0 * phi * the * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) /
    10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
              (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0
    * cos(theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin
    (theta3) / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0))) /
    2.0;
  M[74] = 0.0;
  M[3] = 0.0;
  M[12] = (-(phi * the) / 40.0 - 3.0 * phi * the * sin(theta2) / 40.0) - phi *
    the * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin
           (theta2) / 20.0) / 2.0;
  M[21] = 3.0 * phi * psi * cos(theta2) * sin(theta1) / 40.0 - phi * psi * (3.0 *
    sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos
    (theta3) * sin(theta1) / 20.0) / 2.0;
  M[30] = ((((((((((phi * phi * (the * the) / 800.0 + psi * psi * (the * the) /
                    2.0) + phi * phi * (the * the) * (a * a) / 2.0) + psi * psi *
                  (the * the) * (x * x) / 10.0) + 9.0 * (phi * phi) * (the * the)
                 * (b_x * b_x) / 800.0) + 3.0 * (psi * psi) * (the * the) * (c_x
    * c_x) / 5.0) + psi * psi * (the * the) * (b_a * b_a) / 10.0) + psi * psi *
              (the * the) * (c_a * c_a) / 10.0) + phi * phi * (psi * psi) * (d_a
              * d_a) / 2.0) + psi * psi * (the * the) * (d_x * d_x) * (e_x * e_x)
            / 10.0) + 9.0 * (phi * phi) * (psi * psi) * (f_x * f_x) * (g_x * g_x)
           / 800.0) + psi * psi * (the * the) * (h_x * h_x) * (i_x * i_x) / 10.0;
  M[39] = (((phi * ((phi * (psi * psi) * the * cos(theta1) * (j_x * j_x) * sin
                     (theta1) / 10.0 - phi * (psi * psi) * the * cos(theta1) *
                     sin(theta1) / 5.0) + phi * (psi * psi) * the * cos(theta1) *
                    sin(theta1) * (k_x * k_x) / 10.0) + phi * ((phi * (psi * psi)
    * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3)
             * sin(theta2)) * (cos(theta2) * sin(theta1) * sin(theta3) + cos
    (theta3) * sin(theta1) * sin(theta2)) / 10.0 + phi * (psi * psi) * the *
    (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
     (theta3)) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
                  (theta3) * sin(theta1)) / 10.0) - phi * (psi * psi) * the *
              cos(theta1) * sin(theta1) / 5.0)) - phi * phi * (psi * psi) * the *
            (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos
             (theta1) * cos(theta2) * cos(theta3) / 20.0) * (3.0 * sin(theta1) *
             sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) *
             sin(theta1) / 20.0) / 2.0) - phi * phi * (psi * psi) * the * cos
           (theta1) * sin(theta1) / 10.0) - 9.0 * (phi * phi) * (psi * psi) *
    the * cos(theta1) * (l_x * l_x) * sin(theta1) / 800.0;
  M[48] = (phi * phi * psi * rt_powd_snf(the, 3.0) * (3.0 * cos(theta1) * sin
            (theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) *
            cos(theta3) / 20.0) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
            cos(theta3) * sin(theta2) / 20.0) / 2.0 - phi * the * (phi * psi *
            (the * the) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1)
             * cos(theta3) * sin(theta2)) * (cos(theta2) * cos(theta3) - sin
             (theta2) * sin(theta3)) / 10.0 + phi * psi * (the * the) * (cos
             (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) *
             cos(theta3)) * (cos(theta2) * sin(theta3) + cos(theta3) * sin
             (theta2)) / 10.0)) - 9.0 * (phi * phi) * psi * rt_powd_snf(the, 3.0)
    * cos(theta1) * cos(theta2) * sin(theta2) / 800.0;
  M[57] = (((((((((psi * the * sin(theta1) * (psi * psi * (the * the) * (m_x *
    m_x) / 10.0 + psi * psi * (the * the) * (n_x * n_x) / 5.0) + psi * the * sin
                   (theta1) * ((psi * psi * (the * the) * (o_x * o_x) / 5.0 +
    psi * psi * (the * the) * (e_a * e_a) / 10.0) + psi * psi * (the * the) *
    (f_a * f_a) / 10.0)) - phi * psi * cos(theta1) * ((phi * (psi * psi) * the *
    cos(theta1) * (p_x * p_x) * sin(theta1) / 10.0 - phi * (psi * psi) * the *
    cos(theta1) * sin(theta1) / 5.0) + phi * (psi * psi) * the * cos(theta1) *
    sin(theta1) * (q_x * q_x) / 10.0)) + psi * the * sin(theta1) * ((psi * psi *
    (the * the) * (r_x * r_x) / 5.0 + psi * psi * (the * the) * (s_x * s_x) *
    (t_x * t_x) / 10.0) + psi * psi * (the * the) * (u_x * u_x) * (v_x * v_x) /
    10.0)) - phi * psi * cos(theta1) * ((phi * (psi * psi) * the * (cos(theta1) *
    cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2)) / 10.0 + phi * (psi * psi) * the * (cos(theta1) * sin(theta2) *
    sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) / 10.0) -
    phi * (psi * psi) * the * cos(theta1) * sin(theta1) / 5.0)) + phi * phi *
               psi * the * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0
    - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) * (cos(theta1) *
    (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) *
     cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin
    (theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1)
    / 10.0)) / 2.0) + phi * phi * rt_powd_snf(psi, 3.0) * the * (w_x * w_x) *
              sin(theta1) / 10.0) + phi * phi * psi * the * sin(theta1) * ((3.0 *
    cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) -
              0.1) / 40.0) + phi * phi * psi * the * sin(theta1) * (3.0 * cos
             (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) /
             20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3)
                       * sin(theta2) / 10.0) - 0.1) / 2.0) - 3.0 * (phi * phi) *
           psi * the * cos(theta2) * sin(theta1) * (cos(theta1) * (3.0 * cos
             (theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) *
             cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * (3.0 * sin(theta1)
             * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3)
             * sin(theta1) / 10.0)) / 40.0) + 3.0 * (phi * phi) * psi * the *
    sin(theta1) * sin(theta2) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 *
    cos(theta3) * sin(theta2) / 10.0) - 0.1) / 40.0;
  M[66] = (((((((((psi * the * sin(theta1) * (psi * psi * (the * the) * (x_x *
    x_x) / 10.0 + psi * psi * (the * the) * (y_x * y_x) / 5.0) + psi * the * sin
                   (theta1) * ((psi * psi * (the * the) * (ab_x * ab_x) / 5.0 +
    psi * psi * (the * the) * (g_a * g_a) / 10.0) + psi * psi * (the * the) *
    (h_a * h_a) / 10.0)) - phi * psi * cos(theta1) * ((phi * (psi * psi) * the *
    cos(theta1) * (bb_x * bb_x) * sin(theta1) / 10.0 - phi * (psi * psi) * the *
    cos(theta1) * sin(theta1) / 5.0) + phi * (psi * psi) * the * cos(theta1) *
    sin(theta1) * (cb_x * cb_x) / 10.0)) + psi * the * sin(theta1) * ((psi * psi
    * (the * the) * (db_x * db_x) / 5.0 + psi * psi * (the * the) * (eb_x * eb_x)
    * (fb_x * fb_x) / 10.0) + psi * psi * (the * the) * (gb_x * gb_x) * (hb_x *
    hb_x) / 10.0)) - phi * psi * cos(theta1) * ((phi * (psi * psi) * the * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
                 (theta1) * sin(theta2)) / 10.0 + phi * (psi * psi) * the * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
                 (theta3) * sin(theta1)) / 10.0) - phi * (psi * psi) * the * cos
    (theta1) * sin(theta1) / 5.0)) + phi * phi * psi * the * (3.0 * sin(theta1) *
    sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin
    (theta1) / 20.0) * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 +
    3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta1) *
    cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos(theta2) * sin
    (theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0) -
    3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 2.0) + phi * phi *
              rt_powd_snf(psi, 3.0) * the * (ib_x * ib_x) * sin(theta1) / 10.0)
             + phi * phi * psi * the * sin(theta1) * ((3.0 * cos(theta2) * sin
    (theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2)
              / 10.0) / 40.0) + phi * phi * psi * the * sin(theta1) * (3.0 * cos
             (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) /
             20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2)
                       / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0)
           - 3.0 * (phi * phi) * psi * the * cos(theta2) * sin(theta1) * (cos
            (theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 + 3.0 * cos
              (theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta1) *
                        cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 *
              cos(theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2)
              * sin(theta3) / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin
             (theta1) / 10.0)) / 40.0) + 3.0 * (phi * phi) * psi * the * sin
    (theta1) * sin(theta2) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  M[75] = ((((psi * the * sin(theta1) * (psi * psi * (the * the) * (jb_x * jb_x)
    / 10.0 + psi * psi * (the * the) * (kb_x * kb_x) / 5.0) + psi * the * sin
              (theta1) * ((psi * psi * (the * the) * (lb_x * lb_x) / 5.0 + psi *
    psi * (the * the) * (i_a * i_a) / 10.0) + psi * psi * (the * the) * (j_a *
    j_a) / 10.0)) - phi * psi * cos(theta1) * ((phi * (psi * psi) * the * cos
    (theta1) * (mb_x * mb_x) * sin(theta1) / 10.0 - phi * (psi * psi) * the *
    cos(theta1) * sin(theta1) / 5.0) + phi * (psi * psi) * the * cos(theta1) *
              sin(theta1) * (nb_x * nb_x) / 10.0)) + psi * the * sin(theta1) *
            ((psi * psi * (the * the) * (ob_x * ob_x) / 5.0 + psi * psi * (the *
    the) * (pb_x * pb_x) * (qb_x * qb_x) / 10.0) + psi * psi * (the * the) *
             (rb_x * rb_x) * (sb_x * sb_x) / 10.0)) - phi * psi * cos(theta1) *
           ((phi * (psi * psi) * the * (cos(theta1) * cos(theta2) * sin(theta3)
              + cos(theta1) * cos(theta3) * sin(theta2)) * (cos(theta2) * sin
              (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) /
             10.0 + phi * (psi * psi) * the * (cos(theta1) * sin(theta2) * sin
              (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (sin(theta1)
              * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
              (theta1)) / 10.0) - phi * (psi * psi) * the * cos(theta1) * sin
            (theta1) / 5.0)) + phi * phi * rt_powd_snf(psi, 3.0) * the * (tb_x *
    tb_x) * sin(theta1) / 10.0;
  M[4] = (phi * phi * the / 40.0 + phi * phi * the * (3.0 * cos(theta2) * sin
           (theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) / 2.0) +
    3.0 * (phi * phi) * the * sin(theta2) / 40.0;
  M[13] = 0.0;
  M[22] = phi * psi * the * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) /
    20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) / 2.0 - 3.0 *
    phi * psi * the * cos(theta1) * cos(theta2) / 40.0;
  M[31] = ((((phi * phi * (psi * psi) * the * (cos(theta1) * cos(theta2) * sin
    (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) / 10.0 +
              phi * phi * (psi * psi) * the * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) / 10.0) -
             phi * phi * (psi * psi) * the * (3.0 * cos(theta1) * sin(theta2) *
              sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3)
              / 20.0) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 20.0 -
              3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) / 2.0) - phi
            * phi * (psi * psi) * the * cos(theta1) * sin(theta1) / 2.0) + 71.0 *
           (phi * phi) * (psi * psi) * the * cos(theta1) * (ub_x * ub_x) * sin
           (theta1) / 800.0) + phi * phi * (psi * psi) * the * cos(theta1) * sin
    (theta1) * (vb_x * vb_x) / 10.0;
  M[40] = (((((((rt_powd_snf(phi, 4.0) * (the * the) / 800.0 + phi *
                 ((rt_powd_snf(phi, 3.0) * (psi * psi) * (wb_x * wb_x) / 5.0 +
                   rt_powd_snf(phi, 3.0) * (psi * psi) * (xb_x * xb_x) * (yb_x *
    yb_x) / 10.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (ac_x * ac_x) * (bc_x *
    bc_x) / 10.0)) + phi * (rt_powd_snf(phi, 3.0) * (psi * psi) * (cc_x * cc_x) /
    5.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (dc_x * dc_x) / 10.0)) + phi *
               ((rt_powd_snf(phi, 3.0) * (psi * psi) * (ec_x * ec_x) / 5.0 +
                 rt_powd_snf(phi, 3.0) * (psi * psi) * (k_a * k_a) / 10.0) +
                rt_powd_snf(phi, 3.0) * (psi * psi) * (l_a * l_a) / 10.0)) +
              rt_powd_snf(phi, 4.0) * (psi * psi) / 2.0) + rt_powd_snf(phi, 4.0)
             * (the * the) * (m_a * m_a) / 2.0) + 9.0 * rt_powd_snf(phi, 4.0) *
            (the * the) * (fc_x * fc_x) / 800.0) + phi * phi * (psi * psi) *
           (the * the) * (n_a * n_a) / 2.0) + 9.0 * (phi * phi) * (psi * psi) *
    (the * the) * (gc_x * gc_x) * (hc_x * hc_x) / 800.0;
  M[49] = (rt_powd_snf(phi, 4.0) * psi * (the * the) * (3.0 * sin(theta1) * sin
            (theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) *
            sin(theta1) / 20.0) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
            cos(theta3) * sin(theta2) / 20.0) / 2.0 - phi * the * (rt_powd_snf
            (phi, 3.0) * psi * the * (cos(theta2) * sin(theta1) * sin(theta3) +
             cos(theta3) * sin(theta1) * sin(theta2)) * (cos(theta2) * cos
             (theta3) - sin(theta2) * sin(theta3)) / 10.0 + rt_powd_snf(phi, 3.0)
            * psi * the * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2)
             * cos(theta3) * sin(theta1)) * (cos(theta2) * sin(theta3) + cos
             (theta3) * sin(theta2)) / 10.0)) - 9.0 * rt_powd_snf(phi, 4.0) *
    psi * (the * the) * cos(theta2) * sin(theta1) * sin(theta2) / 800.0;
  M[58] = (((((((((psi * the * sin(theta1) * ((phi * phi * (psi * psi) * the *
    (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
     (theta2)) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
                  (theta1) * sin(theta2)) / 10.0 + phi * phi * (psi * psi) * the
    * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
       (theta3)) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
                    (theta3) * sin(theta1)) / 10.0) - phi * phi * (psi * psi) *
    the * cos(theta1) * sin(theta1) / 5.0) - phi * psi * cos(theta1) *
                   ((rt_powd_snf(phi, 3.0) * (psi * psi) * (ic_x * ic_x) / 5.0 +
                     rt_powd_snf(phi, 3.0) * (psi * psi) * (o_a * o_a) / 10.0) +
                    rt_powd_snf(phi, 3.0) * (psi * psi) * (p_a * p_a) / 10.0)) +
                  psi * the * sin(theta1) * ((phi * phi * (psi * psi) * the *
    cos(theta1) * (jc_x * jc_x) * sin(theta1) / 10.0 - phi * phi * (psi * psi) *
    the * cos(theta1) * sin(theta1) / 5.0) + phi * phi * (psi * psi) * the * cos
    (theta1) * sin(theta1) * (kc_x * kc_x) / 10.0)) - phi * psi * cos(theta1) *
                 ((rt_powd_snf(phi, 3.0) * (psi * psi) * (lc_x * lc_x) / 5.0 +
                   rt_powd_snf(phi, 3.0) * (psi * psi) * (mc_x * mc_x) * (nc_x *
    nc_x) / 10.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (oc_x * oc_x) * (pc_x *
    pc_x) / 10.0)) - phi * psi * cos(theta1) * (rt_powd_snf(phi, 3.0) * (psi *
    psi) * (qc_x * qc_x) / 5.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (rc_x *
    rc_x) / 10.0)) - phi * phi * psi * (the * the) * (3.0 * cos(theta1) * sin
    (theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3)
    / 20.0) * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) /
    10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) *
               (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos
                (theta2) * cos(theta3) * sin(theta1) / 10.0)) / 2.0) - phi * phi
              * psi * (the * the) * cos(theta1) * ((3.0 * cos(theta2) * sin
    (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 40.0) -
             phi * phi * rt_powd_snf(psi, 3.0) * (the * the) * cos(theta1) *
             (sc_x * sc_x) / 10.0) - phi * phi * psi * (the * the) * cos(theta1)
            * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin
               (theta2) / 20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0
              * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 2.0) + 3.0 * (phi *
            phi) * psi * (the * the) * cos(theta1) * cos(theta2) * (cos(theta1) *
            (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos
             (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * (3.0 *
             sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta2) *
             cos(theta3) * sin(theta1) / 10.0)) / 40.0) - 3.0 * (phi * phi) *
    psi * (the * the) * cos(theta1) * sin(theta2) * ((3.0 * cos(theta2) * sin
    (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 40.0;
  M[67] = (((((((((psi * the * sin(theta1) * ((phi * phi * (psi * psi) * the *
    (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
     (theta2)) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
                  (theta1) * sin(theta2)) / 10.0 + phi * phi * (psi * psi) * the
    * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
       (theta3)) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
                    (theta3) * sin(theta1)) / 10.0) - phi * phi * (psi * psi) *
    the * cos(theta1) * sin(theta1) / 5.0) - phi * psi * cos(theta1) *
                   ((rt_powd_snf(phi, 3.0) * (psi * psi) * (tc_x * tc_x) / 5.0 +
                     rt_powd_snf(phi, 3.0) * (psi * psi) * (q_a * q_a) / 10.0) +
                    rt_powd_snf(phi, 3.0) * (psi * psi) * (r_a * r_a) / 10.0)) +
                  psi * the * sin(theta1) * ((phi * phi * (psi * psi) * the *
    cos(theta1) * (uc_x * uc_x) * sin(theta1) / 10.0 - phi * phi * (psi * psi) *
    the * cos(theta1) * sin(theta1) / 5.0) + phi * phi * (psi * psi) * the * cos
    (theta1) * sin(theta1) * (vc_x * vc_x) / 10.0)) - phi * psi * cos(theta1) *
                 ((rt_powd_snf(phi, 3.0) * (psi * psi) * (wc_x * wc_x) / 5.0 +
                   rt_powd_snf(phi, 3.0) * (psi * psi) * (xc_x * xc_x) * (yc_x *
    yc_x) / 10.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (ad_x * ad_x) * (bd_x *
    bd_x) / 10.0)) - phi * psi * cos(theta1) * (rt_powd_snf(phi, 3.0) * (psi *
    psi) * (cd_x * cd_x) / 5.0 + rt_powd_snf(phi, 3.0) * (psi * psi) * (dd_x *
    dd_x) / 10.0)) - phi * phi * psi * (the * the) * cos(theta1) * ((3.0 * cos
    (theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3)
    * sin(theta2) / 10.0) / 40.0) - phi * phi * psi * (the * the) * (3.0 * cos
    (theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2)
    * cos(theta3) / 20.0) * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) /
    10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
    (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos
    (theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 2.0) -
             phi * phi * rt_powd_snf(psi, 3.0) * (the * the) * cos(theta1) *
             (ed_x * ed_x) / 10.0) - 3.0 * (phi * phi) * psi * (the * the) * cos
            (theta1) * sin(theta2) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 -
              3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0)
            / 40.0) - phi * phi * psi * (the * the) * cos(theta1) * (3.0 * cos
            (theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) /
            20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2)
                      / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0) +
    3.0 * (phi * phi) * psi * (the * the) * cos(theta1) * cos(theta2) * (cos
    (theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 + 3.0 * cos(theta1) *
                 sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta1) * cos
                (theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos
    (theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3)
    / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0;
  M[76] = ((((psi * the * sin(theta1) * ((phi * phi * (psi * psi) * the * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
                 (theta1) * sin(theta2)) / 10.0 + phi * phi * (psi * psi) * the *
    (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
     (theta3)) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
                  (theta3) * sin(theta1)) / 10.0) - phi * phi * (psi * psi) *
    the * cos(theta1) * sin(theta1) / 5.0) - phi * psi * cos(theta1) *
              ((rt_powd_snf(phi, 3.0) * (psi * psi) * (fd_x * fd_x) / 5.0 +
                rt_powd_snf(phi, 3.0) * (psi * psi) * (s_a * s_a) / 10.0) +
               rt_powd_snf(phi, 3.0) * (psi * psi) * (t_a * t_a) / 10.0)) + psi *
             the * sin(theta1) * ((phi * phi * (psi * psi) * the * cos(theta1) *
    (gd_x * gd_x) * sin(theta1) / 10.0 - phi * phi * (psi * psi) * the * cos
    (theta1) * sin(theta1) / 5.0) + phi * phi * (psi * psi) * the * cos(theta1) *
              sin(theta1) * (hd_x * hd_x) / 10.0)) - phi * psi * cos(theta1) *
            ((rt_powd_snf(phi, 3.0) * (psi * psi) * (id_x * id_x) / 5.0 +
              rt_powd_snf(phi, 3.0) * (psi * psi) * (jd_x * jd_x) * (kd_x * kd_x)
              / 10.0) + rt_powd_snf(phi, 3.0) * (psi * psi) * (ld_x * ld_x) *
             (md_x * md_x) / 10.0)) - phi * psi * cos(theta1) * (rt_powd_snf(phi,
             3.0) * (psi * psi) * (nd_x * nd_x) / 5.0 + rt_powd_snf(phi, 3.0) *
            (psi * psi) * (od_x * od_x) / 10.0)) - phi * phi * rt_powd_snf(psi,
    3.0) * (the * the) * cos(theta1) * (pd_x * pd_x) / 10.0;
  M[5] = phi * phi * psi * the * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) /
    20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) / 2.0 - 3.0 *
    (phi * phi) * psi * the * cos(theta2) * sin(theta1) / 40.0;
  M[14] = 3.0 * phi * psi * (the * the) * cos(theta1) * cos(theta2) / 40.0 - phi
    * psi * (the * the) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 20.0
    - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) / 2.0;
  M[23] = 0.0;
  M[32] = ((phi * phi * psi * rt_powd_snf(the, 3.0) * (3.0 * cos(theta1) * sin
             (theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) *
             cos(theta3) / 20.0) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0
             * cos(theta3) * sin(theta2) / 20.0) / 2.0 - phi * phi * psi *
            rt_powd_snf(the, 3.0) * (cos(theta1) * sin(theta2) * sin(theta3) -
             cos(theta1) * cos(theta2) * cos(theta3)) * (cos(theta2) * sin
             (theta3) + cos(theta3) * sin(theta2)) / 10.0) - phi * phi * psi *
           rt_powd_snf(the, 3.0) * (cos(theta1) * cos(theta2) * sin(theta3) +
            cos(theta1) * cos(theta3) * sin(theta2)) * (cos(theta2) * cos(theta3)
            - sin(theta2) * sin(theta3)) / 10.0) - 9.0 * (phi * phi) * psi *
    rt_powd_snf(the, 3.0) * cos(theta1) * cos(theta2) * sin(theta2) / 800.0;
  M[41] = (rt_powd_snf(phi, 4.0) * psi * (the * the) * (3.0 * sin(theta1) * sin
            (theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) *
            sin(theta1) / 20.0) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 *
            cos(theta3) * sin(theta2) / 20.0) / 2.0 - phi * (rt_powd_snf(phi,
             3.0) * psi * (the * the) * (cos(theta2) * sin(theta1) * sin(theta3)
             + cos(theta3) * sin(theta1) * sin(theta2)) * (cos(theta2) * cos
             (theta3) - sin(theta2) * sin(theta3)) / 10.0 + rt_powd_snf(phi, 3.0)
            * psi * (the * the) * (sin(theta1) * sin(theta2) * sin(theta3) - cos
             (theta2) * cos(theta3) * sin(theta1)) * (cos(theta2) * sin(theta3)
             + cos(theta3) * sin(theta2)) / 10.0)) - 9.0 * rt_powd_snf(phi, 4.0)
    * psi * (the * the) * cos(theta2) * sin(theta1) * sin(theta2) / 800.0;
  M[50] = (((((21.0 * rt_powd_snf(phi, 4.0) * rt_powd_snf(the, 4.0) / 10.0 + phi
               * the * (rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (qd_x *
    qd_x) / 10.0 + rt_powd_snf(phi, 3.0) * rt_powd_snf(the, 3.0) * (rd_x * rd_x)
                        / 10.0)) + phi * the * (rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (u_a * u_a) / 10.0 + rt_powd_snf(phi, 3.0) *
    rt_powd_snf(the, 3.0) * (v_a * v_a) / 10.0)) + phi * phi * (psi * psi) *
             rt_powd_snf(the, 4.0) * (w_a * w_a) / 2.0) + rt_powd_snf(phi, 4.0) *
            (psi * psi) * (the * the) * (x_a * x_a) / 2.0) + 9.0 * (phi * phi) *
           (psi * psi) * rt_powd_snf(the, 4.0) * (sd_x * sd_x) * (td_x * td_x) /
           800.0) + 9.0 * rt_powd_snf(phi, 4.0) * (psi * psi) * (the * the) *
    (ud_x * ud_x) * (vd_x * vd_x) / 800.0;
  M[59] = ((phi * psi * cos(theta1) * (rt_powd_snf(phi, 3.0) * psi * (the * the)
             * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
                (theta1) * sin(theta2)) * (cos(theta2) * cos(theta3) - sin
              (theta2) * sin(theta3)) / 10.0 + rt_powd_snf(phi, 3.0) * psi *
             (the * the) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2)
              * cos(theta3) * sin(theta1)) * (cos(theta2) * sin(theta3) + cos
              (theta3) * sin(theta2)) / 10.0) - psi * the * sin(theta1) * (phi *
             phi * psi * rt_powd_snf(the, 3.0) * (cos(theta1) * cos(theta2) *
              sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (cos
              (theta2) * cos(theta3) - sin(theta2) * sin(theta3)) / 10.0 + phi *
             phi * psi * rt_powd_snf(the, 3.0) * (cos(theta1) * sin(theta2) *
              sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (cos
              (theta2) * sin(theta3) + cos(theta3) * sin(theta2)) / 10.0)) + phi
           * phi * (psi * psi) * (the * the) * sin(theta1) * (3.0 * cos(theta1) *
            sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) *
            cos(theta3) / 20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0
             * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 2.0) - phi * phi *
    (psi * psi) * (the * the) * cos(theta1) * (3.0 * sin(theta1) * sin(theta2) *
    sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) *
    ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) /
      10.0) - 0.1) / 2.0;
  M[68] = ((phi * psi * cos(theta1) * (rt_powd_snf(phi, 3.0) * psi * (the * the)
             * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
                (theta1) * sin(theta2)) * (cos(theta2) * cos(theta3) - sin
              (theta2) * sin(theta3)) / 10.0 + rt_powd_snf(phi, 3.0) * psi *
             (the * the) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2)
              * cos(theta3) * sin(theta1)) * (cos(theta2) * sin(theta3) + cos
              (theta3) * sin(theta2)) / 10.0) - psi * the * sin(theta1) * (phi *
             phi * psi * rt_powd_snf(the, 3.0) * (cos(theta1) * cos(theta2) *
              sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (cos
              (theta2) * cos(theta3) - sin(theta2) * sin(theta3)) / 10.0 + phi *
             phi * psi * rt_powd_snf(the, 3.0) * (cos(theta1) * sin(theta2) *
              sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) * (cos
              (theta2) * sin(theta3) + cos(theta3) * sin(theta2)) / 10.0)) + phi
           * phi * (psi * psi) * (the * the) * sin(theta1) * (3.0 * cos(theta1) *
            sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) *
            cos(theta3) / 20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0
             * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) /
           2.0) - phi * phi * (psi * psi) * (the * the) * cos(theta1) * (3.0 *
    sin(theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos
    (theta3) * sin(theta1) / 20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 -
    3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0;
  M[77] = phi * psi * cos(theta1) * (rt_powd_snf(phi, 3.0) * psi * (the * the) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
     (theta2)) * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) / 10.0
    + rt_powd_snf(phi, 3.0) * psi * (the * the) * (sin(theta1) * sin(theta2) *
    sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) * (cos(theta2) * sin
    (theta3) + cos(theta3) * sin(theta2)) / 10.0) - psi * the * sin(theta1) *
    (phi * phi * psi * rt_powd_snf(the, 3.0) * (cos(theta1) * cos(theta2) * sin
      (theta3) + cos(theta1) * cos(theta3) * sin(theta2)) * (cos(theta2) * cos
      (theta3) - sin(theta2) * sin(theta3)) / 10.0 + phi * phi * psi *
     rt_powd_snf(the, 3.0) * (cos(theta1) * sin(theta2) * sin(theta3) - cos
      (theta1) * cos(theta2) * cos(theta3)) * (cos(theta2) * sin(theta3) + cos
      (theta3) * sin(theta2)) / 10.0);
  M[6] = -(3.0 * psi * the * cos(theta1) * ((3.0 * cos(theta2) * sin(theta3) /
             10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1)) / 2.0;
  M[15] = -(3.0 * phi * psi * sin(theta1) * ((3.0 * cos(theta2) * sin(theta3) /
              10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1)) / 2.0;
  M[24] = -(3.0 * phi * the * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) *
              sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3)
              / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin
              (theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) /
              10.0))) / 2.0;
  M[33] = (((((((((3.0 * psi * the * sin(theta1) * (phi * phi * (psi * psi) *
    (wd_x * wd_x) + psi * psi * (the * the) * (xd_x * xd_x)) / 5.0 + psi * the *
                   (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                    (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
     (theta2))) / 10.0) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) - psi * the * cos(theta1) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1)) / 10.0) + phi * phi * psi * the * (3.0 * sin(theta1) * sin(theta2)
    * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0)
                * (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) /
    10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) *
                   (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 *
                    cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 2.0) -
               psi * the * cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) *
    cos(theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos
    (theta1) * cos(theta2) * sin(theta1)) / 10.0) + phi * phi * psi * the * sin
              (theta1) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos
    (theta3) * sin(theta2) / 10.0) - 0.1) / 40.0) - psi * the * cos(theta1) *
             sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) *
              sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin(theta1) *
              sin(theta2)) / 10.0) + phi * phi * psi * the * sin(theta1) * (3.0 *
             cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) /
             20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3)
                       * sin(theta2) / 10.0) - 0.1) / 2.0) - 3.0 * (phi * phi) *
           psi * the * cos(theta2) * sin(theta1) * (cos(theta1) * (3.0 * cos
             (theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) *
             cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * (3.0 * sin(theta1)
             * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3)
             * sin(theta1) / 10.0)) / 40.0) + 3.0 * (phi * phi) * psi * the *
    sin(theta1) * sin(theta2) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 *
    cos(theta3) * sin(theta2) / 10.0) - 0.1) / 40.0;
  M[42] = ((((((phi * ((phi * psi * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
     (theta2))) / 10.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (yd_x * yd_x) + psi * psi * (the * the) * (ae_x * ae_x)) / 5.0) - phi * (phi
    * psi * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) -
    psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 10.0 + phi * psi *
    cos(theta1) * (phi * phi * (psi * psi) * (be_x * be_x) + psi * psi * (the *
    the) * (ce_x * ce_x)) / 5.0)) - phi * ((phi * psi * cos(theta1) * (phi * phi
    * (psi * psi) * (de_x * de_x) + psi * psi * (the * the) * (ee_x * ee_x)) /
    5.0 + phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1)
    * cos(theta2) * sin(theta1)) / 10.0) + phi * psi * sin(theta1) * sin(theta2)
    * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi *
       psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0)) -
              phi * phi * psi * (the * the) * (3.0 * cos(theta1) * sin(theta2) *
    sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 20.0) *
              (cos(theta1) * (3.0 * cos(theta1) * sin(theta2) * sin(theta3) /
    10.0 - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) *
               (3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos
                (theta2) * cos(theta3) * sin(theta1) / 10.0)) / 2.0) - phi * phi
             * psi * (the * the) * cos(theta1) * ((3.0 * cos(theta2) * sin
    (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 40.0) -
            phi * phi * psi * (the * the) * cos(theta1) * (3.0 * cos(theta2) *
             sin(theta3) / 20.0 + 3.0 * cos(theta3) * sin(theta2) / 20.0) *
            ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin
              (theta2) / 10.0) - 0.1) / 2.0) + 3.0 * (phi * phi) * psi * (the *
            the) * cos(theta1) * cos(theta2) * (cos(theta1) * (3.0 * cos(theta1)
             * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2)
             * cos(theta3) / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin
             (theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) *
             sin(theta1) / 10.0)) / 40.0) - 3.0 * (phi * phi) * psi * (the * the)
    * cos(theta1) * sin(theta2) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 + 3.0
    * cos(theta3) * sin(theta2) / 10.0) - 0.1) / 40.0;
  M[51] = ((phi * phi * (psi * psi) * (the * the) * sin(theta1) * (3.0 * cos
             (theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) *
             cos(theta2) * cos(theta3) / 20.0) * ((3.0 * cos(theta2) * sin
              (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) /
            2.0 - phi * the * (phi * the * sin(theta2) * (phi * phi * (psi * psi)
              * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the)
              * cos(theta1) * cos(theta2) * sin(theta1)) / 10.0 - phi * the *
             cos(theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) *
              sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin(theta1) *
              sin(theta2)) / 10.0)) - phi * the * (phi * the * (cos(theta2) *
             cos(theta3) - sin(theta2) * sin(theta3)) * (psi * psi * (the * the)
             * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos
              (theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) *
             cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3)
              * sin(theta1) * sin(theta2))) / 10.0 + phi * the * (cos(theta2) *
             sin(theta3) + cos(theta3) * sin(theta2)) * (psi * psi * (the * the)
             * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos
              (theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) *
             cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2)
              * cos(theta3) * sin(theta1))) / 10.0)) - phi * phi * (psi * psi) *
    (the * the) * cos(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin(theta3) /
    20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0) * ((3.0 * cos
    (theta2) * sin(theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) -
    0.1) / 2.0;
  M[60] = (((((((3.0 * (phi * phi) * (the * the) * (y_a * y_a) / 2.0 + 3.0 *
                 (psi * psi) * (the * the) * (fe_x * fe_x) * (ab_a * ab_a) / 2.0)
                + 3.0 * (phi * phi) * (psi * psi) * (ge_x * ge_x) * (bb_a * bb_a)
                / 2.0) + psi * the * sin(theta1) * ((psi * the * sin(theta1) *
    (phi * phi * (psi * psi) * (he_x * he_x) + psi * psi * (the * the) * (ie_x *
    ie_x)) / 5.0 + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos
    (theta1) * cos(theta3) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
     (theta2))) / 10.0) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0)) + phi * psi * cos(theta1) * (phi * psi * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 10.0 + phi * psi * cos(theta1) * (phi *
    phi * (psi * psi) * (je_x * je_x) + psi * psi * (the * the) * (ke_x * ke_x))
    / 5.0)) - phi * psi * cos(theta1) * ((phi * psi * (cos(theta2) * sin(theta1)
    * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the
    * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1)
    * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 10.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (le_x * le_x) + psi * psi * (the * the) * (me_x * me_x)) / 5.0)) + psi * the
            * sin(theta1) * (psi * the * sin(theta1) * (phi * phi * (psi * psi) *
              (ne_x * ne_x) + psi * psi * (the * the) * (oe_x * oe_x)) / 5.0 -
             psi * the * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
              sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1))
             / 10.0)) + phi * psi * cos(theta1) * ((phi * psi * cos(theta1) *
             (phi * phi * (psi * psi) * (pe_x * pe_x) + psi * psi * (the * the) *
              (qe_x * qe_x)) / 5.0 + phi * psi * cos(theta2) * sin(theta1) *
             (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1)
              - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
             / 10.0) + phi * psi * sin(theta1) * sin(theta2) * (phi * phi * (psi
              * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
             (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0)) -
    psi * the * sin(theta1) * ((psi * the * cos(theta1) * cos(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 10.0 - psi * the *
    sin(theta1) * (phi * phi * (psi * psi) * (re_x * re_x) + psi * psi * (the *
    the) * (se_x * se_x)) / 5.0) + psi * the * cos(theta1) * sin(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0);
  M[69] = (((((((3.0 * (phi * phi) * (the * the) * (cos(theta1) * (3.0 * cos
    (theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2)
    * cos(theta3) / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin
    (theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) *
                 (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 + 3.0 *
    cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta1) * cos
    (theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos(theta2) * sin
    (theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0) -
    3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 2.0 + psi * the *
                 sin(theta1) * ((psi * the * sin(theta1) * (phi * phi * (psi *
    psi) * (te_x * te_x) + psi * psi * (the * the) * (ue_x * ue_x)) / 5.0 + psi *
    the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) *
           sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) *
    cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
    phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 10.0) + psi * the * (cos(theta1)
    * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi)
     * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) *
                      cos(theta3) * sin(theta1))) / 10.0)) + phi * psi * cos
                (theta1) * (phi * psi * sin(theta1) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1)) / 10.0 + phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (ve_x * ve_x) + psi * psi * (the * the) * (we_x * we_x)) / 5.0)) - phi * psi
               * cos(theta1) * ((phi * psi * (cos(theta2) * sin(theta1) * sin
    (theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 10.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (xe_x * xe_x) + psi * psi * (the * the) * (ye_x * ye_x)) / 5.0)) + psi * the
              * sin(theta1) * (psi * the * sin(theta1) * (phi * phi * (psi * psi)
    * (af_x * af_x) + psi * psi * (the * the) * (bf_x * bf_x)) / 5.0 - psi * the
    * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi *
                     psi * (the * the) * cos(theta1) * sin(theta1)) / 10.0)) +
             phi * psi * cos(theta1) * ((phi * psi * cos(theta1) * (phi * phi *
    (psi * psi) * (cf_x * cf_x) + psi * psi * (the * the) * (df_x * df_x)) / 5.0
    + phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1)
    * cos(theta2) * sin(theta1)) / 10.0) + phi * psi * sin(theta1) * sin(theta2)
              * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin
                 (theta2) - psi * psi * (the * the) * cos(theta1) * sin(theta1) *
                 sin(theta2)) / 10.0)) - psi * the * sin(theta1) * ((psi * the *
              cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1)
    * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos
    (theta2) * sin(theta1)) / 10.0 - psi * the * sin(theta1) * (phi * phi * (psi
    * psi) * (ef_x * ef_x) + psi * psi * (the * the) * (ff_x * ff_x)) / 5.0) +
             psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) *
              cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) *
              cos(theta1) * sin(theta1) * sin(theta2)) / 10.0)) + 3.0 * (psi *
            psi) * (the * the) * (gf_x * gf_x) * ((3.0 * cos(theta2) * sin
             (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) *
           ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0)
            + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0) + 3.0 * (phi * phi)
    * (psi * psi) * (hf_x * hf_x) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 +
    3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) * ((3.0 * cos(theta2) * sin
    (theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2)
    / 10.0) / 2.0;
  M[78] = ((((psi * the * sin(theta1) * ((psi * the * sin(theta1) * (phi * phi *
    (psi * psi) * (if_x * if_x) + psi * psi * (the * the) * (jf_x * jf_x)) / 5.0
    + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                   (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
     (theta2))) / 10.0) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) + phi * psi * cos(theta1) * (phi * psi * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 10.0 + phi * psi * cos(theta1) * (phi *
    phi * (psi * psi) * (kf_x * kf_x) + psi * psi * (the * the) * (lf_x * lf_x))
    / 5.0)) - phi * psi * cos(theta1) * ((phi * psi * (cos(theta2) * sin(theta1)
    * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the
    * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1)
    * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 10.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (mf_x * mf_x) + psi * psi * (the * the) * (nf_x * nf_x)) / 5.0)) + psi * the
            * sin(theta1) * (psi * the * sin(theta1) * (phi * phi * (psi * psi) *
              (of_x * of_x) + psi * psi * (the * the) * (pf_x * pf_x)) / 5.0 -
             psi * the * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
              sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1))
             / 10.0)) + phi * psi * cos(theta1) * ((phi * psi * cos(theta1) *
             (phi * phi * (psi * psi) * (qf_x * qf_x) + psi * psi * (the * the) *
              (rf_x * rf_x)) / 5.0 + phi * psi * cos(theta2) * sin(theta1) *
             (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1)
              - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
             / 10.0) + phi * psi * sin(theta1) * sin(theta2) * (phi * phi * (psi
              * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
             (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0)) -
    psi * the * sin(theta1) * ((psi * the * cos(theta1) * cos(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 10.0 - psi * the *
    sin(theta1) * (phi * phi * (psi * psi) * (sf_x * sf_x) + psi * psi * (the *
    the) * (tf_x * tf_x)) / 5.0) + psi * the * cos(theta1) * sin(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0);
  M[7] = -(3.0 * psi * the * cos(theta1) * ((3.0 * cos(theta2) * sin(theta3) /
             10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) /
            10.0)) / 2.0;
  M[16] = -(3.0 * phi * psi * sin(theta1) * ((3.0 * cos(theta2) * sin(theta3) /
              10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2)
             / 10.0)) / 2.0;
  M[25] = -(3.0 * phi * the * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) /
    10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
              (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0
    * cos(theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin
    (theta3) / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0))) /
    2.0;
  M[34] = (((((((((3.0 * psi * the * sin(theta1) * (phi * phi * (psi * psi) *
    (uf_x * uf_x) + psi * psi * (the * the) * (vf_x * vf_x)) / 5.0 + psi * the *
                   (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                    (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
     (theta2))) / 10.0) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) - psi * the * cos(theta1) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1)) / 10.0) + phi * phi * psi * the * (3.0 * sin(theta1) * sin(theta2)
    * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 20.0)
                * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 + 3.0 *
    cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta1) * cos
    (theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos(theta2) * sin
    (theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0) -
    3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 2.0) - psi * the *
               cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1)
    * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos
    (theta2) * sin(theta1)) / 10.0) - psi * the * cos(theta1) * sin(theta2) *
              (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2)
               - psi * psi * (the * the) * cos(theta1) * sin(theta1) * sin
               (theta2)) / 10.0) + phi * phi * psi * the * sin(theta1) * ((3.0 *
    cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos
              (theta3) * sin(theta2) / 10.0) / 40.0) + phi * phi * psi * the *
            sin(theta1) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos
             (theta3) * sin(theta2) / 20.0) * ((3.0 * cos(theta2) * sin(theta3) /
              10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2)
             / 10.0) / 2.0) - 3.0 * (phi * phi) * psi * the * cos(theta2) * sin
           (theta1) * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 +
              3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos
             (theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 *
              cos(theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2)
              * sin(theta3) / 10.0) - 3.0 * cos(theta2) * cos(theta3) * sin
             (theta1) / 10.0)) / 40.0) + 3.0 * (phi * phi) * psi * the * sin
    (theta1) * sin(theta2) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 *
    sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 40.0;
  M[43] = ((((((phi * ((phi * psi * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
     (theta2))) / 10.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (wf_x * wf_x) + psi * psi * (the * the) * (xf_x * xf_x)) / 5.0) - phi * (phi
    * psi * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) -
    psi * psi * (the * the) * cos(theta1) * sin(theta1)) / 10.0 + phi * psi *
    cos(theta1) * (phi * phi * (psi * psi) * (yf_x * yf_x) + psi * psi * (the *
    the) * (ag_x * ag_x)) / 5.0)) - phi * ((phi * psi * cos(theta1) * (phi * phi
    * (psi * psi) * (bg_x * bg_x) + psi * psi * (the * the) * (cg_x * cg_x)) /
    5.0 + phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1)
    * cos(theta2) * sin(theta1)) / 10.0) + phi * psi * sin(theta1) * sin(theta2)
    * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi *
       psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0)) -
              phi * phi * psi * (the * the) * cos(theta1) * ((3.0 * cos(theta2) *
    sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin
    (theta2) / 10.0) / 40.0) - phi * phi * psi * (the * the) * (3.0 * cos(theta1)
              * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) * cos
              (theta2) * cos(theta3) / 20.0) * (cos(theta1) * ((3.0 * cos(theta1)
    * cos(theta2) / 10.0 + 3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0)
    - 3.0 * cos(theta1) * cos(theta2) * cos(theta3) / 10.0) + sin(theta1) *
              ((3.0 * cos(theta2) * sin(theta1) / 10.0 + 3.0 * sin(theta1) * sin
                (theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta2) * cos(theta3)
               * sin(theta1) / 10.0)) / 2.0) - 3.0 * (phi * phi) * psi * (the *
             the) * cos(theta1) * sin(theta2) * ((3.0 * cos(theta2) * sin(theta3)
              / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin
             (theta2) / 10.0) / 40.0) - phi * phi * psi * (the * the) * cos
           (theta1) * (3.0 * cos(theta2) * sin(theta3) / 20.0 + 3.0 * cos(theta3)
                       * sin(theta2) / 20.0) * ((3.0 * cos(theta2) * sin(theta3)
             / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2)
            / 10.0) / 2.0) + 3.0 * (phi * phi) * psi * (the * the) * cos(theta1)
    * cos(theta2) * (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 +
    3.0 * cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta1) *
    cos(theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos(theta2) * sin
    (theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0) -
    3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 40.0;
  M[52] = ((phi * phi * (psi * psi) * (the * the) * sin(theta1) * (3.0 * cos
             (theta1) * sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta1) *
             cos(theta2) * cos(theta3) / 20.0) * ((3.0 * cos(theta2) * sin
              (theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) *
             sin(theta2) / 10.0) / 2.0 - phi * the * (phi * the * sin(theta2) *
             (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1)
              - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
             / 10.0 - phi * the * cos(theta2) * (phi * phi * (psi * psi) * cos
              (theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) *
              cos(theta1) * sin(theta1) * sin(theta2)) / 10.0)) - phi * the *
           (phi * the * (cos(theta2) * cos(theta3) - sin(theta2) * sin(theta3)) *
            (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) *
              sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi
             * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) * sin
              (theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 10.0 + phi *
            the * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2)) * (psi
             * psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) *
              sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi
             * (psi * psi) * cos(theta1) * (sin(theta1) * sin(theta2) * sin
              (theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 10.0)) -
    phi * phi * (psi * psi) * (the * the) * cos(theta1) * (3.0 * sin(theta1) *
    sin(theta2) * sin(theta3) / 20.0 - 3.0 * cos(theta2) * cos(theta3) * sin
    (theta1) / 20.0) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin
    (theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0;
  M[61] = (((((((3.0 * (phi * phi) * (the * the) * (cos(theta1) * (3.0 * cos
    (theta1) * sin(theta2) * sin(theta3) / 10.0 - 3.0 * cos(theta1) * cos(theta2)
    * cos(theta3) / 10.0) + sin(theta1) * (3.0 * sin(theta1) * sin(theta2) * sin
    (theta3) / 10.0 - 3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) *
                 (cos(theta1) * ((3.0 * cos(theta1) * cos(theta2) / 10.0 + 3.0 *
    cos(theta1) * sin(theta2) * sin(theta3) / 10.0) - 3.0 * cos(theta1) * cos
    (theta2) * cos(theta3) / 10.0) + sin(theta1) * ((3.0 * cos(theta2) * sin
    (theta1) / 10.0 + 3.0 * sin(theta1) * sin(theta2) * sin(theta3) / 10.0) -
    3.0 * cos(theta2) * cos(theta3) * sin(theta1) / 10.0)) / 2.0 + psi * the *
                 sin(theta1) * ((psi * the * sin(theta1) * (phi * phi * (psi *
    psi) * (dg_x * dg_x) + psi * psi * (the * the) * (eg_x * eg_x)) / 5.0 + psi *
    the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) *
           sin(theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) *
    cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
    phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) * sin(theta3) +
    cos(theta3) * sin(theta1) * sin(theta2))) / 10.0) + psi * the * (cos(theta1)
    * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) *
    (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin
    (theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi)
     * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) *
                      cos(theta3) * sin(theta1))) / 10.0)) + phi * psi * cos
                (theta1) * (phi * psi * sin(theta1) * (phi * phi * (psi * psi) *
    cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1)) / 10.0 + phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (fg_x * fg_x) + psi * psi * (the * the) * (gg_x * gg_x)) / 5.0)) - phi * psi
               * cos(theta1) * ((phi * psi * (cos(theta2) * sin(theta1) * sin
    (theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the *
    the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) *
    cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 10.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (hg_x * hg_x) + psi * psi * (the * the) * (ig_x * ig_x)) / 5.0)) + psi * the
              * sin(theta1) * (psi * the * sin(theta1) * (phi * phi * (psi * psi)
    * (jg_x * jg_x) + psi * psi * (the * the) * (kg_x * kg_x)) / 5.0 - psi * the
    * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi *
                     psi * (the * the) * cos(theta1) * sin(theta1)) / 10.0)) +
             phi * psi * cos(theta1) * ((phi * psi * cos(theta1) * (phi * phi *
    (psi * psi) * (lg_x * lg_x) + psi * psi * (the * the) * (mg_x * mg_x)) / 5.0
    + phi * psi * cos(theta2) * sin(theta1) * (phi * phi * (psi * psi) * cos
    (theta1) * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1)
    * cos(theta2) * sin(theta1)) / 10.0) + phi * psi * sin(theta1) * sin(theta2)
              * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin
                 (theta2) - psi * psi * (the * the) * cos(theta1) * sin(theta1) *
                 sin(theta2)) / 10.0)) - psi * the * sin(theta1) * ((psi * the *
              cos(theta1) * cos(theta2) * (phi * phi * (psi * psi) * cos(theta1)
    * cos(theta2) * sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos
    (theta2) * sin(theta1)) / 10.0 - psi * the * sin(theta1) * (phi * phi * (psi
    * psi) * (ng_x * ng_x) + psi * psi * (the * the) * (og_x * og_x)) / 5.0) +
             psi * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) *
              cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the * the) *
              cos(theta1) * sin(theta1) * sin(theta2)) / 10.0)) + 3.0 * (psi *
            psi) * (the * the) * (pg_x * pg_x) * ((3.0 * cos(theta2) * sin
             (theta3) / 10.0 + 3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) *
           ((3.0 * cos(theta2) * sin(theta3) / 10.0 - 3.0 * sin(theta2) / 10.0)
            + 3.0 * cos(theta3) * sin(theta2) / 10.0) / 2.0) + 3.0 * (phi * phi)
    * (psi * psi) * (qg_x * qg_x) * ((3.0 * cos(theta2) * sin(theta3) / 10.0 +
    3.0 * cos(theta3) * sin(theta2) / 10.0) - 0.1) * ((3.0 * cos(theta2) * sin
    (theta3) / 10.0 - 3.0 * sin(theta2) / 10.0) + 3.0 * cos(theta3) * sin(theta2)
    / 10.0) / 2.0;
  M[70] = (((((((3.0 * (phi * phi) * (the * the) * (cb_a * cb_a) / 2.0 + psi *
                 the * sin(theta1) * ((psi * the * sin(theta1) * (phi * phi *
    (psi * psi) * (rg_x * rg_x) + psi * psi * (the * the) * (sg_x * sg_x)) / 5.0
    + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                   (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
     (theta2))) / 10.0) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0)) + phi * psi * cos(theta1) * (phi * psi * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 10.0 + phi * psi * cos(theta1) * (phi *
    phi * (psi * psi) * (tg_x * tg_x) + psi * psi * (the * the) * (ug_x * ug_x))
    / 5.0)) + 3.0 * (psi * psi) * (the * the) * (vg_x * vg_x) * (db_a * db_a) /
               2.0) - phi * psi * cos(theta1) * ((phi * psi * (cos(theta2) * sin
    (theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi *
    psi * (the * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) +
    cos(theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos
    (theta1) * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
                (theta1) * sin(theta2))) / 10.0 + phi * psi * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1)) * (psi *
    psi * (the * the) * sin(theta1) * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos
    (theta1) * (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos
                (theta3) * sin(theta1))) / 10.0) - phi * psi * cos(theta1) *
    (phi * phi * (psi * psi) * (wg_x * wg_x) + psi * psi * (the * the) * (xg_x *
    xg_x)) / 5.0)) + 3.0 * (phi * phi) * (psi * psi) * (yg_x * yg_x) * (eb_a *
              eb_a) / 2.0) + psi * the * sin(theta1) * (psi * the * sin(theta1) *
             (phi * phi * (psi * psi) * (ah_x * ah_x) + psi * psi * (the * the) *
              (bh_x * bh_x)) / 5.0 - psi * the * cos(theta1) * (phi * phi * (psi
    * psi) * cos(theta1) * sin(theta1) - psi * psi * (the * the) * cos(theta1) *
              sin(theta1)) / 10.0)) + phi * psi * cos(theta1) * ((phi * psi *
             cos(theta1) * (phi * phi * (psi * psi) * (ch_x * ch_x) + psi * psi *
              (the * the) * (dh_x * dh_x)) / 5.0 + phi * psi * cos(theta2) * sin
             (theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) *
              sin(theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2) *
              sin(theta1)) / 10.0) + phi * psi * sin(theta1) * sin(theta2) *
            (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) -
             psi * psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) /
            10.0)) - psi * the * sin(theta1) * ((psi * the * cos(theta1) * cos
    (theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1)
                - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin
                (theta1)) / 10.0 - psi * the * sin(theta1) * (phi * phi * (psi *
    psi) * (eh_x * eh_x) + psi * psi * (the * the) * (fh_x * fh_x)) / 5.0) + psi
    * the * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) *
    sin(theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin
    (theta1) * sin(theta2)) / 10.0);
  M[79] = ((((psi * the * sin(theta1) * ((psi * the * sin(theta1) * (phi * phi *
    (psi * psi) * (gh_x * gh_x) + psi * psi * (the * the) * (hh_x * hh_x)) / 5.0
    + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                   (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
     (theta2))) / 10.0) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) + phi * psi * cos(theta1) * (phi * psi * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 10.0 + phi * psi * cos(theta1) * (phi *
    phi * (psi * psi) * (ih_x * ih_x) + psi * psi * (the * the) * (jh_x * jh_x))
    / 5.0)) - phi * psi * cos(theta1) * ((phi * psi * (cos(theta2) * sin(theta1)
    * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the
    * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1)
    * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 10.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (kh_x * kh_x) + psi * psi * (the * the) * (lh_x * lh_x)) / 5.0)) + psi * the
            * sin(theta1) * (psi * the * sin(theta1) * (phi * phi * (psi * psi) *
              (mh_x * mh_x) + psi * psi * (the * the) * (nh_x * nh_x)) / 5.0 -
             psi * the * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
              sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1))
             / 10.0)) + phi * psi * cos(theta1) * ((phi * psi * cos(theta1) *
             (phi * phi * (psi * psi) * (oh_x * oh_x) + psi * psi * (the * the) *
              (ph_x * ph_x)) / 5.0 + phi * psi * cos(theta2) * sin(theta1) *
             (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1)
              - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
             / 10.0) + phi * psi * sin(theta1) * sin(theta2) * (phi * phi * (psi
              * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
             (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0)) -
    psi * the * sin(theta1) * ((psi * the * cos(theta1) * cos(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 10.0 - psi * the *
    sin(theta1) * (phi * phi * (psi * psi) * (qh_x * qh_x) + psi * psi * (the *
    the) * (rh_x * rh_x)) / 5.0) + psi * the * cos(theta1) * sin(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0);
  M[8] = 0.0;
  M[17] = 0.0;
  M[26] = 0.0;
  M[35] = ((((3.0 * psi * the * sin(theta1) * (phi * phi * (psi * psi) * (sh_x *
    sh_x) + psi * psi * (the * the) * (th_x * th_x)) / 5.0 + psi * the * (cos
    (theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin
    (theta2)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
                 phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1) *
    sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 10.0) + psi * the *
             (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2)
              * cos(theta3)) * (psi * psi * (the * the) * sin(theta1) * (cos
    (theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos
    (theta3)) - phi * phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 10.0) -
            psi * the * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
             sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1)) /
            10.0) - psi * the * cos(theta1) * cos(theta2) * (phi * phi * (psi *
             psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi * (the *
             the) * cos(theta1) * cos(theta2) * sin(theta1)) / 10.0) - psi * the
    * cos(theta1) * sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * sin
    (theta1) * sin(theta2) - psi * psi * (the * the) * cos(theta1) * sin(theta1)
    * sin(theta2)) / 10.0;
  M[44] = (phi * ((phi * psi * (cos(theta2) * sin(theta1) * sin(theta3) + cos
              (theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the * the) *
              sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos
    (theta1) * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1)
              * (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin
                 (theta1) * sin(theta2))) / 10.0 + phi * psi * (sin(theta1) *
              sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))
                   * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * sin
    (theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi *
                      phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin
    (theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin(theta1))) / 10.0) -
                  phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (uh_x *
              uh_x) + psi * psi * (the * the) * (vh_x * vh_x)) / 5.0) - phi *
           (phi * psi * sin(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
             sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1)) /
            10.0 + phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (wh_x *
              wh_x) + psi * psi * (the * the) * (xh_x * xh_x)) / 5.0)) - phi *
    ((phi * psi * cos(theta1) * (phi * phi * (psi * psi) * (yh_x * yh_x) + psi *
       psi * (the * the) * (ai_x * ai_x)) / 5.0 + phi * psi * cos(theta2) * sin
      (theta1) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin
                  (theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
                  * sin(theta1)) / 10.0) + phi * psi * sin(theta1) * sin(theta2)
     * (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi *
        psi * (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0);
  M[53] = -phi * the * (phi * the * (cos(theta2) * cos(theta3) - sin(theta2) *
    sin(theta3)) * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) * cos
    (theta2) * sin(theta3) + cos(theta1) * cos(theta3) * sin(theta2)) - phi *
                    phi * (psi * psi) * cos(theta1) * (cos(theta2) * sin(theta1)
    * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2))) / 10.0 + phi * the
                        * (cos(theta2) * sin(theta3) + cos(theta3) * sin(theta2))
                        * (psi * psi * (the * the) * sin(theta1) * (cos(theta1) *
    sin(theta2) * sin(theta3) - cos(theta1) * cos(theta2) * cos(theta3)) - phi *
    phi * (psi * psi) * cos(theta1) * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1))) / 10.0) - phi * the * (phi * the *
    sin(theta2) * (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin
                   (theta1) - psi * psi * (the * the) * cos(theta1) * cos(theta2)
                   * sin(theta1)) / 10.0 - phi * the * cos(theta2) * (phi * phi *
    (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0);
  M[62] = ((((psi * the * sin(theta1) * ((psi * the * sin(theta1) * (phi * phi *
    (psi * psi) * (bi_x * bi_x) + psi * psi * (the * the) * (ci_x * ci_x)) / 5.0
    + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                   (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
     (theta2))) / 10.0) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) + phi * psi * cos(theta1) * (phi * psi * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 10.0 + phi * psi * cos(theta1) * (phi *
    phi * (psi * psi) * (di_x * di_x) + psi * psi * (the * the) * (ei_x * ei_x))
    / 5.0)) - phi * psi * cos(theta1) * ((phi * psi * (cos(theta2) * sin(theta1)
    * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the
    * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1)
    * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 10.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (fi_x * fi_x) + psi * psi * (the * the) * (gi_x * gi_x)) / 5.0)) + psi * the
            * sin(theta1) * (psi * the * sin(theta1) * (phi * phi * (psi * psi) *
              (hi_x * hi_x) + psi * psi * (the * the) * (ii_x * ii_x)) / 5.0 -
             psi * the * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
              sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1))
             / 10.0)) + phi * psi * cos(theta1) * ((phi * psi * cos(theta1) *
             (phi * phi * (psi * psi) * (ji_x * ji_x) + psi * psi * (the * the) *
              (ki_x * ki_x)) / 5.0 + phi * psi * cos(theta2) * sin(theta1) *
             (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1)
              - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
             / 10.0) + phi * psi * sin(theta1) * sin(theta2) * (phi * phi * (psi
              * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
             (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0)) -
    psi * the * sin(theta1) * ((psi * the * cos(theta1) * cos(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 10.0 - psi * the *
    sin(theta1) * (phi * phi * (psi * psi) * (li_x * li_x) + psi * psi * (the *
    the) * (mi_x * mi_x)) / 5.0) + psi * the * cos(theta1) * sin(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0);
  M[71] = ((((psi * the * sin(theta1) * ((psi * the * sin(theta1) * (phi * phi *
    (psi * psi) * (ni_x * ni_x) + psi * psi * (the * the) * (oi_x * oi_x)) / 5.0
    + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                   (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
     (theta2))) / 10.0) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) + phi * psi * cos(theta1) * (phi * psi * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 10.0 + phi * psi * cos(theta1) * (phi *
    phi * (psi * psi) * (pi_x * pi_x) + psi * psi * (the * the) * (qi_x * qi_x))
    / 5.0)) - phi * psi * cos(theta1) * ((phi * psi * (cos(theta2) * sin(theta1)
    * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the
    * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1)
    * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 10.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (ri_x * ri_x) + psi * psi * (the * the) * (si_x * si_x)) / 5.0)) + psi * the
            * sin(theta1) * (psi * the * sin(theta1) * (phi * phi * (psi * psi) *
              (ti_x * ti_x) + psi * psi * (the * the) * (ui_x * ui_x)) / 5.0 -
             psi * the * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
              sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1))
             / 10.0)) + phi * psi * cos(theta1) * ((phi * psi * cos(theta1) *
             (phi * phi * (psi * psi) * (vi_x * vi_x) + psi * psi * (the * the) *
              (wi_x * wi_x)) / 5.0 + phi * psi * cos(theta2) * sin(theta1) *
             (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1)
              - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
             / 10.0) + phi * psi * sin(theta1) * sin(theta2) * (phi * phi * (psi
              * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
             (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0)) -
    psi * the * sin(theta1) * ((psi * the * cos(theta1) * cos(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 10.0 - psi * the *
    sin(theta1) * (phi * phi * (psi * psi) * (xi_x * xi_x) + psi * psi * (the *
    the) * (yi_x * yi_x)) / 5.0) + psi * the * cos(theta1) * sin(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0);
  M[80] = ((((psi * the * sin(theta1) * ((psi * the * sin(theta1) * (phi * phi *
    (psi * psi) * (aj_x * aj_x) + psi * psi * (the * the) * (bj_x * bj_x)) / 5.0
    + psi * the * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                   (theta3) * sin(theta2)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1) * cos
                (theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) *
    (cos(theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
     (theta2))) / 10.0) + psi * the * (cos(theta1) * sin(theta2) * sin(theta3) -
    cos(theta1) * cos(theta2) * cos(theta3)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) + phi * psi * cos(theta1) * (phi * psi * sin(theta1) *
    (phi * phi * (psi * psi) * cos(theta1) * sin(theta1) - psi * psi * (the *
    the) * cos(theta1) * sin(theta1)) / 10.0 + phi * psi * cos(theta1) * (phi *
    phi * (psi * psi) * (cj_x * cj_x) + psi * psi * (the * the) * (dj_x * dj_x))
    / 5.0)) - phi * psi * cos(theta1) * ((phi * psi * (cos(theta2) * sin(theta1)
    * sin(theta3) + cos(theta3) * sin(theta1) * sin(theta2)) * (psi * psi * (the
    * the) * sin(theta1) * (cos(theta1) * cos(theta2) * sin(theta3) + cos(theta1)
    * cos(theta3) * sin(theta2)) - phi * phi * (psi * psi) * cos(theta1) * (cos
    (theta2) * sin(theta1) * sin(theta3) + cos(theta3) * sin(theta1) * sin
    (theta2))) / 10.0 + phi * psi * (sin(theta1) * sin(theta2) * sin(theta3) -
    cos(theta2) * cos(theta3) * sin(theta1)) * (psi * psi * (the * the) * sin
    (theta1) * (cos(theta1) * sin(theta2) * sin(theta3) - cos(theta1) * cos
                (theta2) * cos(theta3)) - phi * phi * (psi * psi) * cos(theta1) *
    (sin(theta1) * sin(theta2) * sin(theta3) - cos(theta2) * cos(theta3) * sin
     (theta1))) / 10.0) - phi * psi * cos(theta1) * (phi * phi * (psi * psi) *
    (ej_x * ej_x) + psi * psi * (the * the) * (fj_x * fj_x)) / 5.0)) + psi * the
            * sin(theta1) * (psi * the * sin(theta1) * (phi * phi * (psi * psi) *
              (gj_x * gj_x) + psi * psi * (the * the) * (hj_x * hj_x)) / 5.0 -
             psi * the * cos(theta1) * (phi * phi * (psi * psi) * cos(theta1) *
              sin(theta1) - psi * psi * (the * the) * cos(theta1) * sin(theta1))
             / 10.0)) + phi * psi * cos(theta1) * ((phi * psi * cos(theta1) *
             (phi * phi * (psi * psi) * (ij_x * ij_x) + psi * psi * (the * the) *
              (jj_x * jj_x)) / 5.0 + phi * psi * cos(theta2) * sin(theta1) *
             (phi * phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1)
              - psi * psi * (the * the) * cos(theta1) * cos(theta2) * sin(theta1))
             / 10.0) + phi * psi * sin(theta1) * sin(theta2) * (phi * phi * (psi
              * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
             (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0)) -
    psi * the * sin(theta1) * ((psi * the * cos(theta1) * cos(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * cos(theta2) * sin(theta1) - psi * psi *
    (the * the) * cos(theta1) * cos(theta2) * sin(theta1)) / 10.0 - psi * the *
    sin(theta1) * (phi * phi * (psi * psi) * (kj_x * kj_x) + psi * psi * (the *
    the) * (lj_x * lj_x)) / 5.0) + psi * the * cos(theta1) * sin(theta2) * (phi *
    phi * (psi * psi) * cos(theta1) * sin(theta1) * sin(theta2) - psi * psi *
    (the * the) * cos(theta1) * sin(theta1) * sin(theta2)) / 10.0);
}

/*
 * File trailer for Inertia_Matrix.c
 *
 * [EOF]
 */
