#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;

int main(){
string token, mystring("scott>=tiger");
while(token != mystring){
  token = mystring.substr(0,mystring.find_first_of(">="));
  mystring = mystring.substr(mystring.find_first_of(">=") + 1);
  //cout << mystring<< endl;
  cout << token.c_str();
}
cout << token <<endl;
cout << mystring;
//cout << mystring.split(">=");



}
