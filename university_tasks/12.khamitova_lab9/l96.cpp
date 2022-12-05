#include <iostream>
using namespace std;

string sign(int x) {
    if (x > 0)
        return "+";
    if (x < 0)
        return "-";
    return "";
}

string number(int x) {
    switch (abs(x)) {
        case 0: return "zero";
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        case 10: return "ten";
    }
    return " a number from another interval";
}
int main(int argc, char** argv) {
    int x;
    cout << "enter a number from [-10; 10]: ";
    cin >> x;
    cout << "your number: " << sign(x) << number(x) << endl;
    return 0;
}