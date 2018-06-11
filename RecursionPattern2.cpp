using namespace std;

void Pattern(int);
void Printer(int M)
{
    if (M==0)
    {
        return;
    }
    Printer(M-1);
    cout<<"*\t";
}
void Pattern(int N)
{
    if (N==0)
    {
        return;
    }
    Pattern(N-1);
    Printer(N);
    cout<<"\n";
}
int main()
{
    int N;
    cin>>N;
    Pattern(N);
    return 0;
}
