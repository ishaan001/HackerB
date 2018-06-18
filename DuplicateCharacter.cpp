#include <iostream>
#include <string>
using namespace std;




void finalValue(string string1) {

    int i = 0;


    if (string1[i] != '\0' ) {

        if (string1[i]<'0' || string1[i]>'z') {

        }

        else {

            if(string1[i] - string1[i+1]==0 && string1[i+1]!= '\0')
            {
                cout<<string1[i]<<"*";
            }
            else
                cout<<string1[i];

            //don't bother using a 'for' loop because recursion is already sort-of a for loop

            finalValue(&string1[i+1]);
        }
    }


}

int main() {
    string s="";
    cin>>s;
    int len=s.length();
   // char c = s[len-1]
    finalValue(s);
    return 0;
}

