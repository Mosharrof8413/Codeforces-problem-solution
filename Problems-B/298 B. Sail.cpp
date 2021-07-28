
/*
 Problem Link : https://codeforces.com/problemset/problem/298/B
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
        ll n,x,y,ex,ey;
        cin>>n>>x>>y>>ex>>ey;
        string st;
        cin>>st;
        ll posi_x=0,neg_x=0,posi_y=0,neg_y=0;
        if(ex>x)posi_x=ex-x;
        else neg_x=abs(ex-x);

        if(ey>y)posi_y=ey-y;
        else neg_y=abs(ey-y);
        //cout<<posi_x<<" "<<neg_x<<endl;
        //cout<<posi_y<<" "<<neg_y<<endl;
        ll north=0,south=0,east=0,west=0;
        for(ll i=0;i<st.size();i++)
        {
            if(st[i]=='N')north++;
            else if(st[i]=='S')south++;
            else if(st[i]=='E')east++;
            else west++;
        }
        if(posi_x>east || neg_x >west || posi_y>north || neg_y>south)
        {
            cout<<-1<<endl;
            return 0;
        }
        ll ans=0;
        if(posi_x)
        {
            ll cnt=0;
            for(ll i=0;i<st.size();i++)
            {
               if(st[i]=='E') cnt++;
               if(cnt==posi_x)
               {
                   ans=i+1;
                   break;
               }
            }
        }
         else
        {
            ll cnt=0;
            for(ll i=0;i<st.size();i++)
            {
               if(st[i]=='W') cnt++;
               if(cnt==neg_x)
               {
                   ans=i+1;
                   break;
               }
            }
        }
        ll ans1=0;
         if(posi_y)
        {
            ll cnt=0;
            for(ll i=0;i<st.size();i++)
            {
               if(st[i]=='N') cnt++;
               if(cnt==posi_y)
               {
                   ans1=i+1;
                   break;
               }
            }
        }
         else
        {
            ll cnt=0;
            for(ll i=0;i<st.size();i++)
            {
               if(st[i]=='S') cnt++;
               if(cnt==neg_y)
               {
                   ans1=i+1;
                   break;
               }
            }
        }
        //cout<<ans<<" "<<ans1<<endl;
        ll okk=max(ans,ans1);
        cout<<okk<<endl;
    }
}

//Alhamdulillah...






