/*

 Problem link : https://codeforces.com/contest/1682/problem/B

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
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll a[n+3];
        ll sum=0;
        map<ll,ll>mp;
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            mp[i]=a[i];
        }
        ll last_value=0;
        while(q--)
        {
            ll f;
            cin>>f;
            if(f==1)
            {
                ll pos,x;
                cin>>pos>>x;
                if(mp[pos]==0)
                {
                    mp[pos]=last_value;
                }
                sum-=mp[pos];
                sum+=x;
                mp[pos]=x;
            }
            else
            {
                ll x;
                cin>>x;
                sum=n*x;
                mp.clear();
                last_value=x;
            }
            cout<<sum<<endl;

        }
    }

}

//Alhamdulillah..

/*
intput :

5 5
1 2 3 4 5
1 1 5
2 10
1 5 11
1 4 1
2 1

output :

19
50
51
42
5

*/



