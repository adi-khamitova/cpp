#include <iostream>
using namespace std;

int sum2(int a, int b) {
    return a + b;
}


int sum_all() {
    int s = 0;
    for (int i = 0; i < 10; i++) {
        s = sum2(s, i);
    }
    return s;
} 


int main() {
    cout << sum_all() << endl;
}