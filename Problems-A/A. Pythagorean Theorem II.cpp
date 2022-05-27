/*

 Problem link : https://codeforces.com/problemset/problem/304/A

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
/*
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
*/

int main()
{
    optimize();
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll cnt=0;
        for(ll a=1;a<=n;a++)
        {
            for(ll b=a+1;b<=n;b++)
            {
                ll sum=a*a + b*b;
                if(sum>n*n)break;
                ll sqr=sqrt(sum);
                if(sqr<=n && sqr*sqr==sum)cnt++;

            }
        }
        cout<<cnt<<endl;
    }

}

//Alhamdulillah..

/*
intput :

5


output :
1

*/

