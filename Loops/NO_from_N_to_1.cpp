/* print no from N to 1 using for loop*/
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number: " << endl;
    cin >> N;

    for (int s = N; s >= 1; s--) {
        cout << s << endl;
    }
    
    return 0;
}
