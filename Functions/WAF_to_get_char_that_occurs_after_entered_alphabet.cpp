/*  Write a function that accepts a character (ch) as parameters & returns the character that occurs 
after ch in the English alphabet.  */
#include <iostream>
using namespace std;
char newalphabet(char ch) {
    if (ch == 'z') {
        return 'a'; 
    } else if (ch == 'Z') {
        return 'A'; 
    } else {
        return ch + 1;
    }
}
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "Next character is: " << newalphabet(ch) << endl;
    return 0;
}
