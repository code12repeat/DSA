#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
    int key;
    TreeNode*left,*right;
    TreeNode(int x){
        key=x;
        left=NULL;
        right=NULL;
    }
};
    void inorder(TreeNode*root){
        if(root==NULL)
        return;
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
     void preorder(TreeNode*root){
        if(root==NULL)
        return;
         cout<<root->key<<" ";
        preorder(root->left);
       preorder(root->right);
    }
     void postorder(TreeNode*root){
        if(root==NULL)
        return;
         postorder(root->left);
         postorder(root->right);
         cout<<root->key<<" ";
    }
    int search(TreeNode*root,int target){
        if(root==NULL)
        return 0;
        if(root->key==target){
            return 1;
        }
        search(root->left,target);
        search(root->right,target);
    }
//This function creates the BST 
    TreeNode*insert(TreeNode*root,int y){
        if(root==NULL)
        return new TreeNode(y);
        if(root->key>y){
        root->left=insert(root->left,y);
        }
        if(root->key<y){
        root->right=insert(root->right,y);
        }
        return root;
    }
int main() {
TreeNode*root;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int y;
    cin>>y;
    root=insert(root,y);
}

	cout<<"Inorder Traversal\n";
	inorder(root);
	cout<<"\n";
	cout<<"Preorder Traversal\n";
	preorder(root);
	cout<<"\n";
	cout<<"Postorder Traversal\n";
	postorder(root);
	cout<<"\n";
	cout<<"Enter the target value\n";
	int target;
	cin>>target;
	int flag=0;
	flag=search(root,target);
	if(flag==1)
	cout<<"target is present in the tree\n";
	else
	cout<<"target is not present in the tree\n";
}
