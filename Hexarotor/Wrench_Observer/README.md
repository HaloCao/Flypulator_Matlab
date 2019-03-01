# Matlab/Simulink Wrench Observer Simulation

## Files
- /simulation_data: .mat, .c, .h, .mexw64, .tlc 
- `*.slx`: Simulink Model. Requires previous execution of `parameter.m`.
- `parameter.m`: Script to set up model parameters, uncertainty parameters and observer gains for simulation.
- `vec2skew.m`: Function to convert vector to skew symmetric matrix and reverse direction.
- `calc_M_C.m`: Function to compute inertia and Coriolis matrices.
- `G_symb.m`: Function to compute gravitational vector
- `EKF.m`: Function to compute the matrices for EKF


## Usage
The software can be found on the enclosed CD. The required software environment is \emph{Matlab/Simulink} R2018b. There is also a model for \emph{Simulink} R2016b provided. The required toolboxes for the simulation are the \emph{Simulink Coder} and the \emph{DSP System Toolbox}. 
Open the \emph{Simulink} model \emph{wrench_observer.slx} (or \emph{wrench_observer_R2016b.slx}) and run the \emph{paramter.m} script. \\
In the \emph{paramter.m} function, \emph{useMeasurementNoise} determines if the measurements are affected by noise, \emph{useWrongCommWrench} specifies the use of an inaccurate wrench input to the observers, and \emph{noise_factor} defines the multiple of the nominal noise values.
The parameters of the momentum-based and hybrid observers can be adapted by changing the gain matrix \emph{K_I}. The EKF's process covariance can be tuned with the variable \emph{noise_factor_EKF}. The factor of the measurement covariance can also be adapted.
In the \emph{Simulink} model, the external wrench can be parameterized in the box \emph{external wrench}. 
In the folder \emph{Functions}, several functions are provided. \emph{calc_M_C.m} computes the inertia and the Coriolis matrices with symbolic variables and writes them into .txt files.
\emph{G_symb.m} calculates the symbolic gravitation vector. \emph{EKF.m} computes the linearized and discretized matrices required for the EKF algorithm. \emph{vec2skew.m} is a function computing the skew symmetric matrix of an input matrix.

