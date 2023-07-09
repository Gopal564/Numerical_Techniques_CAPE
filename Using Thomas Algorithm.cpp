// Cape Lab Assignment - 4
// Name - Gopal Gupta
// Roll No - 20CH30008

// including the library files

#include<bits/stdc++.h>

using namespace std;
// Defining the matrix
int main()
{
    int N = 5;
    //double t_dia_mat[][N] = {{0.4, 1, -0.4, 0, 0, 0}, {-3.25, 5.25, -0.75, 0, 0, 0}, {0, -3.25, 5.25, -0.75, 0, 0}, {0, 0, -3.25, 5.25, -0.75, 0}, {0, 0, 0, -3.25, 5.25, -0.75}, {0, 0, 0, 0, 4, 5.25}};
    //double t_dia_mat[][N] = {{0.4, 1, -0.4, 0, 0, 0}, {-0.26, 0.42, -0.06, 0, 0, 0}, {0, -0.26, 0.42, -0.06, 0, 0}, {0, 0, -0.26, 0.42, -0.06, 0}, {0, 0, 0, -0.26, 0.42, -0.06}, {0, 0, 0, 0, -0.32, 0.42}};
    //double t_dia_mat[][N] = {{0.4, 1, -0.4, 0, 0, 0, 0}, {-0.26, 0.42, -0.06, 0, 0, 0, 0}, {0, -0.26, 0.42, -0.06, 0, 0, 0}, {0, 0, -0.26, 0.42, -0.06, 0, 0}, {0, 0, 0, -0.26, 0.42, -0.06, 0}, {0, 0, 0, 0, -0.26, 0.42, 0.06}, {0, 0, 0, 0, 1, 0, -1}};
    double t_dia_mat[][N] = {{-1.07, 0.32, 0, 0, 0}, {-0.26, 0.42, -0.06, 0, 0}, {0, -0.26, 0.42, -0.06, 0}, {0, 0, -0.26, 0.42, -0.06}, {0, 0, 0, -0.32, 0.42}};
    double x[] = {0, 0, 0, 0, 0};
    double b[] = {-65, 0, 0, 0, 0};
    double TOLERANCE = 1e-6;
    int max_iterations = 100;

    // Apply the Gauss-Seidel method to solve the system of equations
    int iter = 0;
    double x_new[] = {0, 0, 0, 0, 0};
    while (iter < max_iterations)
    {
        for (int i = 0; i < N; i++)
        {
            x_new[i] = b[i];
            for (int j = 0; j < N; j++)
            {
                if (i > j)
                {
                    x_new[i] -= t_dia_mat[i][j] * x_new[j];
                }

                if (i < j)
                {
                    x_new[i] -= t_dia_mat[i][j] * x[j];
                }
            }
            x_new[i] /= t_dia_mat[i][i];

        }
        // Check for convergence
            double error = 0.0;

            for (int i = 0; i < N; i++) {
                error += abs(x_new[i] - x[i]);
            }

            if (error < TOLERANCE) {
            // Solution has converged
                break;
            }

        // Update x with the new values
            for (int i = 0; i < N; i++) {
                x[i] = x_new[i];
            }

            iter++;
    }

    // Output the solutions
    cout << "The solutions are:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "c[" << i << "] = " << x[i] << endl;
    }

    return 0;
}
