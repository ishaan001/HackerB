#include<iostream>
using namespace std;

bool reverseARR(int* arr,int m,int n)
{
    bool a=1;
    if(n<0)
    {
        return a;
    }
    else
    {


        if(arr[n]!=arr[m])
        {

            return 0;
            reverseARR(arr,m+1,n-1);
        }
        else{
                reverseARR(arr,m+1,n-1);
        }


    }
     return a;
}

int main()
{
    int n,b;
    cin>>n;
    int *arr;
    int m=0;
    bool a=0;
//    int ans=0;
    if(n>0)
    {
        arr=new int[n];
        for(int i=0;i<n;i++)
        {

            cin>>b;
            if(b<n && b>0)
            {
                arr[i]=b;
            }
            else
            {
                a=0;

            }



        }

    if(a)
        a=reverseARR(arr,m,n-1);




}
if(a)
    {
         cout<<"true";
    }
    else
        cout<<"false";
}
