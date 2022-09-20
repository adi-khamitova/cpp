#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int reverse (int *a, int b) {

    for (int i = 0; i < (b / 2); i++) {
        int c = a[i];
        a[i] = a[b - 1 - i];
        a[b - 1 - i] = c;
    }

    return *a;
}

int main() {

    int size = 10 + rand()%11;
    int *arr = new int[size];

    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        arr[i] = rand();
    } 

    cout << "Массив до:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    *arr = reverse(arr, size);

    cout << "Массив после:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete arr;
    return 0;
}
