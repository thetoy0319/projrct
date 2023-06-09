#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int startYear = 2000;
    int endYear = 3000;

    cout << "Leap years between " << startYear << " and " << endYear << ":\n";

    for (int year = startYear; year <= endYear; ++year) {
        if (isLeapYear(year)) {
         cout << year << "\n";
        }
    }

    return 0;
}
