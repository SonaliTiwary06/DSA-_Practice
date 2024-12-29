/*  WAP to find largest of three numbers  */
#include <iostream>
using namespace std;
int main() {
    int x, y, z;
    cout << "Enter a number x: ";
    cin >> x;
    cout << "Enter a number y: ";
    cin >> y;
    cout << "Enter a number z: ";
    cin >> z;
    if (x > y) {
        if (x > z) {
            cout << x << " is the largest one." << endl;
        } else {
            cout << z << " is the largest one." << endl;
        }
    } else {
        if (y > z) {
            cout << y << " is the largest one." << endl;
        } else {
            cout << z << " is the largest one." << endl;
        }
    }
    return 0;
}
