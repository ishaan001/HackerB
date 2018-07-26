#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; 
    cin>>n;
    int num;
    vector<int> v;
    for(int i = 0; i<n ; i++){
        cin>>num;
        v.push_back(num);    
        
    }
    // for(int i = 0; i < n ; )
    //sort(v.begin(),v.end());
    int search;
    cin>>search;
    int arr[search];
    for(int i = 0 ; i < search; i++){
        cin>>arr[i];
    }
    
    sort(v.begin(),v.end());

    for (int i = 0; i < n; ++i)
    {
        /* code */
        cout << v[i] << " ";
    }
    //int min = -1;
    /*for (int i = 0; i < search; ++i)
    {
         code 
        cout << arr[i] << " ";
    }*/
    
    for(int j = 0 ; j<search ; j++){
        for (int i = 0 ; i<n; i++){
            if(v[i] == arr[j]){
                cout << "Yes " << i+1 << endl;
                break;
            }
            else {
                if(v[i] > arr[j]){
                cout << "No " << i+1 << endl;
                break;
            }
            //cout << "\n";
        }
        
    }
}
    
    
    
    return 0;
}
