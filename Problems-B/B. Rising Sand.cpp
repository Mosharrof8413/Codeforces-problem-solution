/*

 Problem link : https://codeforces.com/contest/1698/problem/B

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
       ll n,k;
       cin>>n>>k;
       ll a[n+2];
       ll ok=0;
       for(ll i=0;i<n;i++)cin>>a[i];
       if(k==1)
       {
           cout<<(n-1)/2<<endl;
           continue;
       }
       ll cnt=0;
       for(ll i=1;i<n-1;i++)
       {
           if(a[i]>a[i-1]+a[i+1])cnt++;
       }
       cout<<cnt<<endl;
    }

}

//Alhamdulillah..

/*
intput :

3
5 2
2 9 2 4 1
4 4
1 3 2 1
3 1
1 3 1


output :

2
0
1

*/




