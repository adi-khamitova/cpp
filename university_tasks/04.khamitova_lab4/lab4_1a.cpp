#include <iostream>
using namespace std;
int main() {
    int tc = 0;
    cout << "temperature in celsius degrees:" << endl;
    while (tc <=100) {
        cout << tc << " ";
        tc += 10;
    }
    tc = 0;
    cout << "\ntemperature in fahrenheit degrees:" << endl;
    while (tc <= 100) {
        cout << tc*9/5 + 32 << " ";
        tc += 10;
    }
    cout << endl;
    return 0;
}
