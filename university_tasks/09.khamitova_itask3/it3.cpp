#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    const int m = 7;
    double arr[m][m];
    cout << "enter the el. of matrix" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    double c;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < i + 1; j++) {
            c = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = c;
        }
    }
    cout << "new matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
