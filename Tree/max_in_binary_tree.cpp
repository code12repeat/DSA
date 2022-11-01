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
//Recurssive Approach
/*int maxVal(Node*root){
    if(root==NULL)
    return INT_MIN;
    else
    return max(root->key,max(maxVal(root->left),maxVal(root->right)));
}*/

//Iterative Approach
int maxVal(Node*root){
    if(root==NULL)
    return INT_MIN;
    int mx=INT_MIN;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node*curr=q.front();
        q.pop();
        mx=max(curr->key,mx);
        if(curr->left!=NULL)
        q.push(curr->left);
        if(curr->right!=NULL)
        q.push(curr->right);
    }
    return mx;
}
int main(){
   	Node *root=new Node(20);
	root->left=new Node(80);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    cout<<maxVal(root);
}