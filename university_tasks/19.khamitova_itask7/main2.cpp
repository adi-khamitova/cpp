#include "pyramid.h"
#include <iostream>
#include <vector>

int main(int argc, char** argv) {
    int n;
    std::cout << "enter the number of figures: ";
    std::cin >> n;
    std::vector<Pyramid> pyramids(n);
    for (int i = 0; i < n; i++) {
        std::cout << "enter the info of figure " << i+1 << ":" << std::endl;
        pyramids[i].input_info();
    }

    std::cout << "a)" << std::endl;
    int max_len = 0, max_i;
    for (int i = 0; i < n; i++) {
        if (pyramids[i].name.size() > max_len) {
            max_len = pyramids[i].name.size();
            max_i = i;
        }
    }
    std::cout << "figure with the longest name:" << std::endl;
    pyramids[max_i].figure_information();


    std::cout << "b)" << std::endl;
    pyramids.push_back(Pyramid("new", pyramids[n-1].a * 2, pyramids[n-1].h * 2));
    pyramids[n].figure_information();

    std::cout << "c)" << std::endl;
    double min_s = pyramids[0].s; 
    int min_i = 0, count_15 = 0;
    for (int i = 0; i < n+1; i++) {
        std::cout << "s of " << pyramids[i].name << ": " << pyramids[i].s << std::endl;
        if (pyramids[i].s < min_s) {
            min_s = pyramids[i].s;
            min_i = i;
        }
        if (pyramids[i].s > 15) 
            count_15++;
    }

    std::cout << "d)" << std::endl;
    std::cout << "min s has the figure " << pyramids[min_i].name << std::endl;
    pyramids[min_i].name = "MIN" + pyramids[min_i].name;
    std::cout << "new name: " << pyramids[min_i].name << std::endl;

    std::cout << "e)" << std::endl;
    std::cout << "number of figures with s > 15: " << count_15 << std::endl;

    std::cout << "f)" << std::endl;
    double sum_v = 0;
    for (int i = 0; i < n+1; i++) {
        std::cout << "v of " << pyramids[i].name << ": " << pyramids[i].v << std::endl;
        sum_v += pyramids[i].v;
    }

    std::cout << "g)" << std::endl;
    std::cout << "sum of volumes: " << sum_v << std::endl;

    return 0;
}