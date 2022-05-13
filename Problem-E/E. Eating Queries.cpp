
/*
 Problem : https://codeforces.com/contest/1676/problem/E

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
        ll n,q;
        cin>>n>>q;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        ll pre[n+3]={0};
        for(ll i=0;i<n;i++)pre[i]=a[i];
       //reverse(pre,pre+a);
        for(ll i=1;i<n;i++)pre[i]+=pre[i-1];
        ll last=pre[n-1];

        //for(ll i=0;i<n;i++)cout<<pre[i]<<" ";
        // cout<<endl;
        while(q--)
        {
            ll tar;
            cin>>tar;

            ll l=0,r=n;
            ll ans=-1;
            ll ok=0;
            while(l<=r)
            {

                ll mid=(l+r)/2;

                if(pre[mid]>=tar)
                {
                   ok=mid;
                   r=mid-1;
                   ans=1;
                }
                else l=mid+1;
            }
            if(ans!=1)cout<<ans<<endl;
            else
            cout<<ok+1<<endl;
        }

    }

}

//Alhamdulillah..


/*
input :
3
8 7
4 3 3 1 1 4 5 9
1
10
50
14
15
22
30
4 1
1 2 3 4
3
1 2
5
4
6



Output:

1
2
-1
2
3
4
8
1
1
-1



*/










 
