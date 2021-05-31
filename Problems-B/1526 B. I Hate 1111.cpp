
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
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        bool f=false;
        while(n>=0)
        {
            if(n%11==0)
            {
                f=true;
                break;
            }
            n-=111;
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}



/*
Alhamdulillah...

*/
 
