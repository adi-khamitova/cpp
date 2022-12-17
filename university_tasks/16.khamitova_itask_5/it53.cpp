#include <iostream>
#include <string>

using namespace std;

int count(string str, string search) {
    int i = 0;
    int count = 0;
    while(str.find(search, i) != string::npos) {
        int head;
        head = str.find(search, i);
        count++;
        i = head + search.size();
    }
    return count;
}

int main(int argc, char** argv) {
    string str;
    string symb = "=", substr = "=!!!=";
    cout << "enter text:" << endl;
    getline(cin, str);

    cout << "number of symbols " << symb <<": " << count(str, symb) << endl;
    cout << "number of substrings " << substr <<": " << count (str, substr) << endl;
    return 0;
}