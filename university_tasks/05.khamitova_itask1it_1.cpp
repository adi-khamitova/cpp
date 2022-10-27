#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {
    int n;
    cout << "Enter the number of points: ";
    cin >> n;
    cout << "Enter the coordinates (x; y): ";
    double x, y;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if ((x >= 0) && (y >= 0) && (sqrt(x*x + y*y) <= 6))
            count += 1;
        if ((x > 0) && (y < 0) && (y >= x - 6))
            count += 1;
        if ((x < 0) && (y < 0) && (x >= -3) && (y >= -6))
            count += 1;
        if ((x < 0) && (y > 0) && (y <= 2*x + 6))
            count += 1;
    }
    cout << "The number of points in pinned area: " << count << endl;
    return 0;
}
