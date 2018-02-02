/* Include files */

#include "HexrotorDynamicModel_sfun.h"
#include "c48_HexrotorDynamicModel.h"
#include <math.h>
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "HexrotorDynamicModel_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c48_debug_family_names[20] = { "sig", "G_dot", "alpha_dot1",
  "pGT", "test", "alpha_dot2", "nargin", "nargout", "K1", "G", "z1", "z2",
  "omega_tilde", "eta_tilde", "eps_tilde", "K3", "Xsi", "alpha_dot", "eta_dot",
  "eps_dot" };

static const char * c48_b_debug_family_names[4] = { "nargin", "nargout", "v",
  "M" };

/* Function Declarations */
static void initialize_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance);
static void initialize_params_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance);
static void enable_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance);
static void disable_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance);
static void c48_update_debugger_state_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance);
static void set_sim_state_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance, const mxArray
   *c48_st);
static void finalize_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance);
static void sf_gateway_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance);
static void mdl_start_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance);
static void initSimStructsc48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c48_machineNumber, uint32_T
  c48_chartNumber, uint32_T c48_instanceNumber);
static const mxArray *c48_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData);
static void c48_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_b_eps_dot, const char_T *c48_identifier,
  real_T c48_y[3]);
static void c48_b_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_u, const emlrtMsgIdentifier *c48_parentId,
  real_T c48_y[3]);
static void c48_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c48_mxArrayInData, const char_T *c48_varName, void *c48_outData);
static const mxArray *c48_b_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData);
static real_T c48_c_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_b_eta_dot, const char_T *c48_identifier);
static real_T c48_d_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_u, const emlrtMsgIdentifier *c48_parentId);
static void c48_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c48_mxArrayInData, const char_T *c48_varName, void *c48_outData);
static const mxArray *c48_c_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData);
static const mxArray *c48_d_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData);
static const mxArray *c48_e_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData);
static const mxArray *c48_f_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData);
static void c48_e_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_u, const emlrtMsgIdentifier *c48_parentId,
  real_T c48_y[12]);
static void c48_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c48_mxArrayInData, const char_T *c48_varName, void *c48_outData);
static void c48_f_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_u, const emlrtMsgIdentifier *c48_parentId,
  real_T c48_y[9]);
static void c48_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c48_mxArrayInData, const char_T *c48_varName, void *c48_outData);
static void c48_pinv(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                     real_T c48_A[12], real_T c48_X[12]);
static void c48_svd(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                    real_T c48_A[12], real_T c48_U[12], real_T c48_s[3], real_T
                    c48_V[9]);
static real_T c48_xnrm2(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_x[12], int32_T c48_ix0);
static real_T c48_sqrt(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x);
static void c48_error(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance);
static void c48_check_forloop_overflow_error
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance, boolean_T
   c48_overflow);
static real_T c48_xdotc(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_x[12], int32_T c48_ix0, real_T c48_y[12], int32_T
  c48_iy0);
static void c48_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                      int32_T c48_n, real_T c48_a, int32_T c48_ix0, real_T
                      c48_y[12], int32_T c48_iy0, real_T c48_b_y[12]);
static real_T c48_b_xnrm2(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, int32_T c48_n, real_T c48_x[3], int32_T c48_ix0);
static void c48_b_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, real_T c48_x[12], int32_T c48_ix0, real_T c48_y[4],
  int32_T c48_iy0, real_T c48_b_y[4]);
static void c48_c_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, real_T c48_x[4], int32_T c48_ix0, real_T c48_y[12],
  int32_T c48_iy0, real_T c48_b_y[12]);
static real_T c48_b_xdotc(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, int32_T c48_n, real_T c48_x[9], int32_T c48_ix0, real_T c48_y
  [9], int32_T c48_iy0);
static void c48_d_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, int32_T c48_ix0, real_T c48_y[9], int32_T c48_iy0,
  real_T c48_b_y[9]);
static void c48_xscal(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                      real_T c48_a, real_T c48_x[12], int32_T c48_ix0, real_T
                      c48_b_x[12]);
static void c48_b_xscal(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_a, real_T c48_x[9], int32_T c48_ix0, real_T c48_b_x[9]);
static void c48_b_error(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance);
static void c48_xrotg(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                      real_T c48_a, real_T c48_b, real_T *c48_b_a, real_T
                      *c48_b_b, real_T *c48_c, real_T *c48_s);
static void c48_xrot(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                     real_T c48_x[9], int32_T c48_ix0, int32_T c48_iy0, real_T
                     c48_c, real_T c48_s, real_T c48_b_x[9]);
static void c48_b_xrot(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x[12], int32_T c48_ix0, int32_T c48_iy0, real_T c48_c, real_T c48_s,
  real_T c48_b_x[12]);
static void c48_xswap(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                      real_T c48_x[9], int32_T c48_ix0, int32_T c48_iy0, real_T
                      c48_b_x[9]);
static void c48_b_xswap(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x[12], int32_T c48_ix0, int32_T c48_iy0, real_T c48_b_x[12]);
static const mxArray *c48_g_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData);
static int32_T c48_g_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_u, const emlrtMsgIdentifier *c48_parentId);
static void c48_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c48_mxArrayInData, const char_T *c48_varName, void *c48_outData);
static uint8_T c48_h_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_b_is_active_c48_HexrotorDynamicModel, const
  char_T *c48_identifier);
static uint8_T c48_i_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_u, const emlrtMsgIdentifier *c48_parentId);
static void c48_b_sqrt(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T *c48_x);
static void c48_e_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, int32_T c48_ix0, real_T c48_y[12], int32_T
  c48_iy0);
static void c48_f_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, real_T c48_x[12], int32_T c48_ix0, real_T c48_y[4],
  int32_T c48_iy0);
static void c48_g_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, real_T c48_x[4], int32_T c48_ix0, real_T c48_y[12],
  int32_T c48_iy0);
static void c48_h_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, int32_T c48_ix0, real_T c48_y[9], int32_T c48_iy0);
static void c48_c_xscal(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_a, real_T c48_x[12], int32_T c48_ix0);
static void c48_d_xscal(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_a, real_T c48_x[9], int32_T c48_ix0);
static void c48_b_xrotg(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T *c48_a, real_T *c48_b, real_T *c48_c, real_T *c48_s);
static void c48_c_xrot(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x[9], int32_T c48_ix0, int32_T c48_iy0, real_T c48_c, real_T c48_s);
static void c48_d_xrot(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x[12], int32_T c48_ix0, int32_T c48_iy0, real_T c48_c, real_T c48_s);
static void c48_c_xswap(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x[9], int32_T c48_ix0, int32_T c48_iy0);
static void c48_d_xswap(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x[12], int32_T c48_ix0, int32_T c48_iy0);
static void init_dsm_address_info(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc48_HexrotorDynamicModel(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c48_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c48_is_active_c48_HexrotorDynamicModel = 0U;
}

static void initialize_params_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c48_update_debugger_state_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance)
{
  const mxArray *c48_st;
  const mxArray *c48_y = NULL;
  const mxArray *c48_b_y = NULL;
  const mxArray *c48_c_y = NULL;
  real_T c48_hoistedGlobal;
  const mxArray *c48_d_y = NULL;
  uint8_T c48_b_hoistedGlobal;
  const mxArray *c48_e_y = NULL;
  c48_st = NULL;
  c48_st = NULL;
  c48_y = NULL;
  sf_mex_assign(&c48_y, sf_mex_createcellmatrix(4, 1), false);
  c48_b_y = NULL;
  sf_mex_assign(&c48_b_y, sf_mex_create("y", *chartInstance->c48_alpha_dot, 0,
    0U, 1U, 0U, 1, 3), false);
  sf_mex_setcell(c48_y, 0, c48_b_y);
  c48_c_y = NULL;
  sf_mex_assign(&c48_c_y, sf_mex_create("y", *chartInstance->c48_eps_dot, 0, 0U,
    1U, 0U, 1, 3), false);
  sf_mex_setcell(c48_y, 1, c48_c_y);
  c48_hoistedGlobal = *chartInstance->c48_eta_dot;
  c48_d_y = NULL;
  sf_mex_assign(&c48_d_y, sf_mex_create("y", &c48_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c48_y, 2, c48_d_y);
  c48_b_hoistedGlobal = chartInstance->c48_is_active_c48_HexrotorDynamicModel;
  c48_e_y = NULL;
  sf_mex_assign(&c48_e_y, sf_mex_create("y", &c48_b_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c48_y, 3, c48_e_y);
  sf_mex_assign(&c48_st, c48_y, false);
  return c48_st;
}

static void set_sim_state_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance, const mxArray
   *c48_st)
{
  const mxArray *c48_u;
  real_T c48_dv0[3];
  int32_T c48_i0;
  real_T c48_dv1[3];
  int32_T c48_i1;
  chartInstance->c48_doneDoubleBufferReInit = true;
  c48_u = sf_mex_dup(c48_st);
  c48_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c48_u, 0)),
                       "alpha_dot", c48_dv0);
  for (c48_i0 = 0; c48_i0 < 3; c48_i0++) {
    (*chartInstance->c48_alpha_dot)[c48_i0] = c48_dv0[c48_i0];
  }

  c48_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c48_u, 1)),
                       "eps_dot", c48_dv1);
  for (c48_i1 = 0; c48_i1 < 3; c48_i1++) {
    (*chartInstance->c48_eps_dot)[c48_i1] = c48_dv1[c48_i1];
  }

  *chartInstance->c48_eta_dot = c48_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c48_u, 2)), "eta_dot");
  chartInstance->c48_is_active_c48_HexrotorDynamicModel = c48_h_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c48_u, 3)),
     "is_active_c48_HexrotorDynamicModel");
  sf_mex_destroy(&c48_u);
  c48_update_debugger_state_c48_HexrotorDynamicModel(chartInstance);
  sf_mex_destroy(&c48_st);
}

