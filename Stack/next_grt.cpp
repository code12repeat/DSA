#include<bits/stdc++.h>
using namespace std;
/*Naive Approach
void nextGreater(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int j;
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
          
        }
           if(j==n){
                cout<<-1<<" ";
           }
    }
}
    */
 vector<int> nextGreater(int arr[],int n){
//Efficient approach
vector<int>ans;
stack<int>st;
st.push(arr[n-1]);
ans.push_back(-1);
for(int i=n-2;i>=0;i--){
    while(st.empty()==false && st.top()<=arr[i])
    st.pop();
    int ng=(st.empty()) ? -1: st.top();
    ans.push_back(ng);
    st.push(arr[i]);
}
reverse(ans.begin(),ans.end());
 return ans;
}




int main() 
{ 
    int arr[]={5,15,10,8,6,12,9,18};
    int n=8;
    for(int x: nextGreater(arr,n)){
        cout<<x<< " ";   
    }
    return 0; 
}




