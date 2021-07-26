
/*
 Problem Link : https://codeforces.com/problemset/problem/287/A
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
        ll grid[4][4]= {0};
        for(ll i=0; i<4; i++)
        {
            for(ll j=0; j<4; j++)
            {
                char ch;
                cin>>ch;
                if(ch=='#')
                    grid[i][j]=1;
                else grid[i][j]=3;
            }
        }
        bool f=false;
        for(ll i=1; i<4; i++)
        {
            for(ll j=1; j<4; j++)
            {
                if(((grid[i][j]+grid[i][j-1]+grid[i-1][j]+grid[i-1][j-1])==4)|| (grid[i][j]+grid[i][j-1]+grid[i-1][j]+grid[i-1][j-1])==6)f=true;
                if(((grid[i][j]+grid[i][j-1]+grid[i-1][j]+grid[i-1][j-1])==10) || ((grid[i][j]+grid[i][j-1]+grid[i-1][j]+grid[i-1][j-1])==12 ))f=true;
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

//Alhamdulillah...






