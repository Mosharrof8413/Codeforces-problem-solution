/*
 Problem : https://codeforces.com/contest/1675/problem/A

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
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        ll dog=a+c;
        ll cat=b+c;
        if(dog<x || cat<y)
        {
            cout<<"NO"<<endl;
            continue;
        }
        a=a+b+c;
        x+=y;
        if(a>=x)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}

//Alhamdulillah..


/*
input :

7
1 1 4 2 3
0 0 0 0 0
5 5 0 4 6
1 1 1 1 1
50000000 50000000 100000000 100000000 100000000
0 0 0 100000000 100000000
1 3 2 2 5


Output:

YES
YES
NO
YES
YES
NO
NO



*/






 
