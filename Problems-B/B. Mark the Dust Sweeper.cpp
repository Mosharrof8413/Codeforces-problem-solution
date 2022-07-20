/*

 Problem link : https://codeforces.com/problemset/problem/1705/B
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


int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      ll a[n+2];
      for(ll i=0;i<n;i++)cin>>a[i];

      bool f=true;
      ll cnt=0;
      for(ll i=0;i<n-1;i++)
      {
          if(a[i]==0 && f)
          {
              continue;
          }
          f=false;
          if(a[i]==0)cnt++;
          else cnt+=a[i];
      }
      cout<<cnt<<endl;

    }

}
//Alhamdulillah..

/*
intput :

4
3
2 0 0
5
0 2 0 2 0
6
2 0 3 0 4 6
4
0 0 0 10


output :

3
5
11
0


*/









