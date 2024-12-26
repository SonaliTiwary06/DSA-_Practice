/* WAP to input a number and check whether the number is an Armstrong
number or not using while loop.*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no:"<<endl;
    cin>>n;
    int sum=0;
    while(n>0){
        int last_digit=n%10;                                              
        sum=sum+(last_digit*last_digit*last_digit);
        n/=10;
    }
    if(sum==n){
        cout<<"It is armstrong no"<<endl;
    }
    else{
        cout<<"It is not armstrong no"<<endl;
    }
    return 0;
}
