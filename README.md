# Chemical Reactor Design Project

## Problem Description
Chemical engineers extensively use idealized reactors in their design work. The following figure shows an elongated reactor with a single entry and exit point which can be characterized as a distributed parameter system.

![reactor_img](https://github.com/Gopal564/Numerical_Techniques_CAPE/assets/87975144/7a3505e2-c076-462f-bee8-6f4dd4c138a5)

## Approach
1. Perform mass balance calculations on a finite segment of the reactor.
2. Formulate a parabolic partial differential equation based on the given boundary conditions.
3. Implement a C++ code to solve the system of equations using centered finite differences.
4. Set the input parameters and solve for the unknowns.

Assuming that the chemical being modeled has a first order decay and the system is vertically and laterally well-mixed, a mass-balance can be performed on a finite segment of length ∆𝑥, as shown below - 

![differential](https://github.com/Gopal564/Numerical_Techniques_CAPE/assets/87975144/6bb2bfb2-5906-4f00-a252-6f566dbe7872)

The boundary condition are - 

![boundart](https://github.com/Gopal564/Numerical_Techniques_CAPE/assets/87975144/01ecd97e-69fb-4c1f-9c2d-9871f35415b6)

## Results
Using the provided input parameters:
- Length of Reactor(L) = 10 m
- Flow rate (Q) and A_c is the tank’s cross-sectional area (m^2), U(Q/A_c) = 1 m/h
- Concentration (c) = 100 moles/m^3
- Dispersion coefficient (D) = 2 m^2/h
- First order decay coefficient (k) = 0.2 h^-1
- ∆x = 2.5 m

The system of equations was solved, and the following concentrations (c) were obtained:
- c0 = 76.4401 moles/m3
- c1 = 52.4716 moles/m3
- c2 = 36.061 moles/m3
- c3 = 25.05 moles/m3
- c4 = 19.0857 moles/m3

## Usage
1. Install a C++ compiler.
2. Compile the code using the command: `g++ main.cpp -o main`.
3. Run the executable file: `./main`.
