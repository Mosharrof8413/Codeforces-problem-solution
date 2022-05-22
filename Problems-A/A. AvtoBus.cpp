
/*
 Problem : https://codeforces.com/problemset/problem/1679/A

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
        if(n<4 || n%2)
        {
            cout<<-1<<endl;
            continue;
        }
        ll mn=n/6;
        if(n%6)mn++;
        ll mx=n/4;

        cout<<mn<<" "<<mx<<endl;
    }

}

//Alhamdulillah..


/*
input :

4
4
7
24
998244353998244352

Output:

1 1
-1
4 6
166374058999707392 249561088499561088




*/










