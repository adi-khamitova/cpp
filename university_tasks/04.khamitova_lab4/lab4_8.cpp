#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter n(even number): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j= 0; j < n; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) cout << "o ";
                else cout << "* ";
            }
            else {
                if (j % 2 == 0) cout << "* ";
                else cout << "o ";
            }
        }
        cout << endl;
    }
    return 0;
}
