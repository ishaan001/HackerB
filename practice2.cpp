#include <iostream>
#include <string>
using namespace std;

 int main()
 {

     int i = 0;
     char c = 'y';
     do{
     cin>>i;
     cout << "% is ->" << i % 10;
     cout << endl;
     cout << " / is ->" <<i / 10;
     cout << endl; 
     cout << "y | n";
     cin>>c;
 }while(c=='y');
 }

