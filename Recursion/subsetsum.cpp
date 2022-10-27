#include<bits/stdc++.h>
using namespace std;
int countsubset(int arr[],int n,int sum)
{
    if(n==0)
    return (sum==0)?1:0;
    return countsubset(arr,n-1,sum)+countsubset(arr,n-1,sum-arr[n-1]);
}
int main()
{
    int n=3,arr[]={10,20,15},sum=25;
    cout<<countsubset(arr,n,sum);
    return 0;
}