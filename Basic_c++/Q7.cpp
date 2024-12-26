/* print the digits of given no in reverse using while loop*/
#include <iostream> 
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Digits of the number in reverse order are:" << endl;

    while (n > 0) {
        int last_digit = n % 10; 
        cout << last_digit ; 
        n /= 10; 
    }

    return 0;
}
