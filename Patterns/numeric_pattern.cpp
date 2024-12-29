/*     print a pattern    1 1 1 1
                          2 2 2 2
                          3 3 3 3
                          4 4 4 4  */
#include <iostream>
using namespace std;
int main(){
    
    for(int x=1; x<=4; x++){
        for(int y=1 ;y<=4 ;y++){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
