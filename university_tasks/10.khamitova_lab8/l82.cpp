#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    double *a = new double;
    double *b = new double;
    cout << "enter the sides of rectangle:" << endl;
    cin >> *a >> *b;
    cout << "area of rectangle: " << (*a)*(*b) << endl;
    cout << "perimeter of rectangle: " << 2*((*a)+(*b)) << endl;
    delete a;
    delete b;
    return 0;
}