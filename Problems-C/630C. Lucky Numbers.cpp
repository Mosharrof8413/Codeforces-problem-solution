
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
#define mx 1000000

int main()
{
  ll t=1;
 // cin>>t;
  while(t--)
  {
      ll n;
      cin>>n;
      ll dp[60]={0};
      dp[1]=2;
      for(ll i=2;i<=55;i++)
      {
          dp[i]+=(dp[i-1]+pow(2,i));
          // cout<<dp[i]<<" ";
      }
       ll ans=dp[n];
       cout<<ans<<endl;
  }
}

//Alhamdulillah...
