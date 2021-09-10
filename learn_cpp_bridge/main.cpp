#include <iostream>

class Date {
public:
    int year;
    int month;
    int day;
    Date() {
        year = month = day = 0;
    }
    Date(int y, int m, int d) {
        year = y;
        month = m;
        day = d;

    }
};

int main() {
    Date today(2021, 9, 9);
    std::cout << today.year << "”N" << today.month << "Œ" << today.day << "“ú\n";
    return 0;
}