/*

 Problem link : https://codeforces.com/problemset/problem/926/A

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
    ll l,r;
    cin>>l>>r;

    vector<ll>ans,two,three;
    set<ll>s;
    for(ll i=0; i<31; i++)
    {
        ll b=pow(2,i);
        two.PB(b);
        if(b<=2e9)
            s.insert(b);
    }
    for(ll i=0; i<20; i++)
    {
        ll b=pow(3,i);
        three.PB(b);
        if(b<=2e9)
            s.insert(b);
    }
    for(ll i=0; i<two.size(); i++)
    {
        for(ll j=0; j<three.size(); j++)
        {
            ll d=two[i]*three[j];
            if(d<=2e9)s.insert(d);
        }

    }
    //sort(ans.begin(),ans.end());
    for(auto x : s )ans.PB(x);
    //for(auto x : ans)cout<<x<<" ";
    //cout<<ans.size()<<endl;

    ll cnt=0;
    for(ll i=0; i<ans.size(); i++)
    {
        if(ans[i]>=l && ans[i]<=r)cnt++;
    }
    cout<<cnt<<endl;
}

//Alhamdulillah..

/*
input :

1 2000000000

output :

326

*/



