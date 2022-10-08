#include "listStorage.h"
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    listStorage myst;

    srand(time(NULL));

    int size = 1 + rand()%21;

    struct listStorage::Item* list = myst.create(size);
    myst.print(list);

    list = myst.insert_el(list, rand(), size);
    myst.print(list);

    list = myst.delete_el(list, rand()%22);
    myst.print(list);

    list = myst.reverse(list);
    myst.print(list);
    
    list = myst.insert_el(list, rand(), 0);
    myst.print(list);

    list = myst.delete_el(list, 0);
    myst.print(list);

    list = myst.insert_el(list, rand(), rand()%21);
    myst.print(list);

    list = myst.delete_el(list, rand()%22);
    myst.print(list);

    list = myst.reverse(list);
    myst.print(list);

    myst.free(list);

}