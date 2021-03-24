
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define mxx 1000000
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll n;
       cin>>n;
       ll a[n];
       ll cnt=0;
       for(ll i=0;i<n;i++)cin>>a[i];
       for(ll i=1;i<n;i++)
       {
           ll mn=min(a[i],a[i-1]);
           ll mx=max(a[i],a[i-1]);
           if(mn*2<mx)
           {
               for(ll i=mn*2;i<mx;i*=2)
               {
                   cnt++;
               }
           }
       }
       cout<<cnt<<endl;
   }
}

//Alhamdulillah...
