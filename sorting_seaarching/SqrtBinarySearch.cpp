#include<iostream>
using namespace std;


int SquareRoot(int no)
{
	int s = 0, end = no;
	int ans,mid;
	while(s <= end){

		mid = (s+end)/2;
		if(mid*mid==no){
			ans = mid;
			break;
		}
		else if(mid*mid<no){
			s = mid+1;
			ans = mid;
		}
		else{
			end = mid - 1;
		}
	}
	return ans;
}

int main()
{
	//int num ;
	int arr[10];
	int n;
	int sum = 0;
	cin>>n;
	for(int i = 0 ;i < n ;i++){

		cin>>arr[i];
	}
	//cin>>num;
	for(int i = 0 ;i <n;i++)
	{	
		int f = SquareRoot(arr[i]);
		if(f>1){
			sum = sum + arr[i];
		}
	}
	cout<<sum;
	return 0 ; 

}