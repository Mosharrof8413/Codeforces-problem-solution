/*
 Problem : https://codeforces.com/problemset/problem/1634/C

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
     ll n,k;
     cin>>n>>k;
     if(k==1)
     {
        cout<<"YES"<<endl;
        for(ll i=1;i<=n*k;i++)cout<<i<<endl;
        continue;
     }
     if(n%2)
     {
         cout<<"NO"<<endl;
         continue;
     }
     ll cnt=0;
     cout<<"YES"<<endl;
     for(ll i=1;i<=n*k;i++)
     {
         if(i%2)
         {
             cout<<i<<" ";
             cnt++;
         }
         if(cnt==k)
         {
             cout<<endl;
             cnt=0;
         }
     }
      cnt=0;
     for(ll i=1;i<=n*k;i++)
     {
         if(i%2==0)
         {
             cout<<i<<" ";
             cnt++;
         }
         if(cnt==k)
         {
             cout<<endl;
             cnt=0;
         }
     }
    }
}

//Alhamdulillah..


/*
input:
4
1 1
2 2
3 3
3 1

Output:

YES
1
YES
1 3
2 4
NO
YES
1
2
3




*/





