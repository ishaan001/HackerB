#include<iostream>
using namespace std;

int main(){


	// linear search 

	int a[8];
	cout << "enter 8 elements in an array";
	for(int i = 0 ; i < 8 ; i++ ){

		cin >> a[i];
	}
	cout << "enter the element to be searched";
	int n;
	cin>>n;	

	for(int i = 0 ; i < 8 ; i++){

		if(a[i] == n){
			cout << n << " = " << i;
			break;
		}
	}
	
}