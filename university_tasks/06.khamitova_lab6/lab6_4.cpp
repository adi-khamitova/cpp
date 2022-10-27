#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    const int n = 10;
    int arr[n];
    cout << "enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int w;
    cout << "enter w: ";
    cin >> w;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == w) {
                cout << arr[i] << "(el. num: " << i << ") + " << arr[j] << "(el. num: " << j << ") = " << w << endl;
            }
        }
    }
    return 0;
}
