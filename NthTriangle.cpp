#include<iostream>
using namespace std;

int NthTriangle(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
        return n+NthTriangle(n-1);

}
int main() {
    int n;
    cin>>n;
    int result = NthTriangle(n);
    cout<<result;
	return 0;
}
