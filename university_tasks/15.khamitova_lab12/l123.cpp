#include <iostream>

using namespace std;

int digits_count(int n) {
    if (n / 10 == 0)
        return 1;
    return 1 + digits_count(n / 10);
}

int digits_sum(int n) {
    if (n / 10 == 0)
        return n;
    return (n % 10) + digits_sum(n / 10);
}


void digits_bin(int n) {
    if (n / 2 != 0) 
        digits_bin(n / 2);
    cout << n % 2;
    return;
}


int main(int argc, char** argv) {
    int n;
    cout << "enter a decimal number: ";
    cin >> n;
    cout << "number of digits: " << digits_count(n) << endl;
    cout << "sum of digits: " << digits_sum(n) << endl;
    cout << "binary value: ";
    digits_bin(n);
    cout << endl;
    return 0;
}