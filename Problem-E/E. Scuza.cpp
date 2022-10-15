/*

 Problem link : https://codeforces.com/problemset/problem/1742/E

 */
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define PB push_back
#define F first
#define S second
const int mx=20;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll>a(n),pre(n);
        ll mx=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            pre[i]=a[i];
            mx=max(mx,a[i]);
            a[i]=mx;
        }
        for(ll i=1; i<n; i++)pre[i]+=pre[i-1];
        while(q--)
        {
            ll x;
            cin>>x;
            ll up=upper_bound(a.begin(),a.end(),x)-a.begin();
            if(up==0)cout<<0<<" ";
            else cout<<pre[up-1]<<" ";
        }
        cout<<endl;

    }
}

//Alhamdulillah..

/*
intput :

3
4 5
1 2 1 5
1 2 4 9 10
2 2
1 1
0 1
3 1
1000000000 1000000000 1000000000
1000000000

output :

1 4 4 9 9
0 2
3000000000



*/














