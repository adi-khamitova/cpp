#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using std::string;

int main(int argc, char** argv) {
    string text;
    std::cout << "Enter some text: ";
    std::cin >> text;


    int S_count = 0, s_count = 0, digits = 0, big_letters = 0;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == 's')
            s_count++;
        if (text[i] == 'S')
            S_count++;
        if (isdigit(text[i]))
            digits++;
        if (isupper(text[i]))
            big_letters++;
    }

    char* text2 = new char[text.size() + 1];
    strcpy(text2, text.c_str());


    for (int i = 0; i < text.size() + 1; i++) {
        if (text2[i] == '1')
            text2[i] = '5';
        if (islower(text2[i]))
            text2[i] = toupper(text2[i]);
    }

    printf("First line = \"%s\", \nNumber of 's' = %d, \nNumber of 'S' = %d,\
     \nNumber of 's' and 'S' = %d, \nNumber of digits: %d, \nNumber of big letters: %d, \
     \nNew line = \"%s\"\n", text.c_str(), s_count, S_count, S_count + s_count, digits, big_letters, text2);

    delete[] text2;
    return 0;
}