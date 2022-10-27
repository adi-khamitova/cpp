#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout << "date: ";
    cout << ltm->tm_mday << "." << 1 + ltm->tm_mon << "." << 1900 + ltm->tm_year << endl;

    int mon = 1 + ltm->tm_mon;
    string months[] = {"jan", "feb", "mar", "apr", "may", "june", "july", "aug", "sep", "oct", "nov", "dec"};
    cout << "date: ";
    cout << ltm->tm_mday << " " << months[mon - 1] << " " << 1900 + ltm->tm_year << endl;

    string season;
    if ((mon < 3) || (mon == 12)) season = "winter";
    if ((mon > 2) && (mon < 6)) season = "spring";
    if ((mon > 5) && (mon < 9)) season = "summer";
    if ((mon > 8) && (mon < 12)) season = "fall";
    cout << "season of the year: " << season << endl;

    return 0;
}
