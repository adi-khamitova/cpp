#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string min_MAX(string line) {
    int i = 0;
    while (i < line.size()) {
        if (i < line.size() - 2) {
            if ((line[i] == 'm') && (line[i+1] == 'i') && (line[i+2] == 'n')) {
                line[i] = 'M';
                line[i+1] = 'A';
                line[i+2] = 'X';
                i += 3;
            }
        }
        else {
            break;
        }
    }
    return line;
}


bool balance(string line) {
    int num = 0;
    for (int i = 0; i < line.size(); i++) {
        if (num < 0)
            return false;
        if (line[i] == '(')
            num += 1;
        if (line[i] == ')')
            num -= 1;
    }
    if (num != 0)
        return false;
    return true;
}


string remove(string line) {
    int head, end, pos;
    int num = 0;
    for (int i = 0; i < line.size(); i++) {
        pos = i;
        if ((line[i] == '(') && (num == 0)){
            head = i;
            num += 1;
        }
        if ((line[i] == ')') && (num == 1)) {
            end = i;
            num += 2;
        }
        if (num == 3) {
            line.erase(head, end - head + 1);
            break;
        }
    }
    if (pos < line.size()-1)
        return remove(line);
    else
        return line;
}

int main(int argc, char** argv) {
    string line;
    getline(cin, line);
    line = min_MAX(line);
    cout << line << endl;
    return 0;
}