#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = (n * 2 - 1) / 2 - (i * 2 - 1) / 2; j > 0; j--) {
            cout << ' ';
        }
        for (int m = i * 2 - 1; m > 0; m-- ) {
            cout << '*';
        }
        cout << '\n';
    }

}