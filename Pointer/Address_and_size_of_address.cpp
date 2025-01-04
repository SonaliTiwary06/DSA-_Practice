/* find address  and size of address*/

#include <iostream>
using namespace std;
int main(){
    int x=9;
    int *ptr =&x;
    cout<<sizeof(ptr)<<endl;
    cout<<"address of x is : "<<ptr<<endl;
    return 0;
}
