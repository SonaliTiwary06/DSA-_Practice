/*  Write a function which takes 2 numbers as parameters (a & b) and outputs : a^2 + b^2 + 2*ab. */
#include <iostream>
using namespace std;
int ans(int a , int b){
    return a*a + b*b + 2*a*b;
}
int main(){
    cout<<"(a+b)^2 = "<<ans(6,7);
    return 0;
}
