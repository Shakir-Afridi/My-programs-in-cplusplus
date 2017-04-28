#include <iostream>

using namespace std;

int main()
{

    int maxi=1,mini=0,m=0,r=0,y=0,n=0,i=0;
    cout<<"How many fibonacci numbers you want: ";
    cin>>y;
    while(i<y)
    {
        maxi=1;
        mini=0;
        r=0;
        cout<<"Enter a number: ";
        cin>>m;
        n=2;

        while(n<=m)

        {
            r=mini+maxi;
            mini=maxi;

            maxi=r;

            n++;
        }
        cout<<m<<"th fibonucci number is: "<<r<<endl;
        i++;
    }

    return 0;
}
