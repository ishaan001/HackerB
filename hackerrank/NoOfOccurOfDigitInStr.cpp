// Write your code here
#include<iostream> 
#include<cstdlib>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int j = 0; j <10; j++){
        int count = 0;
        for(int i = 0; s[i] != '\0'; i++){
        
            if(s[i]-'0' == j){
                count++;
            }
        }
        cout << j << " " << count << endl;
    }
    
}