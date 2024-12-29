/*  WAP to find the Factorial of a number entered by the user using while loop*/
#include <iostream>
using namespace std;
int main(){
    int n;
    int x=1;
    int fact=1;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(x<=n){
        fact=fact*x;
        x++;
    }
    cout<<"Factorial of given no is"<<fact<<endl;
    return 0;
}
