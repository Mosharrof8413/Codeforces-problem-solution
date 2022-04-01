/*
 Problem : https://codeforces.com/problemset/problem/858/A

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
    for(ll i=2;i<=sq;i++)
    {
        if(n%i==0)return 1;
    }
    return 0;
}

int main()
{
    optimize();
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll okk=n;
        for(ll i=0;i<x;i++)okk*=10;
        ll ans=1e18;
        ll done=n;
        for(ll i=1; ;i++)
        {
            ll s=done*i;
            ll well=s;
            ll cnt=0;
            while(s)
            {
                if(s%10==0)cnt++;
                else break;
                s/=10;
            }
            if(cnt>=x)
            {
                ans=well;
                break;
            }
            if(s>okk)break;
        }
        ans=min(ans,okk);
        cout<<ans<<endl;

    }


}

//Alhamdulillah..


/*
input:
375 4

Output:
YES
3000



*/



