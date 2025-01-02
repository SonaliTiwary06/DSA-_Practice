/*  Write a function to calculate the sum of digits of a number.*/
#include <iostream>
using namespace std;
int sum = 0; 
int digit(int n) {
    if (n == 0) { 
        return sum;
    }
    int last_digit = n % 10;
    sum = sum + last_digit; 
    n /= 10;
    return digit(n); 
}
int main() {
    cout << "Sum of digits of no is: " << digit(12345) << endl;
    return 0;
}
