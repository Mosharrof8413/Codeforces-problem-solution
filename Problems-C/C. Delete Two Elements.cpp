/*

 Problem link : https://codeforces.com/problemset/problem/1598/C

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
       ll n;
       cin>>n;
       ll a[n+2];
       map<ll,ll>mp;
       ll sum=0;
       //ll b[n+2];
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
           sum+=a[i];
           mp[a[i]]++;
       }

       //ll total=accumulate(a,a+n,0);
      // partial_sum(a,a+n,b);
       //for(ll i=0;i<n;i++)cout<<b[i]<<" ";
       //cout<<endl;
       //cout<<total<<endl;
       if((sum*2)%n)
       {
           cout<<0<<endl;
           continue;
       }
       sum*=2;
       sum/=n;
       ll ans=0;
       for(ll i=0;i<n;i++)
       {
           if(mp[sum-a[i]])
           {
               ans+=mp[sum-a[i]];
               if(sum-a[i]==a[i])ans--;
           }
            mp[a[i]]--;
       }
       cout<<ans<<endl;
    }

}

//Alhamdulillah..

/*
intput :

4
4
8 8 8 8
3
50 20 10
5
1 4 7 3 5
7
1 2 3 4 5 6 7


output :

6
0
2
3


*/




