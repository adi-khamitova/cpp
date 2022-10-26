#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    cout << "Color codes: 1- blue, 2 - green, 3 - red" << endl;
	int a[5][4][6];
    cout << "enter the numbers:" << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 6; k++) {
				cin >> a[i][j][k];
			}
		}
	}
	double count = 0;
    int b;
	for (int i = 0; i < 5; i++) {
		count = 0;
		b = a[i][0][0];
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 6; k++) {
				if (b == (int)a[i][j][k])
					count += a[i][j][k];
			}
		}
		if (count / 24 == 1 || count / 48 == 1 || count / 72 == 1) {
			count /= 24;
			break;
		}
	}
    if (count == 1) 
        cout << "the code of odnocvetnaya ploskost is 1" << endl;
    else {
        if (count == 2)
            cout << "the code of odnocvetnaya ploskost is 2" << endl;
        else {
            if (count == 3)
                cout << "the code of odnocvetnaya ploskost is 3" << endl;
            else 
                cout << "odnocvetnaya ploskost doesn't exist" << endl;
        }
    }    
    return 0;
}