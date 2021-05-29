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
        vector<ll>a(n+2);
        for(ll i=0; i<n+2; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll sum=0;
        for(ll i=0; i<n; i++)sum+=a[i];
        if(sum==a[n] || sum==a[n+1])
        {
            for(ll i=0; i<n; i++)cout<<a[i]<<" ";
            cout<<endl;
            continue;
        }
        bool f=false;
        ll okk=0;
        sum+=a[n];
        for(ll i=0; i<n; i++)
        {
            ll p=sum-a[i];
            if(p==a[n+1])
        {
                okk=a[i];
                f=true;
                break;
        }
        }

        if(!f)cout<<-1<<endl;
        else
        {
            bool b=true;
            for(ll i=0; i<n+1; i++)
            {
                if(a[i]==okk && b)
                {
                    b=false;
                    continue;
                }
                cout<<a[i]<<" ";
            }
            cout<<endl;
           }
    }
}



/*
Alhamdulillah...

*/


