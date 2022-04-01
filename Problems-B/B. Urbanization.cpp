/*
 Problem : https://codeforces.com/problemset/problem/735/B

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
    ll n,x,y;
    cin>>n>>x>>y;
    ll mn=min(x,y);
    ll mx=max(x,y);
    vector<ll>v(n+1);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    double sum1=0,sum2=0;
    for(ll i=0;i<mn;i++)sum1+=v[i];
    for(ll i=mn;i<mx+mn;i++)sum2+=v[i];
    sum1/=mn,sum2/=mx;
    sum1+=sum2;
    fraction();
    cout<<sum1<<endl;
}

//Alhamdulillah..


/*
input:
4 2 1
1 4 2 3

Output:

6.50000000



*/



