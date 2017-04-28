#include <iostream>

using namespace std;

int main()
{
    int a,b,R=1,P=2,S=3;
    cout<<"Rock=1, Paper=2 and scissor=3;"<<endl;
    cout <<"first Player input:";
    cin>>a;
    cout<<"second Player input:";
    cin>>b;
    if((a==1 && b==1) || (a==2 && b==2) || (a==3 && b==3))
    {
        cout<<"Match draw...!";
    }
    if((a==1 && b==3) || (a==2 && b==1) || (a==3 && b==2))
       {
           cout<<"player 1 Won!!!!";
       }
       if((a==3 && b==1) || (a==1 && b==2) || (a==2 && b==3))
       {
           cout<<"player 2 Won!!!!";
       }

    return 0;
}
