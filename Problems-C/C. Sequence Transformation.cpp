
/*

 Problem link : https://codeforces.com/problemset/problem/1454/C
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
        ll a[n+2];
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=1;i<n;i++)
        {
            if(a[i]==a[i-1])continue;
             mp[a[i]]++;
        }
        mp[a[n-1]]--;

        ll ans=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            ans=min(ans,mp[a[i]]);
        }
        cout<<ans+1<<endl;
    }

}

//Alhamdulillah..

/*
intput :

5
3
1 1 1
5
1 2 3 4 5
5
1 2 3 2 1
7
1 2 3 1 2 3 1
11
2 2 1 2 3 2 1 2 3 1 2



output :

0
1
1
2
3


*/




