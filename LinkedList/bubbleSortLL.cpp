#include<iostream>
using namespace std;


class node {
public:
	node* next;
	int data;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};

int lenLL(node* head){
    node* cur = head; 
    int cnt = 0;
    while(cur){ ++cnt; cur = cur->next;}
    return cnt;
}

node* bubbleSort(node* head){
    int len = lenLL(head);
    int cnt = len;
    for(int i = 0; i < len; ++i){
        node* cur = head;
        node* previous = NULL;
        while(cnt && cur && cur->next){
            node* ahead = cur->next;
            if (cur->data > ahead->data){
                // swapping needs to be done
                if (previous == NULL){
                    cur->next = ahead->next;
                    ahead->next = cur;
                    head = ahead;
                    previous = ahead;
                }
                else{
                    cur->next = ahead->next; 
                    previous->next = ahead;
                    ahead->next = cur;
                    previous = ahead;
                }
            }
            else {
                previous = cur;
                cur = cur->next;
            }
        }
        --cnt;
    }
    return head;
}


void insertAtTail(node*&head, int data)
{
	if(head==NULL)
	{
		head=new node (data);
		return;
	}

	node*tail=head;
	while(tail->next)
	{
		tail=tail->next;
	}
	node* n=new node (data);
	n->next=tail->next; // Not mandatory for insertion at tail as next of n is null initialised
	tail->next=n;
}

//INsertion at tail
void createLL(node*&head,int n)
{
	int data;
	for(int i=1; i <= n ; i++)
	{
		cin>>data;
		insertAtTail(head,data);
	}
}

void printLL(node* head)
{
	node*temp=head;

	while(temp)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
	return;
}

int main() {
    int n; cin>>n;
    node*head=NULL;
    createLL(head,n);
    head=bubbleSort(head);
    printLL(head);
	return 0;
}