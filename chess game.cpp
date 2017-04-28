#include <iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>

using namespace std;

void sleep(int m)
{
    for(int j=0; j<m*21000; j++)
    {

    }
}

void gotoRowCol(int rpos, int cpos)
{
    int xpos=cpos, ypos = rpos;
    COORD scrn;

    HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);

    scrn.X = xpos;
    scrn.Y = ypos;

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
                gotoRowCol(sr+r, sc+c);
                cout<<char(-78);
            }
        }
    }
}

void printboard(int rdim, int cdim)
{
    for(int r=1; r<=8; r++)
    {
        for(int c=1; c<=8; c++)
        {
            printbox((r-1)*rdim, (c-1)*cdim,rdim,cdim);
        }
    }
    int y=4;
    for(char c='A'; c<='H'; c++)
    {
        gotoRowCol(y, 52);
        cout<<c;
        y+=6;
    }
    y=4;
    for(int i=1; i<=8; i++)
    {
        gotoRowCol(52,y);
        cout<<i;
        y+=6;
    }
}

void initialize(char CHB[8][8])
{
    for(int sr=0; sr<8; sr++)
    {
        for(int sc=0; sc<8; sc++)
        {
            CHB[sr][sc]=' ';
        }
    }
    CHB[0][0]=CHB[0][7]='R';
    CHB[0][1]=CHB[0][6]='N';
    CHB[0][2]=CHB[0][5]='B';
    CHB[0][3]='Q';
    CHB[0][4]='K';
    for(int c=0; c<8; c++)
    {
        CHB[1][c]='P';
    }
    CHB[7][0]=CHB[7][7]='r';
    CHB[7][1]=CHB[7][6]='n';
    CHB[7][2]=CHB[7][5]='b';
    CHB[7][3]='q';
    CHB[7][4]='k';
    for(int c=0; c<8; c++)
    {
        CHB[6][c]='p';
    }
}

void printinbox(char CHB[8][8])
{
    int R=4;
    int C=4;
    for(int r=0; r<8; r++)
    {
        for(int c=0; c<8; c++)
        {
            gotoRowCol(R, C);
            cout<<CHB[r][c];
            C+=6;
            if(c==7)
            {
                R+=6;
                C=4;
            }
        }
    }

}

bool ismypiece(int turn, char a)
{
    if(turn==1)
    {
        return (a>='A' && a<='Z');
    }
    else if(turn==2)
    {
        return (a>='a' && a<='z');
    }
}

int turnchange(int & turn)
{
    if(turn==1)
    {
        turn=2;
    }
    else if(turn==2)
    {
        turn=1;
    }
}
bool isopponent(int turn, char c)
{
          if(turn==1)
          {
                    return(c>='a' && c<='z');
          }
          else
          {
                    return(c>='A' && c<='Z');
          }
}

void takeinput(char CHB[8][8], int&Sr, int&Sc, int&Er, int&Ec, int Turn)
{
    int c;
    char r;
    bool Legal,Notlegal;
    gotoRowCol(53, 4);
    cout<<"Enter coordinates of the piece you wanna move; ";
    cin>>r>>c;
    do
    {
        Sr=abs(r-'A');
        Sc=abs(c-1);

        Legal=ismypiece(Turn,CHB[Sr][Sc]);

        if ((Sr<0 || Sr>7) || Sc<0 || Sc>7)
        {
            Notlegal=false;
        }

        if (Legal==false)
        {
            cout<<"Wrong input...! Enter Again; ";
            cin>>r>>c;
        }
    }
    while (Legal==false);


    cout<<"Enter the coordinates you wanna move to: ";
    cin>>r>>c;
    do
    {
        Er=abs(r-'A');
        Ec=abs(c-1);

        Notlegal=ismypiece(Turn,CHB[Er][Ec]);

        if ((Er<0 || Er>7) || Ec<0 || Ec>7)
        {
            Notlegal=true;
        }

        if (((CHB[Sr][Sc]=='K') || (CHB[Sr][Sc]=='k')) && (abs(Ec-Sc)!=1 && abs(Er-Sr)!=1))
        {
            Notlegal=true;
        }

    }
    while (Notlegal==true);


}

