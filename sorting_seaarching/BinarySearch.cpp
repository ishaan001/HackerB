#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int n; cin >> n;
	int arr[20];
	cout << "enter "<<n<<" elements in an array";
	for(int i = 0 ; i < n ; i++){

		cin >> arr[i];
	}
	//sort(arr, arr+n);

	cout << "enter the element to be searched";
	int key; cin >> key;
	int start = 0, end = n-1;
	int mid = (start + end) / 2;

	while ( start <= end)
	{
		 mid = (start + end) / 2;
		if(arr[mid] == key) {
			cout << mid ;
			break;
		}
		else if( arr[mid] < key) start = mid + 1;
		else if ( arr[mid] > key) end = mid - 1;
	}

	return 0;
}