/*

 Problem link : https://codeforces.com/contest/1688/problem/B

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
        ll odd=0,even=0;
        vector<ll>ev;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2)odd++;
            else
            {
                even++;
                ev.PB(a[i]);
            }
        }

        if(odd)
        {
              cout<<even<<endl;
              continue;
        }

        ll ans=1e9;
        for(ll i=0;i<ev.size();i++)
        {
            ll cnt=0;
            while(ev[i]%2==0)
            {
                cnt++;
                ev[i]/=2;
            }
            ans=min(ans,cnt);
        }
        ans+=(even-1);
        cout<<ans<<endl;

    }


}

//Alhamdulillah..

/*
input :

4
2
1 9
3
1 1 2
3
2 4 8
3
1049600 33792 1280

output :
0
1
3
10

*/