static void finalize_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance)
{
  int32_T c48_i2;
  int32_T c48_i3;
  int32_T c48_i4;
  int32_T c48_i5;
  int32_T c48_i6;
  int32_T c48_i7;
  int32_T c48_i8;
  int32_T c48_i9;
  int32_T c48_i10;
  int32_T c48_i11;
  real_T c48_b_K1[9];
  int32_T c48_i12;
  real_T c48_b_G[12];
  int32_T c48_i13;
  real_T c48_b_z1[4];
  int32_T c48_i14;
  real_T c48_b_z2[3];
  real_T c48_b_eta_tilde;
  real_T c48_b_omega_tilde[3];
  int32_T c48_i15;
  int32_T c48_i16;
  real_T c48_b_eps_tilde[3];
  int32_T c48_i17;
  real_T c48_b_K3[16];
  uint32_T c48_debug_family_var_map[20];
  real_T c48_b_Xsi[4];
  real_T c48_sig;
  real_T c48_G_dot[12];
  real_T c48_alpha_dot1[3];
  real_T c48_pGT[12];
  real_T c48_test[12];
  real_T c48_alpha_dot2[3];
  real_T c48_nargin = 9.0;
  real_T c48_nargout = 3.0;
  real_T c48_b_alpha_dot[3];
  real_T c48_b_eta_dot;
  real_T c48_b_eps_dot[3];
  int32_T c48_i18;
  int32_T c48_i19;
  real_T c48_b[3];
  int32_T c48_i20;
  real_T c48_b_b[3];
  int32_T c48_k;
  real_T c48_a;
  int32_T c48_i21;
  uint32_T c48_b_debug_family_var_map[4];
  real_T c48_v[3];
  real_T c48_b_nargin = 1.0;
  real_T c48_b_nargout = 1.0;
  real_T c48_M[9];
  int32_T c48_i22;
  int32_T c48_i23;
  real_T c48_c_b[9];
  static real_T c48_d_b[9] = { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T c48_i24;
  int32_T c48_i25;
  int32_T c48_i26;
  int32_T c48_i27;
  real_T c48_b_a;
  int32_T c48_i28;
  real_T c48_c_a;
  int32_T c48_i29;
  real_T c48_b_v[3];
  real_T c48_c_nargin = 1.0;
  real_T c48_c_nargout = 1.0;
  real_T c48_b_M[9];
  int32_T c48_i30;
  int32_T c48_i31;
  int32_T c48_i32;
  int32_T c48_i33;
  int32_T c48_i34;
  int32_T c48_i35;
  int32_T c48_i36;
  real_T c48_d_a[12];
  int32_T c48_i37;
  real_T c48_e_b[4];
  int32_T c48_i38;
  int32_T c48_i39;
  int32_T c48_i40;
  int32_T c48_i41;
  int32_T c48_i42;
  real_T c48_f_b[12];
  int32_T c48_i43;
  real_T c48_e_a[12];
  int32_T c48_i44;
  int32_T c48_i45;
  int32_T c48_i46;
  real_T c48_dv2[4];
  int32_T c48_i47;
  int32_T c48_i48;
  int32_T c48_i49;
  real_T c48_f_a[3];
  int32_T c48_i50;
  int32_T c48_i51;
  int32_T c48_i52;
  real_T c48_g_a[3];
  int32_T c48_i53;
  int32_T c48_i54;
  int32_T c48_i55;
  real_T c48_h_a[3];
  int32_T c48_i56;
  int32_T c48_i57;
  int32_T c48_i58;
  int32_T c48_i59;
  real_T c48_c_G[12];
  real_T c48_dv3[12];
  int32_T c48_i60;
  int32_T c48_i61;
  int32_T c48_i62;
  int32_T c48_i63;
  const mxArray *c48_y = NULL;
  int32_T c48_i64;
  int32_T c48_i65;
  int32_T c48_i66;
  int32_T c48_i67;
  int32_T c48_i68;
  int32_T c48_i69;
  int32_T c48_i70;
  real_T c48_g_b[12];
  int32_T c48_i71;
  real_T c48_h_b[16];
  int32_T c48_i72;
  int32_T c48_i73;
  int32_T c48_i74;
  real_T c48_i_b[16];
  int32_T c48_i75;
  real_T c48_j_b[4];
  int32_T c48_i76;
  int32_T c48_i77;
  int32_T c48_i78;
  int32_T c48_i79;
  int32_T c48_i80;
  int32_T c48_i81;
  int32_T c48_i82;
  real_T c48_i_a[9];
  int32_T c48_i83;
  int32_T c48_i84;
  int32_T c48_i85;
  int32_T c48_i86;
  real_T c48_j_a[12];
  int32_T c48_i87;
  int32_T c48_i88;
  int32_T c48_i89;
  int32_T c48_i90;
  int32_T c48_i91;
  int32_T c48_i92;
  int32_T c48_i93;
  int32_T c48_i94;
  real_T c48_k_a[12];
  int32_T c48_i95;
  real_T c48_l_a[3];
  int32_T c48_i96;
  int32_T c48_i97;
  int32_T c48_i98;
  int32_T c48_i99;
  real_T c48_m_a[12];
  int32_T c48_i100;
  real_T c48_n_a[3];
  int32_T c48_i101;
  int32_T c48_i102;
  int32_T c48_i103;
  int32_T c48_i104;
  int32_T c48_i105;
  int32_T c48_i106;
  int32_T c48_i107;
  int32_T c48_i108;
  int32_T c48_i109;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 38U, chartInstance->c48_sfEvent);
  for (c48_i2 = 0; c48_i2 < 4; c48_i2++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c48_Xsi)[c48_i2], 8U);
  }

  for (c48_i3 = 0; c48_i3 < 16; c48_i3++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c48_K3)[c48_i3], 7U);
  }

  for (c48_i4 = 0; c48_i4 < 3; c48_i4++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c48_eps_tilde)[c48_i4], 6U);
  }

  _SFD_DATA_RANGE_CHECK(*chartInstance->c48_eta_tilde, 5U);
  for (c48_i5 = 0; c48_i5 < 3; c48_i5++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c48_omega_tilde)[c48_i5], 4U);
  }

  for (c48_i6 = 0; c48_i6 < 3; c48_i6++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c48_z2)[c48_i6], 3U);
  }

  for (c48_i7 = 0; c48_i7 < 4; c48_i7++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c48_z1)[c48_i7], 2U);
  }

  for (c48_i8 = 0; c48_i8 < 12; c48_i8++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c48_G)[c48_i8], 1U);
  }

  for (c48_i9 = 0; c48_i9 < 9; c48_i9++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c48_K1)[c48_i9], 0U);
  }

  chartInstance->c48_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 38U, chartInstance->c48_sfEvent);
  for (c48_i10 = 0; c48_i10 < 9; c48_i10++) {
    c48_b_K1[c48_i10] = (*chartInstance->c48_K1)[c48_i10];
  }

  for (c48_i11 = 0; c48_i11 < 12; c48_i11++) {
    c48_b_G[c48_i11] = (*chartInstance->c48_G)[c48_i11];
  }

  for (c48_i12 = 0; c48_i12 < 4; c48_i12++) {
    c48_b_z1[c48_i12] = (*chartInstance->c48_z1)[c48_i12];
  }

  for (c48_i13 = 0; c48_i13 < 3; c48_i13++) {
    c48_b_z2[c48_i13] = (*chartInstance->c48_z2)[c48_i13];
  }

  for (c48_i14 = 0; c48_i14 < 3; c48_i14++) {
    c48_b_omega_tilde[c48_i14] = (*chartInstance->c48_omega_tilde)[c48_i14];
  }

  c48_b_eta_tilde = *chartInstance->c48_eta_tilde;
  for (c48_i15 = 0; c48_i15 < 3; c48_i15++) {
    c48_b_eps_tilde[c48_i15] = (*chartInstance->c48_eps_tilde)[c48_i15];
  }

  for (c48_i16 = 0; c48_i16 < 16; c48_i16++) {
    c48_b_K3[c48_i16] = (*chartInstance->c48_K3)[c48_i16];
  }

  for (c48_i17 = 0; c48_i17 < 4; c48_i17++) {
    c48_b_Xsi[c48_i17] = (*chartInstance->c48_Xsi)[c48_i17];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 20U, 20U, c48_debug_family_names,
    c48_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c48_sig, 0U, c48_b_sf_marshallOut,
    c48_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c48_G_dot, 1U, c48_e_sf_marshallOut,
    c48_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c48_alpha_dot1, 2U, c48_sf_marshallOut,
    c48_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c48_pGT, 3U, c48_e_sf_marshallOut,
    c48_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c48_test, 4U, c48_e_sf_marshallOut,
    c48_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c48_alpha_dot2, 5U, c48_sf_marshallOut,
    c48_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c48_nargin, 6U, c48_b_sf_marshallOut,
    c48_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c48_nargout, 7U, c48_b_sf_marshallOut,
    c48_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c48_b_K1, 8U, c48_f_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c48_b_G, 9U, c48_e_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c48_b_z1, 10U, c48_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c48_b_z2, 11U, c48_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c48_b_omega_tilde, 12U, c48_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c48_b_eta_tilde, 13U, c48_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c48_b_eps_tilde, 14U, c48_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c48_b_K3, 15U, c48_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c48_b_Xsi, 16U, c48_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c48_b_alpha_dot, 17U, c48_sf_marshallOut,
    c48_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c48_b_eta_dot, 18U, c48_b_sf_marshallOut,
    c48_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c48_b_eps_dot, 19U, c48_sf_marshallOut,
    c48_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c48_sfEvent, 3);
  for (c48_i18 = 0; c48_i18 < 3; c48_i18++) {
    c48_b[c48_i18] = c48_b_eps_tilde[c48_i18];
  }

  for (c48_i19 = 0; c48_i19 < 3; c48_i19++) {
    c48_b[c48_i19] *= -0.5;
  }

  for (c48_i20 = 0; c48_i20 < 3; c48_i20++) {
    c48_b_b[c48_i20] = c48_b_omega_tilde[c48_i20];
  }

  c48_b_eta_dot = 0.0;
  for (c48_k = 0; c48_k < 3; c48_k++) {
    c48_b_eta_dot += c48_b[c48_k] * c48_b_b[c48_k];
  }

  _SFD_EML_CALL(0U, chartInstance->c48_sfEvent, 5);
  c48_a = c48_b_eta_tilde;
  for (c48_i21 = 0; c48_i21 < 3; c48_i21++) {
    c48_v[c48_i21] = c48_b_eps_tilde[c48_i21];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c48_b_debug_family_names,
    c48_b_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c48_b_nargin, 0U, c48_b_sf_marshallOut,
    c48_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c48_b_nargout, 1U, c48_b_sf_marshallOut,
    c48_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c48_v, 2U, c48_sf_marshallOut,
    c48_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c48_M, 3U, c48_f_sf_marshallOut,
    c48_d_sf_marshallIn);
  CV_SCRIPT_FCN(0, 0);
  _SFD_SCRIPT_CALL(0U, chartInstance->c48_sfEvent, 2);
  c48_M[0] = 0.0;
  c48_M[3] = -c48_v[2];
  c48_M[6] = c48_v[1];
  c48_M[1] = c48_v[2];
  c48_M[4] = 0.0;
  c48_M[7] = -c48_v[0];
  c48_M[2] = -c48_v[1];
  c48_M[5] = c48_v[0];
  c48_M[8] = 0.0;
  _SFD_SCRIPT_CALL(0U, chartInstance->c48_sfEvent, -2);
  _SFD_SYMBOL_SCOPE_POP();
  for (c48_i22 = 0; c48_i22 < 9; c48_i22++) {
    c48_c_b[c48_i22] = c48_a * c48_d_b[c48_i22] + c48_M[c48_i22];
  }

  for (c48_i23 = 0; c48_i23 < 3; c48_i23++) {
    c48_b[c48_i23] = c48_b_omega_tilde[c48_i23];
  }

  for (c48_i24 = 0; c48_i24 < 3; c48_i24++) {
    c48_b_eps_dot[c48_i24] = 0.0;
  }

  for (c48_i25 = 0; c48_i25 < 3; c48_i25++) {
    c48_b_eps_dot[c48_i25] = 0.0;
    c48_i26 = 0;
    for (c48_i27 = 0; c48_i27 < 3; c48_i27++) {
      c48_b_eps_dot[c48_i25] += 0.5 * c48_c_b[c48_i26 + c48_i25] * c48_b[c48_i27];
      c48_i26 += 3;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c48_sfEvent, 7);
  if (CV_EML_IF(0, 1, 0, CV_RELATIONAL_EVAL(4U, 0U, 0, c48_b_eta_tilde, 0.0, -1,
        5U, c48_b_eta_tilde >= 0.0))) {
    _SFD_EML_CALL(0U, chartInstance->c48_sfEvent, 8);
    c48_sig = 1.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c48_sfEvent, 10);
    c48_sig = -1.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c48_sfEvent, 13);
  c48_b_a = c48_sig;
  for (c48_i28 = 0; c48_i28 < 3; c48_i28++) {
    c48_b[c48_i28] = c48_b_eps_dot[c48_i28];
  }

  c48_c_a = c48_b_eta_dot;
  for (c48_i29 = 0; c48_i29 < 3; c48_i29++) {
    c48_b_v[c48_i29] = c48_b_eps_dot[c48_i29];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c48_b_debug_family_names,
    c48_b_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c48_c_nargin, 0U, c48_b_sf_marshallOut,
    c48_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c48_c_nargout, 1U, c48_b_sf_marshallOut,
    c48_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c48_b_v, 2U, c48_sf_marshallOut,
    c48_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c48_b_M, 3U, c48_f_sf_marshallOut,
    c48_d_sf_marshallIn);
  CV_SCRIPT_FCN(0, 0);
  _SFD_SCRIPT_CALL(0U, chartInstance->c48_sfEvent, 2);
  c48_b_M[0] = 0.0;
  c48_b_M[3] = -c48_b_v[2];
  c48_b_M[6] = c48_b_v[1];
  c48_b_M[1] = c48_b_v[2];
  c48_b_M[4] = 0.0;
  c48_b_M[7] = -c48_b_v[0];
  c48_b_M[2] = -c48_b_v[1];
  c48_b_M[5] = c48_b_v[0];
  c48_b_M[8] = 0.0;
  _SFD_SCRIPT_CALL(0U, chartInstance->c48_sfEvent, -2);
  _SFD_SYMBOL_SCOPE_POP();
  for (c48_i30 = 0; c48_i30 < 3; c48_i30++) {
    c48_G_dot[c48_i30] = c48_b_a * c48_b[c48_i30];
  }

  c48_i31 = 0;
  for (c48_i32 = 0; c48_i32 < 3; c48_i32++) {
    c48_i33 = 0;
    for (c48_i35 = 0; c48_i35 < 3; c48_i35++) {
      c48_G_dot[(c48_i35 + c48_i31) + 3] = c48_c_a * c48_d_b[c48_i33 + c48_i32]
        + c48_b_M[c48_i33 + c48_i32];
      c48_i33 += 3;
    }

    c48_i31 += 3;
  }

  _SFD_EML_CALL(0U, chartInstance->c48_sfEvent, 19);
  for (c48_i34 = 0; c48_i34 < 12; c48_i34++) {
    c48_d_a[c48_i34] = c48_G_dot[c48_i34];
  }

  for (c48_i36 = 0; c48_i36 < 4; c48_i36++) {
    c48_e_b[c48_i36] = c48_b_z1[c48_i36];
  }

  c48_i37 = 0;
  for (c48_i38 = 0; c48_i38 < 3; c48_i38++) {
    c48_i40 = 0;
    for (c48_i41 = 0; c48_i41 < 4; c48_i41++) {
      c48_f_b[c48_i41 + c48_i37] = c48_b_G[c48_i40 + c48_i38];
      c48_i40 += 3;
    }

    c48_i37 += 4;
  }

  for (c48_i39 = 0; c48_i39 < 3; c48_i39++) {
    c48_b[c48_i39] = c48_b_omega_tilde[c48_i39];
  }

  for (c48_i42 = 0; c48_i42 < 12; c48_i42++) {
    c48_e_a[c48_i42] = c48_b_G[c48_i42];
  }

  for (c48_i43 = 0; c48_i43 < 9; c48_i43++) {
    c48_c_b[c48_i43] = -c48_b_K1[c48_i43];
  }

  for (c48_i44 = 0; c48_i44 < 3; c48_i44++) {
    c48_alpha_dot1[c48_i44] = 0.0;
  }

  for (c48_i45 = 0; c48_i45 < 4; c48_i45++) {
    c48_dv2[c48_i45] = 0.0;
    c48_i47 = 0;
    for (c48_i48 = 0; c48_i48 < 3; c48_i48++) {
      c48_dv2[c48_i45] += 0.5 * c48_f_b[c48_i47 + c48_i45] * c48_b[c48_i48];
      c48_i47 += 4;
    }
  }

  for (c48_i46 = 0; c48_i46 < 3; c48_i46++) {
    c48_f_a[c48_i46] = 0.0;
    c48_i50 = 0;
    for (c48_i51 = 0; c48_i51 < 4; c48_i51++) {
      c48_f_a[c48_i46] += c48_d_a[c48_i50 + c48_i46] * c48_e_b[c48_i51];
      c48_i50 += 3;
    }
  }

  for (c48_i49 = 0; c48_i49 < 3; c48_i49++) {
    c48_g_a[c48_i49] = 0.0;
    c48_i53 = 0;
    for (c48_i54 = 0; c48_i54 < 4; c48_i54++) {
      c48_g_a[c48_i49] += c48_e_a[c48_i53 + c48_i49] * c48_dv2[c48_i54];
      c48_i53 += 3;
    }
  }

  for (c48_i52 = 0; c48_i52 < 3; c48_i52++) {
    c48_h_a[c48_i52] = c48_f_a[c48_i52] + c48_g_a[c48_i52];
  }

  for (c48_i55 = 0; c48_i55 < 3; c48_i55++) {
    c48_alpha_dot1[c48_i55] = 0.0;
    c48_i57 = 0;
    for (c48_i59 = 0; c48_i59 < 3; c48_i59++) {
      c48_alpha_dot1[c48_i55] += c48_c_b[c48_i57 + c48_i55] * c48_h_a[c48_i59];
      c48_i57 += 3;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c48_sfEvent, 21);
  c48_i56 = 0;
  for (c48_i58 = 0; c48_i58 < 3; c48_i58++) {
    c48_i60 = 0;
    for (c48_i62 = 0; c48_i62 < 4; c48_i62++) {
      c48_c_G[c48_i62 + c48_i56] = c48_b_G[c48_i60 + c48_i58];
      c48_i60 += 3;
    }

    c48_i56 += 4;
  }

  c48_pinv(chartInstance, c48_c_G, c48_dv3);
  for (c48_i61 = 0; c48_i61 < 12; c48_i61++) {
    c48_pGT[c48_i61] = c48_dv3[c48_i61];
  }

  _SFD_EML_CALL(0U, chartInstance->c48_sfEvent, 23);
  for (c48_i63 = 0; c48_i63 < 12; c48_i63++) {
    c48_test[c48_i63] = c48_pGT[c48_i63] - c48_b_G[c48_i63];
  }

  sf_mex_printf("%s =\\n", "test");
  c48_y = NULL;
  sf_mex_assign(&c48_y, sf_mex_create("y", c48_test, 0, 0U, 1U, 0U, 2, 3, 4),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 14, c48_y);
  _SFD_EML_CALL(0U, chartInstance->c48_sfEvent, 25);
  for (c48_i64 = 0; c48_i64 < 12; c48_i64++) {
    c48_d_a[c48_i64] = -c48_pGT[c48_i64];
  }

  c48_i65 = 0;
  for (c48_i66 = 0; c48_i66 < 3; c48_i66++) {
    c48_i68 = 0;
    for (c48_i69 = 0; c48_i69 < 4; c48_i69++) {
      c48_f_b[c48_i69 + c48_i65] = c48_G_dot[c48_i68 + c48_i66];
      c48_i68 += 3;
    }

    c48_i65 += 4;
  }

  for (c48_i67 = 0; c48_i67 < 12; c48_i67++) {
    c48_g_b[c48_i67] = c48_pGT[c48_i67];
  }

  for (c48_i70 = 0; c48_i70 < 16; c48_i70++) {
    c48_h_b[c48_i70] = c48_b_K3[c48_i70];
  }

  for (c48_i71 = 0; c48_i71 < 4; c48_i71++) {
    c48_e_b[c48_i71] = c48_b_Xsi[c48_i71];
  }

  for (c48_i72 = 0; c48_i72 < 12; c48_i72++) {
    c48_e_a[c48_i72] = c48_pGT[c48_i72];
  }

  for (c48_i73 = 0; c48_i73 < 16; c48_i73++) {
    c48_i_b[c48_i73] = c48_b_K3[c48_i73];
  }

  for (c48_i74 = 0; c48_i74 < 4; c48_i74++) {
    c48_j_b[c48_i74] = c48_b_z1[c48_i74];
  }

  for (c48_i75 = 0; c48_i75 < 3; c48_i75++) {
    c48_i77 = 0;
    c48_i78 = 0;
    for (c48_i79 = 0; c48_i79 < 3; c48_i79++) {
      c48_i_a[c48_i77 + c48_i75] = 0.0;
      c48_i85 = 0;
      for (c48_i87 = 0; c48_i87 < 4; c48_i87++) {
        c48_i_a[c48_i77 + c48_i75] += c48_d_a[c48_i85 + c48_i75] *
          c48_f_b[c48_i87 + c48_i78];
        c48_i85 += 3;
      }

      c48_i77 += 3;
      c48_i78 += 4;
    }
  }

  for (c48_i76 = 0; c48_i76 < 3; c48_i76++) {
    c48_i81 = 0;
    for (c48_i82 = 0; c48_i82 < 4; c48_i82++) {
      c48_j_a[c48_i81 + c48_i76] = 0.0;
      c48_i89 = 0;
      for (c48_i92 = 0; c48_i92 < 3; c48_i92++) {
        c48_j_a[c48_i81 + c48_i76] += c48_i_a[c48_i89 + c48_i76] *
          c48_g_b[c48_i92 + c48_i81];
        c48_i89 += 3;
      }

      c48_i81 += 3;
    }
  }

  for (c48_i80 = 0; c48_i80 < 3; c48_i80++) {
    c48_i84 = 0;
    c48_i86 = 0;
    for (c48_i88 = 0; c48_i88 < 4; c48_i88++) {
      c48_k_a[c48_i84 + c48_i80] = 0.0;
      c48_i96 = 0;
      for (c48_i98 = 0; c48_i98 < 4; c48_i98++) {
        c48_k_a[c48_i84 + c48_i80] += c48_j_a[c48_i96 + c48_i80] *
          c48_h_b[c48_i98 + c48_i86];
        c48_i96 += 3;
      }

      c48_i84 += 3;
      c48_i86 += 4;
    }
  }

  for (c48_i83 = 0; c48_i83 < 3; c48_i83++) {
    c48_i91 = 0;
    c48_i93 = 0;
    for (c48_i94 = 0; c48_i94 < 4; c48_i94++) {
      c48_m_a[c48_i91 + c48_i83] = 0.0;
      c48_i101 = 0;
      for (c48_i103 = 0; c48_i103 < 4; c48_i103++) {
        c48_m_a[c48_i91 + c48_i83] += c48_e_a[c48_i101 + c48_i83] *
          c48_i_b[c48_i103 + c48_i93];
        c48_i101 += 3;
      }

      c48_i91 += 3;
      c48_i93 += 4;
    }
  }

  for (c48_i90 = 0; c48_i90 < 3; c48_i90++) {
    c48_l_a[c48_i90] = 0.0;
    c48_i97 = 0;
    for (c48_i99 = 0; c48_i99 < 4; c48_i99++) {
      c48_l_a[c48_i90] += c48_k_a[c48_i97 + c48_i90] * c48_e_b[c48_i99];
      c48_i97 += 3;
    }
  }

  for (c48_i95 = 0; c48_i95 < 3; c48_i95++) {
    c48_n_a[c48_i95] = 0.0;
    c48_i102 = 0;
    for (c48_i104 = 0; c48_i104 < 4; c48_i104++) {
      c48_n_a[c48_i95] += c48_m_a[c48_i102 + c48_i95] * c48_j_b[c48_i104];
      c48_i102 += 3;
    }
  }

  for (c48_i100 = 0; c48_i100 < 3; c48_i100++) {
    c48_alpha_dot2[c48_i100] = -2.0 * (c48_l_a[c48_i100] + c48_n_a[c48_i100]);
  }

  _SFD_EML_CALL(0U, chartInstance->c48_sfEvent, 27);
  for (c48_i105 = 0; c48_i105 < 3; c48_i105++) {
    c48_b_alpha_dot[c48_i105] = c48_alpha_dot1[c48_i105] +
      c48_alpha_dot2[c48_i105];
  }

  _SFD_EML_CALL(0U, chartInstance->c48_sfEvent, -27);
  _SFD_SYMBOL_SCOPE_POP();
  for (c48_i106 = 0; c48_i106 < 3; c48_i106++) {
    (*chartInstance->c48_alpha_dot)[c48_i106] = c48_b_alpha_dot[c48_i106];
  }

  *chartInstance->c48_eta_dot = c48_b_eta_dot;
  for (c48_i107 = 0; c48_i107 < 3; c48_i107++) {
    (*chartInstance->c48_eps_dot)[c48_i107] = c48_b_eps_dot[c48_i107];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 38U, chartInstance->c48_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_HexrotorDynamicModelMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  for (c48_i108 = 0; c48_i108 < 3; c48_i108++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c48_alpha_dot)[c48_i108], 9U);
  }

  _SFD_DATA_RANGE_CHECK(*chartInstance->c48_eta_dot, 10U);
  for (c48_i109 = 0; c48_i109 < 3; c48_i109++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c48_eps_dot)[c48_i109], 11U);
  }
}

