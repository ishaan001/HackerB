#include<iostream>
using namespace std;


int checkIfMirror(int *arr1,int n)
{
    int m=1;
    int *arr3=new int[n];
    for(int i=0;i<n;i++)
    {
        arr3[arr1[i]]=i;

    }
    for(int i=0;i<n;i++)
    {
        if(arr3[i]!=arr1[i]){
            m=0;
            return m;
        }

    }
    return m;
}
int main()
{
    int n;
    cin>>n;
    int *arr1=new int[n];
    //int *arr2=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];

    }
   // cout<<"array 1 inserted\n";

 /*   for(int i=0;i<n;i++)
    {
        cin>>arr2[i];

    }*/
   // cout<<"array 2 inserted\n";
    int m=checkIfMirror(arr1,n);
  //  cout<<"m is"<<m<<"\n";
    if(m)
        cout<<"true";
    else
        cout<<"false";
}
