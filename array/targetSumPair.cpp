// C++ implementation of simple method to find count of
// pairs with given sum.
#include <bits/stdc++.h>
using namespace std;
 
// Returns number of pairs in arr[0..n-1] with sum equal
// to 'sum'
void getPairsCount(int *arr, int n, int sum)
{
    //int count = 0; // Initialize result
 
    // Consider all possible pairs and check their sums
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if (arr[i]+arr[j] == sum)
                cout<<arr[i]<<" and "<<arr[j]<<endl;
    //return count;
}
 
// Driver function to test the above function
int main()
{
    //int arr[] = {1, 5, 7, -1, 5} ;
    int m; cin>>m;
    int *arr = new int[m];
    for (int i = 0; i < m; ++i)
    {
        /* code */
        cin>>arr[i];
    }
   // int n = sizeof(arr)/sizeof(arr[0]);
    int sum; cin >> sum;
    /*cout << "Count of pairs is "
         << getPairsCount(arr, n, sum);
    */
    getPairsCount(arr, m, sum);
    return 0;
}
