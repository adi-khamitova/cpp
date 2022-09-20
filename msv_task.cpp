#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void reverse (int *data, int size) {

    for (int i = 0; i < (size / 2); i++) {
        int c = data[i];
        data[i] = data[size - 1 - i];
        data[size - 1 - i] = c;
    }

}

int main(int argc, char** argv) {
    srand(time(NULL));

    int size = 10 + rand()%11;
    int *arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand();
    } 

    cout << "Массив до:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse(arr, size);

    cout << "Массив после:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
