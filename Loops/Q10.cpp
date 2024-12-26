/*  reverse the no and print the result*/
#include <iostream>
using namespace std;

int main() {
    int res = 0;  
    int n;        
    cout << "Enter the number:" << endl;
    cin >> n;
    while (n > 0) {
        int last_digit = n % 10;   
        res = res * 10 + last_digit; 
        n = n / 10;               
    }

    cout << "Reversed number: " << res << endl;
    return 0;
}