static void mdl_start_c48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void initSimStructsc48_HexrotorDynamicModel
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c48_machineNumber, uint32_T
  c48_chartNumber, uint32_T c48_instanceNumber)
{
  (void)(c48_machineNumber);
  (void)(c48_chartNumber);
  (void)(c48_instanceNumber);
  _SFD_SCRIPT_TRANSLATION(c48_chartNumber, c48_instanceNumber, 0U,
    sf_debug_get_script_id(
    "G:\\Desktop\\Tab Austausch\\Diplomarbeit\\Matlab_Simulation\\Hexarotor\\vec2skew.m"));
}

static const mxArray *c48_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData)
{
  const mxArray *c48_mxArrayOutData;
  int32_T c48_i110;
  const mxArray *c48_y = NULL;
  real_T c48_u[3];
  SFc48_HexrotorDynamicModelInstanceStruct *chartInstance;
  chartInstance = (SFc48_HexrotorDynamicModelInstanceStruct *)chartInstanceVoid;
  c48_mxArrayOutData = NULL;
  c48_mxArrayOutData = NULL;
  for (c48_i110 = 0; c48_i110 < 3; c48_i110++) {
    c48_u[c48_i110] = (*(real_T (*)[3])c48_inData)[c48_i110];
  }

  c48_y = NULL;
  sf_mex_assign(&c48_y, sf_mex_create("y", c48_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c48_mxArrayOutData, c48_y, false);
  return c48_mxArrayOutData;
}

static void c48_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_b_eps_dot, const char_T *c48_identifier,
  real_T c48_y[3])
{
  emlrtMsgIdentifier c48_thisId;
  c48_thisId.fIdentifier = (const char *)c48_identifier;
  c48_thisId.fParent = NULL;
  c48_thisId.bParentIsCell = false;
  c48_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c48_b_eps_dot), &c48_thisId,
    c48_y);
  sf_mex_destroy(&c48_b_eps_dot);
}

static void c48_b_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_u, const emlrtMsgIdentifier *c48_parentId,
  real_T c48_y[3])
{
  real_T c48_dv4[3];
  int32_T c48_i111;
  (void)chartInstance;
  sf_mex_import(c48_parentId, sf_mex_dup(c48_u), c48_dv4, 1, 0, 0U, 1, 0U, 1, 3);
  for (c48_i111 = 0; c48_i111 < 3; c48_i111++) {
    c48_y[c48_i111] = c48_dv4[c48_i111];
  }

  sf_mex_destroy(&c48_u);
}

static void c48_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c48_mxArrayInData, const char_T *c48_varName, void *c48_outData)
{
  const mxArray *c48_b_eps_dot;
  emlrtMsgIdentifier c48_thisId;
  real_T c48_y[3];
  int32_T c48_i112;
  SFc48_HexrotorDynamicModelInstanceStruct *chartInstance;
  chartInstance = (SFc48_HexrotorDynamicModelInstanceStruct *)chartInstanceVoid;
  c48_b_eps_dot = sf_mex_dup(c48_mxArrayInData);
  c48_thisId.fIdentifier = (const char *)c48_varName;
  c48_thisId.fParent = NULL;
  c48_thisId.bParentIsCell = false;
  c48_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c48_b_eps_dot), &c48_thisId,
    c48_y);
  sf_mex_destroy(&c48_b_eps_dot);
  for (c48_i112 = 0; c48_i112 < 3; c48_i112++) {
    (*(real_T (*)[3])c48_outData)[c48_i112] = c48_y[c48_i112];
  }

  sf_mex_destroy(&c48_mxArrayInData);
}

static const mxArray *c48_b_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData)
{
  const mxArray *c48_mxArrayOutData;
  real_T c48_u;
  const mxArray *c48_y = NULL;
  SFc48_HexrotorDynamicModelInstanceStruct *chartInstance;
  chartInstance = (SFc48_HexrotorDynamicModelInstanceStruct *)chartInstanceVoid;
  c48_mxArrayOutData = NULL;
  c48_mxArrayOutData = NULL;
  c48_u = *(real_T *)c48_inData;
  c48_y = NULL;
  sf_mex_assign(&c48_y, sf_mex_create("y", &c48_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c48_mxArrayOutData, c48_y, false);
  return c48_mxArrayOutData;
}

static real_T c48_c_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_b_eta_dot, const char_T *c48_identifier)
{
  real_T c48_y;
  emlrtMsgIdentifier c48_thisId;
  c48_thisId.fIdentifier = (const char *)c48_identifier;
  c48_thisId.fParent = NULL;
  c48_thisId.bParentIsCell = false;
  c48_y = c48_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c48_b_eta_dot),
    &c48_thisId);
  sf_mex_destroy(&c48_b_eta_dot);
  return c48_y;
}

static real_T c48_d_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_u, const emlrtMsgIdentifier *c48_parentId)
{
  real_T c48_y;
  real_T c48_d0;
  (void)chartInstance;
  sf_mex_import(c48_parentId, sf_mex_dup(c48_u), &c48_d0, 1, 0, 0U, 0, 0U, 0);
  c48_y = c48_d0;
  sf_mex_destroy(&c48_u);
  return c48_y;
}

static void c48_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c48_mxArrayInData, const char_T *c48_varName, void *c48_outData)
{
  const mxArray *c48_b_eta_dot;
  emlrtMsgIdentifier c48_thisId;
  real_T c48_y;
  SFc48_HexrotorDynamicModelInstanceStruct *chartInstance;
  chartInstance = (SFc48_HexrotorDynamicModelInstanceStruct *)chartInstanceVoid;
  c48_b_eta_dot = sf_mex_dup(c48_mxArrayInData);
  c48_thisId.fIdentifier = (const char *)c48_varName;
  c48_thisId.fParent = NULL;
  c48_thisId.bParentIsCell = false;
  c48_y = c48_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c48_b_eta_dot),
    &c48_thisId);
  sf_mex_destroy(&c48_b_eta_dot);
  *(real_T *)c48_outData = c48_y;
  sf_mex_destroy(&c48_mxArrayInData);
}

static const mxArray *c48_c_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData)
{
  const mxArray *c48_mxArrayOutData;
  int32_T c48_i113;
  const mxArray *c48_y = NULL;
  real_T c48_u[4];
  SFc48_HexrotorDynamicModelInstanceStruct *chartInstance;
  chartInstance = (SFc48_HexrotorDynamicModelInstanceStruct *)chartInstanceVoid;
  c48_mxArrayOutData = NULL;
  c48_mxArrayOutData = NULL;
  for (c48_i113 = 0; c48_i113 < 4; c48_i113++) {
    c48_u[c48_i113] = (*(real_T (*)[4])c48_inData)[c48_i113];
  }

  c48_y = NULL;
  sf_mex_assign(&c48_y, sf_mex_create("y", c48_u, 0, 0U, 1U, 0U, 1, 4), false);
  sf_mex_assign(&c48_mxArrayOutData, c48_y, false);
  return c48_mxArrayOutData;
}

static const mxArray *c48_d_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData)
{
  const mxArray *c48_mxArrayOutData;
  int32_T c48_i114;
  int32_T c48_i115;
  const mxArray *c48_y = NULL;
  int32_T c48_i116;
  real_T c48_u[16];
  SFc48_HexrotorDynamicModelInstanceStruct *chartInstance;
  chartInstance = (SFc48_HexrotorDynamicModelInstanceStruct *)chartInstanceVoid;
  c48_mxArrayOutData = NULL;
  c48_mxArrayOutData = NULL;
  c48_i114 = 0;
  for (c48_i115 = 0; c48_i115 < 4; c48_i115++) {
    for (c48_i116 = 0; c48_i116 < 4; c48_i116++) {
      c48_u[c48_i116 + c48_i114] = (*(real_T (*)[16])c48_inData)[c48_i116 +
        c48_i114];
    }

    c48_i114 += 4;
  }

  c48_y = NULL;
  sf_mex_assign(&c48_y, sf_mex_create("y", c48_u, 0, 0U, 1U, 0U, 2, 4, 4), false);
  sf_mex_assign(&c48_mxArrayOutData, c48_y, false);
  return c48_mxArrayOutData;
}

