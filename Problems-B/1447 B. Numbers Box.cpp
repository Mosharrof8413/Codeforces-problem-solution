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
        ll n,m;
        cin>>n>>m;
        ll arr[n+1][m+1];
        ll neg=0,mn=100000,sum=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>arr[i][j];
                ll okk=abs(arr[i][j]);
                sum+=okk;
                mn=min(okk,mn);
                if(arr[i][j]<0)neg++;
            }
        }
        if(neg&1)
        {
            ll ans=sum-2*mn;             // abs(-2)=-2 to 0 then 2 so the distance will be 4...
            cout<<ans<<endl;
        }
        else cout<<sum<<endl;

}
}



/*
Alhamdulillah
*/


