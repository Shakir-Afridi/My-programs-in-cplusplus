#include <iostream>

using namespace std;

int main()
{
    int A,B,C,D,E,F;
    cout<<"Enter Average of Section A:";
    cin>>A;
    cout<<"Enter Average of Section B:";
    cin>>B;
    cout<<"Enter Average of Section C:";
    cin>>C;
    cout<<"Enter Average of Section D:";
    cin>>D;
    cout<<"Enter Average of Section E:";
    cin>>E;
    cout<<"Enter Average of Section F:";
    cin>>F;
    if(A>B && A>C && A>D && A>E && A>F)
    {
        cout<<"A Got the Highest Average";
    }
    if(B>A && B>C && B>D && B>E && B>F)
    {
        cout<<"B Got the Highest Average";
    }
    if(C>B && C>A && C>D && C>E && C>F)
    {
        cout<<"C Got the Highest Average";
    }
    if(D>B && D>C && D>A && D>E && D>F)
    {
        cout<<"D Got the Highest Average";
    }
    if(E>B && E>C && E>D && E>A && E>F)
    {
        cout<<"E Got the Highest Average";
    }
    if(F>B && F>C && F>D && F>E && F>A)
    {
        cout<<"F Got the Highest Average";
    }
    return 0;
}
