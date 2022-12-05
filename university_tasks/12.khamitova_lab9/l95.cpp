#include <iostream>
using namespace std;

unsigned long long int factorial(int n) {
    int product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    return product;
}

unsigned long long int degree(int x, int n) {
    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= x;
    }
    return product;
}
int main(int argc, char** argv) {
    int n, m;
    cout << "a)enter n, m: ";
    cin >> n >> m;
    cout << "value: " << double((factorial(n) * factorial(m))) / factorial(n*m) << endl;

    int x;
    cout << "b)enter x, n: ";
    cin >> x >> n;
    cout << "degree: " << degree(x, n) << endl;

    return 0;
}