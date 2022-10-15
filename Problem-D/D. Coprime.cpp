/*

 Problem link : https://codeforces.com/contest/1742/problem/D

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
        ll n;
        cin>>n;
        ll a[n+2];
        map<ll,ll>mp;
        ll cnt=0,one=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]=i+1;
        }
        ll ans=-1;
        for(ll i=1000; i>=1; i--)
        {
            for(ll j=1000; j>=1; j--)
            {
                if(mp[i] && mp[j] && __gcd(i,j)==1)
                {
                    ans=max(ans,mp[i]+mp[j]);
                }
            }
        }
        cout<<ans<<endl;
    }
}

//Alhamdulillah..

/*
intput :

6
3
3 2 1
7
1 3 5 2 4 7 7
5
1 2 3 4 5
3
2 2 4
6
5 4 3 15 12 16
5
1 2 2 3 6


output :

6
12
9
-1
10
7



*/










 
