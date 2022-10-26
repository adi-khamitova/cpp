#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter n: ";
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0/(i*2);
    }
    cout << "sum: " << sum << endl;
    return 0;
}



