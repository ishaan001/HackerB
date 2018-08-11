#include <iostream>
using namespace std;
class dca;
class bca{
    int rollNo;
public:

    void setRoll(int r){
            rollNo =r;
    }
    int getRoll(){
        return rollNo;
    }
    friend void display(bca,dca);

};
class dca{
     int rollno;
public:
    int getRoll(){
        return rollno;
    }
    void setRoll(int r){
            rollno =r;
    }

    friend void display(bca,dca);
};
void display(bca a, dca d){
    cout << a.rollNo << " " << d.rollno << endl;
}

int main(){
    bca b1;
    dca d1;
    b1.setRoll(1152583);
    d1.setRoll(11152581);
    display(b1,d1);


}
