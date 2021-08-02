/*
 Problem Link : https://codeforces.com/problemset/problem/248/A
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
    // cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        ll zero1=0,one1=0,zero2=0,one2=0;
        for(ll i=0; i<n; i++)
        {
            ll x,y;
            cin>>x>>y;
            if(x==0)zero1++;
            else one1++;
            if(y==0)zero2++;
            else one2++;
        }
        ll ans=min(one1,zero1);
        ll okk=min(one2,zero2);
        ans+=okk;
        cout<<ans<<endl;
    }
}




