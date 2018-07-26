#include <cstring>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	vector<string> v;
    char input[100] = "A bird came down the walk";
    char *token = std::strtok(input, " ");
    while (token != NULL) {
        v.push_back(token);
        token = std::strtok(NULL, " ");
    }
    for(int i = 0; i<v.size();i++){
    	cout << v[i] << "\n";
    }
}