/* (3) Build a Simple Interest Calculator*/
#include <iostream>
using namespace std;
int main()
{
    int P;
    int R;
    int T;
    cout<<"Principal is"<<endl;
    cin>>P;
    cout<<"Rate of interest is"<<endl;
    cin>>R;
    cout<<"Time is"<<endl;
    cin>>T;
    int SI=(P*R*T)/100;
    cout<<"Simple interest is"<<SI;
    return 0;
}
