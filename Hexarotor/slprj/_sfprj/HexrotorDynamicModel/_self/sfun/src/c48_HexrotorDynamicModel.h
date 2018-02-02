#ifndef __c48_HexrotorDynamicModel_h__
#define __c48_HexrotorDynamicModel_h__

/* Type Definitions */
#ifndef typedef_SFc48_HexrotorDynamicModelInstanceStruct
#define typedef_SFc48_HexrotorDynamicModelInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c48_sfEvent;
  boolean_T c48_doneDoubleBufferReInit;
  uint8_T c48_is_active_c48_HexrotorDynamicModel;
  void *c48_fEmlrtCtx;
  real_T (*c48_K1)[9];
  real_T (*c48_alpha_dot)[3];
  real_T (*c48_G)[12];
  real_T (*c48_z1)[4];
  real_T (*c48_z2)[3];
  real_T (*c48_omega_tilde)[3];
  real_T *c48_eta_tilde;
  real_T (*c48_eps_tilde)[3];
  real_T (*c48_K3)[16];
  real_T (*c48_Xsi)[4];
  real_T *c48_eta_dot;
  real_T (*c48_eps_dot)[3];
} SFc48_HexrotorDynamicModelInstanceStruct;

#endif                                 /*typedef_SFc48_HexrotorDynamicModelInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c48_HexrotorDynamicModel_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c48_HexrotorDynamicModel_get_check_sum(mxArray *plhs[]);
extern void c48_HexrotorDynamicModel_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
