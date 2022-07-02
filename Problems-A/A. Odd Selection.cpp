/*

 Problem link : https://codeforces.com/problemset/problem/1363/A

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
        ll n,k;
        cin>>n>>k;
        vector<ll>odd,even;

        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            if(x &1 )
            {
                odd.PB(x);
            }
            else even.PB(x);
        }
        ll even_size=even.size();
        ll cnt=min(k-1,even_size);
        cnt=max(cnt,0LL);
        ll odd_needed=k-cnt;

         if(odd.size()>=odd_needed)
         {
             if(odd_needed &1 )
                cout<<"YES"<<endl;
             else if(odd.size()>odd_needed && even_size)
                cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
         }
         else cout<<"NO"<<endl;




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





