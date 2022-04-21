/*
 Problem :

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
        map<ll,ll>mp;
        ll ans=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]==3)ans=a[i];
        }
        if(ans)cout<<ans<<endl;
        else cout<<-1<<endl;
    }
}

//Alhamdulillah..


/*
input:

7
1
1
3
2 2 2
7
2 2 3 3 4 2 2
8
1 4 3 4 3 2 4 1
9
1 1 1 2 2 2 3 3 3
5
1 5 2 4 3
4
4 4 4 4

Output:

-1
2
2
4
3
-1
4



*/







 
