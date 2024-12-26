/* Enter cost of 3 items from the user (using float data type) - a pencil, a
pen and an eraser. You have to output the total cost of the items back to the user as their bill.*/
#include <iostream>
using namespace std;
int main()
{
    float pencil;
    float pen;
    float eraser;
    cout<<"Cost of pencil is"<<endl;
    cin>>pencil;
    cout<<"Cost of pen is"<<endl;
    cin>>pen;
    cout<<"Cost of eraser is"<<endl;
    cin>>eraser; 
    float Bill = pencil + pen + eraser;
    cout<<"Bill of items is"<<Bill;
    return 0;
}
