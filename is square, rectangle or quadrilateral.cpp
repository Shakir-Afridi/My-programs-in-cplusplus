#include <iostream>

using namespace std;

int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cout<< "Enter First two Coordinates;";
    cin>>x1>>y1;
    cout<<"Enter next two Coordinates;";
    cin>>x2>>y2;
    cout<<"Enter next two Coordinates:";
    cin>>x3>>y3;
    cout<<"Enter next two Coordinates:";
    cin>>x4>>y4;

    int i,j,k,l;

    i=((x3-x1)^2+(y3-y1)^2);
    j=((x2-x4)^2+(y2-y4)^2);
    k=((x3-x4)^2+(y3-y4)^2);
    l=((x1-x2)^2+(y1-y2)^2);

    if(i==j&&j==k&&k==l)
    {
        cout<<"Its aSquare! ";
    }

    else if (i==j&&l==k)
    {
        cout<<"Its a Rectangle! ";
    }

    else
    {
        cout<<"Its a Quadrilateral! ";
    }
    return 0;
}
