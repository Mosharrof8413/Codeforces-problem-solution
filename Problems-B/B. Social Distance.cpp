/*
 Problem : https://codeforces.com/problemset/problem/1668/B
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
        ll n,m;
        cin>>n>>m;
        ll a[n];
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(ll i=0;i<n-1;i++)
        {
          sum+=max(a[i],a[i+1]);

        }
        sum+=max(a[0],a[n-1]);

        sum+=n;
        //cout<<sum<<endl;
        if(sum<=m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}

//Alhamdulillah..


/*
input:

6
3 2
1 1 1
2 4
1 1
2 5
2 1
3 8
1 2 1
4 12
1 2 1 3
4 19
1 2 1 3


Output:

NO
YES
NO
YES
NO
YES



*/








