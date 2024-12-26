/*  For a positive N , WAP that prints all the prime numbers from 2 to N.*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    cout<<"Enter a no:"<<endl;
    cin>>N;
    for(int x=2;x<=N;x++){
        bool isPrime=true;
        for(int y=2;y<=sqrt(x);y++){                                               
            if(x%y==0){
                isPrime=false;
            }
        }
        if(isPrime==true){
        cout<<x<<endl;
    }
    }

    return 0;
}
