#include <iostream>
using namespace std;

int OddEvenInc(int n,int m)
{
    if(n>m)
    {
        return 0;
    }
    else{
        cout<<n;
        cout<<"\n";
        OddEvenInc(n+2,m);
        return 0;
    }
}

int OddEvenDec(int n)
{
        if(n<=0)
        {
            return 0;
        }
        else{
            cout<<n;
            cout<<"\n";
            OddEvenDec(n-2);
            return 0;
        }


}
int main()
{
   int n;
   cin>>n;
   int m=n;
   if(n%2==0){
         OddEvenDec(n-1);
         OddEvenInc(2,n);
   }
   else{
        OddEvenDec(n);
        OddEvenInc(2,n);
    }

    return 0;
}
