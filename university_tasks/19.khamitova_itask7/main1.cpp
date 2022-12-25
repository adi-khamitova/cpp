#include "pyramid.h"
#include <iostream>

int main(int argc, char** argv) {
    Pyramid p1;
    p1.input_info();
    p1.figure_information();

    Pyramid p2;
    p2.figure_information();

    if (p1.v > p2.v)
        std::cout << p1.name << " has the biggest volume" << std::endl;
    else {
        if (p1.v < p2.v)
            std::cout << p2.name << " has the biggest volume" << std::endl;
        else
            std::cout << "figures have the same volume" << std::endl;
    }

    if (abs(p1.v - 100) > abs(p2.v - 100))
        std::cout << "volume of " << p2.name << " is closer to 100" << std::endl;
    else if (abs(p1.v - 100) < abs(p2.v - 100))
        std::cout << "volume of " << p1.name << " is closer to 100" << std::endl;
    else
        std::cout << "volumes of figures have the same difference to 100" << std::endl;
    return 0;
}