/*
Создать и ввести с клавиатуры динамический массив структурного типа, в котором хранятся сведения
 о состоянии библиотечного фонда: автор книги; название; издательство; год выпуска; количество.
 Определить количество имеющихся в наличии книг автора, запрашиваемого пользователем.
*/

#include <iostream>
#include <string>

using namespace std;

struct Book {
    string author;
    string title;
    string pub_house;
    int pub_year;
    int book_count;
};


int author_count(Book *lib, int n, string name) {
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
    Book *lib = new Book[n];
    cout << "enter the information about books." << endl;
    for (int i = 0; i < n; i++) {
        cout << "book " << i+1 << ":" << endl;
        cout << "author: ";
        cin.ignore();
        getline(cin, lib[i].author);
        cout << "title: ";
        cin.ignore();
        getline(cin, lib[i].title);
        cout << "publishing house: ";
        cin.ignore();
        getline(cin, lib[i].pub_house);
        cout << "publication year: ";
        cin >> lib[i].pub_year;
        cout << "number of book in library: ";
        cin >> lib[i].book_count;
    }


    string name;
    cout << "enter the author: ";
    cin.ignore();
    getline(cin, name);

    int count = author_count(lib, n, name);
    if (count == 0)
        cout << "no books of this author in the lib" << endl;
    else
        cout << count << " books of this author in the lib" << endl;

    delete[] lib;
    return 0;
}