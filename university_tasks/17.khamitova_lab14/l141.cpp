#include <iostream>
#include <string>

using namespace std;

struct Building {
    string street;
    int number;
    double area;
    double rent_price;
};


double rent_sum(Building house) {
    return house.area * house.rent_price;
}

int main(int argc, char** argv) {
    Building house1, house2;
    cout << "enter the street of house1: ";
    cin >> house1.street;
    cout << "enter the number of house1: ";
    cin >> house1.number;
    cout << "enter the area of house1: ";
    cin >> house1.area;
    cout << "enter the rent price of 1m^2 of house1: ";
    cin >> house1.rent_price;
    house2.street = "Kremlevskaya";
    house2.number = 18;
    house2.area = 200;
    house2.rent_price = 10000;

    if (rent_sum(house1) == rent_sum(house2))
        cout << "Houses have the same rent sum" << endl;
    else {
        cout << "House of minimal rent sum: ";
        if (rent_sum(house1) > rent_sum(house2))
            cout << house2.street << ", " << house2.number << endl;
        else
            cout << house1.street << ", " << house1.number << endl;
    }
    return 0;
}