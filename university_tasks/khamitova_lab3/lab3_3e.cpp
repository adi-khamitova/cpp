#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "введите координаты точки (x, y): " << endl;
    cin >> x >> y;
    if (((sqrt(x*x + y*y) <= 8) && (((x <= 0) && (y >= 4)) || ((y >=0) && (x >= 0)))) || ((y <= 0) && (((x >= 0) && (y >= 0.5*x -4)) || ((x <= 0) && (y >= -0.5*x -4)))))
        cout << "Принадлежит" << endl;
    else
        cout << "Не принадлежит" << endl;
    return 0;
}
     