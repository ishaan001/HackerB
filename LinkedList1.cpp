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
void deleteNode(Node* &head,int dataToDelete)
{
    Node* temp=head,*prev;
    if(temp!=NULL && temp->data==dataToDelete)
    {
        temp=temp->next;
    }
    while(temp!=NULL && temp->data!=dataToDelete)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL) return;
    prev->next=temp->next;

    return;

}
void printLL(const Node* head)
{
    const Node* cur=head;
    while(cur){
        cout<<cur->data<<"-->";
        cur=cur->next; //++cur
    }
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
}
