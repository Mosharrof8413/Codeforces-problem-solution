/*

 Problem link : https://codeforces.com/contest/1690/problem/C

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
        ll a[n+2],b[n+2];
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<n;i++)cin>>b[i];

        for(ll i=0;i<n;i++)
        {
            if(b[i]>a[i+1])
            {
                a[i+1]=b[i];
            }
        }
        for(ll i=0;i<n;i++)cout<<b[i]-a[i]<<" ";
        cout<<endl;




    }


}

//Alhamdulillah..

/*
input :

4
3
0 3 7
2 10 11
2
10 15
11 16
9
12 16 90 195 1456 1569 3001 5237 19275
13 199 200 260 9100 10000 10914 91066 5735533
1
0
1000000000


output :

2 7 1
1 1
1 183 1 60 7644 900 914 80152 5644467
1000000000



*/










 
