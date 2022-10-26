#include <iostream>

using namespace std;

void func_send_value(int arg) {
    cout << "arg address: " << &arg << endl;
    cout << "arg value: " << arg << endl;
}

void func_send_pointer(int *arg) {
    cout << "arg value: " << arg << endl;

}

int main(int argc, char** argv) {
    int param = 1;

    cout << "Передача по значению:" << endl;
    func_send_value(param);
    cout << "param address: " << &param << endl;
    cout << "param value: " << param << endl << endl;


    cout << "Передача по указателю:" << endl;
    func_send_pointer(&param);
    cout << "param address: " << &param << endl;
    cout << "param value: " << param << endl;

    return 0;
}