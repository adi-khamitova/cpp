#include <iostream>
#include <string>

using namespace std;

string change(string str1, string remove, string insert) {
    string str2;
    int head, end, find;
    int i = 0;
    while (i < str1.size()) {
        if (str1.find(remove, i) != string::npos) {
            head = str1.find(remove, i);
            find = 1;
        }
        else {
            head = str1.size();
            find = 0;
        }
        while (i < head) {
            str2.push_back(str1[i]);
            i++;
        }
        if (find == 1) {
            str2.append(insert);
            i += remove.size();
        }
    }
    return str2;
}

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
    // "три" is changed to "C", "удовлетворительно" to "satisfactory"
    string str, remove = "C", insert = "satisfactory", symb = "k";
    cout << "enter text:" << endl;
    getline(cin, str);
    cout << "new text:" << endl;
    cout << change(str, remove, insert) << endl;
    cout << "number of symbols " << symb << ": " << count(str, symb) << endl;
    return 0;
}