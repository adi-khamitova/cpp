#include "pyramid.h"
#include <iostream>
#include <cmath>
#include <string>

Pyramid::Pyramid() {
    name = "pyramid2";
    a = 2;
    h = 5;
    s = Pyramid::S();
    v = Pyramid::V();
}

Pyramid::Pyramid(std::string n, int a1, int h1) {
    name = n;
    a = a1;
    h = h1;
    s = Pyramid::S();
    v = Pyramid::V();
}

void Pyramid::input_info() {
    std::cout << "enter name: ";
    std:: cin >> name;
    std::cout << "enter a: ";
    std::cin >> a;
    std::cout << "enter h: ";
    std::cin >> h;
    s = Pyramid::S();
    v = Pyramid::V();
}

double Pyramid::S() {
    double s1 = 3 * sqrt(3) * a * a / 2;
    double s2 = 3 * a * sqrt(h*h + 3*a*a/2);
    return s1 + s2;
}

double Pyramid::V() {
    return 1./3 * h * (3 * sqrt(3) * a * a / 2);
}

void Pyramid::figure_information() {
    std::cout << name << ": a = " << a << ", h = " << h << ", ";
    std::cout << "area: " << s << ", ";
    std::cout << "volume: " << v << std::endl;
}
