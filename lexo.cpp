#include<iostream>
#include<string>
using namespace std;
void Test(int N, int k)
{
    if (k > N) {return;}

    for(int i = 0; i<N; i++)
    {
        if (k <= N)
        {

            cout<<k<<endl;
            //k=k+1;

            k *= 10;
            Test(N, k);
            k /= 10;
            k++;
            if (k%10 == 0) return;
        }
    }
}
int main()
{
    int n,m;
    cin>>m;
    n=m;
     while (n >= 10)
     {
        n /= 10;
     }

         cout<<"0\n";
         Test(m, 1);
}
