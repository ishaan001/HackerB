#include <cstring>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<string> v,v1;
    char input[100] = "A bird came down the walk";
    char *token = std::strtok(input, " ");
    while (token != NULL) {
        v.push_back(token);
        token = std::strtok(NULL, " ");
    }
    string input1 = "ishaan";
    char c[100] ;
    char *token1 = std::strtok(c,"a");
    while (token1 != NULL) {
        v1.push_back(token1);
        token1 = std::strtok(NULL, "a");
    }
    for(int i = 0; i<v.size();i++){
    	cout << v[i] << "\n";
    }
    cout<<endl;
    for(int i = 0; i<v1.size();i++){
    	cout << v1[i] << "\n";
    }
}
