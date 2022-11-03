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
vector<int>postOrderTraversal(Node* root){
    vector<int>postOrder;
    if(root==NULL)
    return postOrder;
    stack<Node*>st1,st2;
    Node*curr=root;
    st1.push(curr);
    while(!st1.empty()){
        curr=st1.top();
        st1.pop();
        st2.push(curr);
        if(curr->left!=NULL)
        st1.push(curr->left);
        if(curr->right!=NULL)
        st1.push(curr->right);
    }
    while(!st2.empty()){
        postOrder.push_back(st2.top()->key);
        st2.pop();
    }
    return postOrder;
}
int main(){
#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

     Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);
    //preOrder(root);
    vector<int>res;
    res=postOrderTraversal(root);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}