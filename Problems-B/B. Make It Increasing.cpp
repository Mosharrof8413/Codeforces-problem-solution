/*
 Problem : https://codeforces.com/contest/1675/problem/B

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
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll cnt=0;
        for(ll i=n-1;i>0;i--)
        {
            if(a[i-1]>=a[i])
            {
                while(a[i-1]>=a[i])
                {
                    a[i-1]/=2;
                    cnt++;
                    if(a[i-1]==0)break;
                }
            }
        }
        bool f=true;
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
               continue;
            }
            else{
                f=false;
                break;
            }
        }
        if(f)cout<<cnt<<endl;
        else cout<<-1<<endl;
    }

}

//Alhamdulillah..


/*
input :

7
3
3 6 5
4
5 3 2 1
5
1 2 3 4 5
1
1000000000
4
2 8 7 5
5
8 26 5 21 10
2
5 14

Output:

2
-1
0
0
4
11
0



*/






 
