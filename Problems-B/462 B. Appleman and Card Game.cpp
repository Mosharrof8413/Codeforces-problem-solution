
/*
 Problem Link : https://codeforces.com/problemset/problem/462/B
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

const int MX=1e7+123;
bitset<MX>is_prime;
vector<ll>primes;
void primeGen(ll n)
{
    ll sq=sqrt(n);
    for(ll i=3; i<=n; i+=2)is_prime[i]=1;

    for(ll i=3; i<=sq; i+=2)
    {
        if(is_prime[i]==1)
        {
            for(ll j=i*i; j<=n; j+=(i+i))
                is_prime[j]=0;
        }
    }
    primes.PB(2);
    is_prime[2]=1;
    for(ll i=3; i<=n; i+=2)
    {
        if(is_prime[i]==1)primes.PB(i);
    }
}
ll NOD(ll n)
{
    ll ans=1;
    for(auto u : primes)
    {

        if(u*u > n)break;
        if(n%u==0)
        {
            ll cnt=0;
            while(n%u==0)
            {
                n/=u;
                cnt++;
            }
            cnt++;
            ans*=cnt;
        }
    }
    if(n>1) ans*=2;
    return ans;
}
int main()
{
    optimize();
   // ll limt=1e6+123;
    //primeGen(limt);
    ll test=1;
    //cin>>test;
    while(test--)
    {
        ll n,k;
        cin>>n>>k;
        map<char,ll>mp;
        vector<ll>vp;
        string st;
        cin>>st;
        for(ll i=0;i<n;i++)mp[st[i]]++;
        for(char ch='A';ch<='Z';ch++)
        {
            if(mp[ch])vp.PB(mp[ch]),mp[ch]=0;
        }
        sort(vp.rbegin(),vp.rend());
        ll sum=0,ans=0;
        //for(ll i=0;i<vp.size();i++)cout<<vp[i]<<" ";
       // cout<<endl<<endl;
        for(ll i=0;i<vp.size();i++)
        {
            sum+=vp[i];
            ans+=vp[i]*vp[i];
            if(sum>k)
            {
               ans-=vp[i]*vp[i];
               sum-=vp[i];
              // cout<<sum<<endl;
              ll okk=k-sum;
               ans+=okk*okk;
               break;
            }
        }
        cout<<ans<<endl;
    }
}

//Alhamdulillah...






