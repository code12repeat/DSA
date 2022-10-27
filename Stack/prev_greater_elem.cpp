#include<bits/stdc++.h>
using namespace std;
void prevGreater(int arr[],int n){
    /*Naive Approach
    for(int i=0;i<n;i++){
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
          
        }
          if(j==-1){
                cout<<-1<<" ";
            }
    }*/
    //efficient approach
    stack<int>st;
    st.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++){
        while(st.empty()==false && st.top()<=arr[i]){
                st.pop(); 
        }
              
        int pg=(st.empty()) ?-1:st.top();
        cout<<pg<<" ";
        st.push(arr[i]);
    }
}
int main(){
    int arr[5]={20,30,10,5,15};
    prevGreater(arr,5);
}