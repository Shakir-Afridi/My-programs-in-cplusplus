#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4, a, b;

    cout<<"Enter fisrt coordinates:";
    cin>>x1>>y1;
    cout<<"Enter next coordinates:";
    cin>>x2>>y2;
    cout<<"Enter next coordinates:";
    cin>>x3>>y3;
    cout<<"Enter next coordinates:";
    cin>>x4>>y4;
    cout<<"Enter coordinates of the required point:";
    cin>>a>>b;
    if((a<x1 && a<x2 && a<x3 && a<x4) && (b<y1 && b<y2 && b<y3 && b<y4))
    {
        cout<<"Point is inside the Rectangle!";
    }
    else
    {
        cout<<"Point is outside the Rectangle!";
    }

    return 0;
}
