#include<iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)  {real = r;   imag = i;}
    void print() { cout << real << " + i" << imag << endl; }

// The global operator function is made friend of this class so
// that it can access private members
friend Complex operator + (Complex const &, Complex const &);
friend istream & operator >> (istream& is , Complex &c1);
friend ostream & operator<<(ostream& os, Complex &c1);

};
/*istream & operator >> (istream& is , Complex &c1){
    int r1,i1;
    is >> r1 >> i1;
    real = r1;
    imag = i1;
    //return is;
}*/
ostream & operator<<(ostream& os, Complex &c1)
{

    void print();
    return os;
}

Complex operator + (Complex const &c1, Complex const &c2)
{
     return Complex(c1.real + c2.real, c1.imag + c2.imag);
}


int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    //c3.print();

    //Complex d1, d2;
    //cin>>d1;
    cout<<c3;
    return 0;
}
