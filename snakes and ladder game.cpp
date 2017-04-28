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

void printbox(int sr, int sc, int rdim, int cdim)
{
    for(int r=1; r<=8; r++)
    {
        for(int c=1; c<=8; c++)
        {
            if(r==1 || r==8 || c==1 || c==8)
            {
                gotoRowCol(sr+r-1, sc+c-1);
                cout<<char(-78);
            }
        }
    }
}
void print_in_box(int r, int c, int rdim, int cdim, int Num)
{
    gotoRowCol((r-1)*rdim+rdim/2, (c-1)*cdim+cdim/2-1);
    cout<<Num;
}

void printBoard(int rdim, int cdim)
{
    for(int r=1; r<=8; r++)
    {
        for(int c=1; c<=8; c++)
        {
            printbox((r-1)*rdim, (c-1)*cdim,rdim,cdim);

        }
    }

    for(int num=100; num>=1;num--)
    {
        int r=(num-1)/10+1;
        int c=(num-1)%10+1;
        print_in_box(r, c, rdim, cdim, 100-num+1);

    }
}

int main()
{
    int rows=89, cols=124;
    int rdim=rows/10, cdim=cols/15;

    printBoard(rdim,cdim);
    getch();
}
