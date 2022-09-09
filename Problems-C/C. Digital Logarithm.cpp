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
        ll a[n+2],b[n+2];
        priority_queue<ll>pq,pqq;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            pq.push(a[i]);
        }
        for(ll i=0; i<n; i++)
        {
            cin>>b[i];
            pqq.push(b[i]);
        }
        ll need=0;
        while(!pq.empty() && !pqq.empty())
        {
            ll f=pq.top();
            ll s=pqq.top();
            if(f==s)
            {
                pq.pop();
                pqq.pop();
            }
            else if(f>s)
            {
                ll cnt=0;
                while(f)
                {
                    cnt++;
                    f/=10;
                }
                pq.pop();
                pq.push(cnt);
                need++;
            }
            else
            {
                ll cnt=0;
                while(s)
                {
                    cnt++;
                    s/=10;
                }
                pqq.pop();
                pqq.push(cnt);
                need++;
            }
        }
        cout<<need<<endl;
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










