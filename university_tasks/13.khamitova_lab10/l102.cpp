#include <iostream>
#include <math.h>
using namespace std;

char x(double &a, double &b, double &c, double &x1, double &x2) {
    if ((b*b - 4*a*c) < 0) {
        return '-';
    }
    double d = b*b - 4*a*c;
    x1 = (- b + sqrt(d)) / (2 * a);
    x2 = (- b - sqrt(d)) / (2 * a);
    return '+';
}

void print(char &s, double x1, double x2) {
    if (s == '+') {
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else 
        cout << "no roots" << endl;
    return;

}

int main(int argc, char** argv) {
    double x1, x2;
    double a1 = 4, b1 = -5, c1 = 1;
    double a2 = 13, b2 = 2, c2 = 5;
    double a3 = 1, b3 = -8, c3 = 4;
    char sign;

    cout << "roots of the 1st equation:" << endl;
    sign = x(a1, b1, c1, x1, x2);
    print(sign, x1, x2);

    cout << "roots of the 2nd equation:" << endl;
    sign = x(a2, b2, c2, x1, x2);
    print(sign, x1, x2);

    cout << "roots of the 3rd equation:" << endl;
    sign = x(a3, b3, c3, x1, x2);
    print(sign, x1, x2);

    return 0;
}