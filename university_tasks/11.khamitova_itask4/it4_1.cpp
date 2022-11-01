#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    double a, b;
    cout << "enter two numbers:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    double *ptra = &a, *ptrb = &b;
    double temp = *ptra;
    a = *ptrb;
    b = temp;
    cout << "new values:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}