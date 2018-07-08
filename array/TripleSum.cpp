// triplet sum problem


#include <iostream>
using namespace std;
void mySwap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
void bubbleSort(int arr[],int n)
{
    for(int cursize=n; cursize>0; cursize--)
    {
        for(int i=0; i<cursize; i++)
        {
            if(arr[i]>arr[i+1])
                mySwap(arr[i],arr[i+1]);
        }
    }
}
void tripletSum (int arr[], int n, int sum)
{
    for(int i=0; i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k];
                cout<<endl;
                }
            }
        }
    }
}
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    bubbleSort(arr,n-1);
    int x; cin >> x;
    tripletSum(arr, n, x);
    return 0;
}
