/*

 Problem link : https://codeforces.com/problemset/problem/165/A

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
        ll n;
        cin>>n;
        vector<pair<ll,ll> >vp;
        for(ll i=0; i<n; i++)
        {
            ll x,y;
            cin>>x>>y;
            vp.PB({x,y});
        }
        ll cnt=0;
        for(ll i=0; i<n; i++)
        {
            ll left=0,right=0,up=0,down=0;
            for(ll j=0; j<n; j++)
            {
                if(i!=j)
                {
                    if(vp[j].S>vp[i].S && vp[i].F==vp[j].F)up++;
                    else if(vp[j].S<vp[i].S && vp[i].F==vp[j].F)down++;
                }

                if(i!=j)
                {
                    if(vp[j].F>vp[i].F && vp[i].S==vp[j].S)right++;
                    else if(vp[j].F<vp[i].F && vp[i].S==vp[j].S)left++;
                }

            }
            if(left && right && up && down)
            {
                cnt++;
                vp[i].F=0,vp[i].S=0;
            }

        }
        cout<<cnt<<endl;

    }

}

//Alhamdulillah..

/*
intput :

8
1 1
4 2
3 1
1 2
0 2
0 1
1 0
1 3


output :

2

*/

