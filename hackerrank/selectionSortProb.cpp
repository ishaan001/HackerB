/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n; cin >>n;
    int *arr = new int[n];
    int *arr1 = new int[n];
    
    for(int i = 0; i < n ;i++){
        cin >> arr[i];
        arr1[i] = arr[i];
    }
    
    for(int i = 0; i<n ; i++){
        int temp = arr[i];
        int j = i;
        while(j > 0 && temp < arr[j-1])
        {
            arr[j] = arr[j-1];
            j -= 1;
        }
        arr[j] = temp;
    //    cout <<  j+1 << " ";
    }

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            if(arr1[i] == arr[j]){
                cout << j+1 << " ";
            }
        }
    }
}