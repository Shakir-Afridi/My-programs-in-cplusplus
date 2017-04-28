#include <iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>

using namespace std;

void sleep(int m)
{
        for(int j=0;j<m*21000;j++)
        {

        }
}

void gotoRowCol(int rpos, int cpos)
{
 int xpos=cpos, ypos = rpos;
 COORD scrn;

 HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);

 scrn.X = xpos; scrn.Y = ypos;

 SetConsoleCursorPosition(hOuput,scrn);
}

void circle(int cx, int cy, double r, char c)
{
    for(double theta=0, r=6; theta<=360,r<=36; theta+=0.25)
    {
        double x=ceil(r*cos(theta*(3.14/180))+cx);
        double y=ceil(r*sin(theta*(3.14/180))+cy);
        gotoRowCol(y, x);
        cout<<c;
        r+=0.005;
        sleep(15);

    }
}
int main()
{
    int r;
    char c;
    cout<<"Enter a character to make spiral of: ";
    cin>>c;
    int x=40;
    int y=80;
    circle(y, x, r, c);


    return 0;
}
