#include <iostream>
using namespace std;

void print1() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return;
}

void print2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return;
}

void print3(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << " ";
        }
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return;
}

void print4(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int l = 0; l < n; l++) {
                if ((i + l) % 2 == 0) {
                    for (int k = 0; k < m; k++) {
                        cout << "*";
                    }
                }
                else {
                    for (int k = 0; k < m; k++) {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    }
    return;
}

int main(int argc, char** argv) {
    cout << "a)" << endl;
    print1();

    int n;
    cout << "enter n: ";
    cin >> n;
    cout << "b)" << endl;
    print2(n);

    int m;
    cout << "enter m: ";
    cin >> m;
    cout << "c)" << endl;
    print3(n, m);

    cout << "d)" << endl;
    print4(n, m);
    return 0;
}