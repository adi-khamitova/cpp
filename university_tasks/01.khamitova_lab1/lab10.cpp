#include <iostream>
using namespace std;

int main() {

    double a, b, c;
    cout << "Введите длины рёбер: ";
    cin >> a >> b >> c;

    cout << "Объём: " << a * b * c << endl;
    cout << "Площадь поверхности: " << 2 * (a*b + b*c + a*c) << endl;

    return 0;
}
