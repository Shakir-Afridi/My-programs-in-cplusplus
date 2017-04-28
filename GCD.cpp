#include <iostream>

using namespace std;
int gcd(int m)
{
    int i, k, a;
    cout<<"Enter 1st no: ";
    cin>>i;
    cout<<"Enter 2nd no: ";
    cin>>k;
    for(a=i; a>0; a--)
    {
        if(i%a==0 && k%a==0)
        {
            return a;
            break;
        }

    }
}

int main()
{
    int j;
    cout<<"GCD of the two numbers is "<<gcd(j);

    return 0;
}
