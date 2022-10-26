#include <iostream>
using namespace std;
int main() {

    float r, a, b, z, c;
    cout << "Введите радиус и высоту торта: " << endl;
    cin >> r >> z;
    cout << "Введите длину, ширину и высоту коробки: " << endl;
    cin >> a >> b >> c;

    if ((r <= a/2) && (r <= b/2) && (z <= c))
        cout << "Поместится" << endl;
    else
        cout << "Не поместится" << endl;
    
    return 0;


}