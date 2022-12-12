#include <iostream>

using namespace std;

void reverse() {
    int n;
    cin >> n;
    if (n != 0) {
        reverse();
        cout << n << endl;
    }
}

int main(int argc, char** argv) {
    reverse();
    return 0;
}