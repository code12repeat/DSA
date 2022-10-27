#include<bits/stdc++.h>
using namespace std;
int find_odd(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    return res;
}
int main(){
     int n;
    int arr[n];
   
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>arr[i];}
    cout<<find_odd(arr,n);
    return 0;
}