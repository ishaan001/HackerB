#include <iostream>
using namespace std;


void PrintArr(int *arr,int n){
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int Partition(int arr[],int low,int high){

	int pivoit=high;
	int leftarr[100],rightarr[100];
	int j=0,k=0;
	//copy all smaller elemnts into left array 
	//copy all greater elements into right array
	for (int i = 0; i < high; ++i)
	{
		/* code */
		if(arr[i]<=pivoit){
			leftarr[j]=arr[i];
			++j;
		}
		else
		{
			rightarr[k]=arr[i];++k;
		}
	}
	for (int i = 0; i < j; ++i)
	{
		/* code */
		arr[i+low]=leftarr[i];

	}
	for (int i = j+1; i < k; ++i)
	{
		/* code */
		arr[i+low +j]=rightarr[i];
	}
	return low+j-1;
}

void quickSort(int arr[],int low,int high){
	int partInt;
	if(low>high) return;
	
	partInt=Partition(arr,low,high);
	
	quickSort(arr,low,partInt-1);
	quickSort(arr,partInt+1,high);
}
int main()
{
	int n;
	cin>>n;
	/*int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}*/
	int arr[]={2,11,54,1,9};

	/*cout<<"before applying quick sort";
	PrintArr(arr,5);
	*/quickSort(arr,0,4);
	cout<<"Hello";
	PrintArr(arr,5);
}