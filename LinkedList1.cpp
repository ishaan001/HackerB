#include<iostream>
using namespace std;

class Node{
   public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;

        }

};
Node* createLL()
{
    int x;
    Node* head=NULL;
    Node* Tail=NULL;
    while(true)
    {
        cin>>x;
        if(x==-1)
        {
            return head;
        }
        else{
            Node* newNode=new Node(x);
            if(head==NULL){
                head=newNode;
                Tail=newNode;
            }
            else{
                Tail->next=newNode;
                Tail=Tail->next;
            }
        }
    }
    return head;
}
Node* deleteNode(Node* head, int dataToDelete){
    Node* cur = head;
    Node* previous = NULL;
    while(cur){
        if (cur->data == dataToDelete){
            // I have found a node to be deleted
            if (previous == NULL){
                // head is to be deleted
                head = cur->next;
                delete cur;
            }
            else {
                previous->next = cur->next;
                delete cur;
            }
            break;
        }
        else {
            previous = cur;
            cur = cur->next;
        }
    }
    return head;
}
void printLL(const Node* head)
{
    const Node* cur=head;
    while(cur){
        cout<<cur->data<<"-->";
        cur=cur->next; //++cur
    }
}
void reverseLL(Node* head){
    Node* prev=NULL;
    Node* cur=head;
    Node* ahead=NULL;
    while(cur)
    {
        ahead=cur->next;
        cur->next=prev;
        prev=cur;
        cur=ahead;
    }
    printLL(prev);
}



int main(){
    int n;
    Node* head=createLL();
    printLL(head);
    cout<<"\n here is your list ";
    cout<<"\n enter the element uwant to del";
    cin>>n;
    deleteNode(head,n);
    //printLL(head);
    printLL(head);
   // reverseLL(head);
}
