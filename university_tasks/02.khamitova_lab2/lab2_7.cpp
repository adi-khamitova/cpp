#include <iostream>

using namespace std;

int main() {
    double param1, param2;
    char sign;
    cout << "Введите два числа: ";
    cin >> param1 >> param2;
    cout << "Введите знак действия: ";
    cin >> sign;

    if (sign == '+') 
        cout << param1 + param2 << endl;;
    if (sign == '-') 
        cout << param1 - param2 << endl;
    if (sign == '*') 
        cout << param1 * param2 << endl;

    return 0;
}
