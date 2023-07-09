// Cape Lab Assignment - 4
// Name - Gopal Gupta
// Roll No - 20CH30008

// including the library files

#include<bits/stdc++.h>

using namespace std;
// Defining the matrix
int main()
{
    int n = 5;
    /*
    double mat[][n] = {{-3.125 , 1.5625, 0}, {0.875 , -2.125, 1.125}, {0 , 0.3125, -1.125}};
    double val_eq[] = {-1.3671875 , 0.03125, -2.0546875};*/
    //double mat[][n] = {{0.4, 1, -0.4, 0, 0, 0, 0}, {-0.26, 0.42, -0.06, 0, 0, 0, 0}, {0, -0.26, 0.42, -0.06, 0, 0, 0}, {0, 0, -0.26, 0.42, -0.06, 0, 0}, {0, 0, 0, -0.26, 0.42, -0.06, 0}, {0, 0, 0, 0, -0.26, 0.42, 0.06}, {0, 0, 0, 0, 1, 0, -1}};
    //double mat[][n] = {{1, 2.5, -1, 0, 0, 0}, {0.26, -0.42, 0.06, 0, 0, 0}, {0, 0.26, -0.42, 0.06, 0, 0}, {0, 0, 0.26, -0.42, 0.06, 0}, {0, 0, 0, 0.26, -0.42, 0.06}, {0, 0, 0, 0, 0.32, -0.42}};
    double mat[][n] = {{-1.07, 0.32, 0, 0, 0}, {-0.26, 0.42, -0.06, 0, 0}, {0, -0.26, 0.42, -0.06, 0}, {0, 0, -0.26, 0.42, -0.06}, {0, 0, 0, -0.32, 0.42}};
    double val_eq[] = {-65, 0, 0, 0, 0};
    int i; //loop variable
    // Declaring the array
    double x[n];
    double p[n];
    double q[n];
    p[0] = -mat[0][1]/mat[0][0], q[0] = val_eq[0]/mat[0][0];
    for (i = 1; i<n-1; i++){
            p[i] = -mat[i][i+1]/(mat[i][i]+mat[i][i-1]*p[i-1]);
            q[i] = (val_eq[i]-mat[i][i-1]*q[i-1])/(mat[i][i]+mat[i][i-1]*p[i-1]);
    }
    q[n-1] = (val_eq[n-1]-mat[n-1][n-2]*q[n-2])/(mat[n-1][n-1]+mat[n-1][n-2]*p[n-2]);
    x[n-1] = q[n-1];
    for (i=n-2;i>=0;i--){
        x[i] = p[i]*x[i+1]+q[i];
    }

    cout<<"The solution of the linear equations are using thomas algo:"<<endl;
    for (i = 0; i<n; i++){
        cout<<"The values c"<<i<<" is - "<<x[i]<<endl;
    }
    return 0;
}
