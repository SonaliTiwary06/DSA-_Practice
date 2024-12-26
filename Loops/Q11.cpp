/* write a program where user can keep entering no till they enter a multiple of 10 using while loop*/
#include <iostream>
using namespace std;
int main(){
    int n;
    while(n>0){
        cout<<"Enter a no:"<<endl;
        cin>>n;
        if(n%10==0){
            break;

        }
        cout<<"the entered no is:"<<n<<endl;
    }
    return 0;
}
