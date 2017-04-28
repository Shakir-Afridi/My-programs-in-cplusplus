
#include <iostream>
#include <math.h>

using namespace std;

bool isprime(int N)
{
    int range=sqrt(N);

    if (N%2==0 && N!=2)
    {
        return false;
    }

    for (int i=3;i<=range;i+=2)
    {
        if (N%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter Number:"<<endl;
    cin>>n;
    for(int b=1; b<=n; b++)
    {
        if (n%b==0)
        {
            if (isprime(b)==true)
        {
            cout<<b<<" is prime factor of: "<<n<<endl;
        }
        }

}
return 0;
}
