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
	return;
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
void deleteAtHead(Node*&head){
	if(head == NULL){
		return;
	}
	Node * temp = head;
	head = head -> next;
	delete temp;
	return;
}

void deleteAtEnd(Node*&head){
	if(head == NULL){
		return;
	}
	else if(head -> next == NULL){
		Node * temp = head;
		head = NULL;
		delete temp;
	}
	else{
		Node * temp = head;
		Node * prev = NULL;
		while (temp -> next != NULL){
			prev = temp;
			temp = temp ->next;
		}

		delete temp;
		prev -> next =NULL;
	}
	return;
}

void deleteAtMiddle(Node*& head, int p){
	if(p==0){
		deleteAtHead(head);
	}
	else if(p > length(head)){
		deleteAtEnd(head);
	}
	else{
		int count = 1;
		Node *temp = head;
		Node *prev = NULL;
		while (count != p){
			prev = temp;
			temp = temp -> next;
			count++;
		}
		prev -> next = temp ->next;
		delete temp;
		return;
	}

}

// search an element recursively
bool searchRecursive(Node *head, int key){
	if(head == NULL){
		return false;
	}
	if(head -> data == key){
		return true;
	}
	else{
		return searchRecursive( head->next, key);
	}
}
bool searchIterative(Node *head, int key){
	while(head != NULL){
		if(head->data == key){
			return true;
		}
		head =head->next;

	}
	return false;

}

// reversing a linked list 
void reverseLinkedList(Node *&head){
	Node * CurrentLL = head;
	Node * prevLL = NULL;
	Node * NextLL;
	while(CurrentLL != NULL){
		//save then next node
		NextLL = CurrentLL -> next;
		// make the current node point to the previous node that is basically reversing
		CurrentLL -> next = prevLL;
		// just update the previous and the current
		prevLL = CurrentLL;
		CurrentLL = NextLL; 
	}
	head = prevLL;

}

int main()
{
	Node *head =NULL;
	insertAtHead(head, 5);
	insertAtHead(head, 7);
	insertAtHead(head, 4);
	insertAtHead(head, 3);
	insertAtHead(head, 2);
	insertAtHead(head, 1);

	//printList(head);
	insertAtEnd(head, 6);
	//printList(head);
	insertAtMiddle(head, 8, 3);
	printList(head);
	deleteAtHead(head);
	cout << endl;
	printList(head);
	cout << endl;
	deleteAtEnd(head);
	printList(head);
	cout <<endl;
	deleteAtMiddle(head, 2);
	printList(head);
	cout << endl;
	bool find = searchRecursive(head, 4);
	if (find)
	{
		/* code */
		cout << "element exist";
	}else{
		cout << "it doesn't ";
	}
	cout << endl;
	reverseLinkedList(head);
	printList(head);
	return 0;
}
