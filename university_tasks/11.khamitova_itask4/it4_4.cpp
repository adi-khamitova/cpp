#include <iostream>
using namespace std;


int **create(int n, int m) {
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
    }
    return matrix;
} 

void free(int **matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void print(int **matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char** argv) {
    srand(time(NULL));
    int n, m;
    cout << "enter even n, m: ";
    cin >> n >> m;

    int **matrix = create(n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand()%10;
        }
    }
    cout << "matrix:" << endl;
    print(matrix, n, m);

    for (int i = 0; i < n/2; i++) {
        for (int j = 0; j < m/2; j++) {
            int c = matrix[i][j];
            matrix[i][j] = matrix[n/2 + i][m/2 + j];
            matrix[n/2  + i][m/2  + j] = c;
        }
    }

    cout << "new matrix:" << endl;
    print(matrix, n, m);

    free(matrix, n, m);
    return 0;
}