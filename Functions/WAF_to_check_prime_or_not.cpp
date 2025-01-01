/*  WAF to print if number is prime or not */
#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int x=2; x<=n-1; x++){
        if(n%x==0){
            return false;
        }
    }
    return true;
}
int main(){
    cout<<isPrime(5)<<endl;
    return 0;
}
