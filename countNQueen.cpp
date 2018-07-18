#include <stdio.h>
#include <iostream>
using namespace std;

int  SIZE, MASK, COUNT;

void Backtrack(int y, int left, int down, int right)
{
    int  bitmap, bit;

    if (y == SIZE) {
        COUNT++;
    } else {
        bitmap = MASK & ~(left | down | right);
        while (bitmap) {
            bit = -bitmap & bitmap;
            bitmap ^= bit;
            Backtrack(y+1, (left | bit)<<1, down | bit, (right | bit)>>1);
        }
    }
}
int main(void)
{
	int n;
	cin>>n;
    SIZE = n;   /*  <- N  */
    COUNT = 0;   /* result */

    MASK = (1 << SIZE) - 1;
    Backtrack(0, 0, 0, 0);

    //printf("N=%d -> %d\n", SIZE, COUNT);
    cout<<COUNT;
    return 0;
}