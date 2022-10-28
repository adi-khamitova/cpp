#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int n;
    cout << "enter the number of elements: ";
    cin >> n;
    double *arr = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            sum += arr[i];
    }
    cout << "1)the sum of elements above 0: " << sum << endl;

    int maxi = 0;
    double maxa = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxa) {
            maxa = arr[i];
            maxi = i;
        }
    }
    cout << "2)index of max el: " << maxi << endl;

    double *arr2 = new double[n];
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) 
            arr2[i] = arr[i] * 10;
        else
            arr2[i] = arr[i] - 100;
    }
    cout << "3)new array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    double scalar_product = 0;
    for (int i = 0; i < n; i++) {
        scalar_product += arr[i] * arr2[i];
    }
    cout << "4)scalar product: " << scalar_product <<  endl; 
    delete[] arr;
    delete[] arr2;
}