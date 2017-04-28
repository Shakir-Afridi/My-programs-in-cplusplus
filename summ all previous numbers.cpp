#include <iostream>

using namespace std;

int main()
{
    int n;
    int i, ans=0;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of previous numbers are: ";
    for(i=0; i<=n; i++)
    {
        ans=ans+i;
        cout<<" "<<ans;
    }
    return 0;

}
