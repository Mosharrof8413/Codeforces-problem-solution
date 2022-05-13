
/*
 Problem : https://codeforces.com/contest/1676/problem/C

*/

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
/*
const int MX=1e6+123;
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
const int mod=1e9+7;

*/

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,m;
       cin>>n>>m;
       vector<string>v;
       for(ll i=0;i<n;i++)
       {
           string st;
           cin>>st;
           v.PB(st);
       }
       ll ans=0,ok=1e12;
       for(ll i=0;i<n-1;i++)
       {
           string s=v[i];
           for(ll j=i+1;j<n;j++)
           {
               string ss=v[j];
               ans=0;
               for(ll k=0;k<m;k++)
               {
                   ll l=s[k]-'0';
                   ll r=ss[k]-'0';
                   ans+=abs(l-r);
               }
               ok=min(ans,ok);
           }
           ok=min(ans,ok);
       }
       cout<<ok<<endl;
    }

}

//Alhamdulillah..


/*
input :

6
2 4
best
cost
6 3
abb
zba
bef
cdu
ooo
zzz
2 7
aaabbbc
bbaezfe
3 2
ab
ab
ab
2 8
aaaaaaaa
zzzzzzzz
3 1
a
u
y


Output:

11
8
35
0
200
4



*/









 
