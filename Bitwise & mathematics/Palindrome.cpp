#include<bits/stdc++.h>
using namespace std;
bool Is_pal(int n){
   int rev=0;
    int temp=n;
    while(temp!=0){
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
    }
    return(rev==n);
}
int main(){
    int n;
    cin>>n;
    cout<<Is_pal(n);
}