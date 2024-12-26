/*  For a positive N , WAP that prints the first N Fibonacci numbers 
(This is a series where each number is a sum of previous 2 numbers in the series.)
Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34*/
#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a no:"<<endl;
    cin>>N;
    int first=0;
    int sec=1;
    cout<<first<<"  "<<sec<<"  ";

    for(int x=2;x<=N;x++){
        int third=first+sec;
        cout<<third<<"  ";
        first=sec;
        sec=third;
    }
    cout<<endl;
    return 0;
}
