#include <iostream>
using namespace std;

void print(int &sum1, int &sum2) {
    if (sum1 == sum2)
        cout << "it is a happy ticket))" << endl;
    else
        cout << "it is not a happy ticket((" << endl;
}

void happyTicket(int &number) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 6; i++) {
        if (i < 3) 
            sum1 += number % 10;
        else
            sum2 += number % 10;
        number /= 10;
    }
    print(sum1, sum2);
}

void happyTicket(int &a1, int &a2, int &a3, int &a4, int &a5, int &a6) {
    int sum1 = a1 + a2 + a3;
    int sum2 = a4 + a5 + a6;
    print(sum1, sum2);
}

void happyTicket(int &half1, int half2) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++) {
        sum1 += half1 % 10;
        half1 /= 10;
        sum2 += half2 % 10;
        half2 /= 10;
    }
    print(sum1, sum2);
}

int main(int argc, char** argv) {
    int number, a1, a2, a3, a4, a5, a6, half1, half2;

    cout << "1)enter the whole number of your ticket: ";
    cin >> number;
    happyTicket(number);

    cout << "2)enter number of your ticket separately: ";
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
    happyTicket(a1, a2, a3, a4, a5, a6);

    cout << "3)enter two halfs of your ticket: ";
    cin >> half1 >> half2;
    happyTicket(half1, half2);

    return 0;
}