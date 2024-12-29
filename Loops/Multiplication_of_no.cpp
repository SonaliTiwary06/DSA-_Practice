/* WAP to print the multiplication table of a number, entered by the user.*/
#include <iostream>
using namespace std;
int main(){
    int n;
    int y;
    cout<<"Enter a no:"<<endl;
    cin>>n;                                                    
    for (int x=1;x<=10;x++){
        y=n*x;
        cout<<n<<"*"<<x<<"="<<y<<endl;
    }
    
    return 0;
}
