#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    const int n = 10;
    int arr[n][n];
    for (int i = 0; i <= (n / 2); i++) {
		for (int j = i; j < n - i; j++) {
			if (n % 2 == 0) {
				arr[i][j] = ((n / 2) - 1) - i;
				arr[j][i] = ((n / 2) - 1) - i;
				arr[j][(n - 1) - i] = ((n / 2) - 1) - i;
				arr[(n - 1) - i][j] = ((n / 2) - 1) - i;
			}
			else {
				arr[i][j] = (n / 2) - i;
				arr[j][i] = (n / 2) - i;
				arr[j][(n - 1) - i] = (n / 2) - i;
				arr[(n - 1) - i][j] = (n / 2) - i;
			}
		}
	}
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}