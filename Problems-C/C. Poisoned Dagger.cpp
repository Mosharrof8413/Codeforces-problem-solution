/*

 Problem link : https://codeforces.com/problemset/problem/1613/C

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

const int mx=107;
ll a[mx],N,H;
ll check(ll x)
{
    ll sum=x;                        //last a[n-1] can get x total value.
    for(ll i=1; i<N; i++)
    {
        sum+=min(x,a[i]-a[i-1]);
    }
    if(sum>=H)return 1;
    return 0;
}
int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>N>>H;
        for(ll i=0; i<N; i++)cin>>a[i];

        ll l=1,r=1e18;               //if all given elements value are 1 the total value will be 100,H can be 1e18...so r=1e18 is reasonable..
        ll ans=0;
        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            if(check(mid)==1)
            {
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout<<ans<<endl;
    }

}
//Alhamdulillah..

/*
intput :

4
2 5
1 5
3 10
2 4 10
5 3
1 2 4 5 7
4 1000
3 25 64 1337

output :

3
4
1
470


*/







