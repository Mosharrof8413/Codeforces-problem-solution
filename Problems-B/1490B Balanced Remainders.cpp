
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define mx 1000000
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    ll a[n];
    ll c0=0,c1=0,c2=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%3==0)c0++;
        else if(a[i]%3==1)c1++;
        else c2++;
    }
    if(c0==c1 && c1==c2)
    {
        cout<<0<<endl;
        continue;
    }
    ll every_part=n/3;
    ll moves=0;
    if(c0>every_part)
    {
        c1+=(c0-every_part);
        moves+=c0-every_part;
        if(c1<every_part)
        moves+=(every_part-c1)*2;
        else moves+=c1-every_part;
    }
       else if(c1>every_part)
    {
        c2+=(c1-every_part);
        moves+=c1-every_part;
        if(c2<every_part)
        moves+=(every_part-c2)*2;
        else moves+=c2-every_part;
    }
       else if(c2>every_part)
    {
        c0+=(c2-every_part);
        moves+=c2-every_part;
        if(c0<every_part)
        moves+=(every_part-c0)*2;
        else moves+=c0-every_part;
    }
    cout<<moves<<endl;

  }
}

//Alhamdulillah...
