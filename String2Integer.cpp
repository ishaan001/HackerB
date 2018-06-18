#include <iostream>
#include <string>
using namespace std;

int num = 0;

int finalValue(string string1) {

    int i = 0;

    if (string1[i] != '\0') {

        if (string1[i]<'A' || string1[i]>'z') {

        }

        else {

            num += string1[i] - '0';

            //don't bother using a 'for' loop because recursion is already sort-of a for loop

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
