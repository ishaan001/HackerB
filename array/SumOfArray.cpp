//sum of arrays

#include<iostream>
using namespace std;
void InputArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void OutputArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"END";
    
}
void ReverseArr(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
void sumArr(int arr1[],int m,int arr2[],int n,int arr3[],int &limit)
{
     limit=max(m,n);
    int carry=0;
    int sum=0;
    for(int i=0;i<limit;i++)
    {
        //Remember arrays are zero initialise
        sum=arr1[i] + arr2[i] + carry;
        if(sum>=10)
        {
            arr3[i]=sum%10;
            carry=sum/10;
        }
        else
        {
            arr3[i]=sum;
            carry=0;
        }
        if(i==limit-1)
        {
            if(sum>=10)
            {
                limit=limit+1;
                arr3[limit-1]=1;
                break;
            }
        }
    }
}
int main(){
    
    int m;
    cin>>m;
    int arr1[20];
    InputArr(arr1,m);
    int n;
    cin>>n;
    int arr2[20];
    InputArr(arr2,n);
    ReverseArr(arr1,m);
    ReverseArr(arr2,n);
    
    int arr3[20];
    int limit;
    sumArr(arr1,m,arr2,n,arr3,limit);
    //cout<<limit;
    
    ReverseArr(arr3,limit);
    OutputArr(arr3,limit);
    
    
    return 0;
}