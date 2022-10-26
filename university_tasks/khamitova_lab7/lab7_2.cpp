#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    const int n = 3, m = 4;
    double a[n][m];
    for (int i = 0; i < n; i++)  {
        for (int j = 0; j < m; j++) {
           cin >> a[i][j]; 
        }
    }
    double amin = a[0][0];
    int imin = 0, jmin = 0;
    for (int i = 0; i < n; i++)  {
        for (int j = 0; j < m; j++) {
            if (a[i][j] < amin) {
                amin = a[i][j];
                imin = i;
                jmin = j;
            }
        }
    }
    cout << "minimum: " << amin << ", place: row " << imin << ", column " << jmin << endl;
    double c;
    for (int i = 0; i < n; i++){
        c = a[i][jmin];
        a[i][jmin] = a[i][m-1];
        a[i][m-1] = c;
    }
    cout << "array with replaced min column:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    double x[m];
    double sum;
    for (int j = 0; j < m; j++) {
        sum = 0;
        for (int i = 0; i < n; i++) {
            if (a[i][j] > 0)
                sum += a[i][j];
        }
        x[j] = sum;
    }
    cout << "x array:" << endl;
    for (int j = 0; j < m; j++) {
        cout << x[j] << " ";
    }
    cout << endl;
    for (int j = 0; j < m; j++) {
        a[0][j] = amin;
    }
    cout << "first line - minimal elements array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}