#include <iostream>
#include <forward_list>
using namespace std;

int main(){
	forward_list<int> fl1 = {1,2,3,4,5,6};
	forward_list<int>::iterator ptr;

	cout << " after the list is made";

	for(int &c : fl1)
		cout << c << " ";
    cout << endl;

	ptr = fl1.insert_after(fl1.begin(),{10,20,30});

	cout << "The forward list after insert_after";

	for(int &c : fl1)
		cout << c << " ";
    cout << endl;

    ptr = fl1.erase_after(ptr);

    cout << "The forward list after erase_after";

    for (int &c : fl1)
    {
    	cout << c << " ";
    }
    cout << endl;

    ptr = fl1.insert_after(ptr,30);

    cout << "The forward list after insert_after";

	for(int &c : fl1)
		cout << c << " ";
    cout << endl;

    fl1.remove(30);

    cout << "after removal";

    for(int &c : fl1)
		cout << c << " ";
    cout << endl;






}
