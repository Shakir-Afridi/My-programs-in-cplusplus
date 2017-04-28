#include <iostream>
#include <stdlib.h>
using namespace std;

int Map2Dto1D(int ri, int ci, int Dim)
{
    return (ri-1)*Dim+ci-1;
}

void InitBoard(char B[], int Dim)
{
    for(int ri=1;ri<=Dim;ri++)
    {
        for(int ci=1;ci<=Dim;ci++)
        {
            int index = Map2Dto1D(ri,ci,Dim);
            B[index]  = ' ';
        }
    }
}


void PrintBoard(char B[], int Dim)
{
    system("cls");
    cout<<"\n\n\n\n";
    for(int ri=1;ri<=Dim;ri++)
    {

        cout<<"\t\t\t\t";
        for(int ci=1;ci<=Dim;ci++)
        {
            int index = Map2Dto1D(ri,ci,Dim);
            cout<< B[index];
            if(ci!=Dim)
                cout<<char(-80);
        }

        cout<<endl;

        if(ri!=Dim)
        {
            cout<<"\t\t\t\t";
            cout<<char(-80)<<char(-80)<<char(-80)<<char(-80)<<char(-80)<<endl;
        }
    }
}

void TakeInput(int & ri, int & ci, int Dim)
{
    cout<<"Enter Your Coordinates (1-"<<Dim<<") :";
    cin>>ri >> ci;
}


void WriteOnBoard(char B[], int ri, int ci, int Dim, char Symbol)
{
    int index = Map2Dto1D(ri,ci,Dim);
    B[index ] = Symbol;
}

void TurnChange(char & Turn)
{
    switch(Turn)
    {
        case 'X':
                 Turn = '/';
                 break;
        case '/':
                Turn = 'X';
    }
}

bool CheckLegality(char B[], int ri, int ci, int Dim)
{
    if(ri<1 || ci<1 || ri>Dim || ci>Dim)
        return false;
    int index = Map2Dto1D(ri,ci,Dim);
    if(B[index]  != ' ')
    {
        return false;
    }

    return true;
}

bool IsDraw(char B[], int Dim)
{
    for(int ri=1;ri<=Dim;ri++)
    {
        for(int ci=1;ci<=Dim;ci++)
        {
            int index = Map2Dto1D(ri,ci,Dim);
            if(B[index] == ' ')
            {
                return false;
            }
        }
    }

    return true;
}

bool IsWin(char B[], int Dim, char Turn)
{
    for(int ri=1; ri<=Dim; ri++)
    {
        int r=0;

        for (int ci=1;ci<=Dim; ci++)
        {

            int index=Map2Dto1D(ri, ci, Dim);
            if(B[index]==Turn)
            {
                r++;
                if(r==3)
            {
                return true;
            }
            }


        }
    }
    for (int ci=1;ci<=Dim; ci++)
    {
        int r=0;

       for(int ri=1; ri<=Dim; ri++)
        {

            int index=Map2Dto1D(ri, ci, Dim);
            if(B[index]==Turn)
            {
                if(ri==ci)
                {
                    r++;
                }

                if(r==3)
            {
                return true;
            }
            }


        }
    }
    int r=0,ci,ri;
    for(ci=1,ri=1; ci<=Dim,ri<=Dim; ci++,ri++)
    {
        int index=Map2Dto1D(ri, ci, Dim);
            if(B[index]==Turn)
            {
                r++;
            }
            if(r==3)
            {
                return true;
            }


    }
    int d=0;

    for(ci=Dim,ri=1; ci>=1,ri<=Dim; ci--,ri++)
    {
        int index=Map2Dto1D(ri, ci, Dim);
            if(B[index]==Turn)
            {
                d++;
            }
            if(d==3)
            {
                return true;
            }


    }


    // Write Code here
    // Based on the value of the Turn check for the following situations

    // If any of the following condition is true IsWin should return true.

    //1.  Check for each Row "ri"
            // whether all entries columnwise in "ri" are equal to Turn

    //2.  Check for each column "Ci"
            // whether all entries rowwise in "Ci" are equal to Turn

    //3.  Check for left Diagonal which essencially is (i, i)-index must be all "Turn"

    //4. Check for the right Diagonal which essencially is (i, dim-i+1)-index wise must be all Turn


    // Return false otherwise

    return false;
}


int main()
{
    int Dim = 3;
    int ri, ci;
    char Turn = 'X';   // '/'
    char Board[Dim*Dim];
    InitBoard(Board, Dim);

    // You have to figure out where you should Call IsWin function



    bool Won = false;
    do
    {
        PrintBoard(Board, Dim);
        do
        {
            TakeInput(ri, ci, Dim);
        }
        while(CheckLegality(Board, ri, ci, Dim)==false);

        WriteOnBoard(Board, ri, ci, Dim, Turn);

        if(IsWin(Board, Dim, Turn)==false)
        {
             TurnChange(Turn);
        }
        else
        {
            Won = true;
        }
     }
     while(IsDraw(Board, Dim)==false && Won == false );
     PrintBoard(Board, Dim);


    if(Won)
    {
        cout<<"Player "<<Turn<<" has Won...!"<<endl;
    }
    else
    {
        cout<<"Game Drawn"<<endl;
    }

//    return 0;
}
