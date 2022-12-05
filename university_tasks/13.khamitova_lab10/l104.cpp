#include <iostream>
using namespace std;

bool operations(double a, double b, double &sum, double &dif, double &pr, double &dv) {
    sum = a + b;
    dif = a - b;
    pr = a * b;
    if (b == 0) 
        return false;
    dv = a / b;
    return true;
}

int main(int argc, char** argv) {
    double x, y;
    cout << "enter x and y: ";
    cin >> x >> y;
    double sum, dif, pr, dv;
    bool zero;

    zero = operations(x, 2, sum, dif, pr, dv);
    cout << "x + 2 = " << sum << endl;
    cout << "x - 2 = " << dif << endl;
    cout << "2x = " << pr << endl;
    if (zero)
        cout << "x / 2 = " << dv << endl;
    else
        cout << "division by zero!" << endl;

    zero = operations(x, y, sum, dif, pr, dv);
    cout << "x + y = " << sum << endl;
    cout << "x - y = " << dif << endl;
    cout << "x * y = " << pr << endl;
    if (zero)
        cout << "x / y = " << dv << endl;
    else
        cout << "division by zero!" << endl;

    zero = operations(x+y, x-y, sum, dif, pr, dv);
    cout << "2x = (x+y) + (x-y) = " << sum << endl;
    cout << "2y = (x+y) - (x-y) = " << dif << endl;
    cout << "(x+y)*(x-y) = " << pr << endl;
    if (zero)
        cout << "(x+y)/(x-y) = " << dv << endl;
    else
        cout << "division by zero!" << endl;

    return 0;
}