static const mxArray *c48_e_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData)
{
  const mxArray *c48_mxArrayOutData;
  int32_T c48_i117;
  int32_T c48_i118;
  const mxArray *c48_y = NULL;
  int32_T c48_i119;
  real_T c48_u[12];
  SFc48_HexrotorDynamicModelInstanceStruct *chartInstance;
  chartInstance = (SFc48_HexrotorDynamicModelInstanceStruct *)chartInstanceVoid;
  c48_mxArrayOutData = NULL;
  c48_mxArrayOutData = NULL;
  c48_i117 = 0;
  for (c48_i118 = 0; c48_i118 < 4; c48_i118++) {
    for (c48_i119 = 0; c48_i119 < 3; c48_i119++) {
      c48_u[c48_i119 + c48_i117] = (*(real_T (*)[12])c48_inData)[c48_i119 +
        c48_i117];
    }

    c48_i117 += 3;
  }

  c48_y = NULL;
  sf_mex_assign(&c48_y, sf_mex_create("y", c48_u, 0, 0U, 1U, 0U, 2, 3, 4), false);
  sf_mex_assign(&c48_mxArrayOutData, c48_y, false);
  return c48_mxArrayOutData;
}

static const mxArray *c48_f_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData)
{
  const mxArray *c48_mxArrayOutData;
  int32_T c48_i120;
  int32_T c48_i121;
  const mxArray *c48_y = NULL;
  int32_T c48_i122;
  real_T c48_u[9];
  SFc48_HexrotorDynamicModelInstanceStruct *chartInstance;
  chartInstance = (SFc48_HexrotorDynamicModelInstanceStruct *)chartInstanceVoid;
  c48_mxArrayOutData = NULL;
  c48_mxArrayOutData = NULL;
  c48_i120 = 0;
  for (c48_i121 = 0; c48_i121 < 3; c48_i121++) {
    for (c48_i122 = 0; c48_i122 < 3; c48_i122++) {
      c48_u[c48_i122 + c48_i120] = (*(real_T (*)[9])c48_inData)[c48_i122 +
        c48_i120];
    }

    c48_i120 += 3;
  }

  c48_y = NULL;
  sf_mex_assign(&c48_y, sf_mex_create("y", c48_u, 0, 0U, 1U, 0U, 2, 3, 3), false);
  sf_mex_assign(&c48_mxArrayOutData, c48_y, false);
  return c48_mxArrayOutData;
}

static void c48_e_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_u, const emlrtMsgIdentifier *c48_parentId,
  real_T c48_y[12])
{
  real_T c48_dv5[12];
  int32_T c48_i123;
  (void)chartInstance;
  sf_mex_import(c48_parentId, sf_mex_dup(c48_u), c48_dv5, 1, 0, 0U, 1, 0U, 2, 3,
                4);
  for (c48_i123 = 0; c48_i123 < 12; c48_i123++) {
    c48_y[c48_i123] = c48_dv5[c48_i123];
  }

  sf_mex_destroy(&c48_u);
}

static void c48_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c48_mxArrayInData, const char_T *c48_varName, void *c48_outData)
{
  const mxArray *c48_test;
  emlrtMsgIdentifier c48_thisId;
  real_T c48_y[12];
  int32_T c48_i124;
  int32_T c48_i125;
  int32_T c48_i126;
  SFc48_HexrotorDynamicModelInstanceStruct *chartInstance;
  chartInstance = (SFc48_HexrotorDynamicModelInstanceStruct *)chartInstanceVoid;
  c48_test = sf_mex_dup(c48_mxArrayInData);
  c48_thisId.fIdentifier = (const char *)c48_varName;
  c48_thisId.fParent = NULL;
  c48_thisId.bParentIsCell = false;
  c48_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c48_test), &c48_thisId, c48_y);
  sf_mex_destroy(&c48_test);
  c48_i124 = 0;
  for (c48_i125 = 0; c48_i125 < 4; c48_i125++) {
    for (c48_i126 = 0; c48_i126 < 3; c48_i126++) {
      (*(real_T (*)[12])c48_outData)[c48_i126 + c48_i124] = c48_y[c48_i126 +
        c48_i124];
    }

    c48_i124 += 3;
  }

  sf_mex_destroy(&c48_mxArrayInData);
}

static void c48_f_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_u, const emlrtMsgIdentifier *c48_parentId,
  real_T c48_y[9])
{
  real_T c48_dv6[9];
  int32_T c48_i127;
  (void)chartInstance;
  sf_mex_import(c48_parentId, sf_mex_dup(c48_u), c48_dv6, 1, 0, 0U, 1, 0U, 2, 3,
                3);
  for (c48_i127 = 0; c48_i127 < 9; c48_i127++) {
    c48_y[c48_i127] = c48_dv6[c48_i127];
  }

  sf_mex_destroy(&c48_u);
}

static void c48_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c48_mxArrayInData, const char_T *c48_varName, void *c48_outData)
{
  const mxArray *c48_M;
  emlrtMsgIdentifier c48_thisId;
  real_T c48_y[9];
  int32_T c48_i128;
  int32_T c48_i129;
  int32_T c48_i130;
  SFc48_HexrotorDynamicModelInstanceStruct *chartInstance;
  chartInstance = (SFc48_HexrotorDynamicModelInstanceStruct *)chartInstanceVoid;
  c48_M = sf_mex_dup(c48_mxArrayInData);
  c48_thisId.fIdentifier = (const char *)c48_varName;
  c48_thisId.fParent = NULL;
  c48_thisId.bParentIsCell = false;
  c48_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c48_M), &c48_thisId, c48_y);
  sf_mex_destroy(&c48_M);
  c48_i128 = 0;
  for (c48_i129 = 0; c48_i129 < 3; c48_i129++) {
    for (c48_i130 = 0; c48_i130 < 3; c48_i130++) {
      (*(real_T (*)[9])c48_outData)[c48_i130 + c48_i128] = c48_y[c48_i130 +
        c48_i128];
    }

    c48_i128 += 3;
  }

  sf_mex_destroy(&c48_mxArrayInData);
}

const mxArray *sf_c48_HexrotorDynamicModel_get_eml_resolved_functions_info(void)
{
  const mxArray *c48_nameCaptureInfo = NULL;
  const char * c48_data[4] = {
    "789ce593514ec24010861782441e343ce8bb0730369a98189f4051a11145e99b31ba6dc7b061b7db6cb7809e416fe0017cf4349ec323089485b2715312d41727"
    "69a67ffe76bed9e914e51acd1c42687d788df25b118d632d49a83cc979341fba9f3364152ba830f79ef25f27d9e38184814c0425015cc4cc0531140166302de3",
    "7346021c48e731042420e2b407fed87920141cc2e09ca7449d0c053b4d595331b246f7c71df0baed9821d18966edd2b440a9f9dc1bce5fc8988f1efa7cf4e714"
    "2f34d42b66f054fdbca65594bee56e5492bc5d59f6bc8ab76ae097274e0fbcbda80bfd9fe215353de3258ecf6397c26cbeef4bf22e8dbc79ffe6e4f6ecd0aa41",
    "d4953cb41cec6e55e348e238f23a568d8494332c5c20d26a6249b17bd7262ca658121e58751860c12517961ad60ecbdcc745f7c3f4bf96a65faef2f2f9fc51fd"
    "3b5e12ff853730d45b74ff360dbcb2e6db9ebd5b3baada2de7c0761afbe2e9eadac7a93e5a199cac3e9041ff76fd2fbbaf62b0",
    "" };

  c48_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(c48_data, 1728U, &c48_nameCaptureInfo);
  return c48_nameCaptureInfo;
}

static void c48_pinv(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                     real_T c48_A[12], real_T c48_X[12])
{
  int32_T c48_i131;
  boolean_T c48_p;
  int32_T c48_k;
  int32_T c48_i132;
  int32_T c48_i133;
  boolean_T c48_b_p;
  real_T c48_b_A[12];
  real_T c48_U[12];
  real_T c48_s[3];
  real_T c48_V[9];
  real_T c48_absxk;
  real_T c48_r;
  int32_T c48_exponent;
  real_T c48_tol;
  int32_T c48_b_r;
  int32_T c48_b_k;
  int32_T c48_vcol;
  boolean_T c48_overflow;
  int32_T c48_j;
  int32_T c48_cr;
  real_T c48_z;
  boolean_T c48_b_overflow;
  int32_T c48_br;
  boolean_T c48_c_overflow;
  int32_T c48_b_cr;
  int32_T c48_c_k;
  int32_T c48_ic;
  int32_T c48_ar;
  int32_T c48_b;
  boolean_T c48_d_overflow;
  int32_T c48_ib;
  int32_T c48_ia;
  boolean_T c48_e_overflow;
  int32_T c48_b_ic;
  for (c48_i131 = 0; c48_i131 < 12; c48_i131++) {
    c48_X[c48_i131] = 0.0;
  }

  c48_p = true;
  for (c48_k = 0; c48_k < 12; c48_k++) {
    if (c48_p && ((!muDoubleScalarIsInf(c48_A[c48_k])) && (!muDoubleScalarIsNaN
          (c48_A[c48_k])))) {
      c48_b_p = true;
    } else {
      c48_b_p = false;
    }

    c48_p = c48_b_p;
  }

  if (!c48_p) {
    for (c48_i133 = 0; c48_i133 < 12; c48_i133++) {
      c48_X[c48_i133] = rtNaN;
    }
  } else {
    for (c48_i132 = 0; c48_i132 < 12; c48_i132++) {
      c48_b_A[c48_i132] = c48_A[c48_i132];
    }

    c48_svd(chartInstance, c48_b_A, c48_U, c48_s, c48_V);
    c48_absxk = muDoubleScalarAbs(c48_s[0]);
    if ((!muDoubleScalarIsInf(c48_absxk)) && (!muDoubleScalarIsNaN(c48_absxk)))
    {
      if (c48_absxk <= 2.2250738585072014E-308) {
        c48_r = 4.94065645841247E-324;
      } else {
        frexp(c48_absxk, &c48_exponent);
        c48_r = ldexp(1.0, c48_exponent - 53);
      }
    } else {
      c48_r = rtNaN;
    }

    c48_tol = 4.0 * c48_r;
    c48_b_r = 0;
    c48_b_k = 0;
    while ((c48_b_k + 1 < 4) && (c48_s[c48_b_k] > c48_tol)) {
      c48_b_r++;
      c48_b_k++;
    }

    if (c48_b_r > 0) {
      c48_vcol = 3;
      c48_overflow = ((!(1 > c48_b_r)) && (c48_b_r > 2147483646));
      if (c48_overflow) {
        c48_check_forloop_overflow_error(chartInstance, c48_overflow);
      }

      for (c48_j = 0; c48_j + 1 <= c48_b_r; c48_j++) {
        c48_z = 1.0 / c48_s[c48_j];
        c48_b_overflow = ((!(c48_vcol - 2 > c48_vcol)) && (c48_vcol > 2147483646));
        if (c48_b_overflow) {
          c48_check_forloop_overflow_error(chartInstance, c48_b_overflow);
        }

        for (c48_c_k = c48_vcol - 3; c48_c_k + 1 <= c48_vcol; c48_c_k++) {
          c48_V[c48_c_k] *= c48_z;
        }

        c48_vcol += 3;
      }

      for (c48_cr = 0; c48_cr < 11; c48_cr += 3) {
        c48_c_overflow = ((!(c48_cr + 1 > c48_cr + 3)) && (c48_cr + 3 >
          2147483646));
        if (c48_c_overflow) {
          c48_check_forloop_overflow_error(chartInstance, c48_c_overflow);
        }

        for (c48_ic = c48_cr; c48_ic + 1 <= c48_cr + 3; c48_ic++) {
          c48_X[c48_ic] = 0.0;
        }
      }

      c48_br = 0;
      for (c48_b_cr = 0; c48_b_cr < 11; c48_b_cr += 3) {
        c48_ar = 0;
        c48_br++;
        c48_b = c48_br + ((c48_b_r - 1) << 2);
        c48_d_overflow = ((!(c48_br > c48_b)) && (c48_b > 2147483643));
        if (c48_d_overflow) {
          c48_check_forloop_overflow_error(chartInstance, c48_d_overflow);
        }

        for (c48_ib = c48_br - 1; c48_ib + 1 <= c48_b; c48_ib += 4) {
          if (c48_U[c48_ib] != 0.0) {
            c48_ia = c48_ar - 1;
            c48_e_overflow = ((!(c48_b_cr + 1 > c48_b_cr + 3)) && (c48_b_cr + 3 >
              2147483646));
            if (c48_e_overflow) {
              c48_check_forloop_overflow_error(chartInstance, c48_e_overflow);
            }

            for (c48_b_ic = c48_b_cr; c48_b_ic + 1 <= c48_b_cr + 3; c48_b_ic++)
            {
              c48_ia++;
              c48_X[c48_b_ic] += c48_U[c48_ib] * c48_V[c48_ia];
            }
          }

          c48_ar += 3;
        }
      }
    }
  }
}

