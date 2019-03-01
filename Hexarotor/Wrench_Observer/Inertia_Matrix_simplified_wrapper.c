

/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif

/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include "Inertia_Matrix.h"
#include "Inertia_Matrix_initialize.h"
#include "Inertia_Matrix_terminate.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rtwtypes.h"
#include "Inertia_Matrix_types.h"
#include "rtGetNaN.h"
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1
#define y_width 9
/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */

/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output functions
 *
 */
void Inertia_Matrix_simplified_Outputs_wrapper(const real_T *phi,
			const real_T *the,
			const real_T *psi,
			const real_T *theta1,
			const real_T *theta2,
			const real_T *theta3,
			real_T *M)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
/* This sample sets the output equal to the input
      y0[0] = u0[0]; 
 For complex signals use: y0[0].re = u0[0].re; 
      y0[0].im = u0[0].im;
      y1[0].re = u1[0].re;
      y1[0].im = u1[0].im;
*/
Inertia_Matrix(phi[0],the[0],psi[0],theta1[0],theta2[0],theta3[0],M);
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}
