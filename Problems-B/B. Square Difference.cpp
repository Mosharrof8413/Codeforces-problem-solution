/*
 Problem : https://codeforces.com/problemset/problem/1033/B

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
    for(ll i=2;i<=sq;i++)
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
    ll a,b;
    cin>>a>>b;
    ll sum=a+b;
    if(a-b>1)
    {
        cout<<"NO"<<endl;
        continue;
    }
    if(solve(sum))
    cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }


}

//Alhamdulillah..


/*
input:
4
6 5
16 13
61690850361 24777622630
34 33
Output:
YES
NO
NO
YES



*/

