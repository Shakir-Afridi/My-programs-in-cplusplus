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

void sinwave(double row, double col, double scale)
{
    for(double theta=0; theta<=540; theta+=2)
    {
        double y=ceil(row-(scale*sin(theta*(3.14/180))));
        gotoRowCol(y, col);
        cout<<"*";
        sleep(100);
        col+=0.25;
    }
}

int main()
{
    double row,col,scale;
    cout<<"Enter height of wave; ";
    cin>>scale;
    row=20;
    col=0;
    sinwave(row, col, scale);
    sleep(100);
    getch();

    return 0;
}
