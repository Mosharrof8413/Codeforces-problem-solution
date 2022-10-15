/*

 Problem link : https://codeforces.com/contest/1741/problem/B

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
        if(n%2==0)
        {
            for(ll i=n; i>=1; i--)cout<<i<<" ";
            cout<<endl;
            continue;
        }
        if(n==3)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<n<<" "<<n-1<<" ";
        for(ll i=1; i<=n-2; i++)cout<<i<<" ";
        cout<<endl;
    }
}

//Alhamdulillah..

/*
intput :


5
4
3
7
5
2



output :

3 4 2 1
-1
6 7 4 5 3 2 1
5 4 1 2 3
2 1


*/











 
