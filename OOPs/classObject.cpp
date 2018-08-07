#include <iostream>
#include <cstring>
using namespace std;


class Car{
private :
	int price;

public:
	int model_No;
	char *Name;

	//constructor
	Car(){
		Name = NULL;
		cout << "car is being made" << endl;
	}
	// Parameterized constructor
	Car(int p, int mn, char *n){
		price = p;
		model_No = mn;
		int len = strlen(n);
		Name = new char[len+1];
		strcpy(Name,n);
	}
	//copy constructor it also exist by default
	//deep copy constructor is created
	Car(Car &x)
	{
        int len = strlen(x.Name);
        Name = new char[len+1];
		strcpy(Name, x.Name);
		price =x.price;
		model_No = x.model_No;
	}

	void operator = (Car &x)
	{
        int len = strlen(x.Name);
        Name = new char[len+1];
		strcpy(Name, x.Name);
		price =x.price;
		model_No = x.model_No;
	}

	void start(){
		cout << "GRrrrrrr....." << endl;
	}
	void setName(char *n){
		if(Name == NULL){
			Name = new char[strlen(n)+1];
			strcpy(Name, n);
		}
		else{
			//later
		}

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
		cout << endl;

	}
	~Car(){
        cout << "Car is being destroyed " << Name <<endl;
        // delete all the data member which are presnt int the heap for example *name
        if(Name != NULL){
            delete [] Name;
        }
	}
};
int main()
{
	Car c;
	/*cout << sizeof(c) << endl;
	cout << sizeof(Car) << endl;
    */
	c.model_No = 1198;
//	c.price = 250000; this can't be done as price is the private data member
	c.setPrice(25000);
	c.setName("Nano");
	c.print();
	//concept of deep copy and shallow copy

	Car D(100,200,"BMW");
   // D.print();

	Car E(D);
   /* E.Name[0] = 'G'; //this has created a shallow copy since we have used ptr to an array so both
	E.print();
	D.print();
	*/
	Car F = E ;
	E.print();
	F.print();

	Car *g = new Car(500,600,"Tesla");
    delete g;
	return 0;
}
