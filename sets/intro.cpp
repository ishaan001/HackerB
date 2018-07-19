#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin >> n;
    int i ;
    std :: set<int>s;
    std :: set<int>::iterator itr;
     pair< set<int>::iterator,bool> ptr;
    for(  i= 0 ; i < n ; i++){
        int query,Num ;
        cin >> query >> Num;
        switch(query){
            case 1 : s.insert(Num);
                   break;
            case 2 : s.erase(Num);
                    break;
            case 3 : itr = s.find(Num);
                    if (itr != s.end()) {
                         cout << "Yes"<<endl;
                    }
                    else cout << "No"<<endl;
                    break;
            default : cout << "invalid case"; 
            }
    }
    return 0;
}



