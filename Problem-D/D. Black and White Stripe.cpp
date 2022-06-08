/*

 Problem link : https://codeforces.com/problemset/problem/1690/D

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
        string st;
        cin>>st;
        ll need=0;
        for(ll i=0;i<k;i++)
        {
            if(st[i]=='W')need++;
        }

        ll ans=need;
        ll f=0;
        for(ll i=k;i<n;i++)
        {
            if(st[f]=='W')
            {
                need--;
            }
            if(st[i]=='W')need++;
            f++;
            ans=min(ans,need);
        }
        cout<<ans<<endl;
    }


}

//Alhamdulillah..

/*
input :

4
5 3
BBWBW
5 5
BBWBW
5 1
BBWBW
1 1
W


output :

1
2
0
1

*/







