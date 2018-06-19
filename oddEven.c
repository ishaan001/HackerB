 #include <stdio.h>
#include <string.h>

int num = 0;

int finalValue(char *string1) {

    int i = 0;

    if (string1[i] != '\0') {

        if (string1[i]<'0' || string1[i]>'9') {
            printf("Sorry, we can't convert this to an integer\n\n");
        }

        else {
            num *= 10;
            num += string1[i] - '0';

            //don't bother using a 'for' loop because recursion is already sort-of a for loop

            finalValue(&string1[i+1]);
        }
    }
    return num;
}

int main(int argc, const char * argv[]) {
    printf("string to integer conversion yields %i\n",(finalValue("1234")));
    return 0;
}
