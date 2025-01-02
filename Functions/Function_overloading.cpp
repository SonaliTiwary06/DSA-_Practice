/*  WAF to add (23,46) ; (2.3 , 4.6) ; (12, 13, 14)*/

#include <iostream>
using namespace std;
int sum(int a , int b){
    cout<<a+b<<endl;
    return a+b ;
}
double sum(double a , double b){
    cout<<a+b<<endl;
    return a+b;
}
float sum(float a, float b, float c){
    cout<<a+b+c<<endl;
    return a+b+c;
}
int main(){
    sum(23,46);
    sum(2.3,4.6);
    sum(12,13,14);
    return 0;
}
