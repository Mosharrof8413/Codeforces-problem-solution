/*

 Problem link : https://codeforces.com/contest/1686/problem/A

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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        ll sum=0;
        //map<double,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            //mp[a[i]]++;
        }
        ll d=sum;
        ll done=0;
        for(ll i=0; i<n; i++)
        {
            d-=a[i];
            if(d%(n-1)==0)
            {
                if(d/(n-1)==a[i])
                {
                    done=2;
                    break;
                }
            }
            d+=a[i];

        }
        if(done)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}

//Alhamdulillah..

/*
intput :

4
3
42 42 42
5
1 2 3 4 5
4
4 3 2 1
3
24 2 22

output :

YES
YES
NO
NO

*/



 
