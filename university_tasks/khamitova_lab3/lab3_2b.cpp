#include <iostream>
using namespace std;
int main() {

    float x, y, z, a, b;
    cout << "Введите параметры кирпича: " << endl;
    cin >> x >> y >> z;
    cout << "Введите параметры отвествия: " << endl;
    cin >> a >> b;

    if (((x <= a) && (y <= b)) || ((x <= a) && (z <= b)) || ((x <= b) && (y <= a)) || ((x <= b) && (z <= a))) {
        cout << "Пройдет" << endl;
        return 0;
    }
    if (((y <= a) && (z <= b)) || ((y <= b) && (z <= a))) {
        cout << "Пройдет" << endl;
        return 0;
    }
    cout << "Не пройдет" << endl;
    return 0;
    
}