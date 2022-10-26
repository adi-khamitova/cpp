#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "введите координаты точки (x, y): " << endl;
    cin >> x >> y;
    if ((sqrt(x*x + y*y) <= 5) && (y >= 0))
        cout << "Принадлежит" << endl;
    else
        cout << "Не принадлежит" << endl;
    return 0;
}