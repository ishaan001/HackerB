#include<iostream>
#include <string>
#include<cstring>
using namespace std;

int main(){

	string a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;

	for (int i = 0; i != '\0'; ++i)
	{
		/* code */
		a[i] = tolower(a[i]);
	}
	//a = tolower(a);
	for (int i = 0; i != '\0'; ++i)
	{
		/* code */
		b[i] = tolower(b[i]);
	}
	//b = tolower(b);
	for (int i = 0; i != '\0'; ++i)
	{
		/* code */
		c[i] = toupper(c[i]);
	}
	//c = toupper(c);

	for(int i = 0; i!='\0'; i++){

		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
			a[i] = '$';
		}
	}
	for(int i = 0; i!='\0'; i++){

		if(b[i] != 'a' || b[i] != 'e' || b[i] != 'i' || b[i] != 'o' || b[i] != 'u'){
			b[i] = '#';
		}
	}
	cout << a << b << c;

}