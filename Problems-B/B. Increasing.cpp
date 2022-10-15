/*

 Problem link : https://codeforces.com/contest/1742/problem/B

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
        set<ll>s;
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            s.insert(x);
        }
        if(n==s.size())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

//Alhamdulillah..

/*
intput :

3
4
1 1 1 1
5
8 7 1 3 4
1
5




output :

NO
YES
YES


*/










 
