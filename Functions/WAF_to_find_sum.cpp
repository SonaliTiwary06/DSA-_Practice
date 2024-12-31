/*  WAF to find sum of 2 numbers x , y */ 
#include <iostream>
using namespace std;
int sum (int x, int y){     // x , y are parameters   
    int sum = x+y;
    return sum;
}
int main(){
    int s = sum(2,4);        // 2 , 4 are arguments
    cout<<"sum:"<<s<<endl;
    return 0;
}
