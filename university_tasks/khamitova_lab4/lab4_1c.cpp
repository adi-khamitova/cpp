#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main() {
    double x = 0;
    for (int i = 0; i < 2*M_PI / (M_PI/6) + 1; i++) {
        cout << "x = " << x << "  |  y = " << cos(x) << endl;
        x += M_PI/6;
    }
    return 0;
}