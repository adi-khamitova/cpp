#include "listStorage.h"

int main(int argc, char** argv) {
    listStorage myst;

    myst.insert(0, 15);
    myst.insert(1, 8);
    myst.insert(2, 43);
    myst.insert(3, 17);
    myst.insert(3, 17);
    myst.insert(6, -8);
    myst.print();

    int data;
    myst.get(3, data);
    myst.get(10, data);


    myst.reverse();
    myst.print();

    while (myst.size() > 0) {
        myst.remove(0);
    }
    myst.print();

    myst.insert(0, 34);
    myst.insert(1, -8);
    myst.insert(2, 5);
    myst.insert(3, 3);
    myst.insert(3, 0);
    myst.insert(6, 1);
    myst.print();

    myst.remove(5);
    myst.print();

    myst.insert(6, -65);
    myst.print();

    myst.reverse();
    myst.print();

    myst.remove(1);
    myst.print();

    myst.remove(-8);
    myst.print();

    myst.insert(-2, 9);
    myst.print();
    return 0;
}
