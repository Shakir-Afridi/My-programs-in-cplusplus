#include <iostream>

using namespace std;

int main()
{
    cout<<"\t\t\t\t\t A simple calculator which perform ";
    cout<<"addition, subtraction, multiplication ";
    cout<<"remainder and division"<<endl<<endl;
    cout<<"\t\t\tNote: For addition enter '+', for subtraction enter '-' ";
    cout<<"for multiplication enter '*', for reminader enter '%' and for division enter '/' "<<endl<<endl;
    int first;
    cout <<"Enter 1st number:";
    cin>>first;
    char k;
    cout<<"Enter operation:";
    cin>>k;
    int second;
    cout<<"Enter second number:";
    cin>>second;
    if(k=='+')
    {
        first+second;
        cout<<"The operation you choose is addition and the sum is "<<first+second;
    }
    if(k=='*')
    {
        first*second;
        cout<<"The operation you choose is multiplication and the product is "<<first*second;
    }
    if(k=='/')
    {
        first/second;
        cout<<"The operation you choose is division and the quotient is "<<first/second;
    }
    if(k=='%')
    {
        first%second;
        cout<<"The operation you choose is to find remainder and the remainder is "<<first%second;
    }
    if(k=='-')
    {
        first-second;
        cout<<"The operation you choose is subtraction and the difference is "<<first-second;
    }
    return 0;
}
