
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define pb push_back
#define ll long long
#define mk make_pair
#define endl '\n'
#define M  1000000007
ull dp[101][101];
ull nCr(ull n,ull r)
{
    if(n==r)return dp[n][r]=1;
    if(r==1)return dp[n][r]=n;
    if(r==0)return dp[n][r]=1;
    if(dp[n][r])return dp[n][r];
    return dp[n][r]=nCr(n-1,r-1)+nCr(n-1,r);
}

ll mod(ll x)
{
    return ((x%M+M)%M);    // x will be negative or positive
}
ll add(ll a,ll b)
{
    return mod((mod(a)+mod(b)));
}
ll mul(ll a,ll b)
{
    return mod(mod(a)*mod(b));
}

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
      ll n;
      cin>>n;
      string st;
      cin>>st;
      ll t=0,m=0;
      for(ll i=0;i<n;i++)
      {
          if(st[i]=='T')t++;
          else m++;
      }
      if(2*m !=t)
      {
          cout<<"NO"<<endl;
          continue;
      }
      bool f=true,b=true;
      ll cnt_t=0;
       for(ll i=0;i<n;i++)
      {
          if(st[i]=='T')cnt_t++;
          else cnt_t--;
          if(cnt_t<0)
          {
              f=false;
              break;
          }
      }
       cnt_t=0;
       for(ll i=n-1;i>=0;i--)
      {
          if(st[i]=='T')cnt_t++;
          else cnt_t--;
          if(cnt_t<0)
          {
              b=false;
              break;
          }
      }

      if(!f || !b)cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }

   }



/*
Alhamdulillah...
*/
 
