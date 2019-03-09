#include<iostream>
using namespace std;

int main()
{
	int arr[10],n;
	int c =0;
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		cin >> arr[i];
	}
	cout << endl;
	/*output*/
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		cout << arr[i] << " ";
	}
	/*khushi logic*/
	cout << endl;
	cout << "enter the no";
	cin >> n;
	for (int i = 0; i <10; ++i)
	{
		/* code */
		if (n==arr[i])
		{
			
			c++;
		}
	}
	cout << "\n";
	cout << c;






}