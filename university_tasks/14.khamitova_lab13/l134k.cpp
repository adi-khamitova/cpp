#include <iostream> 
#include<string.h>

using namespace std;

int main()
{
    system("chcp 1251 >> null");
    setlocale(LC_ALL, "RUS");
    int n = 0; int i = 0;
    string s;
    cout << "Введите число в римской СС: ";
    cin >> s;
    int r = s.size() - 1;
    while (i < r){
        if ((s[i] == 'I') && (s[i + 1] == 'V')) {
            n = n + 4;
            i = i + 2;
        }
        else if ((s[i] == 'I') && (s[i + 1] == 'X')) {
            n = n + 9;
            i = i + 2;
        }
        else if ((s[i] == 'X') && (s[i + 1] == 'L')) {
            n = n + 40;
            i = i + 2;
        }
        else if ((s[i] == 'X') && (s[i + 1] == 'C')) {
            n = n + 90;
            i = i + 2;
    }
        else if ((s[i] == 'C') && (s[i + 1] == 'D')) {
            n = n + 400;
            i = i + 2;
        }
        else if ((s[i] == 'C') && (s[i + 1] == 'M')) {
            n = n + 900;
            i = i + 2;
        }
        else if (s[i] == 'I') {
            n = n + 1;
            i = i + 1;
        }
        else if (s[i] == 'V') {
            n = n + 5;
            i = i + 1;
        }
        else if (s[i] == 'X') {
            n = n + 10;
            i = i + 1;
        }
        else if (s[i] == 'L') {
            n = n + 50;
            i = i + 1;
        }
        else if (s[i] == 'C') {
            n = n + 100;
            i = i + 1;
        }
        else if (s[i] == 'D') {
            n = n + 500;
            i = i + 1;
        }
        else if (s[i] == 'M') {
            n = n + 1000;
            i = i + 1;
        }
    }
    if (s[r] == 'I') 
        n = n + 1;
    else if (s[r] == 'V') 
        n = n + 5;
    else if (s[r] == 'X') 
        n = n + 10;
    else if (s[r] == 'L') 
        n = n + 50;
    else if (s[r] == 'C') 
        n = n + 100;
    else if (s[r] == 'D') 
    n = n + 500;
    else if (s[r] == 'M') 
    n = n + 1000;
    cout << "В десятичной системе счисления это число " << n;
    return 0;
}
