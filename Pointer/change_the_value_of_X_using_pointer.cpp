/* change the value of X using pointer*/

#include <iostream>
using namespace std;
int main(){
    float x=9.13;                                    
    float *ptr =&x;
    *ptr = 1.94;
    cout<<x<<endl;
    return 0;
}
