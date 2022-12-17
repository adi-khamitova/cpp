#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int group_num;
    int marks[4];
};

double average(Student st) {
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += st.marks[i];
    }
    return double(sum) / 4;
}

int main(int argc, char** argv) {
    int n;
    cout << "enter the number of students: ";
    cin >> n;
    Student *st = new Student[n];

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

    cout << "b) average marks:" << endl;
    for (int i = 0; i < n; i++) {
        double av = average(st[i]);
        cout << st[i].name << ": " << av;
        if (av == 5)
            cout << " (straight-A student!)";
        cout << endl;
    }

    return 0;
}