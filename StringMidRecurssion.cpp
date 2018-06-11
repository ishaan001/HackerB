#include <iostream>
#include <string>
using namespace std;

int printMid(string s,int v)
{
    if(s[v]!=')')
    {
        cout<<s[v];
        printMid(s,v+1);

    }
    else
    {
        return 0;
    }

}

int StringSplitter(string s, int len)
{
    if(len>=0){
        StringSplitter(s,len-1);
        if(s[len]=='(')
        {
            printMid(s,len+1);
            return 0;
        }
    }
    else
    {
        return 0;
    }
}


int main() {

    string n="";
    cin>>n;
    int m = n.length();
    StringSplitter(n,m);



}
