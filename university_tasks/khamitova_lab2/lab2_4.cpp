#include <iostream>
using namespace std;

int main() {

    double var1, var2, var3;
    cout << "Введите три числа: ";
    cin >> var1 >> var2 >> var3;

    double sum = 0;
    if (var1 > 10)
        sum += var1;
    if (var2 > 10)
        sum += var2;
    if (var3 > 10)
        sum += var3;
    cout << "Сумма: " << sum << endl;

    int count = 0;
    int a;
    a = var1/1;
    if ((a % 2 == 0) && (a == var1))
        count++;
    a = var2/1;
    if ((a % 2 == 0) && (a == var2))
        count++;
    a = var3/1;
    if ((a % 2 == 0) && (a == var3))
        count++;
    cout << "Число четных: " << count << endl;

    int min;

    if (var1 > var2) {
        if (var2 > var3) {
            cout << "Среднее из чисел: " << var2 << endl;
            min = 3;
        }
        else {
            if (var1 > var3) {
                cout << "Среднее из чисел: " << var3 << endl;
                min = 2;
        }
            else {
                cout << "Среднее из чисел: " << var1 << endl;
                min = 2;
            }
        }
            
    }
    else {
        if (var1 > var3) {
            cout << "Среднее из чисел: " << var1 << endl;
            min = 3;
        }
        else {
            if (var2 > var3) {
                cout << "Среднее из чисел: " << var3 << endl;
                min = 1;
            }
            else {
                cout << "Среднее из чисел: " << var2 << endl;
                min = 1;
            }
        }
    }

    cout << "Номер наименьшего числа: " << min << endl;

    return 0;

}