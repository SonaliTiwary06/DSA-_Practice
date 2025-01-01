/*  WAF to find the binomial coefficient of given n and r */
#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int x=1; x<=n; x++){
        fact=fact*x;
    }
    return fact;
}
int BC(int n , int r){
    int val1=factorial(n);
    int val2=factorial(r);
    int val3=factorial(n-r); 
    int result =val1/(val2*val3);
    return result;
}
int main(){
    cout<<BC(6,2)<<endl;
    return 0;
}
