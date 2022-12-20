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

struct Book {
    std::string author;
    std::string title;
    std::string pub_house;
    int pub_year;
    int book_count;
};


void read_file(std::vector<Book> &lib) {
    std::ifstream fin("book2.txt");
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
}

int author_count(std::vector <Book> lib, std::string name) {
    int count = 0;
    for (int i = 0; i < lib.size(); i++) {
        if (lib[i].author == name)
            count += lib[i].book_count;
    }
    return count;
}


int main(int argc, char** argv) {
    std::vector <Book> lib;
    read_file(lib);

    std::string name;
    std::cout << "enter the author: ";
    std::getline(std::cin, name);

    int count = author_count(lib,name);
    if (count == 0)
        std::cout << "no books of this author in the lib" << std::endl;
    else
        std::cout << count << " books of this author in the lib" << std::endl;

    return 0;
}

