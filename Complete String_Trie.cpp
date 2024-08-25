https://www.codingninjas.com/studio/problems/complete-string_2687860?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos&leftPanelTabValue=PROBLEM
#include <bits/stdc++.h> 
using namespace std;
class Node{
    public:
    Node*links[26];
    bool flag=false;
    bool containsKey(char ch){
        return links[ch-'a'];
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }
};
class Trie{
    private:
    Node*root;
    public:
    Trie(){
        root=new Node();
    }
    void insert(string word){
        Node*node=root;
        for(int i=0;i<word.size();i++){
              if(!node->containsKey(word[i])){
                  node->put(word[i],new Node());
              }
              node=node->get(word[i]);
        }
        node->setEnd();
    }
    public:
    bool check(string word){
        Node*node=root;
        for(int i=0;i<word.size();i++){
             if(node->containsKey(word[i])){
                 node=node->get(word[i]);
                 if(!node->isEnd()){
                     return false;
                 }
             }
             else{
                 return false;
             }
        }
        return true;
    }
};
string completeString(int n, vector<string> &a){
    Trie trie;
    for(auto &it:a){
           trie.insert(it);
    }
    string ans="";
    for( auto &it:a){
        if(trie.check(it)){
            if(ans.size()<it.size()){
                ans=it;
            }
            else if(ans.size()==it.size()&&it<ans){
                ans=it;
            }
        }
    }
    if(ans=="")return "None";
    return ans;
}
