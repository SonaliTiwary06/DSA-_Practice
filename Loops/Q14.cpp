/*  WAP to show numbers entered by user except multiple of 10 usinh do-while loop*/
#include <iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"Enter a no:"<<endl;
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<"You entered :"<<n<<endl;
    }
    while(true);
    return 0;
}
