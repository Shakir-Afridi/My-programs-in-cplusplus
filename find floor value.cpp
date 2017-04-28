#include <iostream>

using namespace std;

int main()
{
    float k;
    cout<<"Enter a floating number: ";
    cin>>k;
    if(k>0)
    {
        cout<<"The floor value of "<<k<<" is "<<int(k);
    }
    if(k<0)
    {
        cout<<int(k-1);
    }


    return 0;
}
