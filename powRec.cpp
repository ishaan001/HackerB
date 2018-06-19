#include<iostream>
using namespace std;
int c=1;
int PowFun(int a,int b)
{
    if(b>0){
        c*=a;
        PowFun(a,b-1);
    }
    return c;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int ans=PowFun(a,b);
    cout<<ans;
    return 0;
}
