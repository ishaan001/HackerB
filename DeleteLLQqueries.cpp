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
Node* createLL(int n)
{
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
Node* deleteNode(Node* head, int dataToDelete,int len){
    Node* cur = head;
    int val=0;
    Node* previous = NULL;
    while(cur){
        if (val==dataToDelete){
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
            val++;
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
        cout<<cur->data<<" ";
        cur=cur->next; //++cur
    }
}
/*void reverseLL(Node* head){
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

*/

int main(){

    int n,m;
    cin>>n;
    cin>>m;
    Node* head=createLL(n);
   // printLL(head);
   // cout<<"\n";
    int *arr;
    arr=new int[n];

    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
        //cout<<"First LOOP";
    }
    for(int i=0;i<m;i++)
    {
        //cout<<"second LOOP";

        head=deleteNode(head,arr[i],n);
        printLL(head);
        cout<<"\n";
    }





    //printLL(head);
   /* cout<<"\n here is your list ";
    cout<<"\n enter the element uwant to del";
    cin>>n;
    deleteNode(head,n);
    //printLL(head);
    printLL(head);*/

    //1reverseLL(head);
}


