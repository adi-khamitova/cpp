#include <iostream>
using namespace std;

int main() {

    double x;
    cout << "Введите число: ";
    cin >> x;

    if (x <= -2)
        cout << "0" << endl;
    else {
        if (x <= 10)
            cout << x*x + 4*x + 5 << endl;
        else
            cout << 1 / (x*x +4*x - 5) << endl;
    }

    return 0;

}
