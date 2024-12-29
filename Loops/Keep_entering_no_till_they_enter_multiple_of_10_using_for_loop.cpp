/* WAP where user can keep entering numbers till they enter multiple of 10 using for loop */
#include <iostream>
using namespace std;

int main() {
    int n;
    for (;;) {  
        cout << "Enter a number: ";
        cin >> n;
        
        if (n % 10 == 0) {
            break;  
        }
        cout<<"The entered no is:"<<n<<endl;
    }

    return 0;
}
