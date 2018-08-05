#include <iostream>
using namespace std;


class Car{
public:
	int model_No;
	int price;

	char Name[20];
};
int main()
{
	Car c;
	cout << sizeof(c) << endl;
	cout << sizeof(Car) << endl;

	c.model_No = 1198;
	c.price = 250000;
	c.Name = "aulto";


}