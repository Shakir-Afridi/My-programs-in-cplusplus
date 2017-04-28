#include <iostream>

using namespace std;
int num(int m)
{
    int n;
    int i, ans=0;
    cout<<"Enter a number;";
    cin>>n;
    for(i=0; i<=n; i++)
    {
        ans=ans+i;
        cout<<" "<<ans;
    }

}
int main()
{
    int m;
    num(m);

    return 0;

}
