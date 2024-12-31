/*  WAF to find difference of 2 numbers x , y*/
#include <iostream>
using namespace std;
int diff (int x=6, int y=2){
    int diff = x - y;
    return diff;
}
int main(){
    int d = diff();
    cout<<"diff :"<<d<<endl;
    return 0;
}
