#include<bits/stdc++.h>
using namespace std;
void subset(string s,string curr=" ",int i=0)
{
    if(i==s.length())
    {
        cout<<curr<<" ";
        return;
    }
    subset(s,curr,i+1);
    subset(s,curr+s[i],i+1);
}
int main()
{
    string str = "ABC";
    	
    subset(str, "", 0);
	
	return 0;
}