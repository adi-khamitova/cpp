#include <iostream>
using namespace std;

void fah(double &temp) {
    cout << "in fahrenheit: ";
    cout << 9./5 * temp + 32 << endl;
    return;
}

void kel(double &temp) {
    cout << "in kelvin: ";
    cout << temp + 273 << endl;
    return;
}

void both(double &temp) {
    fah(temp);
    kel(temp);
    return;
}


int main(int argc, char** argv) {
    double temp1, temp2;
    cout << "enter temperatures: ";
    cin >> temp1 >> temp2;
    cout << "temperature 1:" << endl;
    fah(temp1);
    kel(temp1);
    cout << "temperature 2:" << endl;
    both(temp2);
    return 0;
}