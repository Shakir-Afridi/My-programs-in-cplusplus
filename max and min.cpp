#include <iostream>

using namespace std;

int main()
{
    int i, min=0,max=0;
    while(i!=-1)
    {
        cout<<"Enter number: ";
        cin>>i;
        if(i<min)
        {
            min=i;
        }
        else if(i>max)
        {
            max=i;
        }
    }
    cout<<"Max number is "<<max<<endl;
    cout<<"Min number is "<<min;

    return 0;
}
