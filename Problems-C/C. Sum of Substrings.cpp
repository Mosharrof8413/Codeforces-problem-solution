/*

 Problem link : https://codeforces.com/problemset/problem/1691/C

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
        ll first=-1,last=-1;
        ll one=0;
        for(ll i=0; i<n; i++)
        {
            if(st[i]=='1')
            {
                last=i;
                one++;
            }
        }
        for(ll i=0; i<n; i++)
        {
            if(st[i]=='1')
            {
                first=i;
                break;
            }
        }

        if(one==0)
        {
            cout<<0<<endl;
        }
        else if(first==last)
        {
            if(n-last-1<=k)cout<<1<<endl;
            else if(first<=k)cout<<10<<endl;
            else cout<<11<<endl;
        }
        else
        {
            ll ans=one*11;
            if((n-1-last+first)<=k)
            {
                ans-=11;
            }
            else if(n-1-last<=k)
            {
                ans-=10;
            }
            else if(first<=k)
            {
                ans-=1;
            }
            cout<<ans<<endl;
        }
    }

}

//Alhamdulillah..

/*
input :

3
4 0
1010
7 1
0010100
5 2
00110


output :

21
22
12

*/
