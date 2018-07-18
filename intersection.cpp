// C code to find intersection when
// elements may not be distinct
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void Printer(vector<int> vect)
{
    int n=vect.size()-1;
    cout<<"[";
    for (int i=0; i<n-1; i++)
       cout << vect[i] << ",";
    cout<<vect[n-1];
    cout<<"]";
}
// Function to find intersection
void intersection(int a[], int b[], int n, int m)
{
	int i = 0, j = 0;
	vector<int> vect;

	while (i < n && j < m)
	{

		if (a[i] > b[j])
		{
			j++;
		}

		else
		if (b[j] > a[i])
		{
			i++;
		}
		else
		{
			// when both are equal
			vect.push_back(a[i]);
			i++;
			j++;
		}

	}
	Printer(vect);
}

// Driver Code
int main()
{
    int n;
    cin>>n;
    int *a,*b;
    a=new int[n];
    b=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<endl;
     for(int i=0;i<n;i++)
    {
        cin>>b[i];

    }


	//int a[] = {1,2,1,2,1,3,4};
	//int b[] = {2,3,2,2,2,1,5};

	//int n = sizeof(a)/sizeof(a[0]);
	//int m = sizeof(b)/sizeof(b[0]);
	sort(a,a+n);
	sort(b,b+n);

	//for(int i=0;i<n;i++)
    //{
      //  cout<<a[i];

    //}
	intersection(a, b, n, n);
}
