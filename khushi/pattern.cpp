#include<iostream>
using namespace std;

 int main(){
 	 int rows, columns;
 	 cin >> rows >> columns;

 	 int arr[10][10];

 	 for(int i = 0 ;i < rows; i++){
 	 	for(int j = 0; j <columns; j++){
 	 		cout << "enter " << i << j << " element :";
 	 		cin >> arr[i][j];
 	 		cout << endl;
 	 	}

 	 }

 	 cout <<endl;
 	 for(int i =0; i<rows; i++){
 	 	for (int j = 0; j < columns; ++j)
 	 	{
 	 		/* code */
 	 		cout << arr[i][j] << " ";
 	 	}
 	 	cout << endl;
 	 }
 	 cout<<"\ntranspose\n";
 	 for(int i=0; i<rows; i++){
 	 	for (int j = 0; j < columns; ++j)
 	 	{
			cout<< arr[j][i]<< " ";
 	 	}
 	 	cout<<endl;
 	 }

 	 cout << "\nkhushi pizza question\n";

	 for(int i = rows-1; i>=0 ; --i){
	 	
	 	for(int j = columns-1; j>=0; --j){
	 		
	 		cout << arr[j][i] <<" ";

	 	}
	 	cout << endl;
	 }

}