#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    //Left shift method
    if(n&(1<<(k-1))!=0){
        //Right shift method
        //if(((n>>(k-1))&1)==1){}
        cout<<"SET";
    }
    else cout<<"NOT SET";
    return 0;
}