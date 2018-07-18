// Segregate string in KonyLabs.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int static count=1;
	char ab[] = "aaaabbccedd";
	for(int i=1;i<=strlen(ab);i++)
	{
		if(ab[i]==ab[i-1])
		{
			count++;
		}
		else
		{
			cout<<ab[i-1];
			if(count!=1)
			{
				cout<<count;
			}
				count=1;
		}
	}
	return 0;
}
