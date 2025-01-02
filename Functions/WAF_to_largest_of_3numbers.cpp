/*  Write a function that prints the largest of 3 numbers. */

#include <iostream>
using namespace std;
int numbers(int x , int y , int z){
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
}
int main(){
    numbers(23,34,45);
    return 0;
}
