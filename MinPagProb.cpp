#include<iostream>
using namespace std;


void MinPage(int* arr,int n,int sum,int NoOfStudents)
{
	while()
}

int main()
{

	int NoOfStudents;
	cin>>NoOfStudents;
	int n;
	cin>>n;
	int *a=new int[n];
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
		sum+=a[i];
		int maxval =max(maxval,a[i]);
	}
	int lo = maxval;
	int high = sum;
	while(high > lo)
	{
		mid =  lo + (high - lo)/2;
		if(MinPage(arr,n,mid,NoOfStudents))
			high = mid ;
		else
			lo = mid + 1;
	}

	//int mid = sum/NoOfStudents;
	//int ans = MinPage(arr,mid,sum);


}