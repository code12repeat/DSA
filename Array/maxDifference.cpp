#include<bits/stdc++.h>
using namespace std;
/* int maxDiff(int arr[],int n)   //Naive Approach
{
    int res=arr[1]-arr[0];
    for (int i = 0; i <n-1; i++)
    {
        for (int j = 0; j <n; j++)
        {
            res=max(res,arr[j]-arr[i]);
        }
        
    }
    return res;
}*/

int maxDiff(int arr[],int n)  //Efficient Approach
{
int res=arr[1]-arr[0]; int minVal=arr[0];
for (int j = 1; j <n; j++)
{
    res=max(res,arr[j]-minVal);
    minVal=min(minVal,arr[j]);
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
cout<<maxDiff(arr,n);
return 0;
}