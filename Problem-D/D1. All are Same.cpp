/*
 Problem : https://codeforces.com/problemset/problem/1593/D1

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


int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        set<ll>s;
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<n-1;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                ll l=abs(a[i]-a[j]);
                s.insert(l);
            }
        }
        ll ans=0;
        for(auto x : s)ans=__gcd(x,ans);
        if(ans==0)cout<<-1<<endl;
        else
        cout<<ans<<endl;


    }

}

//Alhamdulillah..


/*
input:
3
6
1 5 3 1 1 5
8
-1 0 1 -1 0 1 -1 0
4
100 -1000 -1000 -1000

Output:

2
1
1100



*/


