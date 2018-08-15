/*input - 78 min sal
          4  no of input
          bob 98
          madhav 75
          jonny 86
          alice 86

 output - bob 98
          alice 86  is sal equal the sort lexiographic order
          jonny 86*/
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

bool Mycompare(pair<string, int> p1, pair<string, int> p2){
    if(p1.second == p2.second){
        return p1.first < p2.first;
    }
    return p1.second > p2.second;
}

int main(){
    int n; // number of entries
    int minSal ; // minimum salary
    pair<string, int> emp[1000]; //pair which will take name and salary
    string name ;
    int salary;

    cin >> minSal;
    cin >> n;
    for(int i = 0; i < n ;i++){
        cin >> name >> salary;
        emp[i].first = name ;
        emp[i].second = salary ;
    }

    sort(emp, emp+n, Mycompare);

    for(int i = 0; i < n ; i++){
        if(emp[i].second > minSal)
        cout << emp[i].first << " " << emp[i].second << endl;
    }


}
