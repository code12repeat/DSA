#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,lcm;
    cin>>a>>b;
    int c=__gcd(a,b);
    lcm=a*b/(c);
    cout<<lcm;
}