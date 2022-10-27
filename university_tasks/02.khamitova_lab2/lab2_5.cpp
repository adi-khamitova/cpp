#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double x, y;
    cout << "Введите два числа: ";
    cin >> x >> y;

    double r;
    r = sqrt(x*x + y*y);

    if (r <= 3)
        cout << "Принадлежит" << endl;
    else 
        cout << "Не принадлежит" << endl;

    return 0;
}
