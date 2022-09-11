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
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        ll pos=0;
        vector<ll>ans;
        for(ll i=0; i<n; i++)cin>>a[i];
        for(ll i=1; i<n; i++)
        {
            if(a[i-1]<=a[i])continue;
            else
            {
                pos=i;
                break;
            }
        }
        if(!pos)
        {
            cout<<0<<endl;
            continue;
        }
        for(ll i=pos; i<n; i++)ans.PB(a[i]);
        ll well=ans.size();
        for(ll i=0; i<pos; i++)ans.PB(a[i]);
        if(is_sorted(ans.begin(),ans.end()))
        {
            cout<<well<<endl;
        }
        else cout<<-1<<endl;

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











