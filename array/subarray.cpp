#include <iostream>
using namespace std;

int main(){

	int n; cin>>n;
	int a[1000];

	for(int i = 0 ; i < n ; i++){

		cin>>a[i];
	}

	// first loop is to traverse through each element in an array
	for(int i = 0 ; i < n ; i++){

		for(int j = i ; j < n ; j++){ // yeah loop range btata hai ki kitne subarray print karega

			for (int k = i; k <= j ; k++) // yeah use range tak ke sare element traverse karta hai
			{
				/* code */
				cout<< a[k] << ","; //and yahan hoti hai sub array ki printing.
			}
			cout<<endl;
		}
	}

}