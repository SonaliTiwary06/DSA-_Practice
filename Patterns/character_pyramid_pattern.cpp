/*    print the character pyramid pattern     A
                                              B C
                                              D E F
                                              G H I J*/
#include <iostream>
using namespace std;
int main()   {                                                           
    int n;                                                               
    cout<<"Enter the value of n:";                                       
    cin>>n;                                                             
    char ch='A';
    for(int x=1;x<=n; x++){
        for(int y=1; y<=x; y++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
} 
