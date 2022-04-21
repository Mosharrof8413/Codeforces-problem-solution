/*
 Problem : https://codeforces.com/contest/1669/problem/C

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
ll sum;
ll gcd (ll a,ll b)
{
    if(b==0)return a;

    return gcd(b,b%a);
}

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5],b[n+3];
        ll ans=0;
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        ll odd=0,even=0;
        for(ll i=1; i<=n; i++)
        {
            if(a[i]%2)odd++;
            else even++;
        }
        if(odd==n || even==n)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(ll i=1; i<=n; i++)
        {
            if(i%2)
            {
                a[i]+=1;
            }
            else
            {
                b[i]+=1;
            }
        }
        ll cnt=0,cnt1=0,okk=0,okk1=0;
        for(ll i=1; i<=n; i++)
        {
            if(a[i]%2==0)cnt++;
            else cnt1++;
        }

        for(ll i=1; i<=n; i++)
        {
            if(b[i]%2==0)okk++;
            else okk1++;
        }

        if(cnt==n || cnt1==n || okk==n || okk1==n)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;


    }
}

//Alhamdulillah..


/*
input:

4
3
1 2 1
4
2 2 2 3
4
2 2 2 2
5
1000 1 1000 1 1000

Output:

YES
NO
YES
YES




*/







 
