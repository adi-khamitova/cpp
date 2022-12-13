#include <iostream>
#include <cmath>

using namespace std;

double radical(int n) {
    if (n == 0)
        return 0;
    return sqrt(2 + radical(n-1));
}

double radical2(int n, int count = 2) {
    if (n == 0)
        return 0;
    return sqrt(1 + count*(radical2(n-1, count+1)));
}

int main(int argc, char** argv) {
    int n;
    cout << "enter n: ";
    cin >> n;
    cout << "a) " << radical(n) << endl;
    cout << "b) " << radical2(n) << endl;
    return 0;
}