/* print the half pyramid pattern  1
                                      1 2
                                      1 2 3
                                      1 2 3 4 */
#include <iostream>
using namespace std;
int main() {
    int n;                                                                      
    cout<<"Enter the value of n:"<<endl;                                        
    cin>>n;                                                                     
    for(int x=1; x<=n; x++){
        for(int y=1; y<=x; y++){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
