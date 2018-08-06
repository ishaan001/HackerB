#include <iostream>
#include <cstring>
using namespace std;


class Car{
private :
	int price;

public:
	int model_No;
	char Name[20];
	
	//constructor
	Car(){
		cout << "car is being made" << endl;
	}
	// Parameterized constructor
	Car(int p, int mn, char *n){
		price = p;
		model_No = mn;
		strcpy(Name,n);
	}
	
	void start(){
		cout << "GRrrrrrr....." << endl;
	}
	void setPrice(int p){
		price = p;
	}
	int getPrice()
	{
		return price;
	}
	void print(){
		cout << Name << endl;
		cout << model_No << endl;
		cout << price << endl;

	}
};
int main()
{
	Car c;
	cout << sizeof(c) << endl;
	cout << sizeof(Car) << endl;

	c.model_No = 1198;
//	c.price = 250000; this can't be done as price is the private datamember
	c.setPrice(25000);
	c.Name[0] = 'A';
	c.Name[1] = 'U';
	c.Name[2] = 'D';
	c.Name[3] = 'I';
	c.Name[4] = '\0';

	c.start(); 
	//cout << c.price << endl;
	cout << c.getPrice() << endl; 
	cout << c.Name << endl;

	Car E(17000, 12005, "ferrari");
	E.print();
}