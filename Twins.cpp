#include<iostream>
#include<string>
using namespace std;
int z=0;
int frequency=-1;
int freq(string n,int len,int UpperLimit){
    //int frequency = -1;
    if(len<0){
        return 0;
    }
    freq(n,len-1,UpperLimit);
    if((int)n[len]==UpperLimit)
    {
        frequency++;
    }
     return 0;
}

int countFrequency(string n,int LowerLimit,int UpperLimit){
        if(n[n.length]<LowerLimit){
            return 0;
        }
        countFrequency(n,LowerLimit,UpperLimit-1);
        int g=n.length()-1;
       // frequency=-1;
        int m=freq(n,g,UpperLimit);
        cout<<m;
        if(m>0){
            z=z+m;
        }
        if(UpperLimit==122){
            cout<<z;
        }
        return 0;
}
int main(){
    string n="";
    cin>>n;
    int LowerLimit =97;
    int UpperLimit =122;
    countFrequency(n,LowerLimit,UpperLimit);


}
