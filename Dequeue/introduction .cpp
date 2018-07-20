#include<iostream>
#include <deque>
using namespace std;

int main(){

deque<int> mydeque;

int n ; cin >> n ;

for(int i = 0 ; i < n ; i++){	
	cout << "press 1 for insertion";
	cout << "press 2 for deletion";
	cout << "press 3 for length";
	int query; cin >> query;
	int num,length;
	switch(query){

		case 1 : cout<<"push 1 - > front 2 - > back";
				 int insert; cin >> insert;
				 switch(insert){
				 	case 1 :cin >> num; 
				 			mydeque.push_front(num);
				 			break;
				 	case 2 : cin >> num;
				 			mydeque.push_back(num);
				 			break;
				 }
				 break;
		case 2 : cout<<"pop 1 - > front 2 - > back";
				 int pop; cin >> pop;
				 switch(pop){
				 	case 1 ://cin >> num; 
				 			mydeque.pop_front();
				 			break;
				 	case 2 : //cin >> num;
				 			mydeque.pop_back();
				 			break;	
				 }
				 break;
		case 3 : length = mydeque.size();
				 cout << "length of a deque is : " << length;
				 break;
		default : cout << "invalid case";
	}


}

}