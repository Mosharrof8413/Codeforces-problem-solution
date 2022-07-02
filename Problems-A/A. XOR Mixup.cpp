/*

 Problem link : https://codeforces.com/contest/1698/problem/A

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
       ll ok=0;
       for(ll i=0;i<n;i++)cin>>a[i];
       for(ll i=0;i<n-1;i++)
       {
           ll ans=0;
           for(ll j=0;j<n;j++)
           {
               if(i!=j)ans^=a[j];
           }
           if(a[i]==ans)
           {

               ok=a[i];
               break;
           }
       }
       cout<<ok<<endl;
    }

}

//Alhamdulillah..

/*
intput :

4
4
4 3 2 5
5
6 1 10 7 10
6
6 6 6 6 6 6
3
100 100 0

output :

3
7
6
0



*/



 
