/* print sum of odd digits of no entered by user using while loop*/
#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;

    while(n>0){
        int last_digit = n%10;
        if(last_digit%2!=0){
            sum = sum +last_digit;
        }
        n=n/10;
    }
    cout<<"The sum of odd digit of no is"<<sum<<endl;
    return 0;
}
