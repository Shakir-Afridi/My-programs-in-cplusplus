#include <iostream>
#include<windows.h>
#include<conio.h>
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

void S(int Rows, int Cols, int Rn)
{
    for(int b=19; b>=7; b--)
    {
        gotoRowCol(4,b);
        cout<<"S";
        sleep(1000);

    }
    for(int c=4; c<=11; c++)
    {
        gotoRowCol(c, 7);
        cout<<"S";
        sleep(1000);
    }
    for(int b=7; b<=19; b++)
    {
        gotoRowCol(11,b);
        cout<<"S";
        sleep(1000);

    }
    for(int c=11; c<=19; c++)
    {
        gotoRowCol(c, 19);
        cout<<"S";
        sleep(1000);
    }
    for(int b=19; b>=7; b--)
    {
        gotoRowCol(19,b);
        cout<<"S";
        sleep(1000);

    }
}
void H(int Rows, int Cols, int Rn)
{
   for(int a=4; a<=19; a++)
    {
        gotoRowCol(a,23);
        cout<<"H";
        sleep(1000);
    }
    for(int b=23; b<=36; b++)
    {
        gotoRowCol(11,b);
        cout<<"H";
        sleep(1000);

    }
    for(int a=4; a<=19; a++)
    {
        gotoRowCol(a,36);
        cout<<"H";
        sleep(1000);
    }
}

void A(int Rows, int Cols, int Rn)
{
   for(int a=4; a<=19; a++)
    {
        gotoRowCol(a,40);
        cout<<"A";
        sleep(1000);
    }
    for(int b=40; b<=53; b++)
    {
        gotoRowCol(4,b);
        cout<<"A";
        sleep(1000);

    }
    for(int a=4; a<=19; a++)
    {
        gotoRowCol(a,53);
        cout<<"A";
        sleep(1000);
    }
    for(int b=40; b<=53; b++)
    {
        gotoRowCol(11,b);
        cout<<"A";
        sleep(1000);

    }

}

void K(int Rows, int Cols, int Rn)
{
     for(int a=4; a<=19; a++)
    {
        gotoRowCol(a,58);
        cout<<"K";
        sleep(1000);
    }
    int b = 58;
    for(int a=12; a>3; a--)
    {
        gotoRowCol(a,b);
        cout<<"K";
        b++;
        sleep(1000);
    }
    int c = 58;
    for(int a=10; a<=19; a++)
    {
        gotoRowCol(a,c);
        cout<<"K";
        c++;
        sleep(1000);
    }
}
void I(int Rows, int Cols, int Rn)
{
    for(int a=4; a<=19; a++)
    {
        gotoRowCol(a,71);
        cout<<"I";
        sleep(1000);
    }
}
void R(int Rows, int Cols, int Rn)
{
    for(int a=4; a<=19; a++)
    {
        gotoRowCol(a,75);
        cout<<"R";
        sleep(1000);
    }
    for(int b=75; b<85; b++)
    {
        gotoRowCol(4,b);
        cout<<"R";
        sleep(1000);

    }
    for(int c=4; c<=11; c++)
    {
        gotoRowCol(c, 85);
        cout<<"R";
        sleep(1000);
    }
    for(int b=85; b>=75; b--)
    {
        gotoRowCol(11,b);
        cout<<"R";
        sleep(1000);

    }
    int c = 75;
    for(int a=10; a<=19; a++)
    {
        gotoRowCol(a,c);
        cout<<"R";
        c++;
        sleep(1000);
    }
}

int main()
{
    int n;
    int rows=50;
    int cols=50;
    for(int rn=0; rn<=n; rn++)
    {
        S(rows, cols, rn);
        H(rows, cols, rn);
        A(rows, cols, rn);
        K(rows, cols, rn);
        I(rows, cols, rn);
        R(rows, cols, rn);
    }

    return 0;
}
