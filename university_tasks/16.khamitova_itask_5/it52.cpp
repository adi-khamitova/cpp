#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    string str1, str2;
    cout << "enter text:" << endl;
    getline(cin, str1);
    int n = 0;
    for (int i = 0; i < str1.size(); i++) {
        if ((i == 0) || (str1[i-1] == ' ')) {
            if (tolower(str1[i]) == 'e' || tolower(str1[i]) == 'y' || tolower(str1[i]) == 'u' \
             || tolower(str1[i]) == 'i' || tolower(str1[i]) == 'o' || tolower(str1[i]) == 'a') {
                n = 1;
             }
        }
        if (n != 0) {
            if (str1[i] == ' ') {
                str2.push_back(' ');
                n = 0;
            }
            else
                str2.push_back(str1[i]);
        }
    }

    cout << "new text:" << endl;
    cout << str2 << endl;
    return 0;

}