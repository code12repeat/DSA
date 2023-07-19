#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
  vector<int>rank,parent;
  public:
  DisjointSet (int n){
  rank.resize(n+1,0);
  parent.resize(n+1,0);
  for(int i=0;i<=n;i++){
     parent[i]=i;
  }
  }
  int findUPar(int node){
     if(node==parent[node])
     return node;
     return parent[node]=findUPar(parent[node]);
  }
  void findUnionByRank(int u,int v){
   int ulp_u=findUPar(u);
   int ulp_v=findUPar(v);
   if(ulp_u==ulp_v)
   return;
   if(rank[ulp_u]<rank[ulp_v])
    parent[ulp_u]=ulp_v;
   else if(rank[ulp_v]<rank[ulp_u])
    parent[ulp_v]=ulp_u;
    else{
       parent[ulp_v]=ulp_u;
       rank[ulp_u]++;
    }
  }
};
int main(){
   DisjointSet ds(7);
   ds.findUnionByRank(1,2);
   ds.findUnionByRank(2,3);
   ds.findUnionByRank(4,5);
   ds.findUnionByRank(6,7);
   ds.findUnionByRank(5,6);
   if(ds.findUPar(3)==ds.findUPar(7))
   cout<<"SAME\n";
   else
   cout<<"NOT SAME\n";
   ds.findUnionByRank(3,7);
   if(ds.findUPar(3)==ds.findUPar(7))
   cout<<"SAME";
   else
   cout<<"NOT SAME";
}
