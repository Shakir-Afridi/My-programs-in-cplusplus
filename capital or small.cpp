#include <iostream>

using namespace std;

int main()
{
    cout <<"Enter Alphabet:";
    char N;
    cin>>N;
    if(N>=65 && N<=90)
    {
        cout<<"Capital letter";
    }
    else if(N>=97 && N<=122)
    {
        cout<<"Small letter";
    }
    else
    {
        cout<<"Non";
    }

    return 0;
}
