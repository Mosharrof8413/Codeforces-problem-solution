/*

 Problem link : https://codeforces.com/problemset/problem/1559/C

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
        for(ll i=1; i<=n; i++)cin>>a[i];

        if(a[1]==1)
        {
            cout<<n+1<<" "<<1<<" ";
            for(ll i=2;i<=n;i++)cout<<i<<" ";
            cout<<endl;
        }
        else if(a[n]==0)
        {
           for(ll i=1;i<=n+1;i++)cout<<i<<" ";
           cout<<endl;
        }
        else
        {
            for(ll i=1;i<n;i++)
            {
                if(a[i]!=a[i+1])
                {
                    for(ll j=1;j<=i;j++)cout<<j<<" ";
                    cout<<n+1<<" ";
                    for(ll j=i+1;j<=n;j++)cout<<j<<" ";
                    cout<<endl;
                    break;
                }
            }
        }
    }

}

//Alhamdulillah..

/*
intput :

2
3
0 1 0
3
1 1 0



output :

1 4 2 3
1 2 3 4


*/




