
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define pb push_back
#define ll long long
#define mk make_pair
#define endl '\n'
#define M  1000000007
ull dp[101][101];
ull nCr(ull n,ull r)
{
    if(n==r)return dp[n][r]=1;
    if(r==1)return dp[n][r]=n;
    if(r==0)return dp[n][r]=1;
    if(dp[n][r])return dp[n][r];
    return dp[n][r]=nCr(n-1,r-1)+nCr(n-1,r);
}

ll mod(ll x)
{
    return ((x%M+M)%M);    // x will be negative or positive
}
ll add(ll a,ll b)
{
    return mod((mod(a)+mod(b)));
}
ll mul(ll a,ll b)
{
    return mod(mod(a)*mod(b));
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
     ll n;
     cin>>n;
     vector<ll>v,v1;
     for(ll i=0;i<n;i++)
     {
         ll x;
         cin>>x;
         v.pb(x);
         v1.pb(x);
     }
     sort(v1.begin(),v1.end());
     if(v==v1)cout<<0<<endl;
     else if(v[0]==1 || v[n-1]==n)cout<<1<<endl;
     else if(v[0]==n && v[n-1]==1)cout<<3<<endl;
     else cout<<2<<endl;

     }
    }



/*
Alhamdulillah...
*/
 
