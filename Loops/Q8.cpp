/*  print sum of digits of no using while loop*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no:"<<endl;
    cin>>n;
    int sum=0;
    while(n>0){
        int last_digit=n%10;
        sum=sum+last_digit;
        n=n/10;
    }
    cout<<"sum of digits of no is:"<<sum<<endl;
    return 0;
}
