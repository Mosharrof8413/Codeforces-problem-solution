/*

 Problem link :

 */
#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

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
        vector<ll>factor;
        map<ll,ll>mp;
        for(ll i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                factor.PB(i);
                if(n/i!=i)
                {
                    factor.PB(n/i);
                }
            }
        }
        sort(factor.begin(),factor.end());
        //for(auto x : factor)cout<<x<<" ";
        //cout<<factor.size()<<endl;
        if(n==1)
        {
            cout<<1<<" "<<1<<endl;
            continue;
        }
        ll f=0,s=0;
        ll len=factor.size();
        for(ll i=len/2; i>=0; i--)
        {
            f=factor[i];
            s=n/f;
            //cout<<f<<" "<<s<<endl;
            ll gcd=__gcd(f,s);
            ll lcm=(f*s)/gcd;
            //cout<<lcm<<endl;
            if(lcm==n)
            {
                break;
            }
        }
        cout<<f<<" "<<s<<endl;

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










 
