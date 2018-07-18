// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
void inputArr(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}
void outputArr(int arr[], int n){
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
}

int cnt;
void printSubsets(int arr[], int be, int n, int decision[], int i, int Max) {
    if (be == n){
        //++cnt;
       // cout << cnt << ".\t";
       if(cnt == Max)
       {
           outputArr(decision, i);
           cnt=0;
            return;
       }
       cnt = 0;
        //outputArr(decision, i);
        //cout << endl;
       return; 
    }

    decision[i] = arr[be];
    cnt += decision[i];

    printSubsets(arr, be + 1, n, decision, i + 1, Max);
    printSubsets(arr, be + 1, n, decision, i, Max);
}


int main() {
    int arr[100];
    int n;
    cin >> n;
    inputArr(arr, n);
    int MaximumNo;
    cin>>MaximumNo;

    int tmp[100];
    printSubsets(arr, 0, n, tmp, 0, MaximumNo);
}