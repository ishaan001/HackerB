#include<iostream>
#include<string>
using namespace std;
int square=0;
int curl=0;
int curve=0;

int TraverseString(string s,int len)
{

     if(len>=0){
        TraverseString(s,len-1);
        if(s[len]=='(')
        {
            curve++;

        }
        else if(s[len]=='{')
        {
            curl++;
        }
        else if(s[len]=='['){
            square++;
        }
        else if(s[len]=='}')
        {
            curl--;
        }
        else if(s[len]==']')
        {
            square--;
        }
        else if(s[len]==')')
        {
            curve--;
        }
        return 0;
    }
    else
    {
        return 0;
    }
    return 0;
}
int main()
{
    string n="";
    cin>>n;
    int len = n.length();
    TraverseString(n,len);
    if(curl==0&&curve==0&&square==0)
        cout<<"True";
    else
        cout<<"False";

}
