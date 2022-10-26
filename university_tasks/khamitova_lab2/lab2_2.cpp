#include <iostream>
using namespace std;

int main() {

    int a;
    cout << "Введите целое число: ";
    cin >> a;

    if (a > 0)
        cout << "Положительное число" << endl;
    else {
        if (a < 0)
            cout << "Отрицательное число" << endl;
        else
            cout << "Ноль" << endl;
    }

    if ((a % 2) == 0) 
        cout << "Четное число" << endl;
    else
        cout << "Нечетное число" << endl;

    return 0;

}