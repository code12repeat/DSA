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
vector<int>inOrderTraversal(Node* root){
    vector<int>inorder;
    stack<Node*>st;
    Node*curr=root;
    while(true){
        if(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        else{
            if(st.empty()==true)
            break;
            curr=st.top();
            st.pop();
            inorder.push_back(curr->key);
            curr=curr->right;
        }
    }
    return inorder;
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
    res=inOrderTraversal(root);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}