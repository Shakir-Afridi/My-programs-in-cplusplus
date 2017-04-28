#include <iostream>

using namespace std;

int factorial (int N)
{
    int result = 1;
    for (int i=1;i<=N;i++)
    {
        result=result*i;
    }
    return result;
}

int NPR(int N, int R)
{
    return factorial(N)/factorial(N-R);
}

int NCR(int N, int R)
{
    return factorial(N)/((factorial(N-R))*factorial(R));

}




int main()
{
  int N,R;
  cout<<"Enter n: ";
  cin>>N;
  cout<<"Enter r: ";
  cin>>R;
  int nPr,nCr;
  nPr=NPR(N,R);
  nCr=NCR(N,R);

  cout<<"nPr is "<<nPr<<" and nCr is "<<nCr;
    return 0;
}
