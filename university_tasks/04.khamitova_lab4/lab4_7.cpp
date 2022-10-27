#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "enter the number of corner: ";
    cin >> n;
    cout << "enter coordinates (x, y): ";
    double x1, y1;
    cin >> x1 >> y1;
    double x0 = x1, y0 = y1;
    double p = 0;
    double x2, y2;
    for (int i = 0; i < n - 2; i++) {
        cin >> x2 >> y2;
        p += sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        x1 = x2;
        y1 = y2;
    }
    cin >> x2 >> y2;
    p += sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    p += sqrt((x0-x2)*(x0-x2) + (y0 - y2)*(y0 - y2));
    cout << "perimeter: " << p << endl;
    return 0;
}
