#include<iostream>
using namespace std;
void selectSort(int arr[], int n){ //find minimum value and bring it to front
    for(int i = 0; i < n-1 ; i++){
         // loop to iterate over the array
        int minIndex = i;
        // index of the minimum value
        for(int j=i+1;j<n;j++){
        // loop to check each and every element minimum than that of element present at minIndex
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }

}
int main(){

      int arr[100];
    int n; cin >> n;
    for(int i = 0 ; i < n ; i++){

        cin>>arr[i];
    }
    selectSort(arr,n);
    for(int i = 0 ; i < n ; i++){

        cout << arr[i] << " ";
    }
}
