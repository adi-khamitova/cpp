#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    srand(time(NULL));
    const int n = 7;
    int x[n];
    int y[n];
    for (int i = 0; i < n; i++) {
        x[i] = rand()%20;
        y[i] = rand()%20;
    }
    cout << "x array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl << "y array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << y[i] << " ";
    }
    cout << endl;
    int arr1[3*n];
    for (int i = 0; i < 3*n; i += 3) {
        arr1[i] = x[i / 3];
        arr1[i + 1] = y[i / 3];
        arr1[i + 2] = x[i / 3] + y[i / 3];
    }
    cout << "new array1:" << endl;
    for (int i = 0; i < 3*n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    int arr2[2*n];
    for (int i = 0; i < 2*n; i += 2) {
        arr2[i] = x[n - 1 - i / 2];
    if (i == 2*n - 2)
        arr2[i+1] = y[i / 2] + x[0];
    else
        arr2[i+1] = y[i / 2] + x[i / 2 + 1];
    }
    cout << "new array2:" << endl;
    for (int i = 0; i < 2*n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
