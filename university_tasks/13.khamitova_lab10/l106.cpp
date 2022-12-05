#include <iostream>
using namespace std;

bool date(int &day, int &month, int &year) {
    cout << "enter the day: ";
    cin >> day;
    cout << "enter the month: ";
    cin >> month;
    cout << "enter the year: ";
    cin >> year;
    if ((day < 1) || (day > 31) || (month < 1) || (month > 12))
        return false;
    return true;
}

void dateTransformation(int &day, int &month, int &year)  {
    switch (month) {
        case 1: 
            cout << "january ";
            break;
        case 2: 
            cout << "february ";
            break;
        case 3: 
            cout << "march ";
            break;
        case 4: 
            cout << "april ";
            break;
        case 5: 
            cout << "may ";
            break;
        case 6: 
            cout << "june ";
            break;
        case 7: 
            cout << "july ";
            break;
        case 8: 
            cout << "august ";
            break;
        case 9: 
            cout << "september ";
            break;
        case 10: 
            cout << "october ";
            break;
        case 11: 
            cout << "november ";
            break;
        case 12: 
            cout << "december ";
            break;
    }
    cout << day << ", ";
    cout << year << endl;
}

int age(int &bday, int &bmonth, int &byear, int &day, int &month, int &year) {
    if ((day >= bday) && (month >= bmonth))
        return year - byear;
    return year - byear - 1;
}

int main(int argc, char** argv) {


    int d1, m1, y1, d2, m2, y2;
    bool l = false;
    while (l != true) {
        cout << "1)enter the today date:" << endl;
        l = date(d1, m1, y1);
    }
    l = false;
    while (l != true) {
        cout << "enter your birthday:" << endl;
        l = date(d2, m2, y2);
    }
    if ((d1 == d2) && (m1 == m2) && (y1 == y2))
        cout << "happy birthday!" << endl;

    if ((d1 == 1) && (m1 = 1)) 
        cout << "2)happy " << y1 << " year!" << endl;



    int d3, m3, y3;
    l = false;
    while (l != true) {
        cout << "3)enter the date:" << endl;
        l = date(d3, m3, y3);
    }
    cout << "the date is:" << endl;
    dateTransformation(d3, m3, y3);



    int bd1, bd2, bd3, bm1, bm2, bm3, by1, by2, by3;
    int age1, age2, age3;
    l = false;
    while (l != true) {
        cout << "4)enter the birthday of vasya:" << endl;
        l = date(bd1, bm1, by1);
    }
    age1 = age(bd1, bm1, by1, d1, m1, y1);
    l = false;
    while (l != true) {
        cout << "enter the birthday of petya:" << endl;
        l = date(bd2, bm2, by2);
    }
    age2 = age(bd2, bm2, by2, d1, m1, y1);
    l = false;
    while (l != true) {
        cout << "enter the birthday of kolya:" << endl;
        l = date(bd3, bm3, by3);
    }
    age3 = age(bd3, bm3, by3, d1, m1, y1);

    cout << "today is ";
    dateTransformation(d1, m1, y1);

    cout << "vasya was born on ";
    dateTransformation(bd1, bm1, by1);
    cout << "he is " << age1 << endl;
    cout << "petya was born on ";
    dateTransformation(bd2, bm2, by2);
    cout << "he is " << age2 << endl;
    cout << "kolya was born on ";
    dateTransformation(bd3, bm3, by3);
    cout << "he is " << age3 << endl;

    cout << "the eldest is ";
    if (max(age1, max(age2, age3)) == age1)
        cout << "vasya" << endl;
    if (max(age1, max(age2, age3)) == age2)
        cout << "petya" << endl;
    if (max(age1, max(age2, age3)) == age3)
        cout << "kolya" << endl;

    return 0;
}