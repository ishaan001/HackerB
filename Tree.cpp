// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include<queue>
using namespace std;

class TreeNode{
 public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int d){
        data = d;
        left=NULL;
        right=NULL;
    }
};

TreeNode* createTree(){
    int x; cin >> x;
    if (x == -1){
        return NULL;
    }

    TreeNode* root = new TreeNode(x);
    root->left = createTree();
    root->right = createTree();
    return root;
}
void printTree(TreeNode *root)
{
    if(root==NULL){

        return;
    }
    printTree(root->left);
    cout<<root->data<<" ";
    printTree(root->right);

}
int Height(TreeNode* root)
{
    if(root==NULL)
    {
        return 0 ;
    }
    int lf=Height(root->left);
    int hf=Height(root->right);
    return max(lf,hf)+1;

}
void leftPrint(TreeNode* root){
    if (root == NULL) return;
    TreeNode* const Marker = NULL;

    queue<TreeNode*> q;
    q.push(root);
    q.push(Marker);
    int flag=1;


    while(q.empty() == false){
        TreeNode* cur = q.front(); q.pop();
        if(cur==Marker)
        {

            cout<<endl;
            flag=1;
            if(q.empty()==false)q.push(Marker);
            continue;
        }
        if(flag==1)cout << cur->data << " ";
        flag=0;
        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }


}
void levelPrint(TreeNode* root){
    if (root == NULL) return;
    TreeNode* const Marker = NULL;

    queue<TreeNode*> q;
    q.push(root);
    q.push(Marker);
    //int flag=1;


    while(q.empty() == false){
        TreeNode* cur = q.front(); q.pop();
        if(cur==Marker)
        {

            cout<<endl;
      //      flag=1;
            if(q.empty()==false)q.push(Marker);
            continue;
        }
        /*if(flag==1)*/cout << cur->data << " ";
        //flag=0;
        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }


}
void rightPrint(TreeNode* root){
    if (root == NULL) return;
    TreeNode* const Marker = NULL;

    queue<TreeNode*> q;
    q.push(root);
    q.push(Marker);
    //int flag=1;
    TreeNode* Temp=root;


    while(q.empty() == false){
        TreeNode* cur = q.front(); q.pop();
        if(cur!=Marker)Temp=cur;
        if(cur==Marker)
        {
            cout << Temp->data << " ";

            cout<<endl;
      //      flag=1;
            if(q.empty()==false)q.push(Marker);
            continue;
        }
        /*if(flag==1)*/
        //flag=0;
        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }
}
/*int diameter(TreeNode* root,int height);
{
    int lh=0;
    int rh=0;
    if(root==NULL)
        int
        return 0;

}*/

/*void lefView(TreeNode* root)
{
    TreeNode* leftMost=NULL;
    TreeNode* cur=root;
    while(cur)
    {
        leftMost=NULL;
        if(cur->left)
        {
            leftMost=cur->left;
            cout<<leftMost->data;
        }
        else if(cur->right)
        {
            leftMost->
        }
    }

}*/

int main(){
    TreeNode* root = createTree();
   // printTree(root);
  //  int a=Height(root);

    cout<<"\n";
    leftPrint(root);
    rightPrint(root);
}
