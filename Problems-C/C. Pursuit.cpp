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
        vector<ll>a(n),b(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin>>b[i];
        }
        ll low=0,high=n;
        while(low<=high)
        {
            ll my=0,other=0;
            ll k=(low+high)/2;
            ll cur=n+k;
            ll removed=cur/4;
            ll added=min(k,cur-n);
            vector<ll>aa=a,bb=b;
            for(ll i=0; i<added; i++)aa.PB(100);
            for(ll i=0; i<added; i++)bb.PB(0);
            sort(aa.begin(),aa.end());
            sort(bb.begin(),bb.end());

            for(ll i=removed; i<aa.size(); i++)my+=aa[i];
            for(ll i=removed; i<bb.size(); i++)other+=bb[i];
            //cout<<my<<" "<<other<<endl;
            if(my>=other)
            {
                high=k-1;
            }
            else low=k+1;
        }
        cout<<high+1<<endl;
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










