/*(3) print sum of first N natural no*/
#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter the last no:"<<endl;
    cin>>N;
    int a;
    int sum = 0;
    for(a=0;a<=N;a++){
        sum +=a;
    }
    cout<<"Sum is:"<<sum<<endl;
    return 0;
}
