/* Write a C++ program to get a number from the user and print whether
it's positive, negative or zero.*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Given no is"<<endl;
    cin>>a;
    if(a<0){
        cout<<"The no is negative"<<endl;
    }
    else{
        if(a>0){
            cout<<"The no is positive"<<endl;
        }
        else{
            cout<<"The no is zero"<<endl;
        }
    }
    return 0;
}
