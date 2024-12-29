/*  print sum of digits of no 10829 using while loop*/
#include<iostream>
using namespace std;
int main(){
    int n=10829;
    int sum = 0;
    while(n>0){
        int last_digit = n%10;
        sum = sum + last_digit;
        n = n/10;
    }
    cout<<"the sum of digits of no is"<<sum<<endl;
    return 0;
}
