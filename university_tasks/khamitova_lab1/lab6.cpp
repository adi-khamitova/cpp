#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r, v, s;
    cout << "Введите радиус: ";
    cin >> r;

    v = M_PI * pow(r, 3);
    s = 2 * M_PI * r * r + 2 * M_PI * r * r;

    cout << "Объём цилиндра: " << v << endl;
    cout << "Площадь поверхности: " << s << endl;

    return 0;
}