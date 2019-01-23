# Matlab/Simulink Hexarotor Simulation

## Files
- /simulation_data: .mat and .csv files of Matlab and Gazebo simulation and scripts to create plots.
- `*.mdl`: Simulink Model of Hexarotor, including Controllers and Trajectory Generators. Requires previous execution of `IdealParameter.m`, `viveParameter.m` or `VOParameter.m`.
- `ParameterIdeal.m`: Script to set up model parameters, uncertainty parameters and controller gains for simulation. Assumes no uncertainties and *no errors* in state estimation.
- `ParameterVIVE.m`: Script to set up model parameters, uncertainty parameters and controller gains for simulation. Assumes parameter uncertanties and errors of *VIVE state estimation*.
- `ParameterVO.m`: Script to set up model parameters, uncertainty parameters and controller gains for simulation. Assumes parameter uncertainties and errors of *Visual Odometry state estimation*.
- `skew2vec.m` and `vec2skew.m`: Functions to convert vector to skew symmetric matrix and reverse direction.
- `Controllability.m`: Script to calculate the rank of the controllability matrix of the linearized model.

## Usage
Open Simulink Model and run one of the parameter setting scripts. The trajectory can be set by adapting the *Trajetory Generator* Block. The controller is chosen by connecting the controller block output u to the *DC Motor Dynamics* Block. External forces and torques can be applied by connecting the blocks *Step 1*/*Step 2*, *Impulse*, or *External Forces and Torques* with the particular input of the Motion Equation block. The output position and attitude can be observed in the scopes at the lower righthand side. The state estimation noise is added in the feedback based on the values set in the parameter scripts. Some useful scripts for plot are stored in /simulation_data/plot_scripts.
