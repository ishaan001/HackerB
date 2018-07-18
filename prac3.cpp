#include <iostream>
#include<typeinfo>
using namespace std;

int main(){
	char c[100];
	cin>>c;
	cout << c[0] - '0';
	cout << typeid(c[0] - '0').name();
}