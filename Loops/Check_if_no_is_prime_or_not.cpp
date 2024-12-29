/*  check if a no is prime or not*/  
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n = 8;
    bool isPrime = true;
    int a=2;
    while(a<sqrt(n)){
        if(n%a==0){
        isPrime = false;
        break;
        }
        a++;
    }
    if (isPrime==true){
    cout<<"number is Prime"<<endl;
    }
    else{
    cout<<"number is not Prime"<<endl;
    }
    return 0;
}
