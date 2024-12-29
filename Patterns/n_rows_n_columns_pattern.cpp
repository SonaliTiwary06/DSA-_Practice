/*  print a same pattern  1 1 1 1
                          2 2 2 2
                          3 3 3 3
                          4 4 4 4 for n rows and n column*/ 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n"<<endl;                                       
    cin>>n;                                                               
    for(int x=1; x<=n; x++){                                              
        for(int y=1 ;y<=n ;y++){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
