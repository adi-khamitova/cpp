#include <iostream>
using namespace std;

int main() {

    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;

    cout << "Сумма последних цифр: " << (a % 10) + (b % 10) << endl;
    return 0;
}
