#include "listStorage.h"


int main(int argc, char** argv) {
    listStorage myst;
    myst.print();

    myst.insert(0, 15);
    myst.print();

    myst.reverse();
    myst.print();

    myst.remove(5);
    myst.print();

    myst.insert(6, -65);
    myst.print();

    myst.reverse();
    myst.print();

    myst.remove(0);
    myst.print();

    myst.remove(-8);
    myst.print();

    myst.insert(-2, 9);
    myst.print();
    return 0;
}