#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

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




string kuku(string line)
{
    for (int i = 0; i < line.size(); i++) {
        if (i + 4 < line.size() && line[i] != 'k' && line[i + 1] != 'u' && line[i + 2] != '-' && line[i + 3] != 'k' && line[i + 4] != 'u' && line[i + 5] == ' ' && i == 0) {
            line[i] = 'k', line[i + 1] = 'u', line[i + 2] = '-', line[i + 3] = 'k', line[i + 4] = 'u';
            i += 4;
        }

        if (i + 4 < line.size() && line[i] == ' ' && line[i + 1] != 'k' && line[i + 2] != 'u' && line[i + 3] != '-' && line[i + 4] != 'k' && line[i + 5] != 'u' && line[i + 6] == ' ') {
            line[i+1] = 'k', line[i + 2] = 'u', line[i + 3] = '-', line[i + 4] = 'k', line[i + 5] = 'u';
            i += 4;
        }

        if (i + 4 < line.size() && line[i] != 'k' && line[i + 1] != 'u' && line[i + 2] != '-' && line[i + 3] != 'k' && line[i + 4] != 'u' && line[i - 1] == ' ' && i == line.size() - 5) {
            line[i] = 'k', line[i + 1] = 'u', line[i + 2] = '-', line[i + 3] = 'k', line[i + 4] = 'u';
            i += 4;
        }
    }
    return line;
}


string kukareku(string line) {
    int d = line.size();
    int c = 0;
    for (int i = 0; i < d; i++) {
        if (line[i] == 'k' && line[i + 1] == 'u' && line[i + 2] == '-' \
        && line[i + 3] == 'k' && line[i + 4] == 'u') {
            line.insert(i+2, string("-ka-re"));
            c++;
        }
    }
    if (c == 0) {
        line.insert(d/2, string("ku-ka-re-ku"));
    }
    return line;
}


string remove_kuku(string line) {
    while ((line.find("ku-ku")) != string :: npos) {
        int i = line.find("ku-ku");
        line.erase(i, 5);
    }
    return line;
}

string remove_toend(string line) {
    int pos = 0;
    for (int i = 0; i < line.size(); i++) {
        if (i + 4 < line.size() && line[i] == 'k' && line[i + 1] == 'u' \
        && line[i + 2] == '-' && line[i + 3] == 'k' && line[i + 4] == 'u') {
            if (i > pos)
                pos = i;
        }
    }
    line.erase(pos+5, line.size());
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

int count_words(string line) {
    int count = 0;
    for (int i = 0; i < line.size(); i++) {
        if ((line[i] == ' ' || line[i] == '.' || line[i] == ',' || line[i] == '?' \
        || line[i] == '!' || line[i] == ':' || line[i] == ';' || line[i] == '-') &&
        (isalpha(line[i+1]) || isdigit(line[i+1]))) {
            count++;
        }
    }
    if (line[0] != ' ') 
        count++;
    return count;
}

int main(int argc, char** argv) {
    string line;
    getline(cin, line);
    cout << min_MAX(line) << endl;
    cout << kuku(line) << endl;
    cout << kukareku(line) << endl;
    cout << remove_kuku(line) << endl;
    cout << remove_toend(line) << endl;
    cout << balance(line) << endl;
    cout << remove(line) << endl;
    cout << count_words(line) << endl;
    return 0;
}