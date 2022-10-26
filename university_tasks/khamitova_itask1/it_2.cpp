#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {
    int n;
    cout << "enter an integer: ";
    cin >> n;
    double sum = 0;
    double tr = 0;
    for (int i = 0; i < n; i++) {
        tr += sin(2*(i+1));
        sum += 1./tr;
    }
    cout << "sum: " << sum << endl;
    return 0;
}