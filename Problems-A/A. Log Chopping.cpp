/*
 Problem : https://codeforces.com/contest/1672/problem/A

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

const ll MX=2e6+123;
bitset<MX>is_prime;
vector<ll>primes;
ll solve(ll n)
{
    ll sq=sqrt(n);
    for(ll i=2; i<=sq; i++)
    {
        if(n%i==0)return 1;
    }
    return 0;
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
        ll a[n];
        priority_queue<ll>pq;

        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            pq.push(a[i]);
        }
        ll cnt=0;
        while(pq.top()!=1)
        {
            ll l=pq.top();
            pq.pop();
            pq.push(1);
            pq.push(l-1);
            cnt++;
        }
        if(cnt%2==0)
        {
            cout<<"maomao90"<<endl;
        }
        else cout<<"errorgorn"<<endl;

    }


}

//Alhamdulillah..


/*
input:

2
4
2 4 2 1
1
1

Output:

errorgorn
maomao90





*/









