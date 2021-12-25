/*
 Problem Link : https://codeforces.com/problemset/problem/1562/B
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
vector<ll>v;
const int mx=5e6+123;
unsigned long long phi[mx];
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
       bool flag=true,flag2=true;
       for(ll i=0;i<n;i++)
       {
           if(st[i]=='1' || st[i]=='4' || st[i]=='6' || st[i]=='8' || st[i]=='9')
           {
               cout<<1<<endl<<st[i]<<endl;
               flag=false;
               break;
           }
       }
       if(flag)
       {
       for(ll i=0;i<n;i++)
       {
           ll d=st[i]-'0';
         for(ll j=i+1;j<n;j++)
         {
             ll e=st[j]-'0';
             ll ans=d*10 + e;
             for(ll k=2;k*k<=ans;k++)
             {
                 if(ans%k==0)
                 {
                     cout<<2<<endl<<ans<<endl;
                     flag2=false;
                     break;
                 }
             }
             if(!flag2)break;
         }
         if(!flag2)break;

       }
       }
    }
}

//Alhamdulillah..



 
