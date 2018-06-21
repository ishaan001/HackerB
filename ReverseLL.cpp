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
    int n;
    cin>>n;
    int x;
    Node* head=NULL;
    Node* Tail=NULL;
    for(int i=0;i<n;i++)
    {
        cin>>x;
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
    return head;
}
/*void deleteNode(Node* &head,int dataToDelete)
{
    Node* temp=head,*prev;
    if(temp!=NULL && temp->data==dataToDelete)
    {
        return;
    }
    while(temp!=NULL && temp->data!=dataToDelete)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL) return;
    prev->next=temp->next;

    return;

}*/
void printLL(const Node* head)
{
    const Node* cur=head;
    while(cur){
        cout<<cur->data<<" ";
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
    //printLL(head);
   /* cout<<"\n here is your list ";
    cout<<"\n enter the element uwant to del";
    cin>>n;
    deleteNode(head,n);
    //printLL(head);
    printLL(head);*/
    reverseLL(head);
}

