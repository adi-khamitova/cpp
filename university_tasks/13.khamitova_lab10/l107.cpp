#include <iostream>
using namespace std;

double average(double &a1, double &a2) {
    return (a1 + a2) / 2;
}

double average(double &a1, double &a2, double &a3) {
    return (a1 + a2 + a3) / 3;
}

double average(double &a1, double &a2, double &a3, double &a4) {
    return (a1 + a2 + a3 + a4) / 4;
}

int main(int argc, char** argv) {
    double a1, a2, a3, a4;
    cout << "enter four numbers: ";
    cin >> a1 >> a2 >> a3 >> a4;
    cout << "average of two: " << average(a1, a2) << endl;;
    cout << "average of three: " << average(a1, a2, a3) << endl;
    cout << "average of four: " << average(a1, a2, a3, a4) << endl;

    return 0;
}