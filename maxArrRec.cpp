#include<iostream>
using namespace std;

/*void reverseARR(int* arr,int n)
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

}*/
int max_num =-2000;
int maxARR(int *arr,int n)
{
    if(n<0)
    {
        return max_num;
    }
    else{

        if(max_num<arr[n])
        {
            max_num=arr[n];
            maxARR(arr,n-1);
        }
        else
        {
            maxARR(arr,n-1);
        }
    }
    return max_num;


}
int main()
{
    int n;
    cin>>n;
    int *arr;
    int ans=0;
    if(n>0)
    {
        arr=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
    ans=maxARR(arr,n-1);
    }
    cout<<ans;

}
