// C program for implementation of selection sort
#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {


        cout<<arr[i];
    cout<<"\n";
    }
}

// Driver program to test above functions
int main()
{

    int a;
    cin>>a;
    int *arr=new int[a];
    //int arr[] = {12, 11, 13, 5, 6};
    for(int i=0;i<a;i++)
        cin>>arr[i];
    //int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, a);
  //  printf("Sorted array: \n");
    printArray(arr, a);
    return 0;
}

