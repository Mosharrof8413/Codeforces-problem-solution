/*

 Problem link : https://codeforces.com/problemset/problem/1705/A
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
       ll n,x;
       cin>>n>>x;
       n*=2;
       ll a[n+1];
       for(ll i=0;i<n;i++)cin>>a[i];
       sort(a,a+n);
       bool f=true;
       for(ll i=0;i<n/2;i++)
       {
           if(a[i+n/2]-a[i]<x)
           {
               f=false;
               break;
           }
       }
       if(f)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }

}
//Alhamdulillah..

/*
intput :

3
3 6
1 3 9 10 12 16
3 1
2 5 2 2 2 5
1 2
8 6


output :

YES
NO
YES


*/








