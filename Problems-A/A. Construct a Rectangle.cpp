/*
   Problem Link : https://codeforces.com/problemset/problem/1622/A
*/

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second


ll gcd ( ll a, ll b )
{
    return __gcd ( a, b );
}
ll lcm ( ll a, ll b )
{
    return a * ( b / gcd ( a, b ) );
}

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();

    ll t;
    cin>>t;
    while(t--)
    {
       ll a,b,c;
       cin>>a>>b>>c;
       ll mn=min(a,min(b,c));
       ll mx=max(a,max(b,c));
       ll mid=(a+b+c)-mx-mn;
       if(mn+mid==mx)
       {
           cout<<"YES"<<endl;
           continue;
       }
       if(mn==mid && mx%2==0)
       {
           cout<<"YES"<<endl;
       }
       else if(mid==mx && mn%2==0)
       {
           cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
    }
}

