/*
 Problem : https://codeforces.com/contest/1657/problem/A

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
          ll a,b;
          cin>>a>>b;
          ll d=(a*a) + (b*b);
          if(a==0 && b==0)
          {
              cout<<0<<endl;
              continue;
          }
          ll sq=sqrt(d);
          if(sq*sq==d)cout<<1<<endl;
          else cout<<2<<endl;

      }
    }

//Alhamdulillah..


/*

input:

3
8 6
0 0
9 15

Output:

1
0
2


*/


