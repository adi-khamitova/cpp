#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    const int n = 10;
    int arr[n][n];
    int c;
    int b;
    for (int i = 0; i < n/2; i++) {
        b = i;
        c = n/2 - 1;
        for (int j = 0; j < n/2; j++) {
            if (b > 0) {
                arr[i][j] = c;
                b -= 1;
                c -= 1;
            }
            else
                arr[i][j] = n/2 - 1 - i;
        }
    }
    for (int i = n-1; i < n/2; i--) {
        b = n - 1 - i;
        c = n/2 - 1;
        for (int j = 0; j < n/2; j++) {
            if (b > 0) {
                arr[i][j] = c;
                b -= 1;
                c -= 1;
            }
            else
                arr[i][j] = i - n/2;
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
