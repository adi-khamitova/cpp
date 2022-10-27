#include <iostream>
using namespace std;
int main() {

    int  dM, dW;

    cout << "Введите дату: " << endl;
    cout << "День месяца: ";  
    cin >> dM;
    cout << "Номер дня в неделе: ";  
    cin >> dW;

    if (((dM == 13) && ((dW == 2) || (dW == 5))) or ((dM == 17) && (dW == 5))) 
        cout << "Неудачный день" << endl;

    return 0;

}
