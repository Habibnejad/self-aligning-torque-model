# self-aligning-torque-model

Model self-aligning torque characteristics in steering systems.

## Overview
This repository contains a sample C implementation of a basic self-aligning torque model for electric power steering systems. The program computes self-aligning torque as a linear function of the steering angle, illustrating how the restoring torque can be estimated based on steering input.

## Features
- Calculates self-aligning torque based on steering angle.
- Demonstrates how a linear self-aligning torque model can be implemented for EPS applications.
- Provides a baseline for more advanced non-linear torque models.

## Getting Started
1. Compile the `main.c` file with a C compiler such as gcc:
    ```bash
    gcc -o self_aligning_torque_model main.c
    ```
2. Run the compiled program:
    ```bash
    ./self_aligning_torque_model
    ```
The program will output steering angles and corresponding self-aligning torque values for each sample input.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
