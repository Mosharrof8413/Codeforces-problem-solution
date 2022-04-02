/*
 Problem : https://codeforces.com/problemset/problem/68/A

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
    ll ar[4];
    for(ll i=0;i<4;i++)cin>>ar[i];
    sort(ar,ar+4);
    ll a,b;
    cin>>a>>b;
    ll mn=min(a,b);
    ll mx=max(a,b);
    ll ans=0;
    ans=max(ans,(ar[0]-mn));
    ans=min(ans,mx-mn+1);
    cout<<ans<<endl;
}

//Alhamdulillah..


/*
input:

31 41 59 26 17 43


Output:

9


*/


