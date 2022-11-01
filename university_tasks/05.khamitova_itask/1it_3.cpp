#include <iostream>
#include <math.h>
#include <cstdlib>
#define _USE_MATH_DEFINES
using namespace std;

double function(double x) {
    return pow(M_E, x*x) / pow(x, 2);
}

double derivative2(double x) {
    return 2*pow(M_E, x*x)*(2 - 3./pow(x,2) + 3./pow(x,4));
}

int main(int argc, char** argv) {
    double a = 1;
    double b = 2;
    double e = pow(10, -2);

    // 1) find n - number of segments:
    double n;
    n = sqrt((max(derivative2(a), derivative2(b)) * pow(b-a, 3)) / (24 * e));
    n = floor(n);

    // 2) find h - step:
    double h = (b-a) / n;


    // 3) find f:
    double f;
    for (int i = 1; i <= n; i++) {
        f += h* function(a + h/2 + (i-1)*h);
    }

    cout << "the function value: " << f << endl;

    return 0;
}
