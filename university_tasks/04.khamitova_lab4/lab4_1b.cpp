#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x = 0;
    do {
        cout << "y = " << log(x+1)*sin(x) << endl;
        x += 0.5;
    } while (x<=5);
    return 0;
}
