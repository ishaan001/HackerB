#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


void permute(string s, int l, int r)
{
   int i;
   if (l == r)
    cout<<s<<"\n";
   else
   {
       for (i = l; i <= r; i++)
       {
          swap(s[l],s[i]);
          permute(s, l+1, r);
          swap(s[l], s[i]);
       }
   }
}


int main()
{

    string s="";
    cin>>s;
    int n = s.length();
    std::sort(s.begin(), s.end());
    permute(s, 0, n-1);
    return 0;
}
