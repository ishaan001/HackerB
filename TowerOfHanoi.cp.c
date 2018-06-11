#include <iostream>
using namespace std;

int c=0;
void printHanoiSteps(int n, string src, string dest, string helper) {
    if (n == 0) return;

    printHanoiSteps(n - 1, src, helper, dest);
    cout <<"Move "<< n <<"th disc from "<< src << " to " << dest << endl;
    c++;
    printHanoiSteps(n - 1, helper, dest, src);

}

int main() {
    int n;
    cin >> n;
    printHanoiSteps(n, "T1", "T2" , "T3");
    cout<<c;
}
