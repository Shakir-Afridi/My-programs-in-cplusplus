#include <iostream>

using namespace std;

void star(int k, char b)
{
    int n;
    for(n=0; n<k; n++)
    {
        cout<<b;
    }
}

int main()
{
    int n;
    char b;
    cin>>n;
    for(int ln=1; ln<=n; ln++)
    {
        star(ln, 'b');
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int ln=n; ln>=1; ln--)
    {
        star(ln, 'b');
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int ln=n; ln>=1; ln--)
    {
        star(n-ln, ' ');
        star(ln, 'b');
        cout<<endl;
    }
    cout<<endl<<endl;

    for(int ln=1; ln<=n; ln++)
    {
        star(n-ln, ' ');
        star(ln, 'b');
        cout<<endl;
    }
    cout<<endl<<endl;

    for(int ln=1; ln<=n; ln++)
    {
        star(n-ln, ' ');
        star(2*ln-1, 'b');
        cout<<endl;
    }
    cout<<endl<<endl;

    for(int ln=n; ln>=1; ln--)
    {
        star(n-ln, ' ');
        star(2*ln-1, 'b');
        cout<<endl;
    }
    cout<<endl<<endl;

    for(int ln=1; ln<=n; ln++)
    {
        star(n-ln, ' ');
        star(2*ln-1, 'b');
        cout<<endl;
    }
    for(int ln=n; ln>=1; ln--)
    {
        star(n-ln, ' ');
        star(2*ln-1, 'b');
        cout<<endl;
    }
        for(int ln=n; ln>=1; ln--)
    {
        star(ln, 'b');
        star(n-ln, ' ');
        star(n-ln, ' ');
        star(ln, 'b');
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int ln=1; ln<=n; ln++)
    {
        star(ln, 'b');
        star(n-ln, ' ');
        star(n-ln, ' ');
        star(ln, 'b');
        cout<<endl;
    }
    cout<<endl<<endl;
        for(int ln=n; ln>=1; ln--)
    {
        star(ln, 'b');
        star(n-ln, ' ');
        star(n-ln, ' ');
        star(ln, 'b');
        cout<<endl;
    }
    for(int ln=1; ln<=n; ln++)
    {
        star(ln, 'b');
        star(n-ln, ' ');
        star(n-ln, ' ');
        star(ln, 'b');
        cout<<endl;
    }



    return 0;
}
