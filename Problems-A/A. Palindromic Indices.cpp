
/*
 Problem : https://codeforces.com/contest/1682/problem/A

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

const int MX=1e6+123;
bitset<MX>is_prime;
vector<ll>primes;
void primeGen(ll n)
{
    ll sq=sqrt(n);
    for(ll i=3; i<=n; i+=2)is_prime[i]=1;

    for(ll i=3; i<=sq; i+=2)
    {
        if(is_prime[i]==1)
        {
            for(ll j=i*i; j<=n; j+=(i+i))
                is_prime[j]=0;
        }
    }
    primes.PB(2);
    is_prime[2]=1;
    for(ll i=3; i<=n; i+=2)
    {
        if(is_prime[i]==1)primes.PB(i);
    }
}
const int mod=1e9+7;


int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string st;
        cin>>st;
        //for(ll i=0;i<n;i++)s.insert(st[i]);
        ll cnt=1;
           if(n%2==0)
            {
                ll l=n/2-1;
            for(ll i=n/2;i<n;i++)
            {
                if(st[l]==st[i])cnt++;
                else break;
            }
            for(ll i=l-1;i>=0;i--)
            {
                if(st[l]==st[i])cnt++;
                else break;
            }
            }
            else
            {
                 ll l=n/2;
            for(ll i=n/2+1;i<n;i++)
            {
                if(st[l]==st[i])cnt++;
                else break;
            }
            for(ll i=l-1;i>=0;i--)
            {
                if(st[l]==st[i])cnt++;
                else break;
            }

            }
            cout<<cnt<<endl;
    }

}

//Alhamdulillah..


/*
input :

3
3
aba
8
acaaaaca
2
dd


Output:

1
4
2





*/











