
#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);



int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,h,m;
       cin>>n>>h>>m;
       vector<ll>v;
       while(n--)
       {
           ll x,y;
           cin>>x>>y;
           x*=60;
           x+=y;
           v.PB(x);
       }
       ll ans=0;
       h*=60;
       h+=m;
       sort(v.begin(),v.end());
       bool f=false;
       for(ll i=0;i<v.size();i++)
       {
           if(v[i]>=h)
           {
              ans=v[i]-h;
              f=true;
              break;
           }
       }
       if(f)
       {
           h=ans/60;
           m=ans%60;
           cout<<h<<" "<<m<<endl;
       }
       else
       {
           ans=24*60-h;
           ans+=v[0];
           h=ans/60;
           m=ans%60;
           cout<<h<<" "<<m<<endl;
       }
    }

}
//Alhamdulillah..










