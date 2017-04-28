#include <iostream>

using namespace std;

int main()
{
    float k;
    cout<<"Enter a floating number: ";
    cin>>k;
    if(k>0)
    {
        k==k+1;
        cout<<"The ceil value of "<<k<<" is "<<int(k+1);
    }
    if(k<0)
    {
        cout<<int(k);
    }

    return 0;
}
