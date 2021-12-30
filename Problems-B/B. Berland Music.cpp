/*
   Problem Link :
*/

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define mk make_pair


ll gcd ( ll a, ll b )
{
    return __gcd ( a, b );
}
ll lcm ( ll a, ll b )
{
    return a * ( b / gcd ( a, b ) );
}

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();

    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       ll a[n+2],b[n+2];
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
           b[i]=a[i];

       }
       string st;
       cin>>st;
       vector<pair<ll,ll> >zero,one;

       for(ll i=0;i<n;i++)
       {
           if(st[i]=='0')
           {
               zero.PB(mk(a[i],i));
           }
           else one.PB(mk(a[i],i));
       }
       sort(zero.begin(),zero.end());
       sort(one.begin(),one.end());
       sort(b,b+n);
       ll k=0;
       for(ll i=0;i<zero.size();i++)
       {
           zero[i].F=b[k];
           k++;
       }
       for(ll i=0;i<zero.size();i++)
       {
           a[zero[i].S]=zero[i].F;
       }
       //for(auto x: zero)cout<<x.F<<" ";

        for(ll i=0;i<one.size();i++)
       {
           if(one[i].F !=b[k])
            one[i].F=b[k];
           k++;
       }
        for(ll i=0;i<one.size();i++)
       {
           a[one[i].S]=one[i].F;
       }

      for(ll i=0;i<n;i++)cout<<a[i]<<" ";
      cout<<endl;
    }
}


