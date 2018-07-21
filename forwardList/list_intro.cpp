#include <iostream>
#include <list>
using namespace std;


int main(){

	list<int> li;
	list<int>::iterator it;

	int count = 10;
	for (int i = 0; i < count; ++i)
	{
		li.push_front(i*2);
	}

	cout << "after pushing from front";
	for (it=li.begin(); it != li.end(); ++it)
    	cout << ' ' << *it;
	cout << endl;

	for (int i = 0; i < count; ++i)
	{
		li.push_back(i*3);
	}

	cout << "after pushing from back";
	for (it=li.begin(); it != li.end(); ++it)
    	cout << ' ' << *it;
	cout << endl;

	li.pop_front();

	li.pop_back();

	cout << "after poping from front and back";
	for (it=li.begin(); it != li.end(); ++it)
    	cout << ' ' << *it;
	cout << endl;

	li.reverse();
	cout << "after reversing ";
	for (it=li.begin(); it != li.end(); ++it)
    	cout << ' ' << *it;
	cout << endl;

	li.sort();
	cout << "after sorting";
	for (it=li.begin(); it != li.end(); ++it)
    	cout << ' ' << *it;
	cout << endl;

	return 0;
}
