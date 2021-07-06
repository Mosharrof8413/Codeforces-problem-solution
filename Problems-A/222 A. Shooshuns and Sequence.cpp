
/*
 Problem Link : https://codeforces.com/problemset/problem/222/A
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
       ll a[n+6];
       bool f=true;
       for(ll i=1;i<=n;i++)cin>>a[i];
       for(ll i=k;i<n;i++)
       {
           if(a[i]!=a[i+1])
           {
               f=false;
               break;
           }
       }
       if(!f)
       {
           cout<<-1<<endl;
           return 0;
       }
       ll cnt=n-k+1;
       for(ll i=k-1;i>0;i--)
       {
           if(a[k]==a[i])cnt++;
           else break;
       }
       cout<<n-cnt<<endl;
    }
}

//Alhamdulillah...







