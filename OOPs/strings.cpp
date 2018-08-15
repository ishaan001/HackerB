#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
    return a > b ;
}
int main(){

    string s("this is the string in the bracket");

    string s2 = "string using equal to operator";

    string arr[] = {"lichie", "apple", "mango", "pineapple", "strawberry"};


    cout << s << endl;
    cout << s2 << endl;
    sort(arr,arr+5,compare);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
    cout << "length of s :" << s.length() << endl;
    cout << "length of s2 :" << s2.length() << endl;
    cout << "length of arr :" << sizeof(arr)/sizeof(arr[0]) <<endl;




}
