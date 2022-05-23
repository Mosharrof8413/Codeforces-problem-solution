
/*

 Problem link : https://codeforces.com/contest/1681/problem/A

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
       map<ll,ll>mp,mp2;
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);
       ll m;
       cin>>m;
       ll b[m+2];
       for(ll i=0;i<m;i++)
       {
           cin>>b[i];
       }
       sort(b,b+m);
      if(a[n-1]>=b[m-1])
      {
          cout<<"Alice"<<endl;
      }
      else cout<<"Bob"<<endl;

      if(b[m-1]>=a[n-1])
      {
          cout<<"Bob"<<endl;
      }
      else cout<<"Alice"<<endl;


    }

}

//Alhamdulillah..

/*
intput :

4
1
6
2
6 8
4
1 3 3 7
2
4 2
1
50
2
25 50
10
1 2 3 4 5 6 7 8 9 10
2
5 15



output :

Bob
Bob
Alice
Alice
Alice
Bob
Bob
Bob



*/




 
