#include <iostream>

using namespace std;

int main()
{
    int DOB,MOB,YOB;
    cout<<"Enter day of birth: ";
    cin>>DOB;
    cout<<"Enter month of your birth: ";
    cin>>MOB;
    cout<<"Enter year of your birth: ";
    cin>>YOB;

    bool correctDOB = true;

    if (YOB<1900 || YOB>2000)
    {
        correctDOB = false;
    }
    if (MOB<1 || MOB>12)
    {
        correctDOB = false;
    }
    if (DOB<1)
    {
        correctDOB = false;
    }
    if ((MOB==1 || MOB==3 || MOB==5 || MOB==7 || MOB==8 || MOB==10 || MOB==12) && (DOB>31))
    {
        correctDOB = false;
    }
    if ((MOB==4 || MOB==6 || MOB==9 || MOB==11) && (DOB>30))
    {
        correctDOB = false;
    }
    if( ((MOB=2 && YOB%4==0) && DOB>29)
       || ((MOB=2 && YOB%4!=0) && DOB>28))
       {
           correctDOB = false;
       }
    if(!correctDOB)
    {
        cout<<"wrong input try again"<<endl;
        return 0;
    }

    int DOD,MOD,YOD;
    cout<<"Enter current day: ";
    cin>>DOD;
    cout<<"Enter current month: ";
    cin>>MOD;
    cout<<"Enter current year: ";
    cin>>YOD;

    bool correctDOD = true;

    if(YOD<YOB)
    {
        correctDOD=false;
    }
    if (YOD<YOB || YOD>2050)
    {
        correctDOD = false;
    }
    if (MOD<1 || MOD>12)
    {
        correctDOD = false;
    }
    if (DOD<1)
    {
        correctDOD = false;
    }
    if ((MOD==1 || MOD==3 || MOD==5 || MOD==7 || MOD==8 || MOD==10 || MOD==12) && DOD>31)
    {
        correctDOD = false;
    }
    if ((MOD==4 || MOD==6 || MOD==9 || MOD==11) && DOD>30)
    {
        correctDOD = false;
    }
    if( ((MOD=2 && YOD%4==0) && DOD>29)
       || ((MOD=2 && YOD%4!=0) && DOD>28))
       {
           correctDOD = false;
       }
    if(!correctDOD)
    {
        cout<<"wrong input try again"<<endl;
    }
       int agedays;

       agedays=DOD-DOB;
       if (agedays<0)
       {
       MOD--;
       if ((MOD==2)&& YOD%4==0)
       {agedays+=29;
       agedays=DOD-DOB;
       if(agedays<0)
       {
           agedays+=31;
           MOD--;
       }
       }
       if((MOD==2)&& YOD%4!=0)
       {agedays+=28;
        agedays=DOD-DOB;
       if(agedays<0)
       {
           agedays+=31;
           MOD--;
       }
       }

       if((MOD==1 || MOD==3 || MOD==5 || MOD==7 || MOD==8 || MOD==10 || MOD==12))
            {
                agedays+=31;
            }
       if(MOD==4 || MOD==6 || MOD==9 || MOD==11)
       {agedays+30;
       }

       }
       int agemonths=MOD-MOB;
       if (agemonths<0)
       {
           YOD--;
           agemonths+=12;
       }
       int ageyears=YOD-YOB;
       cout<<"you are "<<ageyears<<" years old"<<", "<<agemonths<<" month "<<" and "<<agedays<<" days ";
       return 0;
}
