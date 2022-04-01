/*
 Problem : https://codeforces.com/contest/682/problem/A

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
    ll n,m;
    cin>>n>>m;

    ll ans=0;
    ll rem[10]={0};
    for(ll i=1;i<=n;i++)
    {
        rem[i%5]++;
    }
    for(ll i=1;i<=m;i++)
    {
        ll okk=i%5;
        okk=5-okk;
        okk%=5;
        ans+=rem[okk];
    }
    cout<<ans<<endl;
}

//Alhamdulillah..


/*
input:
6 12

Output:

14



*/




