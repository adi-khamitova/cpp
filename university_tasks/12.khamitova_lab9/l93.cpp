#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

double f(double x) {
    if (x < 0)
        return (2 + 1/3);
    else {
        if ((x >= 0) && (x <= 2 * M_PI)) 
            return (pow(x, 2) - 3);
        else
            return ((1 + pow(x, 3)) / (2 * x));
    }
}

int main(int argc, char** argv) {
    double a, b;
    cout << "enter 2 numbers: ";
    cin >> a >> b;
    cout << "a)function value: " << 12.5 + f(2) - f(4)*f(10) + f(a) - f(b) + f(a*b) << endl;

    double x[7];
    cout << "enter the elements of array:" << endl;
    for (int i = 0; i < 7; i++) {
        cin >> x[i];
    }
    double y[7];
    for (int i = 0; i < 7; i++) {
        y[i] = f(x[i]);
    }
    cout << "y array:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << y[i] << " ";
    }
    cout << endl;
    
    int count = 0;
    double max_el = y[0];
    for (int i = 0; i < 7; i++) {
        if (y[i] < 0)
            count += 1;
        if (y[i] > max_el)
            max_el = y[i];
    }

    cout << "b)the number of elements < 0: " << count << endl;
    cout << "  max element: " << max_el << endl;

    return 0;
}