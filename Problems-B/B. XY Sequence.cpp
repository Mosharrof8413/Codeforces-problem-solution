/*
 Problem : https://codeforces.com/contest/1657/problem/B

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


vector<ll>v;

int main()
{
    optimize();

      ll t;
      cin>>t;
      while(t--)
      {
         ll n,b,x,y;
         cin>>n>>b>>x>>y;
         ll a[n+2];
         a[0]=0;
         ll sum=0;
         for(ll i=1;i<=n;i++)
         {
            ll check=a[i-1]+x;
            if(check<=b)
            {
                a[i]=check;
            }
            else
            {
                a[i]=(check-x-y);
            }
         }
         for(ll i=0;i<=n;i++)sum+=a[i];
         cout<<sum<<endl;
      }
    }

//Alhamdulillah..


/*

input:

3
5 100 1 30
7 1000000000 1000000000 1000000000
4 1 7 3

Output:

15
4000000000
-10


*/


