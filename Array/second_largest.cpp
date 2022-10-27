#include <bits/stdc++.h>
using namespace std;
int secondlargest(int a[],int n)
{
    int largest=0;
    int res=-1;
    
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[largest])
        {
            res=largest;
            largest=i;
        }
        else if(a[i]!=a[largest])
        {
            if(res==-1||a[i]>a[res])
            res=i;
        }
    }
    return res;
}
int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pos=secondlargest(a,n);
    cout<<a[pos];
    
	return 0;
    
}