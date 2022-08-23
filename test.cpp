#include <iostream>
using std::cout;

int sum2(int a, int b) {
    return a + b;
}


void sum_all() {
    int v = 0;
    int s = 0;
    for (int i = 0; i <= 9; i++) {
        s = sum2(s, v);
        v++;
    }
    cout << s << "\n";
} 


int main() {
    sum_all();
}