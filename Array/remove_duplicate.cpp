#include<bits/stdc++.h>
using namespace std;
int remdup(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        { 
        arr[res]=arr[i];
        res++;
        }
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   n=remdup(arr, n);
    cout<<"After removing duplicates"<<"\n";
    for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}
