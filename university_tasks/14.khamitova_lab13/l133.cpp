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


string kuku(string line, string replace) {
    int count = 0;
    for (int i = 0; i < line.size(); i++) {
        if (isalpha(line[i+1]) || isdigit(line[i+1]))
            count += 1;
        if (line[i] == ' ') {
            if (count == 5) {
                line.erase(i-5, 5);
                line.insert(i-5, replace);
            }
            count = 0;
        }
        if (i == line.size() - 1 && count == 5) {
            line.erase(i-5, 5);
            line.insert(i-5, replace);
        }
    }
    return line;
}


string kukareku(string line, string first, string change) {
    int count = 0;
    while (line.find(first) != string::npos) {
        int head;
        head = line.find(first);
        line.erase(head, 5);
        line.insert(head, change);
        count += 1;
    }
    if (count == 0) {
        line.insert(line.size() / 2, change);
    }
    return line;
}


string remove_kuku(string line, string first) {
    while ((line.find(first)) != string :: npos) {
        int i = line.find(first);
        line.erase(i, 5);
    }
    return line;
}

string remove_toend(string line, string first) {
    int pos = line.rfind(first);
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
    string first, change;
    cout << "enter a word to be replaced: ";
    cin >> first;
    cout << "enter a word to replace to: ";
    cin >> change;

    cout << min_MAX(line) << endl;
    cout << kuku(line, first) << endl;
    cout << kukareku(line, first, change) << endl;
    cout << remove_kuku(line, first) << endl;
    cout << remove_toend(line, first) << endl;
    cout << balance(line) << endl;
    cout << remove(line) << endl;
    cout << count_words(line) << endl;

    return 0;
}