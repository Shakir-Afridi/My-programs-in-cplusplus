
#include <iostream>

using namespace std;

int main()
{
    int i, even=0, odd=0;
    while(i!=-1)
    {
        cout<<"Enter number: ";
        cin>>i;
        if(i%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }
    if(i==-1)
    cout<<"Count of Even numbers is: "<<even<<endl;
    cout<<"Count of Odd numbers is: "<<odd;


    return 0;
}
