/*

 Problem link :

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
        vector<ll>a(n),b(n+2);
        for(ll i=0;i<n;i++)cin>>a[i];
        b[0]=a[0];
        b[n]=a[n-1];
        for(ll i=1;i<n;i++)
        {
            b[i]=(a[i-1]*a[i])/__gcd(a[i-1],a[i]);
        }

        bool ok=true;
        for(ll i=1;i<=n;i++)
        {
            if(__gcd(b[i],b[i-1])!=a[i-1])
            {
                ok=false;
                break;
            }
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

//Alhamdulillah..

/*
intput :

4
1
343
2
4 2
3
4 2 4
4
1 1 1 1

output :

Yes
Yes
No
Yes


*/












