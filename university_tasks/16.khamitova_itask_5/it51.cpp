#include <iostream>
#include <string>


using namespace std;

bool check(string str, int i) {
    if (!(isdigit(str[i])) && (str[i] != '+') && (str[i] != '-') \
    && (str[i] != '*') && (str[i] != '/')) 
        return true;
    else
        return false;
}

int main(int argc, char** argv) {
    string str1, str2;
    cout << "enter text:" << endl;
    getline(cin, str1);
    for (int i = 0; i < str1.size(); i++) {
        if (check(str1, i))
            str2.push_back(str1[i]);
    }

    cout << "new text:" << endl;
    cout << str2 << endl;
    return 0;
}