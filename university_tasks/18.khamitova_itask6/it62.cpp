/*
Создать и ввести с клавиатуры динамический массив структурного типа, в котором хранятся сведения
 о состоянии библиотечного фонда: автор книги; название; издательство; год выпуска; количество.
 Определить количество имеющихся в наличии книг автора, запрашиваемого пользователем.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <cstring>


struct Book {
    std::string author;
    std::string title;
    std::string pub_house;
    int pub_year;
    int book_count;
};


bool read_file(std::vector<Book> &lib, char* file_name) {
    std::ifstream fin(file_name);
    if (!(fin.is_open()))
        return false;
    std::string line;
    bool last_valid = true;

    while (!fin.eof()) {
        Book &book = lib.emplace_back();
        last_valid = false;
        if (!std::getline(fin, book.author))
            break;
        if (!std::getline(fin, book.title))
            break;
        if (!std::getline(fin, book.pub_house))
            break;
        if (!std::getline(fin, line))
            break;
        std::istringstream iss(line);
        if (!(iss >> book.pub_year >> book.book_count))
            break;
        last_valid = true;
    }
    if (!last_valid)
        lib.pop_back();
    return true;
}

int author_count(std::vector<Book> lib, char* name) {
    int count = 0;
    for (int i = 0; i < lib.size(); i++) {
        if (lib[i].author == name)
            count += lib[i].book_count;
    }
    return count;
}

std::string ToLower(std::string str) {
    for (int i = 0; i < str.size(); i++) {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }
    return str;
}

char* ToLower(char* name) {
    for (int i = 0; i < strlen(name); i++) {
        if (isalpha(name[i]))
            name[i] = tolower(name[i]);
    }
    return name;
}


bool author_check(std::vector<Book> lib, char* name) {
    char *name_low = ToLower(name);
    for (int i = 0; i < lib.size(); i++) {
        if (ToLower(lib[i].author).find(name_low, i) != std::string::npos) {
            strcpy(name, lib[i].author.c_str());
            return true;
        }
    }
    return false;
}



bool input_check(int argc, char** argv) {
    if (argc == 3)
        return true;
    else {
        std::cout << "Usage:" << std:: endl;
        std::cout << argv[0] << " - programm for books counting by author" << std:: endl;
        std::cout << argv[0] << " <file> <author> " << std:: endl;
        std::cout << "<file> - filename for filtering" << std::endl;
        std::cout << "<author> - name of the author" << std::endl;
        return false;
        }
}




int main(int argc, char** argv) {

    if (!(input_check(argc, argv)))
        return 0;

    std::vector<Book> lib;
    if (!(read_file(lib, argv[1]))) {
        std::cout << "failed to open file " << argv[1] << std::endl;
        return 0;
    }

    if (!(author_check(lib, argv[2]))) {
        std::cout << "no books of " << argv[2] << " in the lib" << std::endl;
        return 0;
    }

    int count = author_count(lib,argv[2]);
    std::cout << count << " books of " << argv[2] << " in the lib" << std::endl;

    return 0;
}

