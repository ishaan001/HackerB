#include<iostream>
using namespace std;

void reverseARR(int* arr,int n)
{
    int *arrNew=arr;
    if(n<0)
    {
        return;
    }
    else
        cout<<arr[n];
        cout<<"\n";

        reverseARR(arr,n-1);
        return;

}
int main()
{
    int n;
    cin>>n;
    int *arr;
    if(n>0)
    {
        arr=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
    reverseARR(arr,n-1);
    }

}
