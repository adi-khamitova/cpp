#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    const int n = 8;
    int arr[n] = {0, 1, 1};
    for (int i = 3; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
