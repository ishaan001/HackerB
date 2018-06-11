#include <iostream>
#include <string>
using namespace std;



int main() {

    string n="";
    cin>>n;
    int m = n.length();
    cout<<m<<"\n";
    char arr[m+1];
    for(int i=0;i<m;i++)
    {
        arr[i]=n[i];
    }
    for(int i=0;i<m;i++){
        cout<<arr[i]<<i<<" ";
        cout<"\n";
    }

}
