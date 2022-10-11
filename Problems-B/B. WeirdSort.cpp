/*

 Problem link : https://codeforces.com/contest/1311/problem/B

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
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n),b(m),p(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<m; i++)
        {
            cin>>b[i];
            p[b[i]-1]=1;
        }
        for(ll i=0; i<n; i++)
        {
            int j=i;
            while(p[j] && j<n)j++;
            sort(a.begin()+i,a.begin()+j+1);
            i=j;
        }
        bool ok=true;
        for(ll i=0; i<n-1; i++)
        {
            ok &=(a[i]<=a[i+1]);
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}

//Alhamdulillah..

/*
intput :

6
3 2
3 2 1
1 2
4 2
4 1 2 3
3 2
5 1
1 2 3 4 5
1
4 2
2 1 4 3
1 3
4 2
4 3 2 1
1 3
5 2
2 1 2 3 3
1 4



output :

YES
NO
YES
YES
NO
YES



*/











