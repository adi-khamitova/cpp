#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int group_num;
    int marks[4];
};

int best_mark(Student st) {
    int max = st.marks[0];
    for (int i = 1; i < 4; i++) {
        if (st.marks[i] > max)
            max = st.marks[i];
    }
    return max;
}

int main(int argc, char** argv) {
    const int n = 3;
    Student st[3];

    cout << "enter information about students" << endl;
    for (int i = 0; i < n; i++) {
        cout << "student " << i+1 << ":" << endl;
        cout << "surname n. o.: " << endl;
        cin.ignore();
        getline(cin, st[i].name);
        cout << "group number: ";
        cin >> st[i].group_num;
        cout << "marks of 4 subjects: ";
        for (int j = 0; j < 4; j++) {
            cin >> st[i].marks[j];
        }
    }

    cout << "a) best marks:" << endl;
    for (int i = 0; i < n; i++) {
        cout << st[i].name << ": " << best_mark(st[i]) << endl;
    }

    delete[] st;
    return 0;
}