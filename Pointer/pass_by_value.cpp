/* change value of x */
#include <iostream>
using namespace std;
void ChangeX(int x){
    x=23;
    cout<<x<<endl;
}
int main(){
    int x=9;
    ChangeX(x);
    cout<<x<<endl;
    return 0;
}
