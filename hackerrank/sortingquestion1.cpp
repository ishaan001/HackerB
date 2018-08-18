//sorting 0's,1's and 2's
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//code
	int NoOfTestCases; cin >> NoOfTestCases;
	int NoOfElements;
	for(int i = 0; i < NoOfTestCases; i++){
	    cin >> NoOfElements;
	    int *arr = new int[NoOfElements];
	    for(int j = 0; j < NoOfElements; j++){
	        cin >> arr[j];
	        
	    }
       /*  for(int j = 0; j <NoOfElements; j++){
	        cout << arr[j] <";
	    }
	    cout << endl;*/
	    sort(arr,arr+NoOfElements);
	    for(int j = 0; j <NoOfElements; j++){
	        cout << arr[j] << " ";
	    }
	    cout << endl;
    
    }
	return 0;
}