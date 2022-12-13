#include <iostream>

using namespace std;

int sum(int a, int b) {
    if (a < 0) {
        if (b >= 0)
            return sum(b, a);
        else
            return (-sum(-a, -b));
    }
    if (a == 0)
        return b;
    return 1 + sum(a - 1, b);
}

int mul(int a, int b) {
    if (a < 0)
        return (- mul(-a, b));
    if (a == 1)
        return b;
    return b + mul(a - 1, b);
}


int main(int argc, char** argv) {
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    cout << "sum: " << sum(a, b) << endl;
    cout << "multiply: " << mul(a, b) << endl;
    return 0;
}