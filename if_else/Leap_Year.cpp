/* Write a C++ program that takes a year from the user and print whether
that year is a leap year or not.*/
#include <iostream>
using namespace std;

int main() {
    int Year;
    cout << "Enter the year: ";
    cin >> Year;

    if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)) {
        cout << "This is a leap year." << endl;
    } else {
        cout << "This is not a leap year." << endl;
    }

    return 0;
}
