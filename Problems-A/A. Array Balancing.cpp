/*
 Problem : https://codeforces.com/contest/1661/problem/A

*/

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
ll sum;
ll gcd (ll a,ll b)
{
    if(b==0)return a;

    return gcd(b,b%a);
}

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      ll a[n],b[n],c[n],d[n];
      vector<ll>v;
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
          c[i]=a[i];
      }
      for(ll i=0;i<n;i++)
      {
          cin>>b[i];
          d[i]=b[i];
          //v.PB(b[i]);
      }
     // sort(v.begin(),v.end());
      //ll sum=0;
      for(ll i=0;i<n;i++)
      {
          if(a[i]>b[i]);
          swap(a[i],b[i]);

      }
      for(ll i=0;i<n;i++)
      {
         if(c[i]<d[i])swap(c[i],d[i]);
      }
       ll sum=0,sum1=0;
      for(ll i=0;i<n-1;i++)
      {
          sum+=abs(a[i+1]-a[i]);
          sum+=abs(b[i+1]-b[i]);
          sum1+=abs(c[i+1]-c[i]);
          sum1+=abs(d[i+1]-d[i]);
      }
      sum=min(sum,sum1);
      cout<<sum<<endl;
    }
}

//Alhamdulillah..


/*
input:
3
4
3 3 10 10
10 10 3 3
5
1 2 3 4 5
6 7 8 9 10
6
72 101 108 108 111 44
10 87 111 114 108 100



Output:

0
8
218



*/


 
