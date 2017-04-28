#include <iostream>

using namespace std;

int main()
{
int max=1,min=0,k,l=0;
cout<<"Enter a number: ";
cin>>k;
int i=1;
while(i<k)
{

    l=min+max;
    min=max;

    max=l;
    i++;

}
cout<<k<<"th fibanochi number is "<<l;

    return 0;
}
