/*

 Problem link : https://codeforces.com/problemset/problem/1681/C

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
        ll a[n+2],b[n+2];
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<n;i++)cin>>b[i];

        vector<pair<ll,ll> >ans;

        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1] || b[j]>b[j+1])
                {
                    swap(a[j],a[j+1]);
                    swap(b[j],b[j+1]);
                    ans.PB({j+1,j+2});
                }
            }
        }

       /* ll okk=2;
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1] || b[i]>b[i+1])
            {
                okk=0;
            }
        }*/
        if(is_sorted(a,a+n) && is_sorted(b,b+n))
        {
            cout<<ans.size()<<endl;
            for(auto x : ans)cout<<x.F<<" "<<x.S<<endl;
        }
        else cout<<-1<<endl;

    }

}

//Alhamdulillah..

/*
input :

3
2
1 2
1 2
2
2 1
1 2
4
2 3 1 2
2 3 2 3


output :



*/



