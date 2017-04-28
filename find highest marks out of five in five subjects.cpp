#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cout<<"Enter Marks of First Student;"<<endl;
    cout<<"Enter Subject1 marks=";
    cin>>a;
    cout<<"Enter Subject2 marks=";
    cin>>a;
    cout<<"Enter Subject3 marks=";
    cin>>a;
    cout<<"Enter Subject4 marks=";
    cin>>a;
    cout<<"Enter Subject5 marks=";
    cin>>a;
    cout<<"Enter Marks of second Student;"<<endl;
    cout<<"Enter Subject1 marks=";
    cin>>b;
    cout<<"Enter Subject2 marks=";
    cin>>b;
    cout<<"Enter Subject3 marks=";
    cin>>b;
    cout<<"Enter Subject4 marks=";
    cin>>b;
    cout<<"Enter Subject5 marks=";
    cin>>b;
    cout<<"Enter Third Student Marks;"<<endl;
    cout<<"Enter Subject1 marks=";
    cin>>c;
    cout<<"Enter Subject2 marks=";
    cin>>c;
    cout<<"Enter Subject3 marks=";
    cin>>c;
    cout<<"Enter Subject4 marks=";
    cin>>c;
    cout<<"Enter Subject5 marks=";
    cin>>c;
    cout<<"Enter Fourth Student Marks;"<<endl;
    cout<<"Enter Subject1 marks=";
    cin>>d;
    cout<<"Enter Subject2 marks=";
    cin>>d;
    cout<<"Enter Subject3 marks=";
    cin>>d;
    cout<<"Enter Subject4 marks=";
    cin>>d;
    cout<<"Enter Subject5 marks=";
    cin>>d;
    cout<<"Enter Fifth Student Marks"<<endl;
    cout<<"Enter Subject1 marks=";
    cin>>e;
    cout<<"Enter Subject2 marks=";
    cin>>e;
    cout<<"Enter Subject3 marks=";
    cin>>e;
    cout<<"Enter Subject4 marks=";
    cin>>e;
    cout<<"Enter Subject5 marks=";
    cin>>e;
    int k,l,m,n,o;
    k=a+a+a+a+a;
    l=b+b+b+b+b;
    m=c+c+c+c+c;
    n=d+d+d+d+d;
    o=e+e+e+e+e;
    if(k>l&&k>m&&k>n&&k>o)
        cout<<"1st Student has the ahighest aggregate of "<<k<<endl;
    else if(l>k&&l>m&&l>n&&l>o)
        cout<<"2nd Student has the ahighest aggregate of "<<l<<endl;
    else if(m>l&&m>k&&m>n&&m>o)
        cout<<"3rd Student has the ahighest aggregate of "<<m<<endl;
    else if(n>l&&n>m&&n>k&&n>o)
        cout<<"4th Student has the ahighest aggregate of "<<n<<endl;
    else if(o>l&&o>m&&o>n&&o>k)
        cout<<"5th Student has the ahighest aggregate of "<<o<<endl;
    if(k==l)
    cout<<"1st and 2nd Students have the highest aggregate of "<<k<< " and " <<l<<endl;
    else if(k==m)
    cout<<"1st and third students have the hifhest aggregates of "<<k<< " and " <<m<<endl;
    if(k==n)
    cout<<"1st and 4th students have the highest aggregates of "<<k<< " and " <<n<<endl;
    else if(k==o)
    cout<<"1st and 5th students have the highest aggregates of "<<k<< " and " <<o<<endl;
    else if(l==m)
    cout<<"2nd and 3rd students have the highest aggregates of "<<l<< " and " <<m<<endl;
    else if(l==n)
    cout<<"2nd and 4th students have the highest aggregates of "<<l<< " and " <<n<<endl;
    else if(l==o)
    cout<<"2nd and 5th students have the highest aggregates of "<<l<< " and " <<o<<endl;
    else if(m==n)
    cout<<"3rd and 4th students have the highest aggregates of "<<m<< " and " <<n<<endl;
    else if(m==o)
    cout<<"3rd and 5th students have the highest aggregates of "<<m<< " and " <<o<<endl;
    else if(n==o)
    cout<<"4th and 5th students have the highest aggregates of "<<n<< " and " <<o<<endl;
    else if(k==l && k==m)
    cout<<"1st, 2nd and 3rd students have the same highest aggregates of "<<k<<" , "<<l<< " and " <<m<<endl;
    else if(k==l && k==m && k==n)
    cout<<"1st, 2nd,3rd and 4th students have the same highest aggregates of "<<k<<" , "<<l<<" , "<<m<< " and " <<n<<endl;
    else if(k==l && k==m && k==n && k==o)
    cout<<"All the Students have the same aggregates of "<<k<<" , "<<l<<" , "<<m<<" , "<<n<< " and "<<o<<endl;
    else if(k==m && k==n)
    cout<<"1st,3rd and 4th students have the same highest aggregates of "<<k<<" , "<<m<< " and " <<n<<endl;
    else if(k==m && k==o)
    cout<<"1st, 3rd and 5th students have the same highest aggregates of "<<l<<" , "<<m<< " and " <<o<<endl;



    return 0;
}
