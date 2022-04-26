/*
 Problem : https://codeforces.com/problemset/problem/1672/C

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

const ll MX=2e6+123;
bitset<MX>is_prime;
vector<ll>primes;
ll solve(ll n)
{
    ll sq=sqrt(n);
    for(ll i=2; i<=sq; i++)
    {
        if(n%i==0)return 1;
    }
    return 0;
}

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
       for(ll i=1;i<=n;i++)cin>>a[i];

       ll mn=n,mx=0;
       for(ll i=1;i<n;i++)
       {
           if(a[i+1]==a[i])
           {
               mn=min(mn,i);
               mx=max(mx,i);
           }
       }
       if(mx==mn || (mn==n && mx==0))
       {
           cout<<0<<endl;
           continue;
       }
       ll ans=max(1LL,mx-mn-1);
       cout<<ans<<endl;

    }


}

//Alhamdulillah..


/*
input:

4
5
1 1 1 1 1
5
2 1 1 1 2
6
1 1 2 3 3 4
6
1 2 1 4 5 4


Output:

2
1
2
0


*/








