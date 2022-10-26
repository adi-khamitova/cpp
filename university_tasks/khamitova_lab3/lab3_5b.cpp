#include <iostream>
using namespace std;
int main() {
    int bday, bmonth, byear;
    int tday, tmonth, tyear;
    cout << "введите дату рождения (день, месяц, год через пробел): " << endl;
    cin >> bday >> bmonth >> byear;
    cout << "введите текущую дату (день, месяц, год через пробел): " << endl;
    cin >> tday >> tmonth >> tyear;
    int years;
    if ((bday <= tday) && (bmonth <= tmonth)) years = tyear - byear;
    else years = tyear - byear - 1;
    if ((years % 100 > 10) && (years % 100 < 20)) {
        cout << "Вам " << years << " лет." << endl;
        return 0;
    }
    if (years % 10 == 1) {
        cout << "Вам " << years << " год." << endl;
        return 0;
    }
    if ((years % 10 == 2) || (years % 10 == 3) || (years % 10 == 4)) {
        cout << "Вам " << years << " года." << endl;
        return 0;
    }
    cout << "Вам " << years << " лет." << endl;
    return 0;
}