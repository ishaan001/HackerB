#include<iostream>
using namespace std;

void antiClockTraversal(int m,int n,int a[100][100])
{

    int i, k = 0, l = 0;

    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator  */


    while (k <= m && l <= n)
    {

        /* Print the first row from the remaining rows */
        for (i = k; i <= m; ++i)
            cout<<a[i][l]<<", ";
        l++;

        /* Print the last column from the remaining columns */
        for (i = l; i <= n; ++i)
            cout<<a[m][i]<<", ";
        m--;

        /* Print the last row from the remaining rows */
        if ( l <= n)
        {
            for (i = m; i >= k; --i)
                cout<<a[i][n]<<", ";
            n--;
        }

        /* Print the first column from the remaining columns */
        if (k <= m)
        {
            for (i = n; i >= l; --i)
                cout<<a[k][i]<<", ";
            k++;
        }

    }
    cout<<"END";

   /* while (!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }*/


}
/* Driver program to test above functions */
int main()
{
    int R,C;
    cin>>R>>C;
    int arr[100][100];
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {

            cin>>arr[i][j];
        }
    }
    //cout<<"matrix sent";
    antiClockTraversal(R-1, C-1, arr);

    return 0;
}
