/* (13) WAP to show numbers entered by user except multiple of 10 using for loop*/
#include <iostream>
using namespace std;
int main(){
    int n;
    
    for(;;){
        cout<<" Enter a no:"<<endl;
        cin>>n;
        if (n%10==0){
           continue;
    }
        cout<<"You entered :"<<n<<endl;
    }
    return 0;
}
