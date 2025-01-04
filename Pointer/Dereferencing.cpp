/* find value of pointer */

#include <iostream>
using namespace std;
int main(){
    float x=9.13;                                    
    float *ptr =&x;
    cout<<"value of ptr is : "<<*ptr<<endl;
    return 0;
}
