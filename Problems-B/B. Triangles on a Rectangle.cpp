/*
 Problem : https://codeforces.com/problemset/problem/1620/B

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
        ll w,h;
        cin>>w>>h;
        ll k;
        cin>>k;
        ll mx=0,mn=1e12;
        for(ll i=0; i<k; i++)
        {
            ll x;
            cin>>x;
            mn=min(mn,x);
            mx=max(mx,x);
        }
        ll area_of_x1=(mx-mn)*h;


        mx=0,mn=1e12;
        cin>>k;
        for(ll i=0; i<k; i++)
        {
            ll x;
            cin>>x;
            mn=min(mn,x);
            mx=max(mx,x);
        }
        ll area_of_x2=(mx-mn)*h;


        mx=0,mn=1e12;
        cin>>k;
        for(ll i=0; i<k; i++)
        {
            ll x;
            cin>>x;
            mn=min(mn,x);
            mx=max(mx,x);
        }
        ll area_of_y1=(mx-mn)*w;

        mx=0,mn=1e12;
        cin>>k;
        for(ll i=0; i<k; i++)
        {
            ll x;
            cin>>x;
            mn=min(mn,x);
            mx=max(mx,x);
        }
        ll area_of_y2=(mx-mn)*w;


        //cout<<area_of_x1<<" "<<area_of_x2<<" "<<area_of_y1<<" "<<area_of_y2<<endl;

        ll ans=max(area_of_x1,max(area_of_x2,max(area_of_y1,area_of_y2)));
        cout<<ans<<endl;




    }
}

//Alhamdulillah..


/*
input:
3
5 8
2 1 2
3 2 3 4
3 1 4 6
2 4 5
10 7
2 3 9
2 1 7
3 1 3 4
3 4 5 6
11 5
3 1 6 8
3 3 6 8
3 1 3 4
2 2 4



Output:

25
42
35



*/




