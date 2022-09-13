/*

 Problem link :

 */
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define PB push_back
#define F first
#define S second
const int mx=20;
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
        ll a[n+2],b[n+2],dif[n+2];
        vector<pair<ll,ll> >ans,ans2;
        for(ll i=0; i<n; i++)cin>>a[i];
        for(ll i=0; i<n; i++)cin>>b[i];
        for(ll i=0; i<n; i++)
        {
            dif[i]=b[i]-a[i];
        }
        sort(dif,dif+n);
        ll l=0,r=n-1,cnt=0;
        while(l<r)
        {
            if(dif[l]+dif[r]>=0)
            {
                cnt++;
                l++,r--;
            }
            else l++;
        }
        cout<<cnt<<endl;

    }
}

//Alhamdulillah.. 

