/*

 Problem link : https://codeforces.com/contest/1311/problem/B

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
       ll target=0,ok=INT_MAX;
       for(ll i=0;i<n;i++)
       {
           target+=a[i];
           ll sum=0,cnt=0,len=i+1;
           for(ll j=i+1;j<n;j++)
           {
               sum+=a[j];
               cnt++;
               if(sum==target)
               {
                  len=max(cnt,len);
                  cnt=0,sum=0;
               }
               if(sum>target)
               {
                   break;
               }
           }
           if(sum==0)
           {
               ok=min(len,ok);
           }
       }
       cout<<ok<<endl;
    }
}

//Alhamdulillah..

/*
intput :

4
6
55 45 30 30 40 100
4
10 23 7 13
5
10 55 35 30 65
6
4 1 1 1 1 4

output :

3
4
2
3


*/