static void c48_svd(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                    real_T c48_A[12], real_T c48_U[12], real_T c48_s[3], real_T
                    c48_V[9])
{
  int32_T c48_i134;
  int32_T c48_i135;
  real_T c48_b_A[12];
  int32_T c48_i136;
  real_T c48_b_s[3];
  int32_T c48_i137;
  real_T c48_e[3];
  int32_T c48_i138;
  real_T c48_work[4];
  int32_T c48_i139;
  int32_T c48_q;
  real_T c48_Vf[9];
  int32_T c48_m;
  int32_T c48_qq;
  boolean_T c48_apply_transform;
  int32_T c48_b_q;
  int32_T c48_i140;
  int32_T c48_jj;
  int32_T c48_c_q;
  real_T c48_nrm;
  real_T c48_c_A[12];
  int32_T c48_qjj;
  int32_T c48_ii;
  int32_T c48_b_jj;
  int32_T c48_b_ii;
  int32_T c48_d_q;
  int32_T c48_i141;
  int32_T c48_i142;
  real_T c48_y;
  int32_T c48_qp1q;
  int32_T c48_c_ii;
  real_T c48_iter;
  int32_T c48_d_ii;
  int32_T c48_c_jj;
  int32_T c48_i143;
  int32_T c48_i144;
  real_T c48_d_A[12];
  real_T c48_snorm;
  real_T c48_rt;
  real_T c48_b_e[3];
  int32_T c48_e_ii;
  real_T c48_r;
  int32_T c48_b;
  real_T c48_b_y;
  int32_T c48_qp1jj;
  boolean_T c48_overflow;
  int32_T c48_i145;
  real_T c48_b_U[12];
  real_T c48_t;
  real_T c48_e_A[12];
  boolean_T c48_b_overflow;
  int32_T c48_b_b;
  int32_T c48_i146;
  real_T c48_c_y;
  real_T c48_d1;
  boolean_T c48_c_overflow;
  int32_T c48_f_ii;
  int32_T c48_g_ii;
  real_T c48_c_U[12];
  int32_T c48_k;
  int32_T c48_i147;
  real_T c48_b_Vf[9];
  real_T c48_d2;
  real_T c48_a;
  int32_T c48_b_k;
  int32_T c48_c_k;
  int32_T c48_e_q;
  int32_T c48_h_ii;
  int32_T c48_c_b;
  real_T c48_d_y;
  real_T c48_c_Vf[9];
  boolean_T c48_d_overflow;
  int32_T c48_d_b;
  int32_T c48_j;
  real_T c48_d3;
  boolean_T c48_e_overflow;
  int32_T c48_b_j;
  int32_T c48_d_k;
  int32_T c48_qs;
  real_T c48_kase;
  real_T c48_ztest0;
  int32_T c48_e_k;
  int32_T c48_i;
  boolean_T c48_f_overflow;
  int32_T c48_i_ii;
  real_T c48_f;
  real_T c48_varargin_1[5];
  int32_T c48_qp1;
  boolean_T c48_g_overflow;
  boolean_T c48_h_overflow;
  int32_T c48_j_ii;
  real_T c48_test;
  int32_T c48_f_k;
  int32_T c48_g_k;
  int32_T c48_ixstart;
  int32_T c48_d_jj;
  real_T c48_mtmp;
  real_T c48_t1;
  real_T c48_b_t1;
  int32_T c48_ix;
  int32_T c48_e_jj;
  int32_T c48_i148;
  real_T c48_b_f;
  real_T c48_unusedU0;
  real_T c48_ztest;
  real_T c48_cs;
  real_T c48_sn;
  real_T c48_b_cs;
  real_T c48_b_sn;
  int32_T c48_b_ix;
  real_T c48_sm;
  int32_T c48_i149;
  real_T c48_f_A[12];
  real_T c48_smm1;
  real_T c48_emm1;
  real_T c48_sqds;
  real_T c48_b_work[4];
  real_T c48_e_b;
  real_T c48_c;
  real_T c48_shift;
  real_T c48_g;
  boolean_T c48_i_overflow;
  int32_T c48_h_k;
  real_T c48_c_f;
  real_T c48_unusedU1;
  real_T c48_c_cs;
  real_T c48_c_sn;
  real_T c48_d_f;
  real_T c48_unusedU2;
  real_T c48_d_cs;
  real_T c48_d_sn;
  boolean_T exitg1;
  boolean_T exitg2;
  for (c48_i134 = 0; c48_i134 < 12; c48_i134++) {
    c48_b_A[c48_i134] = c48_A[c48_i134];
  }

  for (c48_i135 = 0; c48_i135 < 3; c48_i135++) {
    c48_b_s[c48_i135] = 0.0;
  }

  for (c48_i136 = 0; c48_i136 < 3; c48_i136++) {
    c48_e[c48_i136] = 0.0;
  }

  for (c48_i137 = 0; c48_i137 < 4; c48_i137++) {
    c48_work[c48_i137] = 0.0;
  }

  for (c48_i138 = 0; c48_i138 < 12; c48_i138++) {
    c48_U[c48_i138] = 0.0;
  }

  for (c48_i139 = 0; c48_i139 < 9; c48_i139++) {
    c48_Vf[c48_i139] = 0.0;
  }

  for (c48_q = 0; c48_q < 3; c48_q++) {
    c48_qq = (c48_q + (c48_q << 2)) + 1;
    c48_apply_transform = false;
    if (c48_q + 1 <= 3) {
      for (c48_i140 = 0; c48_i140 < 12; c48_i140++) {
        c48_c_A[c48_i140] = c48_b_A[c48_i140];
      }

      c48_nrm = c48_xnrm2(chartInstance, 4 - c48_q, c48_c_A, c48_qq);
      if (c48_nrm > 0.0) {
        c48_apply_transform = true;
        if (c48_b_A[c48_qq - 1] < 0.0) {
          c48_y = -c48_nrm;
        } else {
          c48_y = c48_nrm;
        }

        c48_b_s[c48_q] = c48_y;
        if (muDoubleScalarAbs(c48_b_s[c48_q]) >= 1.0020841800044864E-292) {
          c48_b_y = 1.0 / c48_b_s[c48_q];
          c48_b_b = (c48_qq - c48_q) + 3;
          c48_c_overflow = ((!(c48_qq > c48_b_b)) && (c48_b_b > 2147483646));
          if (c48_c_overflow) {
            c48_check_forloop_overflow_error(chartInstance, c48_c_overflow);
          }

          for (c48_b_k = c48_qq - 1; c48_b_k + 1 <= c48_b_b; c48_b_k++) {
            c48_b_A[c48_b_k] *= c48_b_y;
          }
        } else {
          c48_b = (c48_qq - c48_q) + 3;
          c48_b_overflow = ((!(c48_qq > c48_b)) && (c48_b > 2147483646));
          if (c48_b_overflow) {
            c48_check_forloop_overflow_error(chartInstance, c48_b_overflow);
          }

          for (c48_k = c48_qq - 1; c48_k + 1 <= c48_b; c48_k++) {
            c48_b_A[c48_k] /= c48_b_s[c48_q];
          }
        }

        c48_b_A[c48_qq - 1]++;
        c48_b_s[c48_q] = -c48_b_s[c48_q];
      } else {
        c48_b_s[c48_q] = 0.0;
      }
    }

    for (c48_jj = c48_q + 1; c48_jj + 1 < 4; c48_jj++) {
      c48_qjj = (c48_q + (c48_jj << 2)) + 1;
      if (c48_apply_transform) {
        for (c48_i141 = 0; c48_i141 < 12; c48_i141++) {
          c48_d_A[c48_i141] = c48_b_A[c48_i141];
        }

        for (c48_i144 = 0; c48_i144 < 12; c48_i144++) {
          c48_e_A[c48_i144] = c48_b_A[c48_i144];
        }

        c48_t = c48_xdotc(chartInstance, 4 - c48_q, c48_d_A, c48_qq, c48_e_A,
                          c48_qjj);
        c48_d1 = -(c48_t / c48_b_A[c48_q + (c48_q << 2)]);
        c48_e_xaxpy(chartInstance, 4 - c48_q, c48_d1, c48_qq, c48_b_A, c48_qjj);
      }

      c48_e[c48_jj] = c48_b_A[c48_qjj - 1];
    }

    if (c48_q + 1 <= 3) {
      for (c48_b_ii = c48_q; c48_b_ii + 1 < 5; c48_b_ii++) {
        c48_U[c48_b_ii + (c48_q << 2)] = c48_b_A[c48_b_ii + (c48_q << 2)];
      }
    }

    if (c48_q + 1 <= 1) {
      for (c48_i142 = 0; c48_i142 < 3; c48_i142++) {
        c48_b_e[c48_i142] = c48_e[c48_i142];
      }

      c48_nrm = c48_b_xnrm2(chartInstance, 2 - c48_q, c48_b_e, c48_q + 2);
      if (c48_nrm == 0.0) {
        c48_e[c48_q] = 0.0;
      } else {
        if (c48_e[c48_q + 1] < 0.0) {
          c48_c_y = -c48_nrm;
        } else {
          c48_c_y = c48_nrm;
        }

        c48_e[c48_q] = c48_c_y;
        c48_a = c48_e[c48_q];
        if (muDoubleScalarAbs(c48_a) >= 1.0020841800044864E-292) {
          c48_d_y = 1.0 / c48_a;
          c48_d_b = 3;
          c48_e_overflow = ((!(c48_q + 2 > c48_d_b)) && (c48_d_b > 2147483646));
          if (c48_e_overflow) {
            c48_check_forloop_overflow_error(chartInstance, c48_e_overflow);
          }

          for (c48_e_k = c48_q + 1; c48_e_k + 1 <= c48_d_b; c48_e_k++) {
            c48_e[c48_e_k] *= c48_d_y;
          }
        } else {
          c48_c_b = 3;
          c48_d_overflow = ((!(c48_q + 2 > c48_c_b)) && (c48_c_b > 2147483646));
          if (c48_d_overflow) {
            c48_check_forloop_overflow_error(chartInstance, c48_d_overflow);
          }

          for (c48_d_k = c48_q + 1; c48_d_k + 1 <= c48_c_b; c48_d_k++) {
            c48_e[c48_d_k] /= c48_a;
          }
        }

        c48_e[c48_q + 1]++;
        c48_e[c48_q] = -c48_e[c48_q];
        if (c48_q + 2 <= 4) {
          for (c48_j_ii = c48_q; c48_j_ii + 2 < 5; c48_j_ii++) {
            c48_work[c48_j_ii + 1] = 0.0;
          }

          for (c48_d_jj = c48_q + 1; c48_d_jj + 1 < 4; c48_d_jj++) {
            for (c48_i148 = 0; c48_i148 < 12; c48_i148++) {
              c48_f_A[c48_i148] = c48_b_A[c48_i148];
            }

            c48_f_xaxpy(chartInstance, 3 - c48_q, c48_e[c48_d_jj], c48_f_A,
                        (c48_q + (c48_d_jj << 2)) + 2, c48_work, c48_q + 2);
          }

          for (c48_e_jj = c48_q + 1; c48_e_jj + 1 < 4; c48_e_jj++) {
            for (c48_i149 = 0; c48_i149 < 4; c48_i149++) {
              c48_b_work[c48_i149] = c48_work[c48_i149];
            }

            c48_g_xaxpy(chartInstance, 3 - c48_q, -c48_e[c48_e_jj] / c48_e[c48_q
                        + 1], c48_b_work, c48_q + 2, c48_b_A, (c48_q + (c48_e_jj
              << 2)) + 2);
          }
        }
      }

      for (c48_f_ii = c48_q + 1; c48_f_ii + 1 < 4; c48_f_ii++) {
        c48_Vf[c48_f_ii + 3 * c48_q] = c48_e[c48_f_ii];
      }
    }
  }

  c48_m = 2;
  c48_e[1] = c48_b_A[9];
  c48_e[2] = 0.0;
  for (c48_b_q = 2; c48_b_q > -1; c48_b_q--) {
    c48_qq = c48_b_q + (c48_b_q << 2);
    if (c48_b_s[c48_b_q] != 0.0) {
      for (c48_b_jj = c48_b_q; c48_b_jj + 2 < 4; c48_b_jj++) {
        c48_qjj = (c48_b_q + ((c48_b_jj + 1) << 2)) + 1;
        for (c48_i143 = 0; c48_i143 < 12; c48_i143++) {
          c48_b_U[c48_i143] = c48_U[c48_i143];
        }

        for (c48_i145 = 0; c48_i145 < 12; c48_i145++) {
          c48_c_U[c48_i145] = c48_U[c48_i145];
        }

        c48_t = c48_xdotc(chartInstance, 4 - c48_b_q, c48_b_U, c48_qq + 1,
                          c48_c_U, c48_qjj);
        c48_d2 = -(c48_t / c48_U[c48_qq]);
        c48_e_xaxpy(chartInstance, 4 - c48_b_q, c48_d2, c48_qq + 1, c48_U,
                    c48_qjj);
      }

      for (c48_c_ii = c48_b_q; c48_c_ii + 1 < 5; c48_c_ii++) {
        c48_U[c48_c_ii + (c48_b_q << 2)] = -c48_U[c48_c_ii + (c48_b_q << 2)];
      }

      c48_U[c48_qq]++;
      c48_overflow = ((!(1 > c48_b_q)) && (c48_b_q > 2147483646));
      if (c48_overflow) {
        c48_check_forloop_overflow_error(chartInstance, c48_overflow);
      }

      for (c48_g_ii = 0; c48_g_ii + 1 <= c48_b_q; c48_g_ii++) {
        c48_U[c48_g_ii + (c48_b_q << 2)] = 0.0;
      }
    } else {
      for (c48_ii = 0; c48_ii < 4; c48_ii++) {
        c48_U[c48_ii + (c48_b_q << 2)] = 0.0;
      }

      c48_U[c48_qq] = 1.0;
    }
  }

  for (c48_c_q = 2; c48_c_q > -1; c48_c_q--) {
    if ((c48_c_q + 1 <= 1) && (c48_e[c48_c_q] != 0.0)) {
      c48_qp1q = (c48_c_q + 3 * c48_c_q) + 2;
      for (c48_c_jj = c48_c_q; c48_c_jj + 2 < 4; c48_c_jj++) {
        c48_qp1jj = (c48_c_q + 3 * (c48_c_jj + 1)) + 2;
        for (c48_i146 = 0; c48_i146 < 9; c48_i146++) {
          c48_b_Vf[c48_i146] = c48_Vf[c48_i146];
        }

        for (c48_i147 = 0; c48_i147 < 9; c48_i147++) {
          c48_c_Vf[c48_i147] = c48_Vf[c48_i147];
        }

        c48_t = c48_b_xdotc(chartInstance, 2 - c48_c_q, c48_b_Vf, c48_qp1q,
                            c48_c_Vf, c48_qp1jj);
        c48_d3 = -(c48_t / c48_Vf[c48_qp1q - 1]);
        c48_h_xaxpy(chartInstance, 2 - c48_c_q, c48_d3, c48_qp1q, c48_Vf,
                    c48_qp1jj);
      }
    }

    for (c48_d_ii = 0; c48_d_ii < 3; c48_d_ii++) {
      c48_Vf[c48_d_ii + 3 * c48_c_q] = 0.0;
    }

    c48_Vf[c48_c_q + 3 * c48_c_q] = 1.0;
  }

  for (c48_d_q = 0; c48_d_q < 3; c48_d_q++) {
    if (c48_b_s[c48_d_q] != 0.0) {
      c48_rt = muDoubleScalarAbs(c48_b_s[c48_d_q]);
      c48_r = c48_b_s[c48_d_q] / c48_rt;
      c48_b_s[c48_d_q] = c48_rt;
      if (c48_d_q + 1 < 3) {
        c48_e[c48_d_q] /= c48_r;
      }

      if (c48_d_q + 1 <= 4) {
        c48_c_xscal(chartInstance, c48_r, c48_U, 1 + (c48_d_q << 2));
      }
    }

    if ((c48_d_q + 1 < 3) && (c48_e[c48_d_q] != 0.0)) {
      c48_rt = muDoubleScalarAbs(c48_e[c48_d_q]);
      c48_r = c48_rt / c48_e[c48_d_q];
      c48_e[c48_d_q] = c48_rt;
      c48_b_s[c48_d_q + 1] *= c48_r;
      c48_d_xscal(chartInstance, c48_r, c48_Vf, 1 + 3 * (c48_d_q + 1));
    }
  }

  c48_iter = 0.0;
  c48_snorm = 0.0;
  for (c48_e_ii = 0; c48_e_ii < 3; c48_e_ii++) {
    c48_snorm = muDoubleScalarMax(c48_snorm, muDoubleScalarMax(muDoubleScalarAbs
      (c48_b_s[c48_e_ii]), muDoubleScalarAbs(c48_e[c48_e_ii])));
  }

  exitg1 = false;
  while ((!exitg1) && (c48_m + 1 > 0)) {
    if (c48_iter >= 75.0) {
      c48_b_error(chartInstance);
      exitg1 = true;
    } else {
      c48_e_q = c48_m;
      c48_h_ii = c48_m;
      exitg2 = false;
      while ((!exitg2) && (c48_h_ii > -1)) {
        c48_e_q = c48_h_ii;
        if (c48_h_ii == 0) {
          exitg2 = true;
        } else {
          c48_ztest0 = muDoubleScalarAbs(c48_e[c48_h_ii - 1]);
          if ((c48_ztest0 <= 2.2204460492503131E-16 * (muDoubleScalarAbs
                (c48_b_s[c48_h_ii - 1]) + muDoubleScalarAbs(c48_b_s[c48_h_ii])))
              || (c48_ztest0 <= 1.0020841800044864E-292) || ((c48_iter > 20.0) &&
               (c48_ztest0 <= 2.2204460492503131E-16 * c48_snorm))) {
            c48_e[c48_h_ii - 1] = 0.0;
            exitg2 = true;
          } else {
            c48_h_ii--;
          }
        }
      }

      if (c48_e_q == c48_m) {
        c48_kase = 4.0;
      } else {
        c48_qs = c48_m + 1;
        c48_f_overflow = ((!(c48_m + 1 < c48_e_q)) && (c48_e_q < -2147483647));
        if (c48_f_overflow) {
          c48_check_forloop_overflow_error(chartInstance, c48_f_overflow);
        }

        c48_i_ii = c48_m + 1;
        exitg2 = false;
        while ((!exitg2) && (c48_i_ii >= c48_e_q)) {
          c48_qs = c48_i_ii;
          if (c48_i_ii == c48_e_q) {
            exitg2 = true;
          } else {
            c48_test = 0.0;
            if (c48_i_ii < c48_m + 1) {
              c48_test = muDoubleScalarAbs(c48_e[c48_i_ii - 1]);
            }

            if (c48_i_ii > c48_e_q + 1) {
              c48_test += muDoubleScalarAbs(c48_e[c48_i_ii - 2]);
            }

            c48_ztest = muDoubleScalarAbs(c48_b_s[c48_i_ii - 1]);
            if ((c48_ztest <= 2.2204460492503131E-16 * c48_test) || (c48_ztest <=
                 1.0020841800044864E-292)) {
              c48_b_s[c48_i_ii - 1] = 0.0;
              exitg2 = true;
            } else {
              c48_i_ii--;
            }
          }
        }

        if (c48_qs == c48_e_q) {
          c48_kase = 3.0;
        } else if (c48_qs == c48_m + 1) {
          c48_kase = 1.0;
        } else {
          c48_kase = 2.0;
          c48_e_q = c48_qs;
        }
      }

      c48_e_q++;
      switch ((int32_T)c48_kase) {
       case 1:
        c48_f = c48_e[c48_m - 1];
        c48_e[c48_m - 1] = 0.0;
        c48_g_overflow = ((!(c48_m < c48_e_q)) && (c48_e_q < -2147483647));
        if (c48_g_overflow) {
          c48_check_forloop_overflow_error(chartInstance, c48_g_overflow);
        }

        for (c48_f_k = c48_m - 2; c48_f_k + 2 >= c48_e_q; c48_f_k--) {
          c48_t1 = c48_b_s[c48_f_k + 1];
          c48_b_f = c48_f;
          c48_b_xrotg(chartInstance, &c48_t1, &c48_b_f, &c48_cs, &c48_sn);
          c48_f = c48_b_f;
          c48_b_s[c48_f_k + 1] = c48_t1;
          if (c48_f_k + 2 > c48_e_q) {
            c48_f = -c48_sn * c48_e[c48_f_k];
            c48_e[c48_f_k] *= c48_cs;
          }

          c48_c_xrot(chartInstance, c48_Vf, 1 + 3 * (c48_f_k + 1), 1 + 3 * c48_m,
                     c48_cs, c48_sn);
        }
        break;

       case 2:
        c48_f = c48_e[c48_e_q - 2];
        c48_e[c48_e_q - 2] = 0.0;
        c48_h_overflow = ((!(c48_e_q > c48_m + 1)) && (c48_m + 1 > 2147483646));
        if (c48_h_overflow) {
          c48_check_forloop_overflow_error(chartInstance, c48_h_overflow);
        }

        for (c48_g_k = c48_e_q - 1; c48_g_k + 1 <= c48_m + 1; c48_g_k++) {
          c48_b_t1 = c48_b_s[c48_g_k];
          c48_unusedU0 = c48_f;
          c48_b_xrotg(chartInstance, &c48_b_t1, &c48_unusedU0, &c48_b_cs,
                      &c48_b_sn);
          c48_b_s[c48_g_k] = c48_b_t1;
          c48_f = -c48_b_sn * c48_e[c48_g_k];
          c48_e[c48_g_k] *= c48_b_cs;
          c48_d_xrot(chartInstance, c48_U, 1 + (c48_g_k << 2), 1 + ((c48_e_q - 2)
                      << 2), c48_b_cs, c48_b_sn);
        }
        break;

       case 3:
        c48_varargin_1[0] = muDoubleScalarAbs(c48_b_s[c48_m]);
        c48_varargin_1[1] = muDoubleScalarAbs(c48_b_s[c48_m - 1]);
        c48_varargin_1[2] = muDoubleScalarAbs(c48_e[c48_m - 1]);
        c48_varargin_1[3] = muDoubleScalarAbs(c48_b_s[c48_e_q - 1]);
        c48_varargin_1[4] = muDoubleScalarAbs(c48_e[c48_e_q - 1]);
        c48_ixstart = 1;
        c48_mtmp = c48_varargin_1[0];
        if (muDoubleScalarIsNaN(c48_varargin_1[0])) {
          c48_ix = 1;
          exitg2 = false;
          while ((!exitg2) && (c48_ix + 1 < 6)) {
            c48_ixstart = c48_ix + 1;
            if (!muDoubleScalarIsNaN(c48_varargin_1[c48_ix])) {
              c48_mtmp = c48_varargin_1[c48_ix];
              exitg2 = true;
            } else {
              c48_ix++;
            }
          }
        }

        if (c48_ixstart < 5) {
          for (c48_b_ix = c48_ixstart; c48_b_ix + 1 < 6; c48_b_ix++) {
            if (c48_varargin_1[c48_b_ix] > c48_mtmp) {
              c48_mtmp = c48_varargin_1[c48_b_ix];
            }
          }
        }

        c48_sm = c48_b_s[c48_m] / c48_mtmp;
        c48_smm1 = c48_b_s[c48_m - 1] / c48_mtmp;
        c48_emm1 = c48_e[c48_m - 1] / c48_mtmp;
        c48_sqds = c48_b_s[c48_e_q - 1] / c48_mtmp;
        c48_e_b = ((c48_smm1 + c48_sm) * (c48_smm1 - c48_sm) + c48_emm1 *
                   c48_emm1) / 2.0;
        c48_c = c48_sm * c48_emm1;
        c48_c *= c48_c;
        if ((c48_e_b != 0.0) || (c48_c != 0.0)) {
          c48_shift = c48_e_b * c48_e_b + c48_c;
          c48_b_sqrt(chartInstance, &c48_shift);
          if (c48_e_b < 0.0) {
            c48_shift = -c48_shift;
          }

          c48_shift = c48_c / (c48_e_b + c48_shift);
        } else {
          c48_shift = 0.0;
        }

        c48_f = (c48_sqds + c48_sm) * (c48_sqds - c48_sm) + c48_shift;
        c48_g = c48_sqds * (c48_e[c48_e_q - 1] / c48_mtmp);
        c48_i_overflow = ((!(c48_e_q > c48_m)) && (c48_m > 2147483646));
        if (c48_i_overflow) {
          c48_check_forloop_overflow_error(chartInstance, c48_i_overflow);
        }

        for (c48_h_k = c48_e_q; c48_h_k <= c48_m; c48_h_k++) {
          c48_c_f = c48_f;
          c48_unusedU1 = c48_g;
          c48_b_xrotg(chartInstance, &c48_c_f, &c48_unusedU1, &c48_c_cs,
                      &c48_c_sn);
          if (c48_h_k > c48_e_q) {
            c48_e[c48_h_k - 2] = c48_c_f;
          }

          c48_f = c48_c_cs * c48_b_s[c48_h_k - 1] + c48_c_sn * c48_e[c48_h_k - 1];
          c48_e[c48_h_k - 1] = c48_c_cs * c48_e[c48_h_k - 1] - c48_c_sn *
            c48_b_s[c48_h_k - 1];
          c48_g = c48_c_sn * c48_b_s[c48_h_k];
          c48_b_s[c48_h_k] *= c48_c_cs;
          c48_c_xrot(chartInstance, c48_Vf, 1 + 3 * (c48_h_k - 1), 1 + 3 *
                     c48_h_k, c48_c_cs, c48_c_sn);
          c48_d_f = c48_f;
          c48_unusedU2 = c48_g;
          c48_b_xrotg(chartInstance, &c48_d_f, &c48_unusedU2, &c48_d_cs,
                      &c48_d_sn);
          c48_b_s[c48_h_k - 1] = c48_d_f;
          c48_f = c48_d_cs * c48_e[c48_h_k - 1] + c48_d_sn * c48_b_s[c48_h_k];
          c48_b_s[c48_h_k] = -c48_d_sn * c48_e[c48_h_k - 1] + c48_d_cs *
            c48_b_s[c48_h_k];
          c48_g = c48_d_sn * c48_e[c48_h_k];
          c48_e[c48_h_k] *= c48_d_cs;
          if (c48_h_k < 4) {
            c48_d_xrot(chartInstance, c48_U, 1 + ((c48_h_k - 1) << 2), 1 +
                       (c48_h_k << 2), c48_d_cs, c48_d_sn);
          }
        }

        c48_e[c48_m - 1] = c48_f;
        c48_iter++;
        break;

       default:
        if (c48_b_s[c48_e_q - 1] < 0.0) {
          c48_b_s[c48_e_q - 1] = -c48_b_s[c48_e_q - 1];
          c48_d_xscal(chartInstance, -1.0, c48_Vf, 1 + 3 * (c48_e_q - 1));
        }

        c48_qp1 = c48_e_q;
        while ((c48_e_q < 3) && (c48_b_s[c48_e_q - 1] < c48_b_s[c48_qp1])) {
          c48_rt = c48_b_s[c48_e_q - 1];
          c48_b_s[c48_e_q - 1] = c48_b_s[c48_qp1];
          c48_b_s[c48_qp1] = c48_rt;
          if (c48_e_q < 3) {
            c48_c_xswap(chartInstance, c48_Vf, 1 + 3 * (c48_e_q - 1), 1 + 3 *
                        c48_e_q);
          }

          if (c48_e_q < 4) {
            c48_d_xswap(chartInstance, c48_U, 1 + ((c48_e_q - 1) << 2), 1 +
                        (c48_e_q << 2));
          }

          c48_e_q = c48_qp1 + 1;
          c48_qp1++;
        }

        c48_iter = 0.0;
        c48_m--;
        break;
      }
    }
  }

  for (c48_c_k = 0; c48_c_k < 3; c48_c_k++) {
    c48_s[c48_c_k] = c48_b_s[c48_c_k];
  }

  c48_j = 0;
  for (c48_b_j = 0; c48_b_j < 3; c48_b_j++) {
    for (c48_i = 0; c48_i < 3; c48_i++) {
      c48_V[c48_i + c48_j] = c48_Vf[c48_i + c48_j];
    }

    c48_j += 3;
  }
}

