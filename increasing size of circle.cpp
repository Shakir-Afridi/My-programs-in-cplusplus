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

void circle(int cx, int cy, int r, char c)
{
    for(double theta=0; theta<=360; theta++)
    {
        double x=ceil(r*cos(theta*(3.14/180))+cx);
        double y=ceil(r*sin(theta*(3.14/180))+cy);
        gotoRowCol(y, x);
        cout<<c;
        sleep(15);

    }
}
int main()
{
    char c;
    cout<<"Enter any character fo which you want to print many circles: ";
    cin>>c;
    int x=40;
    int y=50;
    int rows=x;
    int cols=y;
    double theta;


    while(theta>=0) //|| theta<=360)
    {
        for(int r=4; r<=36; r+=4)
        {
            circle(y, x, r, c);
            system("cls");
            //circle(y, x, r, ' ');
        }
       /* for(int r=36; r>=4; r-=4)
        {
            circle(y, x, r, c);
            circle(y, x, r, ' ');
        }*/
    }



    return 0;
}
