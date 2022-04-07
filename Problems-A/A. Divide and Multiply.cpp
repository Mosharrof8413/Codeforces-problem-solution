/*
 Problem : https://codeforces.com/problemset/problem/1609/A

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
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            while(a[i]%2==0)
            {
                a[i]/=2;
                cnt++;
            }
        }

    }
    sort(a,a+n);
    cnt=pow(2,cnt);
    ll ans=a[n-1];
    ans*=cnt;
    for(ll i=0;i<n-1;i++)ans+=a[i];
    cout<<ans<<endl;
    }
}

//Alhamdulillah..


/*
input:
5
3
6 4 2
5
1 2 3 4 5
1
10
3
2 3 4
15
8 8 8 8 8 8 8 8 8 8 8 8 8 8 8



Output:

50
46
10
26
35184372088846



*/




