#include <iostream>
#include <cmath>
using namespace std;

void squared(int n) {
    if (n > 1)
        squared(n-1);
    cout << n << " - " << pow(n, 2) << endl;
}

int main(int argc, char** argv) {
    int n;
    cin >> n;
    squared(n);
    return 0;
}