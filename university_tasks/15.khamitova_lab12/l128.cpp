#include <iostream>

using namespace std;

bool positive_els(double array[], int size, int n = 0) {
    if (n == size)
        return false;
    if (array[n] > 0)
        return true;
    return positive_els(array, size, n+1);
}

bool no_negative_els(double array[], int size, int n = 0) {
    if (n == size)
        return true;
    if (array[n] < 0)
        return true;
    return no_negative_els(array, size, n+1);
}

bool bigger_el(double array[], double a, int size, int n = 0) {
    if (n == size)
        return false;
    if (array[n] > a)
        return true;
    return bigger_el(array, a, size, n+1);
}

double max_el(double array[], int size, double max, int n = 1) {
    if (n == size)
        return max;
    if (array[n] > max)
        max = array[n];
    return max_el(array, size, max, n+1);
}

int positive_count(double array[], int size, int n = 0) {
    if (n == size)
        return 0;
    if (array[n] > 0)
        return 1 + positive_count(array, size, n+1);
    else
        return positive_count(array, size, n+1);
}

void sorting(double *array, int size, int n = 0) {
    if (n == size)
        return;
    double min = array[n];
    int min_i = n;
    for (int i = n+1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
            min_i = i;
        }
    }
    array[min_i] = array[n];
    array[n] = min;
    sorting(array, size, n+1);
}

int main(int argc, char** argv) {
    int size;
    cout << "enter the number of elements: ";
    cin >> size;
    double *array = new double[size];
    cout << "enter the els of array: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    double a;
    cout << "enter some number a: ";
    cin >> a;

    if (positive_els(array, size))
        cout << "there is an element > 0" << endl;
    else
        cout << "no els > 0" << endl;
    if (no_negative_els(array, size))
        cout << "no els < 0" << endl;
    else
        cout << "there is an element < 0" << endl;
    if (bigger_el(array, a, size)) 
        cout << "there is an element > a" << endl;
    else
        cout << "no els > a" << endl;


    cout << "max el of array: " << max_el(array, size, array[0]) << endl;
    cout << "number of els > 0: " << positive_count(array, size) << endl;

    sorting(array, size);
    cout << "sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;
    return 0;
}