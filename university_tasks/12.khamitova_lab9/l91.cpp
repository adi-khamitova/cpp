#include <iostream>
using namespace std;

double sum(double v1, double v2) {
    return (v1 + v2);
}

double difference(double v1, double v2) {
    return (v1 - v2);
}

double product(double v1, double v2) {
    return (v1 * v2);
}

int main(int argc, char** argv) {
    double a, b;
    cout << "enter two numbers:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "5(a – 2 + b) + 1000a = ";
    cout << sum(product(5, sum(difference(a, 2), b)), product(1000, a)) << endl;
    return 0;

}