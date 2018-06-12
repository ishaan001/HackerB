#include <iostream>
#include <string>
using namespace std;

int num = 0;

int finalValue(string string1) {

    int i = 0;

    if (string1[i] != '\0') {

        if (string1[i]<'0' || string1[i]>'9') {
           ;
        }

        else {
            num *= 10;
            num += string1[i] - '0';
            finalValue(&string1[i+1]);
        }
    }
    return num;
}

int main() {
    string s="";
    cin>>s;
    cout<<finalValue(s);
    return 0;
}
