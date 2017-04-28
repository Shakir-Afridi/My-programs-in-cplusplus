#include <iostream>

using namespace std;
int sum(int j)
{
        int n;
    int i, ans=0;
    cout<<"Enter a number;";
    cin>>n;
    for(i=0; i<=n; i++)
    {
        ans=ans+i;
    }
    return ans;
}
int main()
{
    int k;
    cout<<sum(k);

    return 0;

}
