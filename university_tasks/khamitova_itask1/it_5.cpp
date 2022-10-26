#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int n;
    cout << "enter the number of integers: ";
    cin >> n;
    int num;
    int count = 0;
    int sum = 0;
    int mlt = 1;
    cout << "enter integers: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        if ((num % 5 == 0) && (num != 0))
            count += 1;
        int a = num;
        while (a > 10) {
            a = a / 10; 
        }
        if (a == 7) 
            sum += num;
        if ((num % 1000 > 99) && (num / 100 > 0))
            mlt *= num;
    }
    cout << "number of numbers multiple of five: " << count << endl;
    cout << "sum of numbers beginning with 7: " << sum << endl;
    if (mlt != 1)
        cout << "multiplication of 3-digit numbers: " << mlt << endl;
    else
        cout << "no 3-digit numbers" << endl;
    return 0;
}