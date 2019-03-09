#include<iostream>
using namespace std;
int main()
{
	int a[10],n=0,p=0;
	for (int i = 0; i <10 ; ++i)
	{
		/* code */
		cin>>a[i];
	}
	cout <<endl;
	 for (int i = 0; i < 10; ++i)
	 {
	 	/* code */
	 	cout<<a[i] << " ";
	 }
	 cout << endl;
	 for (int i = 0; i < 10; ++i)
	 {
	 	if (a[i]%2==0)
	 	{
	 		/* code */
	 		n++;
	 	}
	 	else
	 	{
	 		p++;
	 	}
	 }cout<<"even no- "<<n;
	 cout << endl;
	 cout<<"odd no- "<<p;
}