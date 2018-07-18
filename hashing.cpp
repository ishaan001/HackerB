#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;

int main(){

	unordered_map <string,int> m;
	//first insert11
	m["mango"]=100;

	//second insert
	m.insert(make_pair("appple",120));

	//search
	if(m.count("appple")==1) //check elemnt is it present it return 1; 
		cout<<"price of apple is "<<m["apple"];

	//iterators to search
	auto f =m.find("mango");
	if(f!=m.end()){
		cout<<"price of apple is "<<(f->second)<<endl;

	}
}