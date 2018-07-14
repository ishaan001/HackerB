#include<iostream>
using namespace std;

int main(){

	int n; cin>>n;
	int a[1000];
	int currentSum = 0, maxSum = 0;
	int left = -1,right = -1;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> a[i];
	}

	for(int i = 0 ; i < n ; i++){
		
		for(int j = i ; j < n ;j++){
			currentSum = 0;
			for(int k = i ; k <= j ; k++){
				currentSum+=a[k];

			}
			if(currentSum > maxSum) {
				maxSum = currentSum;
				left = i; //left index of the elements which makes tha max sub array
				right = j; // right index of same.	
			}

		}
	}
	cout << "max sum in a subarray is :" << maxSum;
	for(int i=left ; i<right ; i++){
		cout << a[i];
	}
}