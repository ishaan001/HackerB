#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *left;
		Node *right;
		Node(int d){
			data = d;
			left = NULL;
			right = NULL;
		}

};

Node* builtTree(){
	int d;
	cin >> d;

	if(d == -1){;
		return NULL;
	}

	Node *newNode ;
	newNode = new Node(d);
	newNode -> left = builtTree();
	newNode -> right = builtTree();
	return newNode;
}

void print(Node * root){
	if(root == NULL){
		return;
	}
	cout << root->data <<" ";
	print(root->left);
	print(root->right);
}

int main(){

	Node *root = builtTree();
	cout << endl;
	print(root);

}