#include <iostream>
using namespace std;
int main() {
    double x, y, z;
    cout << "Введите три числа: " << endl;
    cin >> x >> y >> z;
    int a = 0;
    if (max(x, max(y, z)) == x) {
        if (x < y + z) {
            cout << "Треугольник существует" << endl;
            a = 1;
            if (x*x == y*y + z*z) cout << "Прямоугольный" << endl;
        }
        else
            cout << "Треугольник не существует" << endl;
    }
    else {
        if (max(x, max(y, z)) == y) {
            if (y < x + z) {
                cout << "Треугольник существует" << endl;
                a = 1;
                if (y*y == x*x + z*z) cout << "Прямоугольный" << endl;
            }
            else
                cout << "Треугольник не существует" << endl;
        }
        else {
            if (z < x + y) {
                cout << "Треугольник существует" << endl;
                a = 1;
                if (z*z == x*x + y*y) cout << "Прямоугольный" << endl;
            }
            else
                cout << "Треугольник не существует" << endl;
        }
    }

    if (a == 0) return 0;
    if ((x == y) && (x == z)) {
        cout << "Равносторонний" << endl;
        return 0;
    }
    if ((x == y) || (x == z) || (y == z))
        cout << "Равнобедренный" << endl;
    
    return 0;
}