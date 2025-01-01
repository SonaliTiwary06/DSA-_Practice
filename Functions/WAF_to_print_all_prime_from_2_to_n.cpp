/*  print all prime in a range from 2 to n */
#include <iostream>
using namespace std;
bool isPrime(int n){
    for(int x=2; x<=n-1; x++){
        if(n%x==0){
            return false;
        }
    }
    return true;
}
void allPrime(int n){
    for(int x=2; x<=n; x++)
    if(isPrime(x)){
        cout<<x<<"  ";
    }
}
int main(){
    allPrime(20);
    return 0;
}
