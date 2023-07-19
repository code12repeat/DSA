#include<bits/stdc++.h>
using namespace std;
vector<int>bfsOfGraph(vector<int>adj[],int V,int s){
     vector<int>bfs;
        int visit[V]={0};
        visit[0]=1;
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it:adj[node]){
                if(!visit[it]){
                    visit[it]=1;
                    q.push(it);
                }
            }
        }
        return bfs;
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3);
	addEdge(adj,3,4);
	addEdge(adj,2,4);
    vector<int>bfs;
	bfs={bfsOfGraph(adj,V,0)}; 
    for(auto it:bfs)
    cout<<it<<" ";

	return 0; 
} 