static real_T c48_xnrm2(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_x[12], int32_T c48_ix0)
{
  real_T c48_y;
  real_T c48_scale;
  int32_T c48_kend;
  boolean_T c48_overflow;
  int32_T c48_k;
  real_T c48_absxk;
  real_T c48_t;
  c48_y = 0.0;
  if (c48_n < 1) {
  } else if (c48_n == 1) {
    c48_y = muDoubleScalarAbs(c48_x[c48_ix0 - 1]);
  } else {
    c48_scale = 3.3121686421112381E-170;
    c48_kend = (c48_ix0 + c48_n) - 1;
    c48_overflow = ((!(c48_ix0 > c48_kend)) && (c48_kend > 2147483646));
    if (c48_overflow) {
      c48_check_forloop_overflow_error(chartInstance, c48_overflow);
    }

    for (c48_k = c48_ix0; c48_k <= c48_kend; c48_k++) {
      c48_absxk = muDoubleScalarAbs(c48_x[c48_k - 1]);
      if (c48_absxk > c48_scale) {
        c48_t = c48_scale / c48_absxk;
        c48_y = 1.0 + c48_y * c48_t * c48_t;
        c48_scale = c48_absxk;
      } else {
        c48_t = c48_absxk / c48_scale;
        c48_y += c48_t * c48_t;
      }
    }

    c48_y = c48_scale * muDoubleScalarSqrt(c48_y);
  }

  return c48_y;
}

static real_T c48_sqrt(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x)
{
  real_T c48_b_x;
  c48_b_x = c48_x;
  c48_b_sqrt(chartInstance, &c48_b_x);
  return c48_b_x;
}

