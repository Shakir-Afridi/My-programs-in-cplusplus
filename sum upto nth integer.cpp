#include <iostream>

using namespace std;

int main()
{
    int n;
    int i, ans=0;
    cout<<"Enter a number;";
    cin>>n;
    for(i=0; i<=n; i++)
    {
        ans=ans+i;
    }
    cout<<"Sum of integers upto "<<n<<" is "<<ans;
    return 0;

}
