#include <iostream>

using namespace std;
void reverse(int n)
{
    int i;
    cout<<"Enter a no.";
    cin>>n;
    for(i=1; i<=n; i++)
    {

        int r=n%10;
        cout<<r;
        n=n/10;
    }
    if(n!=0)
    {
        cout<<n;
    }

}

int main()
{
    int n;

    int r;
    reverse(r);
    return 0;
}
