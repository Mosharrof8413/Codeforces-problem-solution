
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define mxx 100000
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll ans=0;
       ll n;
       cin>>n;
      // set<ll>s;
       map<ll,ll>mp;
       bool f=false;
       for(ll i=1;i*i*i<=n;i++)
       {
           //s.insert(i*i*i);
           mp[i*i*i]++;
       }
       for(ll i=1;i*i*i<=n;i++)
       {
           //if(s.count(n-i*i*i))
             if(mp[n-i*i*i])
              f=true;
       }

       if(f)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }
}


//Alhamdulillah...
