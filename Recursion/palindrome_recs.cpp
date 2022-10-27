#include<bits/stdc++.h>
using namespace std;
bool ispal(string str,int start,int end)//initially start=0 and end=n-1
{
    if(start>=end)
    return true;
    return(str[start]==str[end])&& ispal(str,start+1,end-1);
}
int main()
{
string str;
cin>>str;
int start,end;
cin>>start>>end;
cout<<ispal(str,start,end);
return 0;
}