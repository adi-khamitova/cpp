#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double r, L, S;                
    cout << "Введите площадь S = ";     
    cin >> S;            

    r = sqrt(S / M_PI);                 
    L = 2 * M_PI * r;        
            
    cout << "радиус r = " << r << endl;                 
    cout << "длина окружности  L = " << L << endl;    

    
    return 0;
}
