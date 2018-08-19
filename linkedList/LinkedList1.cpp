#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node *next;

	//constructor of the node
	Node(int d){
		data = d ;
		next = NULL;
	}

};
//class approach to make the node 
/*class LinkedList
{
	Node *head = NULL;
	Node *Tail = NULL;

};
*/

// functional aproach for CRUD operations
void insertAtHead (Node *&head, int data){
	Node * n = new Node(data);
	n -> next = head;
	head = n;
}

void printList (Node *head){
	Node *ptr = head;
	while(ptr){
		cout << ptr -> data << " -> " ;
		ptr = ptr ->next;

	}

}

int main()
{
	Node *head =NULL;
	insertAtHead(head, 5);
	insertAtHead(head, 4);
	insertAtHead(head, 1);
	insertAtHead(head, 7);
	insertAtHead(head, 9);
	printList(head);
	return 0;
}