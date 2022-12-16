#include <iostream>
#include <cmath>

using namespace std;

bool positive_els_check(int array[], int size) {
    if (size == 0)
        return false;
    if (array[size-1] > 0)
        return true;
    return positive_els_check(array, size-1);
}

bool no_negative_els_check(int array[], int size) {
    if (size == 0)
        return true;
    if (array[size-1] < 0)
        return false;
    return no_negative_els_check(array, size-1);
}

bool bigger_smaller_el_check(int array[], int a, int size, char sign = '>') {
    if (size == 0)
        return false;
    if (sign == '>') {
        if (array[size-1] > a)
            return true;
        return bigger_smaller_el_check(array, a, size-1, '>');
    }
    else {
        if (array[size-1] < a)
            return true;
        return bigger_smaller_el_check(array, a, size-1, '<');
    }

}

int max_el(int array[], int size, int max) {
    if (size == 0)
        return max;
    if (array[size-1] > max)
        max = array[size-1];
    return max_el(array, size-1, max);
}

int positive_count(int array[], int size) {
    if (size == 0)
        return 0;
    if (array[size-1] > 0)
        return 1 + positive_count(array, size-1);
    else
        return positive_count(array, size-1);
}

void sorting(int *array, int size) {
    if (size == 0)
        return;
    int max = array[size-1];
    int max_i = size-1;
    for (int i = 0; i < size-1; i++) {
        if (array[i] > max) {
            max = array[i];
            max_i = i;
        }
    }
    array[max_i] = array[size-1];
    array[size-1] = max;
    sorting(array, size-1);
}

int max_el2(int array[], int size, int max) {
    if (size == 0)
        return max;
    if (array[size-1] > max)
        return max_el(array, size-1, array[size-1]);
    else
        return max_el(array, size-1, max);
}

int negative_sum(int array[], int size) {
    if (size == 0)
        return 0;
    if (array[size-1] >= 0)
        return negative_sum(array, size-1);
    else
        return array[size-1] + negative_sum(array, size-1);
}


bool mul_less_w(int *array, int w, int size, int &mul, int count = 0) {
    if (w < 0)
        return false;
    if (size == 0) {
        if (count == 0)
            return false;
        else
            return true;
    }
    if ((array[size-1] * array[size-1]) < w) {
        mul = mul * (array[size-1]);
        count++;
    }
    mul_less_w(array, w, size-1, mul, count);
    return true;
}




int main(int argc, char** argv) {
    int size;
    cout << "enter the number of elements: ";
    cin >> size;
    int *array = new int[size];
    cout << "enter the els of array: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int a;
    cout << "enter some number a: ";
    cin >> a;

    if (positive_els_check(array, size))
        cout << "there is an element > 0" << endl;
    else
        cout << "no els > 0" << endl;
    if (no_negative_els_check(array, size))
        cout << "no els < 0" << endl;
    else
        cout << "there is an element < 0" << endl;
    if (bigger_smaller_el_check(array, a, size)) 
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

    cout << "max el of array: " << max_el2(array, size, array[0]) << endl;
    cout << "sum of els < 0: " << negative_sum(array, size) << endl;

    int w;
    cout << "enter some number w: ";
    cin >> w;
    int mul = 1;
    if (mul_less_w(array, w, size, mul))
        cout << "multiply of numbers in square < w: " << mul << endl;
    else
        cout << "no numbers in square < w" << endl;

    delete[] array;
    return 0;
}