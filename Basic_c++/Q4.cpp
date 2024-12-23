/*(4)Write a program to calculate the area of a circle.*/
#include <iostream>
#define PI 3.14
using namespace std;

int main() {
    int r;
    cout << "Radius of circle is: ";
    cin >> r;
    double Area = PI * r * r; 
    cout << "Area of circle is: " << Area << endl;
    return 0;
}
