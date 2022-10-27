#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    srand(time(NULL));
    const int n = 16;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand()%95;
    }
    cout << "a) array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl << "b) even index elements:" << endl;
    for (int i = 0; i < n; i += 2) {
        cout << arr[i] << endl;
    }
    int count50 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 50)
            count50 += 1;
    }
    cout << "c) num of elements < 50: " << count50 << endl;
    long long mlt = 1;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            mlt *= arr[i];
            count += 1;
        }
    }
    if (count != 0)
        cout << "d) multiplication of uneven elements: " << mlt << endl;
    else
        cout << "d) no uneven elements" << endl;
    int max = -1;
    int index;
    for (int i = 0; i < n; i++) {
        if ((arr[i] % 2 == 0) && (arr[i] > max)) {
            max = arr[i];
            index = i;
        }
    }
    cout << "e) max even el: " << max << " , index = " << index << endl;
    int arr2[n];
    arr2[n-2] = arr[0];
    arr2[n-1] = arr[1];
    for (int i = 0; i < n-2; i++) {
        arr2[i] = arr[i+2];
    }
    cout << "f) new array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
