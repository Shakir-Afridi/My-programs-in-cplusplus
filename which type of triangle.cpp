#include <iostream>

using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3;
    cout<<"Enter First two Coordinates:";
    cin>>x1>>y1;
    cout<<"Enter Next two Coordinates:";
    cin>>x2>>y2;
    cout<<"Enter Next two Coordinates:";
    cin>>x3>>y3;
    int x,y,z;
    x=((x3-x1)^2+(y3-y1)^2);
    y=((x2-x3)^2+(y2-y3)^2);
    y=((x1-x2)^2+(y1-y3)^2);
    if(x==y&&y==z&&x==z)
    {
        cout<<"Its an Equilateral Triangle....!!";
    }
    else if (x==y||y==z||x==z)
    {
        cout<<"It is an Isoceles Triangle...!!";
    }
    else
        cout<<"Right Angle Triangle or Wrong Value....!!";
    return 0;
}
