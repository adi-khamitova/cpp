#include <iostream>
using namespace std;

int main() {
    cout << "Введите температуру в градусах Цельсия: ";
    int temp;
    cin >> temp;
    cout << "Температура в градусах Фаренгейта: " << (9/5 * temp) + 32 << endl;
    cout << "Температура в Кельвинах: " << temp + 273 << endl;
    return 0;
}
