/*
  Problem Link : https://codeforces.com/contest/1542/problem/A
*/

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second


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

    ll test;
    cin>>test;
    while(test--)
    {
      ll n;
      cin>>n;
      ll a[2*n+4];
      ll even=0,odd=0;
      for(ll i=0;i<2*n;i++)
      {
          cin>>a[i];
          if(a[i]%2)odd++;
          else even++;
      }
      if(odd==even)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}

//Alhamdulillah...





 
