/*

 Problem link : https://codeforces.com/contest/1688/problem/A

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
        if(n&1)
        {
            if(n==1)cout<<3<<endl;
            else cout<<1<<endl;
            continue;
        }
        if((n&(n-1))==0)
        {
            cout<<n+1<<endl;
            continue;
        }

        ll ans=1;
        while(n%2==0)
        {
            ans*=2;
            n/=2;
        }
        cout<<ans<<endl;

    }


}

//Alhamdulillah..

/*
input :

7
1
2
5
9
16
114514
1000000


output
:
3
3
1
1
17
2
64

*/







