/*

 Problem link : https://codeforces.com/contest/1556/problem/B

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
        deque<int>even,odd;
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]%2)odd.PB(i);
            else even.PB(i);
        }
        ll even_size=even.size();
        ll odd_size=odd.size();


        if(abs(even_size-odd_size)>1)
        {
            cout<<-1<<endl;
            continue;
        }

        ll ans=0;
        if(even_size>odd_size)
        {
            for(ll i=1; i<=n; i+=2)
            {
                ans+=abs(even.front()-i);
                even.pop_front();
            }
            cout<<ans<<endl;
        }
        else if(even_size<odd_size)
        {
            for(ll i=1; i<=n; i+=2)
            {
                ans+=abs(odd.front()-i);
                odd.pop_front();
            }
            cout<<ans<<endl;
        }
        else
        {
            for(ll i=1; i<=n; i+=2)
            {
                ans+=abs(odd.front()-i);
                odd.pop_front();
            }

            ll ans1=0;

            for(ll i=1; i<=n; i+=2)
            {
                ans1+=abs(even.front()-i);
                even.pop_front();
            }
            ans=min(ans,ans1);
            cout<<ans<<endl;
        }
    }

}

//Alhamdulillah..

/*
intput :

5
3
6 6 1
1
9
6
1 1 1 2 2 2
2
8 6
6
6 2 3 4 5 1

output :

1
0
3
-1
2


*/