static void c48_error(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance)
{
  const mxArray *c48_y = NULL;
  static char_T c48_cv0[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  const mxArray *c48_b_y = NULL;
  static char_T c48_cv1[4] = { 's', 'q', 'r', 't' };

  (void)chartInstance;
  c48_y = NULL;
  sf_mex_assign(&c48_y, sf_mex_create("y", c48_cv0, 10, 0U, 1U, 0U, 2, 1, 30),
                false);
  c48_b_y = NULL;
  sf_mex_assign(&c48_b_y, sf_mex_create("y", c48_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    2U, 14, c48_y, 14, c48_b_y));
}

static void c48_check_forloop_overflow_error
  (SFc48_HexrotorDynamicModelInstanceStruct *chartInstance, boolean_T
   c48_overflow)
{
  const mxArray *c48_y = NULL;
  static char_T c48_cv2[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c48_b_y = NULL;
  static char_T c48_cv3[5] = { 'i', 'n', 't', '3', '2' };

  (void)chartInstance;
  if (!c48_overflow) {
  } else {
    c48_y = NULL;
    sf_mex_assign(&c48_y, sf_mex_create("y", c48_cv2, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c48_b_y = NULL;
    sf_mex_assign(&c48_b_y, sf_mex_create("y", c48_cv3, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                      sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message",
      1U, 2U, 14, c48_y, 14, c48_b_y));
  }
}

static real_T c48_xdotc(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_x[12], int32_T c48_ix0, real_T c48_y[12], int32_T
  c48_iy0)
{
  real_T c48_d;
  int32_T c48_ix;
  int32_T c48_iy;
  boolean_T c48_overflow;
  int32_T c48_k;
  c48_d = 0.0;
  if (c48_n < 1) {
  } else {
    c48_ix = c48_ix0 - 1;
    c48_iy = c48_iy0 - 1;
    c48_overflow = ((!(1 > c48_n)) && (c48_n > 2147483646));
    if (c48_overflow) {
      c48_check_forloop_overflow_error(chartInstance, c48_overflow);
    }

    for (c48_k = 1; c48_k <= c48_n; c48_k++) {
      c48_d += c48_x[c48_ix] * c48_y[c48_iy];
      c48_ix++;
      c48_iy++;
    }
  }

  return c48_d;
}

static void c48_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                      int32_T c48_n, real_T c48_a, int32_T c48_ix0, real_T
                      c48_y[12], int32_T c48_iy0, real_T c48_b_y[12])
{
  int32_T c48_i150;
  for (c48_i150 = 0; c48_i150 < 12; c48_i150++) {
    c48_b_y[c48_i150] = c48_y[c48_i150];
  }

  c48_e_xaxpy(chartInstance, c48_n, c48_a, c48_ix0, c48_b_y, c48_iy0);
}

static real_T c48_b_xnrm2(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, int32_T c48_n, real_T c48_x[3], int32_T c48_ix0)
{
  real_T c48_y;
  real_T c48_scale;
  int32_T c48_kend;
  boolean_T c48_overflow;
  int32_T c48_k;
  real_T c48_absxk;
  real_T c48_t;
  c48_y = 0.0;
  if (c48_n < 1) {
  } else if (c48_n == 1) {
    c48_y = muDoubleScalarAbs(c48_x[c48_ix0 - 1]);
  } else {
    c48_scale = 3.3121686421112381E-170;
    c48_kend = (c48_ix0 + c48_n) - 1;
    c48_overflow = ((!(c48_ix0 > c48_kend)) && (c48_kend > 2147483646));
    if (c48_overflow) {
      c48_check_forloop_overflow_error(chartInstance, c48_overflow);
    }

    for (c48_k = c48_ix0; c48_k <= c48_kend; c48_k++) {
      c48_absxk = muDoubleScalarAbs(c48_x[c48_k - 1]);
      if (c48_absxk > c48_scale) {
        c48_t = c48_scale / c48_absxk;
        c48_y = 1.0 + c48_y * c48_t * c48_t;
        c48_scale = c48_absxk;
      } else {
        c48_t = c48_absxk / c48_scale;
        c48_y += c48_t * c48_t;
      }
    }

    c48_y = c48_scale * muDoubleScalarSqrt(c48_y);
  }

  return c48_y;
}

static void c48_b_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, real_T c48_x[12], int32_T c48_ix0, real_T c48_y[4],
  int32_T c48_iy0, real_T c48_b_y[4])
{
  int32_T c48_i151;
  int32_T c48_i152;
  real_T c48_b_x[12];
  for (c48_i151 = 0; c48_i151 < 4; c48_i151++) {
    c48_b_y[c48_i151] = c48_y[c48_i151];
  }

  for (c48_i152 = 0; c48_i152 < 12; c48_i152++) {
    c48_b_x[c48_i152] = c48_x[c48_i152];
  }

  c48_f_xaxpy(chartInstance, c48_n, c48_a, c48_b_x, c48_ix0, c48_b_y, c48_iy0);
}

static void c48_c_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, real_T c48_x[4], int32_T c48_ix0, real_T c48_y[12],
  int32_T c48_iy0, real_T c48_b_y[12])
{
  int32_T c48_i153;
  int32_T c48_i154;
  real_T c48_b_x[4];
  for (c48_i153 = 0; c48_i153 < 12; c48_i153++) {
    c48_b_y[c48_i153] = c48_y[c48_i153];
  }

  for (c48_i154 = 0; c48_i154 < 4; c48_i154++) {
    c48_b_x[c48_i154] = c48_x[c48_i154];
  }

  c48_g_xaxpy(chartInstance, c48_n, c48_a, c48_b_x, c48_ix0, c48_b_y, c48_iy0);
}

static real_T c48_b_xdotc(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, int32_T c48_n, real_T c48_x[9], int32_T c48_ix0, real_T c48_y
  [9], int32_T c48_iy0)
{
  real_T c48_d;
  int32_T c48_ix;
  int32_T c48_iy;
  boolean_T c48_overflow;
  int32_T c48_k;
  c48_d = 0.0;
  if (c48_n < 1) {
  } else {
    c48_ix = c48_ix0 - 1;
    c48_iy = c48_iy0 - 1;
    c48_overflow = ((!(1 > c48_n)) && (c48_n > 2147483646));
    if (c48_overflow) {
      c48_check_forloop_overflow_error(chartInstance, c48_overflow);
    }

    for (c48_k = 1; c48_k <= c48_n; c48_k++) {
      c48_d += c48_x[c48_ix] * c48_y[c48_iy];
      c48_ix++;
      c48_iy++;
    }
  }

  return c48_d;
}

static void c48_d_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, int32_T c48_ix0, real_T c48_y[9], int32_T c48_iy0,
  real_T c48_b_y[9])
{
  int32_T c48_i155;
  for (c48_i155 = 0; c48_i155 < 9; c48_i155++) {
    c48_b_y[c48_i155] = c48_y[c48_i155];
  }

  c48_h_xaxpy(chartInstance, c48_n, c48_a, c48_ix0, c48_b_y, c48_iy0);
}

static void c48_xscal(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                      real_T c48_a, real_T c48_x[12], int32_T c48_ix0, real_T
                      c48_b_x[12])
{
  int32_T c48_i156;
  for (c48_i156 = 0; c48_i156 < 12; c48_i156++) {
    c48_b_x[c48_i156] = c48_x[c48_i156];
  }

  c48_c_xscal(chartInstance, c48_a, c48_b_x, c48_ix0);
}

static void c48_b_xscal(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_a, real_T c48_x[9], int32_T c48_ix0, real_T c48_b_x[9])
{
  int32_T c48_i157;
  for (c48_i157 = 0; c48_i157 < 9; c48_i157++) {
    c48_b_x[c48_i157] = c48_x[c48_i157];
  }

  c48_d_xscal(chartInstance, c48_a, c48_b_x, c48_ix0);
}

static void c48_b_error(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance)
{
  const mxArray *c48_y = NULL;
  static char_T c48_cv4[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 's', 'v', 'd', '_', 'N', 'o', 'C', 'o', 'n', 'v', 'e', 'r',
    'g', 'e', 'n', 'c', 'e' };

  (void)chartInstance;
  c48_y = NULL;
  sf_mex_assign(&c48_y, sf_mex_create("y", c48_cv4, 10, 0U, 1U, 0U, 2, 1, 30),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    1U, 14, c48_y));
}

static void c48_xrotg(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                      real_T c48_a, real_T c48_b, real_T *c48_b_a, real_T
                      *c48_b_b, real_T *c48_c, real_T *c48_s)
{
  *c48_b_a = c48_a;
  *c48_b_b = c48_b;
  c48_b_xrotg(chartInstance, c48_b_a, c48_b_b, c48_c, c48_s);
}

static void c48_xrot(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                     real_T c48_x[9], int32_T c48_ix0, int32_T c48_iy0, real_T
                     c48_c, real_T c48_s, real_T c48_b_x[9])
{
  int32_T c48_i158;
  for (c48_i158 = 0; c48_i158 < 9; c48_i158++) {
    c48_b_x[c48_i158] = c48_x[c48_i158];
  }

  c48_c_xrot(chartInstance, c48_b_x, c48_ix0, c48_iy0, c48_c, c48_s);
}

static void c48_b_xrot(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x[12], int32_T c48_ix0, int32_T c48_iy0, real_T c48_c, real_T c48_s,
  real_T c48_b_x[12])
{
  int32_T c48_i159;
  for (c48_i159 = 0; c48_i159 < 12; c48_i159++) {
    c48_b_x[c48_i159] = c48_x[c48_i159];
  }

  c48_d_xrot(chartInstance, c48_b_x, c48_ix0, c48_iy0, c48_c, c48_s);
}

static void c48_xswap(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
                      real_T c48_x[9], int32_T c48_ix0, int32_T c48_iy0, real_T
                      c48_b_x[9])
{
  int32_T c48_i160;
  for (c48_i160 = 0; c48_i160 < 9; c48_i160++) {
    c48_b_x[c48_i160] = c48_x[c48_i160];
  }

  c48_c_xswap(chartInstance, c48_b_x, c48_ix0, c48_iy0);
}

static void c48_b_xswap(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x[12], int32_T c48_ix0, int32_T c48_iy0, real_T c48_b_x[12])
{
  int32_T c48_i161;
  for (c48_i161 = 0; c48_i161 < 12; c48_i161++) {
    c48_b_x[c48_i161] = c48_x[c48_i161];
  }

  c48_d_xswap(chartInstance, c48_b_x, c48_ix0, c48_iy0);
}

static const mxArray *c48_g_sf_marshallOut(void *chartInstanceVoid, void
  *c48_inData)
{
  const mxArray *c48_mxArrayOutData;
  int32_T c48_u;
  const mxArray *c48_y = NULL;
  SFc48_HexrotorDynamicModelInstanceStruct *chartInstance;
  chartInstance = (SFc48_HexrotorDynamicModelInstanceStruct *)chartInstanceVoid;
  c48_mxArrayOutData = NULL;
  c48_mxArrayOutData = NULL;
  c48_u = *(int32_T *)c48_inData;
  c48_y = NULL;
  sf_mex_assign(&c48_y, sf_mex_create("y", &c48_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c48_mxArrayOutData, c48_y, false);
  return c48_mxArrayOutData;
}

static int32_T c48_g_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_u, const emlrtMsgIdentifier *c48_parentId)
{
  int32_T c48_y;
  int32_T c48_i162;
  (void)chartInstance;
  sf_mex_import(c48_parentId, sf_mex_dup(c48_u), &c48_i162, 1, 6, 0U, 0, 0U, 0);
  c48_y = c48_i162;
  sf_mex_destroy(&c48_u);
  return c48_y;
}

static void c48_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c48_mxArrayInData, const char_T *c48_varName, void *c48_outData)
{
  const mxArray *c48_b_sfEvent;
  emlrtMsgIdentifier c48_thisId;
  int32_T c48_y;
  SFc48_HexrotorDynamicModelInstanceStruct *chartInstance;
  chartInstance = (SFc48_HexrotorDynamicModelInstanceStruct *)chartInstanceVoid;
  c48_b_sfEvent = sf_mex_dup(c48_mxArrayInData);
  c48_thisId.fIdentifier = (const char *)c48_varName;
  c48_thisId.fParent = NULL;
  c48_thisId.bParentIsCell = false;
  c48_y = c48_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c48_b_sfEvent),
    &c48_thisId);
  sf_mex_destroy(&c48_b_sfEvent);
  *(int32_T *)c48_outData = c48_y;
  sf_mex_destroy(&c48_mxArrayInData);
}

static uint8_T c48_h_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_b_is_active_c48_HexrotorDynamicModel, const
  char_T *c48_identifier)
{
  uint8_T c48_y;
  emlrtMsgIdentifier c48_thisId;
  c48_thisId.fIdentifier = (const char *)c48_identifier;
  c48_thisId.fParent = NULL;
  c48_thisId.bParentIsCell = false;
  c48_y = c48_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c48_b_is_active_c48_HexrotorDynamicModel), &c48_thisId);
  sf_mex_destroy(&c48_b_is_active_c48_HexrotorDynamicModel);
  return c48_y;
}

static uint8_T c48_i_emlrt_marshallIn(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance, const mxArray *c48_u, const emlrtMsgIdentifier *c48_parentId)
{
  uint8_T c48_y;
  uint8_T c48_u0;
  (void)chartInstance;
  sf_mex_import(c48_parentId, sf_mex_dup(c48_u), &c48_u0, 1, 3, 0U, 0, 0U, 0);
  c48_y = c48_u0;
  sf_mex_destroy(&c48_u);
  return c48_y;
}

static void c48_b_sqrt(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T *c48_x)
{
  boolean_T c48_p;
  c48_p = (*c48_x < 0.0);
  if (c48_p) {
    c48_error(chartInstance);
  }

  *c48_x = muDoubleScalarSqrt(*c48_x);
}

static void c48_e_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, int32_T c48_ix0, real_T c48_y[12], int32_T
  c48_iy0)
{
  int32_T c48_ix;
  int32_T c48_iy;
  boolean_T c48_overflow;
  int32_T c48_k;
  if ((c48_n < 1) || (c48_a == 0.0)) {
  } else {
    c48_ix = c48_ix0;
    c48_iy = c48_iy0 - 1;
    c48_overflow = ((!(0 > c48_n - 1)) && (c48_n - 1 > 2147483646));
    if (c48_overflow) {
      c48_check_forloop_overflow_error(chartInstance, c48_overflow);
    }

    for (c48_k = 0; c48_k < c48_n; c48_k++) {
      c48_y[c48_iy] += c48_a * c48_y[c48_ix - 1];
      c48_ix++;
      c48_iy++;
    }
  }
}

static void c48_f_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, real_T c48_x[12], int32_T c48_ix0, real_T c48_y[4],
  int32_T c48_iy0)
{
  int32_T c48_ix;
  int32_T c48_iy;
  boolean_T c48_overflow;
  int32_T c48_k;
  if ((c48_n < 1) || (c48_a == 0.0)) {
  } else {
    c48_ix = c48_ix0;
    c48_iy = c48_iy0 - 1;
    c48_overflow = ((!(0 > c48_n - 1)) && (c48_n - 1 > 2147483646));
    if (c48_overflow) {
      c48_check_forloop_overflow_error(chartInstance, c48_overflow);
    }

    for (c48_k = 0; c48_k < c48_n; c48_k++) {
      c48_y[c48_iy] += c48_a * c48_x[c48_ix - 1];
      c48_ix++;
      c48_iy++;
    }
  }
}

static void c48_g_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, real_T c48_x[4], int32_T c48_ix0, real_T c48_y[12],
  int32_T c48_iy0)
{
  int32_T c48_ix;
  int32_T c48_iy;
  boolean_T c48_overflow;
  int32_T c48_k;
  if ((c48_n < 1) || (c48_a == 0.0)) {
  } else {
    c48_ix = c48_ix0;
    c48_iy = c48_iy0 - 1;
    c48_overflow = ((!(0 > c48_n - 1)) && (c48_n - 1 > 2147483646));
    if (c48_overflow) {
      c48_check_forloop_overflow_error(chartInstance, c48_overflow);
    }

    for (c48_k = 0; c48_k < c48_n; c48_k++) {
      c48_y[c48_iy] += c48_a * c48_x[c48_ix - 1];
      c48_ix++;
      c48_iy++;
    }
  }
}

