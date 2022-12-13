#include <iostream>

using namespace std;

int C(int k, int n) {
    if ((k == 0) || (k == n))
        return 1;
    return C(k, n-1) + C(k-1, n-1);
}

int main(int argc, char** argv) {
    int k, n;
    cout << "enter k: ";
    cin >> k;
    cout << "enter n: ";
    cin >> n;
    if (k > n) {
        cout << "error: k must be smaller that n!" << endl;
        return 0;
    }
    cout << "total number of combinations of k units in a total of n units: ";
    cout << C(k, n) << endl;
    return 0;
}