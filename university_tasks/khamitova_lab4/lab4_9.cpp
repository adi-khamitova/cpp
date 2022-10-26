#include <iostream>
using namespace std;
int main() {
    int x;
    int max = -1;
    int count = 0;
    while (x != 0) {
        cin >> x;
        if (x > max) {
            max = x;
            count = 0;
        }
        if (x == max) count += 1;
        }
    cout << "number of max: " << count << endl;
    return 0;
}