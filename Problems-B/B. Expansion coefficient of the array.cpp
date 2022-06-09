/*

 Problem link : https://codeforces.com/contest/1159/problem/B

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
    ll t=1;
    //cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       ll a[n+2];
       for(ll i=1;i<=n;i++)cin>>a[i];

       ll mn=1e12;
       for(ll i=1;i<=n;i++)
       {
           ll mx=max(i-1,n-i);
           mn=min(mn,a[i]/mx);
       }

       cout<<mn<<endl;
    }


}

//Alhamdulillah..

/*
input :

4
821 500 479 717


output :

239

*/









