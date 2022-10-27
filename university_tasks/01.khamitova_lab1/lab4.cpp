#include <iostream>
using namespace std;

int main() {
    float r;
    cout << "Введите радиус: ";
    cin >> r;
    const float pi = 3.14159;
    cout << "Объём шара: " << 4/3 * pi * r * r * r << endl;
    return 0;
}
