#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
Node* buildTree(){
  int d;
  cin>>d;
  if(d==-1)
  {
      return NULL;
  }
  Node* newNode;
  newNode=new Node(d);
  newNode->left=buildTree();
  newNode->right=buildTree();
  return newNode;

}
void PreOrderTree(Node* root)
{
        if(root==NULL)
        {
            return;
        }
        cout<<root->data<<" ";
        PreOrderTree(root->le
          ght);
}
void InOrderTree(Node* root)
{
        if(root==NULL)
        {
            return;
        }

        InOrderTree(root->left);
        cout<<root->data<<" ";
        InOrderTree(root->right);
}
void PostOrderTree(Node* root)
{
        if(root==NULL)
        {
            return;
        }

        PostOrderTree(root->left);
        PostOrderTree(root->right);
        cout<<root->data<<" ";
}

int main(){
    Node* root=NULL;
    root=buildTree();
    PreOrderTree (root);
}
