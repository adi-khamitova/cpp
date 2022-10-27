#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int n;
    cout << "enter an integer: ";
    cin >> n;
    int a;
    for (int i = 1; i <= n; i++) {
        a = n - i;
        while (a != 0) {
            cout << "-";
            a --;
        }
        a = i;
        while (a != 0) {
            cout << a;
            a--;
        }
        cout << endl;
    }
    return 0;
}
