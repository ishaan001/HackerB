#include<iostream>
using namespace std;
int LinearSearch(int* a,int i,int n,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(a[i]==key)
    {
        return i;
    }
    return LinearSearch(a,i+1,n,key);

}
int main() {
    int* a;
    int n;
    cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    int ans=LinearSearch(a,0,n,key);
    cout<<ans;
	return 0;
