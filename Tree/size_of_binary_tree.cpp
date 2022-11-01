#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};
//Recursive Approach
/* int getSize(Node*root){
    if(root==NULL)
    return 0;
    else
    return 1+getSize(root->left)+getSize(root->right);
} */
// Iterative Approach
int getSize(Node*root){
    int count=0;
    if(root==NULL)
    return 0;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node*curr=q.front();
        q.pop();
        count++;
        if(curr->left!=NULL)
        q.push(curr->left);
        if(curr->right!=NULL)
        q.push(curr->right);
    }
    return count;
}
int main(){
    Node*root=new Node(10);
    root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);
    cout<<getSize(root);
}