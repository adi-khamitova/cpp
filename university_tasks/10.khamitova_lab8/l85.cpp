#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    const int n = 7;
    int *count = new int[n];
    cout << "enter the number of temp measurements for every day:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> count[i];
    }
    int maxel = count[0];
    for (int i = 0; i < n; i++) {
        if (count[i] > maxel)
            maxel = count[i];
    }

    double **temp = new double *[n];
    for (int i = 0; i < n; i++) {
        temp[i] = new double[maxel];
    }
    cout << "enter the meaasurements starting with 1st day:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < maxel; j++) {
            if (j < count[i]) 
                cin >> temp[i][j];
            else {
                temp[i][j] = 0;
            }
        }
    }

    double mini = temp[0][0];
    for (int i = 0; i < count[0]; i++) {
        if (temp[0][i] < mini) 
            mini = temp[0][i];
    }
    cout << "a)min temp of 1st day: " << mini << endl;

    int k_neg = 0;
    for (int i = n - 2; i < n; i++) {
        for (int j = 0; j < count[i]; j++) {
            if (temp[i][j] < 0)
                k_neg += 1;
        }
    }
    cout << "b)num of negative temp in the weekend: " << k_neg << endl;

    double max_temp = temp[0][0];
    int max_i = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < count[i]; j++) {
            if (temp[i][j] > max_temp) {
                max_temp = temp[i][j];
                max_i = i;
            }
        }
    }
    cout << "c)max temp: " << max_temp << endl;
    cout << "day of max temp: " << max_i + 1 << endl;

    double av = 0;
    for (int i = 0; i < n; i++) {
        av += temp[i][0];
    }
    cout << "d)average temp of 1st measurements: " << av/n << endl;

    delete[] count;
    for (int i = 0; i < n; i++) {
        delete[] temp[i];
    }
    delete[] temp;
    return 0;
}