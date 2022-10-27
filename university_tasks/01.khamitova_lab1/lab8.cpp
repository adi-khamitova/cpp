#include <iostream>
using namespace std;

int main() {

    int a;
    cout << "Введите четырёхзначное число: ";
    cin >> a;

    cout << "Первая цифра: " << a / 1000 << endl;
    cout << "Последняя цифра: " << a % 10 << endl;
     return 0;
}
