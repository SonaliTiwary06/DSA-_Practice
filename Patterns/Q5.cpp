/*    print inverted star pattern * * * *
                                  * * *
                                  * *
                                  *      */
#include <iostream>
using namespace std;                                                             
int main(){
    int n;                                                                   
    cout<<"Enter the value of n:"<<endl;                                     
    cin>>n;                                                                  
    for(int x=1; x<=n; x++){
        for(int y=1; y<=(n-x+1); y++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
