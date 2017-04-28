#include <iostream>

using namespace std;

int main()
{
    int N, r1,r2,r3,r4,r5,r6;
    cout<<"Enter a six digit number: ";
    cin>>N;
    r6=N%10;
    N=N/10;
    r5=N%10;
    N=N/10;
    r4=N%10;
    N=N/10;
    r3=N%10;
    N=N/10;
    r2=N%10;
    N=N/10;
    r1=N;
    cout<<"Sum of individual digits of the entered number is "<<r1+r2+r3+r4+r5+r6;
    return 0;
}
