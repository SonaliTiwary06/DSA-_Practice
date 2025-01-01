/*   WAF to print factorial of number n*/
#include <iostream>
using namespace std;
int factorial (int n){
    int fact=1;
    for(int x=1; x<=n; x++){
        fact=fact*x;
    }                                                                 
    cout<<"factoraial of "<< n <<" is :"<<fact<<endl;
    return fact;
}
int main(){
    factorial(2);
    factorial(6);
    factorial(9);
    factorial(11);
    factorial(21);
    factorial(19);
    return 0;
}
