/*

 Problem link : https://codeforces.com/problemset/problem/1196/B

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
        ll a[n+2];
        vector<ll>odd;
        ll cnt_odd=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]&1)
            {
                cnt_odd++;
                odd.PB(i+1);
            }
        }
        if(cnt_odd<k)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cnt_odd-=k;
        if(cnt_odd%2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            ll indx=0;
            k--;
            while(k--)
            {
                cout<<odd[indx++]<<" ";
            }
            cout<<n<<endl;
        }
    }

}

//Alhamdulillah..

/*
intput :

3
5 3
7 18 3 14 1
5 4
1 2 3 4 5
6 2
1 2 8 4 10 2



output :

YES
1 3 5
NO
NO



*/





