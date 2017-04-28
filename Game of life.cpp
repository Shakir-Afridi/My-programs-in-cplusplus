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


void initialize(char w[40][80],int rows,int cols,char s)
{
    for(int ci=0; ci<=cols-1; ci++)
    {
        w[rows/2][ci]=s;

    }
    for(int ri=0; ri<=rows-1; ri++)
    {
        if(ri!=rows/2)
        {
            for(int ci=0; ci<=cols-1; ci++)
            {
                w[ri][ci]=' ';

            }
        }
    }
}

void printworld(char w[40][80],int rows,int cols)
{
    gotoRowCol(0,0);
    for(int ri=0; ri<=rows-1; ri++)
    {
        for(int ci=0; ci<=cols-1; ci++)
        {
            cout<<w[ri][ci];
        }
    }
}

int count(char w[40][80],int i,int j,int rows,int cols,char s)
{
    int count=0;
    for(int ri=i-1;ri<=i+1;ri++)
    {
        if( ri==-1 || ri==rows)
        {
            continue;
        }
        {
            for(int ci=j-1;ci<=j+1;ci++)
            {
                if( ci==-1 ||ci==cols)
                {
                    continue;
                }

                if( ri==i && ci==j)
                {
                    continue;
                }
                if(w[ri][ci]==s)
                {
                    count++;
                }
            }
        }
    }
     return count;
}

void repopulate(char w[40][80],int rows,int cols,char s)
{
    char w2[40][80];
    for(int ri=0;ri<rows;ri++)
    {
        for(int ci=0;ci<cols;ci++)
        {
            int T=count(w,ri,ci,rows,cols,s);
            if(w[ri][ci]==s&&(T<2||T>3))
            {
                w2[ri][ci]=' ';

            }
            else if (w[ri][ci]==' '&&T==3)
            {
                w2[ri][ci]=s;
            }
            else
            {
                w2[ri][ci]=w[ri][ci];
            }
        }
    }
    for(int ri=0;ri<rows;ri++)
    {
        for(int ci=0;ci<cols;ci++)
        {
            w[ri][ci]=w2[ri][ci];
        }
    }

}



int main()
{
    char w[40][80];
    int rows=40, cols=80,i,j;
    char s=-79;
    initialize(w,rows,cols,s);
    do
    {
        printworld(w,rows,cols);
        repopulate(w,rows,cols,s);
    }
    while(1);

}
