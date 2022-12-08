#include<iostream>
#include <string>
#include <cstring>

using namespace std;


int converse(string rome_number) {
    int arab_number = 0;
    for (int i = 0; i < rome_number.size();i++){
        switch(rome_number[i]){
         case 'M': 
            arab_number += 1000;
            break;
        case 'D': 
            arab_number += 500;
            break;
        case 'C':
            if ((i+1 < rome_number.size()) && ((rome_number[i + 1] == 'D') || (rome_number[i + 1] == 'M')))
                arab_number -= 100;
            else 
                arab_number += 100;
            break;
        case 'L': 
            arab_number += 50;
            break;
        case 'X': 
            if ((i+1 < rome_number.size()) && ((rome_number[i + 1] == 'L') || (rome_number[i + 1] == 'C') || (rome_number[i + 1] == 'M')))
                arab_number -= 10;
            else 
                arab_number += 10;
            break;
        case 'V': 
            arab_number += 5;
            break;
        case 'I': 
           if ((i+1 < rome_number.size()) && ((rome_number[i + 1] == 'V') || (rome_number[i + 1] == 'X') || (rome_number[i + 1] == 'C')))
                arab_number -= 1;
           else arab_number +=1;
            break;
        }
    }

    return arab_number;
}

int main (int argc, char** argv){

    string rome_number;
    cout << "The rome number: ";
    getline(cin, rome_number);

    cout << "the arabian number: " << converse(rome_number) << endl;

    return 0;
}