#include<iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int num)
{
    while (low<=high)
    {

        int mid=(low+high)/2;
        if(arr[mid]<num)
        {
            low=mid+1;

        }
        else if(arr[mid]>num)
        {
            high=mid-1;

        }
        else
            return mid+1;
    }
    return 0;
}
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int* arr;
    arr=new int[n];
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    int ans = binarySearch(arr,0,n,m);
    cout<<ans;
}
