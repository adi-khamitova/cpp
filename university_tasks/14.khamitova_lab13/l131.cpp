#include <iostream>
#include<string>

using namespace std;

using std::string;

string big_letters(string line) {
    for (int i = 0; i < line.size(); i++) {
        if (!(isupper(line[i])))
            line[i] = toupper(line[i]);
    }
    return line;
}

int main(int argc, char** argv) {

    string name, surname, dadname, z, x, v;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your surmane: ";
    cin >> surname;
    cout << "Enter your otchestvo: ";
    cin >> dadname;

    string all_names, first_letters, sur_fl;

    all_names = surname + ' ' + name + ' ' + dadname;

    string a, b, c;
    a = name[0], b = surname[0], c = dadname[0];
    first_letters = b + "." + a + "." + c;

    sur_fl = big_letters(surname) + ' ' + name[0] + ' ' + dadname[0];

    cout << all_names << endl << first_letters << endl << sur_fl << endl;
    return 0;
}