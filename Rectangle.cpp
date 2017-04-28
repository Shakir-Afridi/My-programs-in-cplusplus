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
char symbol;

void L2R(int rows, int cols, int rn)
{

    for(int ci=rn;ci<=cols-rn; ci++)
    {
        gotoRowCol(rn, ci);
        cout<<symbol;
        sleep(100);
    }
}
void T2B(int rows, int cols, int rn)
{
    for(int ci=rn; ci<=rows-rn-2; ci++)
    {
        gotoRowCol(ci, cols-rn);
        cout<<symbol;
        sleep(100);
    }
}

void R2L(int rows, int cols, int rn)
{
    for(int ci=rows-rn-2;ci>=rn-2; ci--)
    {
        gotoRowCol(rows-rn-2, ci);
        cout<<symbol;
        sleep(100);
    }
}


void B2T(int rows, int cols, int rn)
{
    for(int ci=rows-rn-2;ci>=rn-2; ci--)
    {
        gotoRowCol(ci, rn);
        cout<<symbol;
        sleep(100);
    }
}

void l2r(int rows, int cols, int rn)
{

    for(int ci=rn+1;ci<=cols-rn; ci++)
    {
        gotoRowCol(rn, ci);
        cout<<" ";
        sleep(100);
    }
}
void t2b(int rows, int cols, int rn)
{
    for(int ci=rn; ci<=rows-rn-2; ci++)
    {
        gotoRowCol(ci, cols-rn);
        cout<<" ";
        sleep(100);
    }
}

void r2l(int rows, int cols, int rn)
{
    for(int ci=rows-rn-2;ci>=rn; ci--)
    {
        gotoRowCol(rows-rn-2, ci);
        cout<<" ";
        sleep(100);
    }
}


void b2t(int rows, int cols, int rn)
{
    for(int ci=rows-rn-2;ci>=rn; ci--)
    {
        gotoRowCol(ci, rn);
        cout<<" ";
        sleep(100);
    }
}



int main()
{
    cout<<"Eneter a character to make a rectangle of: ";
    cin>>symbol;
    int rows=42, cols=39;
    for(int rn=0; rn<rows/2-10; rn++)
    {
        L2R(rows, cols, rn);
        T2B(rows, cols, rn);
        R2L(rows, cols, rn);
        B2T(rows, cols, rn);

    }

    gotoRowCol(14, 14);
    cout<<"Written By;"<<endl;
    gotoRowCol(16, 14);
    cout<<"Shakir Afridi";

    for(int rn=rows/2-10; rn>=0; rn--)
    {
        l2r(rows, cols, rn);
        t2b(rows, cols, rn);
        r2l(rows, cols, rn);
        b2t(rows, cols, rn);

    }
    getch();
}
