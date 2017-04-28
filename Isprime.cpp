
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

    if (isprime(n))
    {
      cout<<n<<" is prime:";
    }
    else
    {
        cout<<n<<" is not prime:";
    }


}
