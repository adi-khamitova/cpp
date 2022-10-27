#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double x, y;
    cout << "Введите два числа: ";
    cin >> x >> y;

    double r;
    r = sqrt(x*x + y*y);

    if (r <= 2)
        cout << "10 очков" << endl;
    else {
        if (r <= 4)
            cout << "9 очков" << endl;
        else
            cout << "0 очков" << endl;
    }

    return 0;
}
