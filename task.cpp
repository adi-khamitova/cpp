#include <iostream>
using std::cout;
using std::cin;
bool accept() {
    cout<<"do you want?\n";
    char answer = 0;
    cin>>answer;
    if(answer == 'y') return true;
    return false;
}
int main() {
    accept();
    return 0;
}