/*

 Problem link : https://codeforces.com/contest/469/problem/B

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

ll a[1005],b[1005];
int main()
{
    optimize();
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll p,q,l,r;
        cin>>p>>q>>l>>r;
        while(p--)
        {
            ll x,y;
            cin>>x>>y;
            for(ll j=x;j<=y;j++)a[j]=1;
        }

        while(q--)
        {
            ll x,y;
            cin>>x>>y;
            for(ll j=x;j<=y;j++)b[j]=1;
        }
        ll cnt=0;
        for(ll i=l;i<=r;i++)
        {
            for(ll j=i;j<1001;j++)
            {
                if(a[j] && b[j-i])
                {
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;

    }

}

//Alhamdulillah..

/*
input :

1 1 0 4
2 3
0 1

output :

3
*/

