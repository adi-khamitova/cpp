#include <iostream>
#include <cmath>
using namespace std;
int main() {
    srand(time(NULL));
    double x = 1.0;
    int n;
    cout << "enter an integer: ";
    cin >> n;
    double func = 0;
    for (int i = 0; i < n; i++) {
        func = cos(x + func);
    }
    cout << "x = " << x << endl;
    cout << "function = " << func << endl;
    return 0;
}