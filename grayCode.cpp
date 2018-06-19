#include<iostream>
using namespace std;


void getGrayCode(int n, int arr[],int &i)
{
    if(n==0){
        arr[i]=0;
        i++;
        return;

    }
    getGrayCode(n-1,arr,i);
    for(int j=i-1;j>=0;--j){
        int cur =arr[j];
        cur =cur|(1<<(n-1));
        arr[i] = cur;
        ++i;
    }
}
int main()
{


int n;
cin>>n;
int ans[100];
int i =0;
getGrayCode(n,ans,i);

for(int j =0;j<i;j++)
{

    cout<<ans[j]<<endl;
}
}
