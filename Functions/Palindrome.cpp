/* Write a function to check if a number is a palindrome */
#include <iostream>
using namespace std;
bool isPalindrome(int num) {
    int original = num; 
    int res = 0;
    while (num > 0) {
        int last_digit = num % 10;
        res = res * 10 + last_digit;
        num /= 10;
    }
    return original == res;
}
int main() {
    int N;
    cout << "Enter a number: " << endl;
    cin >> N;
    if (isPalindrome(N)) {
        cout << N << " is a palindrome" << endl;
    } else {
        cout << N << " is not a palindrome" << endl;
    }
    return 0;
}
