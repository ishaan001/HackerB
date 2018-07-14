// chewbacca No if the 
/*no is 4545 the minus it with 9 if the first digit of the no. is not 9  and the no. is greater than or equal to 5 
so therefor the result is 4444.*/
#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
	char c[50];
	cin>>c;

	int i = 0;
	if(c[i] == 9){
		i++;
	}
	for(;c[i] != '\0'; i++){
		int digit = c[i] - '0';		// converting character to integer. 
		//cout << typeid(c[0] - '0').name(); use of typeinfo
		if(digit >= 5){
			digit = 9 - digit;	 // converting integer to again character.
			c[i] = digit + '0';
		}
	}
	cout<<c<<endl;
	return 0; 
}