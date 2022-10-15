/*

 Problem link : https://codeforces.com/contest/1746/problem/A

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
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        ll one=0;
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            if(x==1)one++;
        }
        if(one)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}

//Alhamdulillah..

/*
intput :

7
3 2
0 1 0
5 3
1 0 1 1 0
2 2
1 1
4 4
0 0 0 0
6 3
0 0 1 0 0 1
7 5
1 1 1 1 1 1 1
5 3
0 0 1 0 0


output :

YES
YES
YES
NO
YES
YES
YES




*/












