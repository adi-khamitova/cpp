#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {
    const int n = 10;
    double x[n];
    cout << "enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    double f[n];
    for (int i = 0; i < n; i++) {
        if (x[i] < -4) 
            f[i] = ((x[i]*x[i] - 1/x[i])*(x[i] + 3)) / (3*x[i]*(1 + x[i]));
        else {
            if (x[i] < 6*M_PI)
                f[i] = (x[i]-5)*(x[i]-5)*sin(2*x[i])*sin(2*x[i]);
            else 
                f[i] = 11 + 2./3;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "x" << i << " = " << x[i] << "  y" << i << " = " << f[i] << endl;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if ((x[i] < 0) && (f[i] > 0))
            count += 1;
    }
    cout << "the number of points in 2 quarter: " << count << endl;
    double fmin = f[0];
    double xmin = x[0];
    for (int i = 0; i < n; i++) {
        if (f[i] < fmin) {
            fmin = f[i];
            xmin = x[i];
        }
    }
    cout << "minimum f(x): f = " << fmin << " x = " << xmin << endl;
    return 0;
}