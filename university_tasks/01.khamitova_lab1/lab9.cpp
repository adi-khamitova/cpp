#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите кол-во секунд: ";
    cin >> N;

    int hours;
    hours = N / 3600;

    cout << "Полных часов: " << hours << endl;
    cout << "Полных минут: " << (N / 60) - (hours * 60) << endl;
    cout << "Секунд: " << N % 60 << endl;

    return 0;
}
