#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    const int n = 6;
    int arr[n][n];
    int c;
    int b;
    for (int i = 0; i < n; i++) {
        c = i;
        b = n;
        for (int j = 0; j < n; j++) {
            if (c > 0) {
                arr[i][j] = 0;
                c -= 1;
            }
            else {
                arr[i][j] = b;
                b -= 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
