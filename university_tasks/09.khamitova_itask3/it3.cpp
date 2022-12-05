#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    srand(time(NULL));
    const int m = 7;
    double arr[m][m];
    cout << "matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand()%10;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
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
