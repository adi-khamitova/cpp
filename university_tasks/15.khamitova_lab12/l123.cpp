#include <iostream>
#include <string>

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


string digits_bin(int n) {
    if (n / 2 == 0) 
        return to_string(n);
    return digits_bin(n/2).append(to_string(n % 2));
}


int main(int argc, char** argv) {
    int n;
    cout << "enter a decimal number: ";
    cin >> n;
    cout << "number of digits: " << digits_count(n) << endl;
    cout << "sum of digits: " << digits_sum(n) << endl;
    cout << "binary value: " << digits_bin(n) << endl;
    return 0;
}