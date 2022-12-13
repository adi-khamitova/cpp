#include <iostream>

using namespace std;

int sum(int a, int b) {
    if (a == 0)
        return b;
    return 1 + sum(a - 1, b);
}

int product(int a, int b) {
    if (a == 1)
        return b;
    return b + product(a - 1, b);
}


int main(int argc, char** argv) {
    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;
    cout << product(a, b) << endl;
    return 0;
}