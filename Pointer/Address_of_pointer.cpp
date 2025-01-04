/* find address of pointer */

#include <iostream>
using namespace std;
int main(){
    float x=9.13;
    float *ptr =&x;
    float **pptr = &ptr;
    cout<<"address of ptr is : "<<pptr<<endl;
    return 0;
}
