#include <string>

class Pyramid {
    public:
        std::string name;
        int a, h;
        double s, v;
        Pyramid();
        Pyramid(std::string n, int a1, int h1);
        void input_info();
        double S();
        double V();
        void figure_information();

};