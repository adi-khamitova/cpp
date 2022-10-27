#include <iostream>
using namespace std;
int main() {
    double x;
    int minus = 0;
    int sum = 0;
    double mini;
    int a;
    int l = 0;
    for (int i = 0; i < 7; i++) {
        cin >> x;
        if (l == 0) {
            l = 1;
            mini = x;
        }
        if (x < 0) minus += 1;
        a = x/1;
        if ((a == x) && (a % 100 > 9) && (a / 100 == 0)) sum += x;
        if (x < mini) mini = x;
    }
    cout << "number of negative numbers: " << minus << endl;
    cout << "sum of two-digit numbers: " << sum << endl;
    cout << "minimum number: " << mini << endl;
    return 0;
}
