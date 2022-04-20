/*
 Problem : https://codeforces.com/problemset/problem/1668/A

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
        ll n,m;
        cin>>n>>m;
        if(n>m)swap(n,m);
        if(n==1 && m>2)
        {
            cout<<-1<<endl;
            continue;
        }
        ll ans=(n-1)*2;
        ll re=(m-n);
        if(re%2==0)
        {
            re*=2;
        }
        else
        {
            re*=2;
            re--;
        }
        ans+=re;
        cout<<ans<<endl;
    }
}

//Alhamdulillah..


/*
input:

6
1 1
2 1
1 3
4 2
4 6
10 5


Output:

0
1
-1
6
10
17


*/







