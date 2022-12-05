#include <iostream>
#include <math.h>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

double area(double a, double b, double c) {
    double p = (a + b + c)/2;
    return sqrt(p * (p-a) * (p-b) * (p-c));
}

int main(int argc, char** argv) {
    double x1, y1, x2, y2;
    cout << "enter the coordinates of 1st point: ";
    cin >> x1 >> y1;
    cout << "enter the coordinates of 2nd point: ";
    cin >> x2 >> y2;

    cout << "a)distance between 2 dots: " << distance(x1, y1, x2, y2) << endl;

    cout << fixed;

    cout.precision(2);
    cout << "b)distance between 1st dot and (0, 0): " << distance(x1, y1, 0, 0) << endl;
    cout << "  distance between 2nd dot and (0, 0): " << distance(x2, y2, 0, 0) << endl;

    double x3, y3;
    cout << "c)enter the coordinates of 3rd point: ";
    cin >> x3 >> y3;

    double tr1_area = area(distance(x1, y1, x2, y2), distance(x1, y1, x3, y3), distance(x3, y3, x2, y2));
    cout << "  the area of a triangle: " << tr1_area << endl;

    double x4, y4;
    cout << "d)enter the coordinates of 4th point: ";
    cin >> x4 >> y4;

    double tr2_area = area(distance(x4, y4, x2, y2), distance(x4, y4, x3, y3), distance(x3, y3, x2, y2)); 
    double tr3_area = area(distance(x1, y1, x4, y4), distance(x1, y1, x3, y3), distance(x3, y3, x4, y4));
    double tr4_area = area(distance(x1, y1, x2, y2), distance(x1, y1, x4, y4), distance(x4, y4, x2, y2));
    double quad_area = 0.5 * (tr1_area + tr2_area + tr3_area + tr4_area);
    cout << "  the area of quadrilateral: " << quad_area << endl;

    return 0;
}