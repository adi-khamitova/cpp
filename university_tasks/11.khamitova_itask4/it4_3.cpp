#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    srand(time(NULL));
    int n;
    cout << "enter n: ";
    cin >> n;
    double *array = new double[n];
    for (int i = 0; i < n; i++) {
        array[i] = -10 + rand()%21;
    }
    cout << "array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    int count = 0;
    cout << "numbers of elements > than right neighbor:" << endl;
    for (int i = 0; i < n-1; i++) {
        if (array[i] > array[i+1]) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl << "num of elements > than right neighbor: " << count << endl;
    delete[] array;
    return 0;
}