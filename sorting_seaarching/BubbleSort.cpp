#include<iostream>
using namespace std;

void swapNo(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int arr[], int n){
    for(int i = 0 ; i <=n-1  ;i++){
        for(int j=0 ; j <=n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swapNo(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0 ; i < n;i++){
        cout<< arr[i] << " ";
    }
}

int main(){
    int arr[100];
    int n; cin >> n;
    for(int i = 0 ; i < n ; i++){

        cin>>arr[i];
    }
    bubbleSort(arr,n);

}
