#include <iostream>
using namespace std;
const int inf = (int)1e9;
int count ;
int ReducedToOne(int n){
	while(n != 1)
	{
		if(n % 3 == 0){

			n = n/3;
			count ++;

		}
		else if(n % 2 == 0){
			n = n/2;
			count++;
		}
		else{
			n=n-1;
			count++;
		}

	}
	return count;
}
int memo[10000];
// this program is totally ineffecient as it consist o(3^n) complexity so we use the concept of memoization. 
int reduceNo(int n)
{
	if(n == 1) return 0; 


	int q1 = inf,q2 = inf,q3 = inf; //never declare variables always initialize them. 
	
	if(memo[n] != -1) return memo[n]
	if(n % 3 == 0) q1 = 1 + reduceNo(n / 3);
	if(n % 2 == 0) q2 = 1 + reduceNo(n / 2);
	q3 = 1 + reduceNo(n - 1);

	return min(q1, min(q2, q3));

}
int main()
{
	int n;
	cout<<"enter the no. to be reduced to 1 : ";
	cin>>n;

	int ans=ReducedToOne(n);
	cout<<n << "to reduced to one will take "<<ans<<" steps";

	ans = reduceNo(n);
	cout<<n << "to reduced to one will take "<<ans<<" steps";
}