/*

 Problem link : https://codeforces.com/problemset/problem/1592/B

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
        ll a[n+2],b[n+2];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        if(n>=2*n)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sort(b,b+n);
        bool f=true;
        for(ll i=n-k; i<(n-(n-k)); i++)
        {
            if(a[i]==b[i])continue;
            else
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

5
1 1
999
1 1
1000
2 1
51 50
2 2
51 50
3 3
101 102 103


output :

Yes
No
Yes
Yes
No


*/










