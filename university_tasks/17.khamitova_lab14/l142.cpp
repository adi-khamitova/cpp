#include <iostream>
#include <string>

using namespace std;

struct Address {
    string street;
    string house;
    int flat;
};

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    string surname;
    string name;
    Address address;
    Date birth_date;
};


bool birthday(Person p, Date today) {
    if (p.birth_date.day == today.day && p.birth_date.month == today.month)
        return true;
    else
        return false;
}

int age(Person p, Date today) {
    if ((today.day >= p.birth_date.day && today.month >= p.birth_date.month) || (today.month > p.birth_date.month))
        return today.year - p.birth_date.year;
    else
        return today.year - p.birth_date.year - 1;
}

int main(int argc, char** argv) {
    const int n = 5;
    Person p[n];
    for (int i = 0; i < n; i++) {
        cout << "person " << i+1 << ":" << endl;
        cout << "enter surname and name: ";
        cin >> p[i].surname >> p[i].name;
        cout << "enter address(street,house,flat): ";
        cin >> p[i].address.street >> p[i].address.house >> p[i].address.flat;
        cout << "enter birth date(day,month,year): ";
        cin >> p[i].birth_date.day >> p[i].birth_date.month >> p[i].birth_date.year;
    }

    Date today;
    cout << "enter today date(day, month, year): ";
    cin >> today.day >> today.month >> today.year;

    cout << "a) Today is the birthday of:" << endl;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (birthday(p[i], today)) {
            cout << p[i].surname << " " << p[i].name << endl;
            count++;
        }
    }
    if (count == 0) 
        cout << "nobody" << endl;

    cout << "b) Age:" << endl;
    for (int i = 0; i < n; i++) {
        cout << p[i].surname << " " << p[i].name << ": " << age(p[i], today) << endl;
    }

    return 0;
}