static void c48_h_xaxpy(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  int32_T c48_n, real_T c48_a, int32_T c48_ix0, real_T c48_y[9], int32_T c48_iy0)
{
  int32_T c48_ix;
  int32_T c48_iy;
  boolean_T c48_overflow;
  int32_T c48_k;
  if ((c48_n < 1) || (c48_a == 0.0)) {
  } else {
    c48_ix = c48_ix0;
    c48_iy = c48_iy0 - 1;
    c48_overflow = ((!(0 > c48_n - 1)) && (c48_n - 1 > 2147483646));
    if (c48_overflow) {
      c48_check_forloop_overflow_error(chartInstance, c48_overflow);
    }

    for (c48_k = 0; c48_k < c48_n; c48_k++) {
      c48_y[c48_iy] += c48_a * c48_y[c48_ix - 1];
      c48_ix++;
      c48_iy++;
    }
  }
}

static void c48_c_xscal(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_a, real_T c48_x[12], int32_T c48_ix0)
{
  boolean_T c48_overflow;
  int32_T c48_k;
  c48_overflow = ((!(c48_ix0 > c48_ix0 + 3)) && (c48_ix0 + 3 > 2147483646));
  if (c48_overflow) {
    c48_check_forloop_overflow_error(chartInstance, c48_overflow);
  }

  for (c48_k = c48_ix0 - 1; c48_k + 1 <= c48_ix0 + 3; c48_k++) {
    c48_x[c48_k] *= c48_a;
  }
}

static void c48_d_xscal(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_a, real_T c48_x[9], int32_T c48_ix0)
{
  boolean_T c48_overflow;
  int32_T c48_k;
  c48_overflow = ((!(c48_ix0 > c48_ix0 + 2)) && (c48_ix0 + 2 > 2147483646));
  if (c48_overflow) {
    c48_check_forloop_overflow_error(chartInstance, c48_overflow);
  }

  for (c48_k = c48_ix0 - 1; c48_k + 1 <= c48_ix0 + 2; c48_k++) {
    c48_x[c48_k] *= c48_a;
  }
}

static void c48_b_xrotg(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T *c48_a, real_T *c48_b, real_T *c48_c, real_T *c48_s)
{
  real_T c48_b_b;
  real_T c48_b_a;
  real_T c48_b_c;
  real_T c48_b_s;
  (void)chartInstance;
  c48_b_b = *c48_b;
  c48_b_a = *c48_a;
  c48_b_c = 0.0;
  c48_b_s = 0.0;
  drotg(&c48_b_a, &c48_b_b, &c48_b_c, &c48_b_s);
  *c48_a = c48_b_a;
  *c48_b = c48_b_b;
  *c48_c = c48_b_c;
  *c48_s = c48_b_s;
}

static void c48_c_xrot(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x[9], int32_T c48_ix0, int32_T c48_iy0, real_T c48_c, real_T c48_s)
{
  int32_T c48_ix;
  int32_T c48_iy;
  int32_T c48_k;
  real_T c48_temp;
  (void)chartInstance;
  c48_ix = c48_ix0 - 1;
  c48_iy = c48_iy0 - 1;
  for (c48_k = 0; c48_k < 3; c48_k++) {
    c48_temp = c48_c * c48_x[c48_ix] + c48_s * c48_x[c48_iy];
    c48_x[c48_iy] = c48_c * c48_x[c48_iy] - c48_s * c48_x[c48_ix];
    c48_x[c48_ix] = c48_temp;
    c48_iy++;
    c48_ix++;
  }
}

static void c48_d_xrot(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x[12], int32_T c48_ix0, int32_T c48_iy0, real_T c48_c, real_T c48_s)
{
  int32_T c48_ix;
  int32_T c48_iy;
  int32_T c48_k;
  real_T c48_temp;
  (void)chartInstance;
  c48_ix = c48_ix0 - 1;
  c48_iy = c48_iy0 - 1;
  for (c48_k = 0; c48_k < 4; c48_k++) {
    c48_temp = c48_c * c48_x[c48_ix] + c48_s * c48_x[c48_iy];
    c48_x[c48_iy] = c48_c * c48_x[c48_iy] - c48_s * c48_x[c48_ix];
    c48_x[c48_ix] = c48_temp;
    c48_iy++;
    c48_ix++;
  }
}

static void c48_c_xswap(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x[9], int32_T c48_ix0, int32_T c48_iy0)
{
  int32_T c48_ix;
  int32_T c48_iy;
  int32_T c48_k;
  real_T c48_temp;
  (void)chartInstance;
  c48_ix = c48_ix0 - 1;
  c48_iy = c48_iy0 - 1;
  for (c48_k = 0; c48_k < 3; c48_k++) {
    c48_temp = c48_x[c48_ix];
    c48_x[c48_ix] = c48_x[c48_iy];
    c48_x[c48_iy] = c48_temp;
    c48_ix++;
    c48_iy++;
  }
}

static void c48_d_xswap(SFc48_HexrotorDynamicModelInstanceStruct *chartInstance,
  real_T c48_x[12], int32_T c48_ix0, int32_T c48_iy0)
{
  int32_T c48_ix;
  int32_T c48_iy;
  int32_T c48_k;
  real_T c48_temp;
  (void)chartInstance;
  c48_ix = c48_ix0 - 1;
  c48_iy = c48_iy0 - 1;
  for (c48_k = 0; c48_k < 4; c48_k++) {
    c48_temp = c48_x[c48_ix];
    c48_x[c48_ix] = c48_x[c48_iy];
    c48_x[c48_iy] = c48_temp;
    c48_ix++;
    c48_iy++;
  }
}

static void init_dsm_address_info(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc48_HexrotorDynamicModelInstanceStruct
  *chartInstance)
{
  chartInstance->c48_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c48_K1 = (real_T (*)[9])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c48_alpha_dot = (real_T (*)[3])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c48_G = (real_T (*)[12])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c48_z1 = (real_T (*)[4])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c48_z2 = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c48_omega_tilde = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c48_eta_tilde = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c48_eps_tilde = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c48_K3 = (real_T (*)[16])ssGetInputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c48_Xsi = (real_T (*)[4])ssGetInputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c48_eta_dot = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c48_eps_dot = (real_T (*)[3])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c48_HexrotorDynamicModel_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3117081937U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3371891523U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(587318126U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1808210609U);
}

mxArray* sf_c48_HexrotorDynamicModel_get_post_codegen_info(void);
mxArray *sf_c48_HexrotorDynamicModel_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("dKrAQz5xTlch6fdgAT53ID");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,9,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      pr[1] = (double)(3);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      pr[1] = (double)(4);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(4);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(4);
      pr[1] = (double)(4);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(4);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c48_HexrotorDynamicModel_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c48_HexrotorDynamicModel_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString("coder.internal.blas.BLASApi"));
  return(mxcell3p);
}

mxArray *sf_c48_HexrotorDynamicModel_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("pre");
  mxArray *fallbackReason = mxCreateString("hasBreakpoints");
  mxArray *hiddenFallbackType = mxCreateString("none");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c48_HexrotorDynamicModel_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c48_HexrotorDynamicModel_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c48_HexrotorDynamicModel(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[5],T\"alpha_dot\",},{M[1],M[15],T\"eps_dot\",},{M[1],M[14],T\"eta_dot\",},{M[8],M[0],T\"is_active_c48_HexrotorDynamicModel\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c48_HexrotorDynamicModel_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc48_HexrotorDynamicModelInstanceStruct *chartInstance =
      (SFc48_HexrotorDynamicModelInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _HexrotorDynamicModelMachineNumber_,
           48,
           1,
           1,
           0,
           12,
           0,
           0,
           0,
           0,
           1,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_HexrotorDynamicModelMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_HexrotorDynamicModelMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _HexrotorDynamicModelMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"K1");
          _SFD_SET_DATA_PROPS(1,1,1,0,"G");
          _SFD_SET_DATA_PROPS(2,1,1,0,"z1");
          _SFD_SET_DATA_PROPS(3,1,1,0,"z2");
          _SFD_SET_DATA_PROPS(4,1,1,0,"omega_tilde");
          _SFD_SET_DATA_PROPS(5,1,1,0,"eta_tilde");
          _SFD_SET_DATA_PROPS(6,1,1,0,"eps_tilde");
          _SFD_SET_DATA_PROPS(7,1,1,0,"K3");
          _SFD_SET_DATA_PROPS(8,1,1,0,"Xsi");
          _SFD_SET_DATA_PROPS(9,2,0,1,"alpha_dot");
          _SFD_SET_DATA_PROPS(10,2,0,1,"eta_dot");
          _SFD_SET_DATA_PROPS(11,2,0,1,"eps_dot");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,696);
        _SFD_CV_INIT_EML_IF(0,1,0,225,242,256,278);
        _SFD_CV_INIT_EML_RELATIONAL(0,1,0,228,242,-1,5);
        _SFD_CV_INIT_SCRIPT(0,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(0,0,"vec2skew",0,-1,86);

        {
          unsigned int dimVector[2];
          dimVector[0]= 3U;
          dimVector[1]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c48_f_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[2];
          dimVector[0]= 3U;
          dimVector[1]= 4U;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c48_e_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 4U;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c48_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c48_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c48_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c48_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c48_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[2];
          dimVector[0]= 4U;
          dimVector[1]= 4U;
          _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c48_d_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 4U;
          _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c48_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c48_sf_marshallOut,(MexInFcnForType)
            c48_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c48_b_sf_marshallOut,(MexInFcnForType)
          c48_b_sf_marshallIn);

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c48_sf_marshallOut,(MexInFcnForType)
            c48_sf_marshallIn);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _HexrotorDynamicModelMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc48_HexrotorDynamicModelInstanceStruct *chartInstance =
      (SFc48_HexrotorDynamicModelInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, (void *)chartInstance->c48_K1);
        _SFD_SET_DATA_VALUE_PTR(9U, (void *)chartInstance->c48_alpha_dot);
        _SFD_SET_DATA_VALUE_PTR(1U, (void *)chartInstance->c48_G);
        _SFD_SET_DATA_VALUE_PTR(2U, (void *)chartInstance->c48_z1);
        _SFD_SET_DATA_VALUE_PTR(3U, (void *)chartInstance->c48_z2);
        _SFD_SET_DATA_VALUE_PTR(4U, (void *)chartInstance->c48_omega_tilde);
        _SFD_SET_DATA_VALUE_PTR(5U, (void *)chartInstance->c48_eta_tilde);
        _SFD_SET_DATA_VALUE_PTR(6U, (void *)chartInstance->c48_eps_tilde);
        _SFD_SET_DATA_VALUE_PTR(7U, (void *)chartInstance->c48_K3);
        _SFD_SET_DATA_VALUE_PTR(8U, (void *)chartInstance->c48_Xsi);
        _SFD_SET_DATA_VALUE_PTR(10U, (void *)chartInstance->c48_eta_dot);
        _SFD_SET_DATA_VALUE_PTR(11U, (void *)chartInstance->c48_eps_dot);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "svuHpgOpEMXQNLVQkRxnpyC";
}

static void sf_opaque_initialize_c48_HexrotorDynamicModel(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc48_HexrotorDynamicModelInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c48_HexrotorDynamicModel
    ((SFc48_HexrotorDynamicModelInstanceStruct*) chartInstanceVar);
  initialize_c48_HexrotorDynamicModel((SFc48_HexrotorDynamicModelInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c48_HexrotorDynamicModel(void *chartInstanceVar)
{
  enable_c48_HexrotorDynamicModel((SFc48_HexrotorDynamicModelInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c48_HexrotorDynamicModel(void *chartInstanceVar)
{
  disable_c48_HexrotorDynamicModel((SFc48_HexrotorDynamicModelInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c48_HexrotorDynamicModel(void *chartInstanceVar)
{
  sf_gateway_c48_HexrotorDynamicModel((SFc48_HexrotorDynamicModelInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c48_HexrotorDynamicModel(SimStruct*
  S)
{
  return get_sim_state_c48_HexrotorDynamicModel
    ((SFc48_HexrotorDynamicModelInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c48_HexrotorDynamicModel(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c48_HexrotorDynamicModel
    ((SFc48_HexrotorDynamicModelInstanceStruct*)sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c48_HexrotorDynamicModel(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc48_HexrotorDynamicModelInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_HexrotorDynamicModel_optimization_info();
    }

    finalize_c48_HexrotorDynamicModel((SFc48_HexrotorDynamicModelInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc48_HexrotorDynamicModel
    ((SFc48_HexrotorDynamicModelInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c48_HexrotorDynamicModel(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c48_HexrotorDynamicModel
      ((SFc48_HexrotorDynamicModelInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c48_HexrotorDynamicModel(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetInputPortDirectFeedThrough(S, 1, 1);
  ssSetInputPortDirectFeedThrough(S, 2, 1);
  ssSetInputPortDirectFeedThrough(S, 3, 1);
  ssSetInputPortDirectFeedThrough(S, 4, 1);
  ssSetInputPortDirectFeedThrough(S, 5, 1);
  ssSetInputPortDirectFeedThrough(S, 6, 1);
  ssSetInputPortDirectFeedThrough(S, 7, 1);
  ssSetInputPortDirectFeedThrough(S, 8, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 1);
  ssSetBlockIsPurelyCombinatorial_wrapper(S, 1);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_HexrotorDynamicModel_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      48);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,48,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 48);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,48);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 8, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,48,9);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,48,3);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=3; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 9; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,48);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(242473632U));
  ssSetChecksum1(S,(1870682002U));
  ssSetChecksum2(S,(1849977281U));
  ssSetChecksum3(S,(3635415832U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c48_HexrotorDynamicModel(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c48_HexrotorDynamicModel(SimStruct *S)
{
  SFc48_HexrotorDynamicModelInstanceStruct *chartInstance;
  chartInstance = (SFc48_HexrotorDynamicModelInstanceStruct *)utMalloc(sizeof
    (SFc48_HexrotorDynamicModelInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc48_HexrotorDynamicModelInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c48_HexrotorDynamicModel;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c48_HexrotorDynamicModel;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c48_HexrotorDynamicModel;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c48_HexrotorDynamicModel;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c48_HexrotorDynamicModel;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c48_HexrotorDynamicModel;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c48_HexrotorDynamicModel;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c48_HexrotorDynamicModel;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c48_HexrotorDynamicModel;
  chartInstance->chartInfo.mdlStart = mdlStart_c48_HexrotorDynamicModel;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c48_HexrotorDynamicModel;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c48_HexrotorDynamicModel(chartInstance);
}

void c48_HexrotorDynamicModel_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c48_HexrotorDynamicModel(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c48_HexrotorDynamicModel(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c48_HexrotorDynamicModel(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c48_HexrotorDynamicModel_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
