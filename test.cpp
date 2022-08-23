#include <iostream>
using namespace std;

int sum2(int a, int b) {
    return a + b;
}


void sum_all() {
    int s = 0;
    for (int i = 0; i < 10; i++) {
        s = sum2(s, i);
    }
    cout << s << endl;
} 


int main() {
    sum_all();
}