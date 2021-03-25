
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
    vector<ll>v;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]-1]=0;
    }
    for(ll i=n-2;i>=0;i--)
    {
        for(ll j=i;j<n-1;j++)
        if(a[j]>a[j+1] && b[j]==0)swap(a[j+1],a[j]),b[j]=1;
    }
    for(ll i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
  }
}

//Alhamdulillah...
