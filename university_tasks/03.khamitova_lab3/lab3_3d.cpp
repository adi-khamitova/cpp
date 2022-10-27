#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "введите координаты точки (x, y): " << endl;
    cin >> x >> y;
    if ((x >= 0) && (y >= 0) && (y <= -2*x + 2))
        cout << "Принадлежит" << endl;
    else
        cout << "Не принадлежит" << endl;
    return 0;
}
