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
    cout<<"\t\t\t\t\t\t Note: Enter -1 to terminate the program"<<endl;
    cout<<"Enter Number:"<<endl;
    cin>>n;
    while(n!=-1)//(n>=0 ||  n<=0)
    {
        cout<<"Enter Number: ";
        cin>>n;
        if (isprime(n))
        {
            cout<<n<<" is prime:"<<endl;
        }
        else
        {
            cout<<n<<" is not prime:"<<endl;
        }


}
return 0;
}
