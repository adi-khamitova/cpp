#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    const int n = 4, m = 5;
    float arr1[m];
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }
    float arr2[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) 
                arr2[i][j] = arr1[i];
            else
                arr2[i][j] = 2*arr1[m - 1 - i];
        }
    }
    cout << "new matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
