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
        ll n,m;
        cin>>n>>m;
        map<ll,ll>mp;
        ll d=m,ok=m;
        ll cnt=0,ans=0;
        while(1)
        {
            cnt++;
            ll digit=d%10;
            if(!mp[digit])
            {
                ans+=digit;
                mp[digit]++;
            }
            else break;

            d+=m;

        }
        cnt--;
        //cout<<cnt<<endl;
        cnt*=m;
        ll per=n/cnt;
        ans*=per;
        n=n%cnt;

        while(m<=n)
        {
            ans+=(m%10);
            m+=ok;
        }
        cout<<ans<<endl;


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










