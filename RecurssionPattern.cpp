#include<iostream>
using namespace std;

//int c=0;
int PatternPrinter(int,int);
int NextRow(int k)
{
    if(k<=1)
        return 0;
    int z=k-1;
    cout<<"\n";
    //c=0;
    PatternPrinter(z,z);
}
int PatternPrinter(int n,int m){

    if (n <= 0) {
           NextRow(m);
           return 0;
    }
     cout<<"*\t";
//     c++;
    PatternPrinter(n - 1,m);
       // recurrence relation
    return 0;
}
int main()
{

    int n;
    cin>>n;
    PatternPrinter(n,n);
    return 0;
}



