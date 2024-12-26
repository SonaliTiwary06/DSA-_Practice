/*  WAP to find the Factorial of a number entered by the user using do-while loop*/
#include <iostream>
using namespace std;
int main(){
    int n;
    int x=1;
    int fact=1;
    cout<<"Enter a no:"<<endl;                                           
    cin>>n;
    do{
       fact=fact*x;
       x++;
    }
    while(x<=n);
    cout<<"Factorial of given no is"<<fact<<endl;
    return 0;
}
