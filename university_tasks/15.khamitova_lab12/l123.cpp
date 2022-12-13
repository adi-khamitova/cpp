#include <iostream>

using namespace std;

int num_count(int n) {
    if (n / 10 == 0)
        return 1;
    return 1 + num_count(n / 10);
}

int num_sum(int n) {
    if (n / 10 == 0)
        return n;
    return (n % 10) + num_sum(n / 10);
}


void binary_num(int n) {
    if (n / 2 != 0) 
        binary_num(n / 2);
    cout << n % 2;
    return;
}


int main(int argc, char** argv) {
    int n;
    cin >> n;
    cout << num_count(n) << endl;
    cout << num_sum(n) << endl;
    binary_num(n);
    cout << endl;
    return 0;
}