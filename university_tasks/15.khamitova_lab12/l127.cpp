#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double f1(double x) {
    return x*sin(x) - 0.5;
}

double f2(double x) {
    return log(x*x - 3*x + 2) / log(10);
}

double f3(double x) {
    return 0.5*tan(2/3 * (x + M_PI/4)) - 1;
}

double root(double a, double b, double eps, double (*f)(double)) {
    if (a > b)
        return root(b, a, eps, f);
    double m = (a+b)/2;
    if (f(m) == 0)
        return m;
    if (abs(f(a) - f(b)) < eps) 
        return m;
    if (f(a) * f(m) < 0)
        return root(a, m, eps, f);
    else
        return root(m, b, eps, f);
}

int main(int argc, char** argv) {
    double eps;
    cout << "enter eps: ";
    cin >> eps;
    cout << "roots of equations:" << endl;
    cout << "a) " << root(0, M_PI, eps, f1) << endl;
    cout << "b) " << root(2.1, 5, eps, f2) << endl;
    cout << "c) " << root(M_PI, 2*M_PI, eps, f3) << endl;
    return 0;
}