#include <iostream>
#include <stack>
using namespace std;


bool isBalanced(char a[]){

	stack<char> s;
	for (int i = 0; a[i] != '\0' ; ++i)
	{
		char ch = a[i];
		switch(a[i]){
			case '{': 	s.push(a[i]);
					  	break;
			case '[': 	s.push(a[i]);
					  	break;
			case '(':	s.push(a[i]);
					  	break;
			case '}':	if(!s.empty() && s.top()== '{'){
							s.pop();
							break;
						}
						else
							return false;
			case ')':	if(!s.empty() && s.top()== '('){
							s.pop();
							break;
						}
						else
							return false;
			case ']':	if(!s.empty() && s.top()== '['){
							s.pop();
							break;
						}
						else
							return false;

		}
	}
	return s.empty()?true:false;
}

int main(){
	char a[] = "{(a+b)*[d/f]}";
	if(isBalanced(a)){
		cout <<" it is balanced " <<endl;
	}
	else
	{
		cout << "It is isn't balanced" <<endl;
	}

}