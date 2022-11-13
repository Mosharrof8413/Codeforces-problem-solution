/*

 Problem link : https://codeforces.com/contest/1748/status/B

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
        string st;
        cin>>st;
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            ll mx=0,dist=0;
            map<ll,ll>mp;
            for(ll j=i;j<n && mp[st[j]-'0']<=10;j++)
            {
                mp[st[j]-'0']++;
                if(mp[st[j]-'0']==1)dist++;
                mx=max(mx,mp[st[j]-'0']);
                if(mx<=dist)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}

//Alhamdulillah..

/*
intput :

7
1
7
2
77
4
1010
5
01100
6
399996
5
23456
18
789987887987998798

output :
1
2
10
12
10
15
106



*/











