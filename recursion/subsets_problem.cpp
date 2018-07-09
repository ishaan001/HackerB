#include<iostream>
using namespace std;

int cnt;
void subsequences_2(int in[], int out[],int i, int j,int n,int key)
{
	//Base case
	if(i==n){
		int sum=0;
		for(int k=0;k<j;k++)
		{
			sum=sum+out[k];
		}
		if(sum==key)
		{
			cnt++;
		}
		
		return;
	}

	//Rec case
	//1. Include the Current char
	out[j] = in[i];
	subsequences_2(in,out,i+1,j+1,n,key);
    
	//2. Exclude the Current char
	subsequences_2(in,out,i+1,j,n,key);
}


void subsequences(int in[], int out[],int i, int j,int n,int key)
{
	//Base case
	if(i==n){
		int sum=0;
		for(int k=0;k<j;k++)
		{
			sum=sum+out[k];
		}
		if(sum==key)
		{
			for(int k=0;k<j;k++)
			{
				cout<<out[k]<< " ";
			}
			cout<<endl;
		}
		
		return;
	}

	//Rec case
	//1. Include the Current char
	out[j] = in[i];
	subsequences(in,out,i+1,j+1,n,key);
    
	//2. Exclude the Current char
	subsequences(in,out,i+1,j,n,key);
}

int main(){
	int in[100]; int n; cin>>n;
    
    for(int i=0;i<n;i++) cin>>in[i];
    
    int key;  cin>>key;

	int out[100]={};

	subsequences_2(in,out,0,0,n,key);
	cout<<cnt<<endl;
	subsequences(in,out,0,0,n,key);
	return 0;
}