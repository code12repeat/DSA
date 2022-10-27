#include<bits/stdc++.h>
using namespace std;
int getlargest(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n;i++)
    {
    if(arr[i]>arr[res])
    res=i;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    cout<<getlargest(arr,n);
}