/* (17)WAP to input a number and check whether the number is an Armstrong
number or not using do-while loop.*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no"<<endl;
    cin>>n;
    int y=n;
    int sum =0;
    do{
        int last_digit=n%10;                                                 
        sum=sum+(last_digit*last_digit*last_digit);
        n/=10;
    }while(n>0);
    if(sum==y){
       cout<<"It is armstrong no"<<endl; 
    }
    else{
        cout<<"It is not armstrong no"<<endl;
    }
    return 0;
}
