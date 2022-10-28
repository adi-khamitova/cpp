#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char**) {
    double a = 1.5, b = M_PI;

    cout << "1)values of vars:" << endl;
    cout << "a = " << a << endl << "b = " << b << endl;
    cout << "addresses:" << endl;
    cout << "a: " << &a << endl << "b: " << &b << endl;
    cout << "difference between addresses: " << &b - &a << endl;
    cout << "how much bites:" << endl;
    cout << "a: " << sizeof(a) << endl << "b: " << sizeof(b) << endl;

    double arr[] = {1.5, M_PI, -1.5, 3.0, -2.3};
    cout << "2)first el of array: " << *arr << endl;
    cout << "second el of array: " << *(arr+1) << endl;
    cout << "last el of array: " << *(arr+4) << endl;

    cout << "first el address: " << &arr[0] << endl;
    cout << "second el address: " << &arr[1] << endl;
    cout << "last el address: " << &arr[4] << endl;

    cout << "difference between addresses of first and second: " << &arr[0] - &arr[1] << endl;

    double *a1 = new double;
    double *b1 = new double;

    *a1 = a + b;
    *b1 = a - b;

    cout << "3)new vars:" << endl;
    cout << "a1 = " << *a1 << endl << "b1 = " << *b1 << endl;
    cout << "addresses of new vars:" << endl;
    cout << "a1: " << a1 << endl << "b1: " << b1 << endl;
    cout << "difference between addresses: " << b1 - a1 << endl;
    delete a1;
    delete b1;
    return 0;
}