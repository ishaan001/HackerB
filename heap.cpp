#include<iostream>
#include <queue>
#include <functional>
#include <vector>
using namespace std;
	
int main()
{
	/* code */
	priority_queue<int,vector<int> > pq; //max heap and is if u want to make min heap use comparator
	int a[]={5,6,17,18,9,11};

	for(int i =0;i<6;i++)
	{
		pq.push(a[i]);
	}
	//max heap
	while(!pq.empty()){
		cout<<pq.top()<<", ";
		pq.pop();
	}

	return 0;

}