bool firstPawn(char CHB[8][8], int sr, int sc, int er, int ec, int turn)
{
          if (CHB[sr][sc]=='P')
        {
            if (sr==1)
            {
                for (int ci=0; ci<8; ci++)
                {
                    if (sr==1 && sc==ci)
                    {
                        if (((er!=(sr+1)) || (er!=(sr+2))) &&  (sc!=ec) && (CHB[er][ec]!=' '))
                        {
                              return false;
                        }
                    }
                }

            }

            else if (((er!=(sr+1)) &&  (sc!=ec) && (CHB[er][ec]!=' ')) && (abs(ec-sc)!=1 && abs(er-sr)!=1))
            {
                return false;
            }
        }
        return true;
}


bool SecondPawn(char CHB[8][8], int sr, int sc, int er, int ec, int Turn)
{
          if (CHB[sr][sc]=='p')
        {
            if (sr==6)
            {
                for (int ci=0; ci<8; ci++)
                {
                    if (sr==6 && sc==ci)
                    {
                        if ((((er!=(sr-1)) && (sc!=ec))  || ((er!=(sr-2)) && (sc!=ec))) && (CHB[er][ec]!=' '))
                        {
                            return false;

                        }
                    }
                }

            }

            else if (((er!=(sr-1)) && (sc!=ec)&& (CHB[er][ec]!=' ')) && (abs(ec-sc)!=0 && abs(er-sr)!=1))
            {
                return false;
            }
        }
        return true;

}
bool isvertical(int sr, int sc, int er, int ec)
{
    return ((sc==ec) && (sr!=er));
}
bool v_path_clear(char CHB[8][8], int sr, int sc, int er, int ec)
{
    if(sr<er)
    {
        for(int i=sr+1; i<=er-1; i++)
        {
            if(CHB[i][sc]==' ')
            {
                return true;
            }
            else
            {
            return false;
            }
        }
    }
    if(sr>er)
    {
        for(int i=sr-1; i>=er+1; i--)
        {
            if(CHB[i][sc]==' ')
            {
                return true;
            }
            else
            {
            return false;
            }
        }
    }
}


bool ishorizental(int sr, int sc, int er, int ec)
{
    return (sr==er) && (sc!=ec);
}

