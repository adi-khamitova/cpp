#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int n;
    cout << "enter n: ";
    cin >> n;
    double **matrix = new double *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new double[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int *null_arr = new int[n];
    int count;
    for (int j = 0; j < n; j++) {
        count = 0;
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] == 0)
                count += 1;
        }
        null_arr[j] = count;
    }
    cout << "1)number of nulls in columns:" << endl;

    for (int i = 0; i < n; i++) {
        cout << null_arr[i] << " ";
    }
    cout << endl;
    double diagonal = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) 
                diagonal *= matrix[i][j];
        }
    }
    cout << "2)product of diagonal elements: " << diagonal << endl;

    count = 0;
    for (int i = 0;  i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((matrix[i][j] > 0) && (j > i)) 
                count += 1;
        }
    }
    cout << "3)number of el. > 0  and above main diagonal: " << count << endl;

    delete[] null_arr;
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}