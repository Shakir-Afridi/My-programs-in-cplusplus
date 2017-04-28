#include <iostream>

using namespace std;

int main()
{
    int k, r1, r2, r3, r4, r5, r6, l;
    l=0;

    while(l<=10)
    {
        cout << "Enter a Six or Less Digit number:";
        cin>>k;
        r1=k%10;
        k=k/10;
        r2=k%10;
        k=k/10;
        r3=k%10;
        k=k/10;
        r4=k%10;
        k=k/10;
        r5=k%10;
        k=k/10;
        r6=k%10;
        int y, z;
        y=1;
        z=0;
        while(z<6)
        {
            if(z==0)
            {
                r6=r6;
            }
            if(z==1)
            {
                r6=r5;
            }
            if(z==2)
            {
                r6=r4;
            }
            if(z==3)
            {
                r6=r3;
            }
            if(z==4)
            {
                r6=r2;
            }
            if(z==5)
            {
                r6=r1;
            }

            if(r6==0)
            {
                cout<<" Zero";
            }

            else if(r6==1)
            {
                cout<<" One";
            }
            else if(r6==2)
            {
                cout<<" Two";
            }
            else if(r6==3)
            {
                cout<<" Three";
            }
            else if(r6==4)
            {
                cout<<" Four";
            }
            else if(r6==5)
            {
                cout<<" Five";
            }
            else if(r6==6)
            {
                cout<<" Six";
            }
            else if(r6==7)
            {
                cout<<" Seven";
            }
            else if(r6==8)
            {
                cout<<" Eight";
            }
            else if(r6==9)
            {
                cout<<" Nine";
            }
            z++;
        }
        l++;
        cout<<endl;
    }
    return 0;
}
