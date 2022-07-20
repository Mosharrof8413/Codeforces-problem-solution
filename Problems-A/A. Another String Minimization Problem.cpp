/*

 Problem link : https://codeforces.com/problemset/problem/1706/A
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
       ll n,m;
       cin>>n>>m;
       string st="";
       for(ll i=0;i<m;i++)st+='B';

       for(ll i=0;i<n;i++)
       {
           ll x;
           cin>>x;
           ll mx=max(x,m+1-x);
           ll mn=min(x,m+1-x);
           if(st[mn-1]=='B')st[mn-1]='A';
           else st[mx-1]='A';
       }
       cout<<st<<endl;
    }

}
//Alhamdulillah..

/*
intput :

6
4 5
1 1 3 1
1 5
2
4 1
1 1 1 1
2 4
1 3
2 7
7 5
4 5
5 5 3 5


output :

ABABA
BABBB
A
AABB
ABABBBB
ABABA


*/










