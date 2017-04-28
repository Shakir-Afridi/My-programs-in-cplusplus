#include <iostream>
#include <math.h>

using namespace std;
int square( int h)
{
    int i, ans=i;
    while(i!=-1)
    {
        cout<<"Enter a number:";
        cin>>i;
        ans=sqrt(i);
        if(ans*ans==i)
        {
            cout<<"perfect square"<<endl;
        }
        else if(ans*ans!=i)
        cout<<"Not Perfect Square"<<endl;
    }
}

int main()
{
    int f;
    square(f);

    return 0;
}
