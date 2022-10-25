/*

 Problem link :

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
       ll a[n+2];
       ll gcd=0;
       for(ll i=1;i<=n;i++)
       {
           cin>>a[i];
           gcd=__gcd(gcd,a[i]);
       }
       if(gcd==1)
       {
           cout<<0<<endl;
           continue;
       }
       ll last=a[n-1];
       if(__gcd(last,n)==1 || __gcd())
       {
           cout<<1<<endl;
       }
       else if(__gcd(a[n],n-1)==1)
       {
           cout<<2<<endl;

       }
       else cout<<3<<endl;

    }
}

//Alhamdulillah..

/*
intput :




output :





*/











 
