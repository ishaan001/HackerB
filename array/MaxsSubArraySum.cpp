#include<iostream>
using namespace std;

int main(){

	int n; cin>>n;
	int a[1000];


	// kadane Algorithm - 'max sub array of a sum can be calculated in a single loop'
	int cs = 0, ms = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i = 0 ; i < n ; i++){

		cs =  cs + a[i];
		if(cs < 0){
			cs = 0;
		}

		ms = max(cs,ms);
	}
	cout << "maximum sum of a sub array is" << ms;


	//int cumSum[1000] = {0}; //cumulative sum will be calculated to solve in better 
							//time complexity as currently it is N^3 cus of 3 nested loops 
	/*int currentSum = 0, maxSum = 0;
	int left = -1,right = -1;

	cin >> a[0];
	cumSum[0] = a[0];
	for (int i = 1; i < n; ++i)
	{
		
		cin >> a[i];
		cumSum[i] = a[i] + cumSum[i-1];
	}*/

	/*for(int i = 0 ; i < n ; i++){
		
		for(int j = i ; j < n ;j++){
			currentSum = 0;
			/*for(int k = i ; k <= j ; k++){
				currentSum+=a[k];

			}

			currentSum = cumSum[j] - cumSum[i-1];
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
	}*/

}