/*
Создать и ввести с клавиатуры динамический массив структурного типа, в котором хранятся сведения
 о состоянии библиотечного фонда: автор книги; название; издательство; год выпуска; количество.
 Определить количество имеющихся в наличии книг автора, запрашиваемого пользователем.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <map>
#include <vector>

using namespace std;

struct Book {
    char author[100];
    char title[100];
    char pub_house[100];
    int pub_year;
    int book_count;
};

void read_file(vector <Book>& lib)
{
    Book book;;
    ifstream fin("book2.txt");
    while(!fin.eof()) {
        fin.read((char*)&book, sizeof(lib));
        lib.push_back(book);  
    }
    fin.close();
}

int author_count(vector <Book> lib, int n, string name) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (lib[i].author == name)
            count += lib[i].book_count;
    }
    return count;
}


int main(int argc, char** argv) {
    int n;
    cout << "enter the number of books: ";
    cin >> n;
    vector <Book> lib(n);
    read_file(lib);


    char name[100];
    cout << "enter the author: ";
    cin >> name;

    for (auto const& b: lib) cout << b.author << endl;


    int count = author_count(lib, n, name);
    if (count == 0)
        cout << "no books of this author in the lib" << endl;
    else
        cout << count << " books of this author in the lib" << endl;

    return 0;
}