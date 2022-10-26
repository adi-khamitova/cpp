#include <iostream>
using namespace std;

int main() {

   cout << "Введите два числа: ";
   double a;
   double b;

   cin >> a;
   cin >> b; 

   cout << "Сумма: " << a + b << endl;
   cout << "Разность: " << a - b << endl;
   cout << "Произведение: " << a * b << endl;

   return 0;
}