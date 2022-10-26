#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    srand(time(NULL));
    const int n = 2, m = 3;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand()%31;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
    }
    if (sum % 2 == 0)
        cout << "the sum is an even number" << endl;
    else
        cout << "the sum is uneven number" << endl;
    int sum2 = 0;
    int mlt = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((a[i][j] >= 2) && (a[i][j] <= 9)) {
                sum2 += a[i][j];
                mlt *= a[i][j];
            }
        }
    }
    cout << "sum of el. in [2;9]: " << sum2 << endl;
    if (mlt != 1)
        cout << "multiply of el. in [2;9]: " << mlt << endl;
    else
        cout << "no el. in [2;9]" << endl;
    return 0;
}