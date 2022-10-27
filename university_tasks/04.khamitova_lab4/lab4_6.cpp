#include <iostream>
using namespace std;
int main() {
    int x;
    char answ;
    int count = 0;
    int count_ch = 0;
    while (answ != 'n') {
        cout << "enter an integer: ";
        cin >>x;
        count += 1;
        if (not(x&1)) count_ch += 1;
        cout << "want to continue? y/n  ";
        cin >> answ;
    }
    cout << "number of numbers: " << count << endl;
    cout << "number of even numbers: " << count_ch << endl;
    return 0;
}
