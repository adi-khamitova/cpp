#include <iostream> 
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main() {
    double e; 
    cin >> e;
    double sum = 0; int l = 0; int n = 1;
    while (abs(1. / n) > e) {  
        if (l % 2 == 0)
            sum += 1. / n;
        else
            sum += 1. / (-n);
        l += 1;
        n += 2;
    }
    cout << sum << endl;
    return 0;
}