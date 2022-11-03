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
vector<int> preOrder(Node*root){
    vector<int>ans;
    if(root==NULL)
    return ans;
    stack<Node * >st;
    st.push(root);
    while(!st.empty()){
        Node*curr=st.top();
        st.pop();
        ans.push_back(curr->key);
        //cout<<curr->key<<" ";
        if(curr->right!=NULL)
        st.push(curr->right);
        if(curr->left!=NULL)
        st.push(curr->left);
        }
        return ans;
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
    res=preOrder(root);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}