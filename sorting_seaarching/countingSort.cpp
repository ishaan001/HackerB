#include <iostream>
using namespace std;

int main() // counting sort worst case complexity = o(n+k)
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    int *aux = new int[max+1];
    for(int i = 0; i <max+1 ; i++){
        aux[i] = 0;
    }
    for(int i =0; i<n; i++){
        aux[arr[i]]++;
    }
    for(int i=0;i<=max;i++){
        if(aux[i]){
        cout<<i<<" "<<aux[i]<<endl;
        }
    }
}