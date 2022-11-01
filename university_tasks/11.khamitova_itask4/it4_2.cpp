#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    bool *a = new bool;
    bool *b = new bool;
    *a = true;
    *b = false;
    cout << "values:" << endl;
    cout << "a = " << *a << "; b = " << *b << endl;
    bool c = *a;
    *a = *b;
    *b = c;
    cout << "new values:" << endl;
    cout << "a = " << *a << "; b = " << *b << endl;
    delete a;
    delete b;
    return 0;
}