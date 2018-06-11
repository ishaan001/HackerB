#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    for(int NextLine=1;NextLine<=n;NextLine++)
    {
        for(int CurRow=5;CurRow>=NextLine;CurRow--)
        {
            cout<<"*"<<"\t";
        }
        cout<<endl;
    }
}

