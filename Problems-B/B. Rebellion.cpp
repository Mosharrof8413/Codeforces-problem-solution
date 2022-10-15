/*

 Problem link : https://codeforces.com/contest/1746/problem/B

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
      vector<ll>a(n);
      for(ll i=0;i<n;i++)cin>>a[i];
      ll l=0,r=n-1;
      ll cnt=0;
      while(l<r)
      {
          if(a[l]==1)
          {
              if(a[r]==0)
              {
                  cnt++;
                  r--;
                  l++;
              }
              else r--;
          }
          else
          {
              if(a[r]==1)
              {
                  l++,r--;
              }
              else l++;
          }
      }
      cout<<cnt<<endl;

    }
}

//Alhamdulillah..

/*
intput :

4
8
0 0 1 1 1 1 1 1
5
1 0 0 1 1
2
1 0
11
1 1 0 0 1 0 0 1 1 1 0

output :

0
1
1
3



*/













