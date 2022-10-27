#include<bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int> q){
    //Iterative method
    stack<int>st;
    while(q.empty()==false){
        st.push(q.front());
        q.pop();
    }
    while(st.empty()==false){
        q.push(st.top());
        st.pop();
    }
    while(q.empty()==false){
        cout<<q.front()<<" ";
        q.pop();
    }
   

}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    reverseQueue(q);
}
