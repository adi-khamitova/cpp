#include <iostream>

using namespace std;

void squared(int n) {
    if (n > 1)
        squared(n-1);
    cout << "n = " << n << ", n^2 = " << n*n << endl;
}

int main(int argc, char** argv) {
    int n;
    cin >> n;
    squared(n);
    return 0;
}