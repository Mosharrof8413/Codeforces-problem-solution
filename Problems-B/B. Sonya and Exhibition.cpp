/*

 Problem link : https://codeforces.com/problemset/problem/1004/B

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
       ll n,m;
       cin>>n>>m;
       for(ll i=0;i<m;i++)
       {
           ll x,y;
           cin>>x>>y;
       }
       for(ll i=0;i<n;i++)
       {
           if(i%2==0)cout<<1;
           else cout<<0;
       }
       cout<<endl;
    }


}

//Alhamdulillah..

/*
input :

5 3
1 3
2 4
2 5


output :

10101

*/








