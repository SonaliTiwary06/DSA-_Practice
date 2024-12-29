/*  WAP to find the Factorial of a number entered by the user using for loop*/
#include <iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int x=1;x<=n;x++){                                               
        fact=fact*x;
    }
    cout<<"Factorial of the given no is:"<<fact<<endl;
    return 0;
}
