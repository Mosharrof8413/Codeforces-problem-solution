
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
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      string st;
      cin>>st;
      string ans="",ok="abcdefghijklmnopqrstuvwxyz";
      for(ll i=n-1;i>=0;i--)
      {
          if(st[i]=='0')
          {
              ll f=st[i-1]-'0';
              ll s=st[i-2]-'0';
              s*=10;
              s+=f;
              if(s%26)
              ans+=ok[(s%26)-1];
              else ans+=ok[25];
              i-=2;
          }
          else ans+=ok[(st[i]-'0')-1];
      }
      reverse(ans.begin(),ans.end());
      cout<<ans<<endl;

    }
}

//Alhamdulillah..

/*
intput :




output :




*/









 
