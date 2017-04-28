#include <iostream>

using namespace std;

int main()
{
    int first,second,third;
    cout<<"Enter first number: ";
    cin>>first;
    cout<<"Enter second number: ";
    cin>>second;
    cout<<"Enter third number: ";
    cin>>third;
    if ((first>second) && (second>third) && (first>third))
    {
        cout<<second<<" is the second maximum number";
    }
    if((first>second) && (first>third) && (third>second))
    {
        cout<<third<<" is the second maximum number";
    }

    if((second>first) && (first>third) && (second>third))
    {
        cout<<first<<" is the second maximum number";
    }
    else if((third>first) && (third>second) && (first>second))
    {
        cout<<first<<" is the second maximum number";
    }
    else if((third>first) && (third>second) && (second>first))
    {
        cout<<second<<" is the second maximum number";
    }
    if((first>third) && (third>second) && (first>second))
    {
        cout<<third<<" is the second maximum number";
    }

    return 0;
}
