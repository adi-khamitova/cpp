#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "введите координаты точки (x, y): " << endl;
    cin >> x >> y;
    if ((x >= 0) && (sqrt(x*x + y*y) >= 3) && (sqrt(x*x + y*y) <= 6))
        cout << "Принадлежит" << endl;
    else
        cout << "Не принадлежит" << endl;
    return 0;
}