bool H_path_clear(char CHB[8][8], int sr, int sc, int er, int ec)
{
    if(sc<ec)
    {
        for(int i=sc+1; i<=ec-1; i++)
        {
            if(CHB[sr][i]==' ')
            {
                return true;
            }
            else
            {
            return false;
            }
        }
    }
    if(sc>ec)
    {
        for(int i=sr-1; i>=ec+1; i++)
        {
            if(CHB[sr][i]==' ')
            {
                return true;
            }
            else
            {
            return false;
            }
        }
    }
}
bool isdiagonal(char CHB[8][8],int sr, int sc, int er, int ec)
{
    return abs(sr-er)==abs(sc-ec);
}
bool Diag_pathclear(char CHB[8][8], int sr, int sc, int er, int ec)
{
    int times;

    if((sr>er) && (sc>ec))
    {
        times=abs(sr-er);
        for(int i=1; i<times; i++)
        {
            if(CHB[sr-i][sc-i]==' ')
            {
                continue;
            }
            else
            {
            return false;
            }
        }
    }
    else if((sr>er) && (sc<ec))
    {
        times=abs(sr-er);
        for(int i=1; i<times; i++)
        {
            if(CHB[sr-i][sc+i]==' ')
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;


    }
    else if((sr<er) && (sc>ec))
    {
        times=abs(sr-er);
        for (int i=1; i<=times; i++)
        {
            if (CHB[sr+i][sc-i]==' ')
            {
                continue;
            }
            else
            {
                return false;
            }
        }

        return true;

    }
    else if ((sr<er) && (sc<ec))
    {
        times=abs(sr-er);

        for (int i=1; i<times; i++)
        {
            if (CHB[sr+i][sc+i]==' ')
            {
                continue;
            }
            else
            {
                return false;
            }
        }

        return true;

    }

}

bool rook(char CHB[8][8], int sr, int sc, int er, int ec)
{
    return ((isvertical(sc,ec,er,ec) && v_path_clear(CHB,sr,sc,er,ec)) || (ishorizental(sr,sc,er,ec) && H_path_clear(CHB,sr,sc,er,ec)));
}

bool bishup(char CHB[8][8], int sr, int sc, int er, int ec)
{
    return (isdiagonal(CHB,sr,sc,er,ec) && Diag_pathclear(CHB, sr, sc, er, ec));
}
bool knight(char CHB[8][8],int sr, int sc, int er, int ec)
{
    return ((abs(sr-er)==2 && abs(sc-ec)==1) || (abs(sr-er)==1 && (sc-ec)==2));
}


bool queen(char CHB[8][8],int sr, int sc, int er, int ec)
{
    return ((ishorizental(sr,sc,er,ec) && H_path_clear(CHB,sr,sc,er,ec)) || (isvertical(sr,sc,er,ec) && v_path_clear(CHB,sr,sc,er,ec)) || (isdiagonal(CHB,sr,sc,er,ec) && Diag_pathclear(CHB,sr,sc,er,ec)));
}
bool king(char CHB[8][8],int sr, int sc, int er, int ec)
{
    return (((abs(sr-er)==1)&& v_path_clear(CHB,sr,sc,er,ec)) || ((abs(sc-ec)==1)&& H_path_clear(CHB,sr,sc,er,ec)) || (((abs(sr-er)==1) && (abs(sc-ec)==1))&&Diag_pathclear(CHB,sr,sc,er,ec)));
}
bool pawn(char CHB[8][8], int sr, int sc, int er, int ec,int turn)
{
    return ((firstPawn(CHB,sr,sc,er,ec,turn)) || (SecondPawn(CHB,sr,sc,er,ec,turn)));

}
bool islegal (char CHB[8][8],int sr,int sc,int er,int ec,int turn)
{
    switch (CHB[sr][sc])
    {
    case 'R':
    case 'r':
    {
        return rook(CHB,sr,sc,er,ec);
        break;
    }
    case 'N':
    case 'n':
    {
        return knight(CHB,sr,sc,er,ec);
        break;
    }
    case 'B':
    case 'b':
    {
        return bishup(CHB,sr,sc,er,ec);
        break;
    }
    case 'Q':
    case 'q':
    {
        return queen(CHB,sr,sc,er,ec);
        break;
    }
    case 'K':
    case 'k':
    {
        return king(CHB,sr,sc,er,ec);
        break;
    }
    case 'P':
    case 'p':
    {
        return pawn(CHB,sr,sc,er,ec,turn);
        break;
    }
    }
}


void move (char CHB [8][8], int sr, int sc, int er, int ec)
{
    CHB[er][ec]=CHB[sr][sc];

    CHB[sr][sc]=' ';
}


int main()
{
    char CHB[8][8];
    initialize(CHB);
    printinbox(CHB);
    int rows=89, cols=124;
    int rdim=rows/13, cdim=cols/18;

    printboard(rdim,cdim);
    int turn=1;
    int sr,sc,er,ec;
    do
    {
        printboard(rdim,cdim);
        takeinput(CHB,sr,sc,er,ec,turn);
        if ((islegal(CHB,sr,sc,er,ec,turn))==true)
        {
            move(CHB,sr,sc,er,ec);

            turnchange(turn);

        }
        else if ((islegal(CHB,sr,sc,er,ec,turn))==false)
        {
            printinbox(CHB);


            cout<<"wrong....TRY AGAIN: "<<endl;
            continue;
        }
        printboard(rdim,cdim);
        printinbox(CHB);
        gotoRowCol(34, 56);
        cout<<" PLAYER "<<turn<<" TURNS: "<<endl;
    }
    while(1);
    getch();
}
