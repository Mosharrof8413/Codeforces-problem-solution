/*

 Problem link : https://codeforces.com/contest/1690/problem/B

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
        ll a[n+2],b[n+2];
        for(ll i=0; i<n; i++)cin>>a[i];
        for(ll i=0; i<n; i++)cin>>b[i];

        vector<ll>v,ans;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==0 && b[i]==0)
            {

            }
            else if(b[i]==0)ans.PB(a[i]);
            else v.PB(a[i]-b[i]);
        }
        sort(ans.begin(),ans.end());
        sort(v.begin(),v.end());
        ll d=0;
        if(ans.size())d=ans[ans.size()-1];
        if(v.size())
        {
            if(v[0]==v[v.size()-1] && v[0]>=d)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;


    }


}

//Alhamdulillah..

/*
input :

6
4
3 5 4 1
1 3 2 0
3
1 2 1
0 1 0
4
5 3 7 2
1 1 1 1
5
1 2 3 4 5
1 2 3 4 6
1
8
0
1
4
6


output :

YES
YES
NO
NO
YES
NO



*/









 
