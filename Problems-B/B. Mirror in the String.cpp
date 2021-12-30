/*
 Problem Link : https://codeforces.com/contest/1616/problem/B
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
    ll limt=1e6+123;
    //primeGen(limt);

    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       string st;
       cin>>st;
       if(n==1)
       {
           cout<<st<<st<<endl;
           continue;
       }
       if(st[0]==st[1])
       {
           cout<<st[0]<<st[1]<<endl;
           continue;
       }
       string ans;
       ans+=st[0];
       for(ll i=1;i<n;i++)
       {
           if(st[i]<=st[i-1])ans+=st[i];
           else break;
       }
       st=ans;
       reverse(ans.begin(),ans.end());
       st+=ans;
       cout<<st<<endl;
    }
}

