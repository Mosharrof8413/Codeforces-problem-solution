#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define REP(i,n) for(ll i=0;i<n;i++)
#define mxx 10000
#define M  1000000000
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        ll diff=y-x;
        ll k=n;
         //k-=2;
        ll ans=0;
        vector<ll>v;
       v.pb(x);
       v.pb(y);
       if(n>2)
        {
        for(ll i=1; i<=diff; i++)
        {
            if(diff%i==0)
            {
                ll okk=diff/i;
                 okk++;
                if(n>=okk)
                   {
                    ans=i;
                    break;
                   }

            }
        }
        //cout<<ans<<endl;
        for(ll j=x+ans; j<y; j+=ans)
        {
            v.pb(j);

        }
        for(ll j=x-ans;j>0 && v.size()<n;j-=ans)
        {
            v.pb(j);

        }
         for(ll j=y+ans;v.size()<n;j+=ans)
        {
            v.pb(j);

        }
    }

        for(ll i=0;i<v.size();i++)cout<<v[i]<<" ";

         cout<<endl;
    }

}



//Alhamdulillah...




