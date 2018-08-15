#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

char *myStrTokenizer(char str[], char deliminator){
    static char *input = NULL;
    if(str!=NULL){
        input = str;

    }
    if(input == NULL){
        return NULL;
    }
    char *output = new char[strlen(input)+1]; //+1 for the null char or '\0'
    int i;
    for( i = 0 ; input[i]  !='\0'; i++){
        if(input[i] != deliminator)
        {
            // copy from input to the output
            output[i] = input[i];
        }
        else{
            // we are now at the deliminator
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }

    }
    //return the last word if delim is not there
    output[i] = '\0';
    input = NULL;
    return output;
}

int main(){
    char str[] = "Hello, my name is ishaan veer dadhwal, i love c++!";

    char *ptr = str;
    ptr = myStrTokenizer(str, ' ');
    //cout << ptr << endl;

    while(ptr!=NULL){
        cout << ptr << endl;
        ptr = myStrTokenizer(NULL, ' ');
    }

    return 0;

}
