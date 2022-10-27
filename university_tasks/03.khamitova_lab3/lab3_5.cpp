#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Введите кол-во грибов: " << endl;
    cin >> num;
    int last = num % 10;
    if (last == 1) {
        cout << "Джонни собрал " << num << " гриб." << endl;
        return 0;
    }
    if ((last == 2) || (last == 3) || (last == 4)) {
        cout << "Джонни собрал " << num << " гриба." << endl;
        return 0;
    }
    cout << "Джонни собрал " << num << " грибов." << endl;
    return 0;
}
