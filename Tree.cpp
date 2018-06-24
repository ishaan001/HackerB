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
void levelPrint(TreeNode* root){
    if (root == NULL) return;
    TreeNode* const Marker = NULL;

    queue<TreeNode*> q;
    q.push(root);
    q.push(Marker);


    while(q.empty() == false){
        TreeNode* cur = q.front(); q.pop();
        if(cur==Marker)
        {

            cout<<endl;
            if(q.empty()==false)q.push(Marker);
        }
        cout << cur->data << " ";
        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }


}
int diameter(TreeNode* root,int height);
{
    int lh=0;
    int rh=0;
    if(root==NULL)
        int
        return 0;

}

int main(){
    TreeNode* root = createTree();
//    printTree(root);
    int a=Height(root);

 //   cout<<"\n"<<a;
  //  levelPrint(root);
}
