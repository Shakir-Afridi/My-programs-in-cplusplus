#include <iostream>

using namespace std;

int main()
{
    int first;
    cout <<"Enter 1st number:";
    cin>>first;
    int second;
    cout<<"Enter 2nd number:";
    cin>>second;
    if (first%second==0)
    {
        cout<<first<<" is multiple of "<<second;
    }
    else if(second%first==0)
    {
        cout<<second<<" is multiple of "<<first;
    }
    else
    {
        cout<<"They are multiple of each other";
    }
    return 0;
    }
