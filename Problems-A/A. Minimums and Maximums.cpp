
/*
 Problem :  https://codeforces.com/contest/1680/problem/A

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
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      ll ans=0;
      if(a>c)
      {
          swap(a,c);
          swap(b,d);
      }
      if(b<c)ans=a+c;
      else ans=c;
      cout<<ans<<endl;
    }

}

//Alhamdulillah..


/*
input :

7
3 5 4 6
5 8 5 5
3 3 10 12
1 5 3 3
1 1 2 2
2 2 1 1
6 6 6 6

Output:

4
5
13
3
3
3
6



*/











