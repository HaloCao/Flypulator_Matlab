# Matlab/Simulink Hexarotor Simulation

## Files
- /simulation_data: .mat and .csv files of Matlab and Gazebo simulation and scripts to create plots.
- `*.slx`: Simulink Model of Hexarotor, including Controllers and Trajectory Generators. 
- `Parameter.m`: Script to set up model parameters, uncertainty parameters and controller gains for simulation. 
- `skew2vec.m` and `vec2skew.m`: Functions to convert vector to skew symmetric matrix and reverse direction.
- `TrajectorySettings.m`: Script to set the start and target pose as well as the duration of the trajectory to be tracked. Will be executed on the start of each simulation. The back-end in the subdirectory 'feasibility_check' performs an a priori feasibility check of the given trajectory parameters and adjusts them if they lead to exceeding of the actuator boundaries.
- `Controllability.m`: Script to calculate the rank of the controllability matrix of the linearized model.

## Usage
Open Simulink Model and run one of the parameter setting scripts. The trajectory can be set by adapting the corresponding parameters within the script 'TrajectorySettings.m'. The maximum and minimum allowed rotor velocities are defined there as well and can be adjusted if needed. The controller is chosen by connecting the controller block output u to the *DC Motor Dynamics* Block. External forces and torques can be applied by connecting the blocks *Step 1*/*Step 2*, *Impulse*, or *External Forces and Torques* with the particular input of the Motion Equation block. The output position and attitude as well as the rotor velocities can be observed in the scopes at the lower righthand side. The state estimation noise is added in the feedback based on the values set in the parameter scripts. Some useful scripts for plot are stored in /simulation_data/plot_scripts.
