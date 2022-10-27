#include<bits/stdc++.h>//Efficient Approach
using namespace std;
   int main()
   {
       int n,d;
       cin>>n>>d;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       for(int i=0;i<n;i++)
       {
           cout<<arr[(i+d)%n]<<" ";
       }
       return 0;
       
   }

   //another pseudo code
   /*
    void lrotate(int arr[],int n)
    {
        int temp=arr[0];
        for(int i=0;i<n;i++)
        {
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
    }
   */