/*    print hollow rectangle pattern          * * * * *
                                              *       *                          
                                              *       *
                                              * * * * *     */
#include <iostream>
using namespace std;                           
int main() {                                     
    int n;                                     
    cout<<"ENter a value of n:";
    cin>>n;
    for(int x=1; x<=n; x++){                                             
        cout<<"* ";                                                      
        for(int y=1; y<=n-1; y++){                                       
            if(x==1||x==n){                                              
                cout<<"*"<<" ";                                          
            }                                                            
            else{                                                        
                cout<<"  ";
            }
        }
        cout<<"* "<<endl;
    }
    return 0;
}
