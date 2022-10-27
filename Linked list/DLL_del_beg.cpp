#include<bits/stdc++.h>
using namespace std;
struct  Node
{
int data;
Node*prev;
Node*next;
Node(int d){
    data=d;
    prev=NULL;
    next=NULL;
}
};
Node*del_begin(Node*head){
    if(head==NULL)
    return NULL;
    if(head->next==NULL){
    delete(head);
    return NULL;
    }
    else{
        Node*temp=head;
        temp=head->next;
        delete head;
        temp->prev=NULL;
        return temp;

    }
}
void printlist(Node*head){
    Node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<"\n";
}
int main(){
    Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
    printlist(head);
	head=del_begin(head);
	printlist(head);
	return 0;
}
