#define USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

double area(int &c, int &h) {
    return 0.5 * c * h;
}

double area(int &a, int &b, int &f) {
    return 0.5 * a * b * sin(f * (M_PI / 180));
}

double area(double &a, double &b, double &c) {
    double p = 0.5 * (a + b + c);
    return sqrt(p * (p-a) * (p-b) * (p-c));
}

int main(int argc, char** argv) {
    int a, b, c, h, f;
    double a1, b1, c1;
    cout << "1)enter the side and the height of 1st triangle: ";
    cin >> c >> h;
    cout << "the area of 1st triangle is: " << area(c, h) << endl;
    cout << "2)enter two sides and the angle of 2nd triangle: ";
    cin >> a >> b >> f;
    cout << "the area of 2nd triangle is: " << area(a, b, f) << endl;
    cout << "3)enter the sides of 3rd triangle: ";
    cin >> a1 >> b1 >> c1;
    cout << "the area of 3rd triangle is: " << area(a1, b1, c1) << endl;
    return 0;
}