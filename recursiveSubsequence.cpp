#include <iostream>
#include <string>
using namespace std;
int cont;
int check_twins(string expression,int i,int length)
{
    if(i==length)
    {
        return cont;
    }
    if(expression[i]==expression[i+2])
    {
        cout<<"\n";
        cont++;
        cout<<cont;

    }
    return check_twins(expression,i+1,length);
}
int main()
{
    string expression;
    getline(cin,expression);
    int length = expression.length();
    cout<<length;
    int a=check_twins(expression,0,length);
    cout<<a;
}
