
/*

 Problem link : https://codeforces.com/contest/1691/problem/B

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
        map<ll,vector<ll> >mp;

        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
            mp[a[i]].PB(i);

        }


        bool f=true;
        for(auto x : mp)
        {
            if(x.S.size()==1)f=false;
        }
        if(!f)cout<<-1<<endl;
        else
        {
           for(auto x : mp )
           {
               for(ll j=1;j<x.S.size();j++)
               {
                   cout<<x.S[j]<<" ";
               }
               cout<<x.S[0]<<" ";
           }
           cout<<endl;

        }
}

}

//Alhamdulillah..

/*
input :

2
5
1 1 1 1 1
6
3 6 8 13 15 21


output :

5 1 2 3 4
-1

*/



 
