/*
 Problem : https://codeforces.com/contest/1669/problem/A

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
ll sum;
ll gcd (ll a,ll b)
{
    if(b==0)return a;

    return gcd(b,b%a);
}

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<=1399)cout<<"Division "<<4<<endl;
        else if(n>=1400 && n<=1599)cout<<"Division "<<3<<endl;
        else if(n>=1600 && n<=1899)cout<<"Division "<<2<<endl;
        else cout<<"Division "<<1<<endl;
    }
}

//Alhamdulillah..


/*
input:

7
-789
1299
1300
1399
1400
1679
2300


Output:

Division 4
Division 4
Division 4
Division 4
Division 3
Division 2
Division 1




*/







 
