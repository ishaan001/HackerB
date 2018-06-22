#include<iostream>
using namespace std;
void WavePrinter(int arr[10][10],int m,int n)
{

    for(int i=0;i<m;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<arr[i][j]<<", ";
                }

            }
            else{
                for(int j=n-1;j>=0;j--)
                {
                    cout<<arr[i][j]<<", ";
                }
            }

    }
    cout<<"END";



}
int main()
{
    int arr[10][10];
    int m,n;
    cin>>m>>n;
    if(m>=1 && n>=1 && m<=10 && n<=10)
    {


        for(int i=0;i<m;i++)
        {

            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }

        }
        WavePrinter(arr,m,n);

       /* for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<arr[i][j]<<", ";
                }

            }
            else{
                for(int j=m-1;j>=0;j--)
                {
                    cout<<arr[i][j]<<", ";
                }
            }


        }
        cout<<"END";
        */
    }

}
