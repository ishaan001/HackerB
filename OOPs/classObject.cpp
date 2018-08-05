#include <iostream>
using namespace std;


class Car{
public:
	int model_No;
	int price;

	char Name[20];
	void start(){
		cout << "GRrrrrrr....." << endl;
	}
};
int main()
{
	Car c;
	cout << sizeof(c) << endl;
	cout << sizeof(Car) << endl;

	c.model_No = 1198;
	c.price = 250000;
	c.Name[0] = 'A';
	c.Name[1] = 'U';
	c.Name[2] = 'D';
	c.Name[3] = 'I';
	c.Name[4] = '\0';

	c.start();
}