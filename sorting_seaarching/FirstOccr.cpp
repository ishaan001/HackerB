#include<iostream>
using namespace std;

int firstOccur(int arr[], int sizeOfArr, int key){

    int s = 0;
    int e = sizeOfArr - 1;
    int ans = -1;

    while(s <= e){
           int mid = (s+e)/2;
            if(arr[mid] == key){
                ans = mid;
                e = mid - 1;
            }
            else if(arr[mid] > key){
                 e = mid - 1;
            }
            else {
                s = mid + 1;
            }

    }
     return ans;


}

int main(){
    int arr[] = {1,2,2,2,2,3,3,4,4,4,8};
    int sizeOfArr = 10;

    int ans1 = firstOccur(arr,10,2);
    cout << " " << ans1;

  //  int ans2 = lastOccur(arr,sizeOfArr,2);
  //  cout << " " << ans2;




}
