/*     print inverted and half pyramid pattern                       *                        
                                                                   * *                                  
                                                                 * * *                        
                                                               * * * *        */
#include <iostream>
using namespace std;
int main(){
    int n;                                                                  
    cout<<"Enter value of n:";                                                
    cin>>n;                                                                 
    for(int x=1; x<=n; x++){                                                    
        for(int y=1; y<=n-x; y++){                                              
            cout<<" ";                                                      
        }                                                                   
        for(int y=1; y<=x; y++){
            cout<<"* "<<endl;
        }
    }
    return 0;
}
