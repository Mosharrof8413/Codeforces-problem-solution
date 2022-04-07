/*
 Problem : https://codeforces.com/problemset/problem/1642/B

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
ll sum;
ll gcd (ll a,ll b)
{
    if(b==0)return a;

    return gcd(b,b%a);
}

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
        map<ll,ll>mp;
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        priority_queue<pair<ll,ll> >pq;
        for(auto[u,v] : mp)
        {
            pq.push({v,u});
        }
        vector<ll>ans;
        ans.PB(n);
        ll okk=n;
        for(ll i=n-1; i ;i--)
        {
            pair<ll,ll>p=pq.top();
            pq.pop();
            if(p.first>1)
            {
                okk--;
                p.first--;
                pq.push(p);
            }
            ans.PB(okk);

        }
        reverse(ans.begin(),ans.end());
        for(auto it : ans)cout<<it<<" ";
        cout<<endl;
    }
}

//Alhamdulillah..


/*
input:

2
3
1 1 2
6
5 1 2 2 2 4


Output:

2 2 3
4 4 4 4 5 6


*/




