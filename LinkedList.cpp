#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;  //self referential classes

        node(int d){
            data=d;
            next=NULL;
        }
};
void insertAtHead(node*&head,int data){
    node*n=new node(data);
    n->next=head;
    head=n;
}
void print(node *head){
    while(head!=NULL){
            cout<<head->data<<"-->";
            head=head->next;

    }

}
int main(){
    node*head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    print(head);

}

// poi

