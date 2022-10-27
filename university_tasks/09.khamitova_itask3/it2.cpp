#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    const int n = 3, m = 4;
    double arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    double maxs[n];
    double max;
    for (int j = 0; j < n; j++) {
        max = arr[0][j];
        for (int i = 0; i < m; i++) {
            if (arr[i][j] > max) 
                max = arr[i][j];
        }
        maxs[j] = max;
    }
    double min = maxs[0];
    for (int j = 0; j < n; j++) {
        if (maxs[j] < min) 
            min = maxs[j];
    }
    cout << "minimum of maxs of columns: " << min << endl;
    return 0;
}
