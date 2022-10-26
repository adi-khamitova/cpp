#include <iostream>
#include <cmath>
using namespace std;
double function(double x) {
    if (x > 1) return 1 + sqrt(abs(cos(x)));
    else {
        if (x < -0.5) return 1 - x*x;
        else return x + 1;
    }
}
int main() {
    double x = -1.5;
    double y;
    while (x <= 1.5) {
        cout << "y = " << function(x) << endl;
        x += 0.25;
    }
    return 0;
}