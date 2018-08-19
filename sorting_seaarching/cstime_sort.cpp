#include<iostream>
#include <algorithm>
#include<ctime>
using namespace std;

int main(){

	long int arr[1000000];
	long int n; cin >> n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		arr[i] = n - i;
	}

	clock_t startTime = clock();
	sort(arr, arr+n);
	clock_t endTime = clock();

	cout << endTime - startTime << " miliSecond" <<endl ;


}