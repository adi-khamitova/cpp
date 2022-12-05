#include <iostream>
using namespace std;

void change(double &s1, double &s2) {
    double c = s1;
    s1 = s2;
    s2 = c;
    return;
}

int main(int argc, char** argv) {
    double a, b;
    cout << "a) enter two numbers:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    change(a, b);
    cout << "values after change:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    double v, p, k;
    cout << "b)enter v, p, k: ";
    cin >> v >> p >> k;
    
    change(v, k);
    change(k, p);
    change(p, v);

    cout << "new areas:" << endl;
    cout << "vasya: " << v << " petya: " << p << " kolya: " << k << endl;
    return 0;
}