#include <iostream>
using namespace std;

bool function(double x, double &f) {
    if ((x == 1) || (x == 0))
        return false;
    if (x <= 2) {
        f = double((2*x + 1.0/(1-x))) / (3*x);
        return true;
    }
    if (x <= 5) {
        f = 10 + 2./7;
        return true;
    }
    f = -3 - x;
    return true;
}

int main(int argc, char** argv) {
    double a, b;
    double f2, f0, fa, f2a, f6, fab;
    cout << "enter a and b: ";
    cin >> a >> b;
    if (function(2, f2) && function(0, f0) && function(a, fa)) 
        cout << "f(2)- f(0) *f(a) = " << f2 - f0 * fa << endl;
    else
        cout << "f(2)- f(0) *f(a): division by zero!" << endl;

    if (function(2*a, f2a) && function(6, f6) && function(a*b, fab)) 
        cout << "f(2a) - f(6) + f(ab) = " << f2a - f6 + fab << endl;
    else
        cout << "f(2a) - f(6) + f(ab): division by zero!" << endl;

    return 0;
}

