#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
int main(int argc, char** argv) {
    cout << "enter eps: ";
    double eps;
    cin >> eps;
    double x;
    cout << "enter x: ";
    cin >> x;
    while (x >= -1) {
        cout << "enter another x (< -1): ";
        cin >> x;
    }
    int l = 1;
    double sum = -log(abs(2*x));
    double next = 1./(l*2*l*2*pow(x, 2*l));
    while (next > eps) {
        sum += next*pow(-1,  l);
        l += 1;
        next *= ((2*l-1)/(4*l*pow(x, 2)));
    }
    cout << "sum = " << sum << endl;
    cout <<  "checking: " << log(x + sqrt(1 + x*x)) << endl;
    return 0;
}
