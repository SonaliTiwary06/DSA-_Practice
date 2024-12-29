/*    print star pattern *
                         * *
                         * * *
                         * * * *    */
#include <iostream>
using namespace std;
int main()  {
    for(int x=1; x<=4; x++){
        for(int y=1; y<=x; y++){
            cout<<"* ";                                              
        }
        cout<<endl;
    }
    return 0;
}
