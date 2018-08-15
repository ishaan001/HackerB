#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main() {

  string s;
vector<string> v;
while (cin >> s)
   v.push_back(s);
sort(v.begin(),v.end());
for(int i = 0 ; i < v.size(); i++){
    cout << v[i] <<endl;
}
}
