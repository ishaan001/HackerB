#include <iostream>
#include <stack>

using namespace std;

stack<int> S, R; // S is original stack, R is reversed stack

void reverseStack() {
    if(!S.empty()) {
        R.push(S.top());
        S.pop();
        reverseStack();
    }
    return;
}

int main() {

    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        S.push(a);

    }


    reverseStack();

    // Check if R is reversed
    while(!R.empty()) {
        cout << R.top() << "\n";
        R.pop();
    }
    return 0;
}
