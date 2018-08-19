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
//passing the pointer variable via refernce
void insertAtHead (Node *&head, int data){
	Node * n = new Node(data);
	n -> next = head;
	head = n;
}
void insertAtEnd (Node *&head, int data){
	if(head == NULL){
		head = new Node(data);
		return;
	}
	//de * n = new Node(data);
	Node * ptr = head;
	while(ptr -> next != NULL){
		ptr = ptr ->next;
	}
	ptr -> next = new Node(data);
	return;
}
int length(Node* head){
	Node *ptr = head;
	int len = 0;
	while(head != NULL ){
//		cout << ptr -> data << " -> " ;
		head = head->next;
		len += 1; 
	}
	return len;
}
void insertAtMiddle(Node* &head, int data, int p){
	if(head == NULL || p == 0)	{
		insertAtHead(head, data);

	}
	else if(p > length(head)){
		insertAtEnd(head, data);
	}
	else
	{
		// insert in the middle
		int jump =1 ;
		Node * temp =head;
		while(jump <= p-1){
			temp = temp->next;
			jump += 1;
		}
		Node *n = new Node(data);
		n -> next = temp -> next;
		temp -> next = n;

	}

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
	//printList(head);
	insertAtEnd(head, 6);
	//printList(head);
	insertAtMiddle(head, 2, 1);
	printList(head);
	return 0;
}