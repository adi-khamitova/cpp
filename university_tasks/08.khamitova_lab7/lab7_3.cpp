#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    const int n = 5;
    int arr[n][n];
    int pl = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (pl == j-1) 
                arr[i][j] = 1;
            else 
                arr[i][j] = 0;
        }
        pl += 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
