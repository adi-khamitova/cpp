#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    const int n = 10;
    int arr [n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "second element: " << arr[1] << endl;
    cout << "penultimate element: " << arr[n-2] << endl;
    cout << "uneven position elements: " << endl;
    for (int i = 1; i < n; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "average: " << sum / n << endl;


    int arr2 [] = {-2, 4, 3, -7, 0, 12, 9, -2, 4, 2};
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " + ";
        if (arr2[i] < 0) 
            cout << "(" << arr2[i] << ") = " << arr[i] + arr2[i] << endl;
        else 
            cout << arr2[i] << " = " << arr[i] + arr2[i] << endl; 
    }
    return 0;
}