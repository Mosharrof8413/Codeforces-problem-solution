
/*
 Problem : https://codeforces.com/contest/1680/problem/B

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
        ll n,m;
        cin>>n>>m;
        char grid[n+2][m+2];
        ll m_l=1e10,m_u=1e10;
        ll m_uy=0;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                cin>>grid[i][j];
                if(grid[i][j]=='R')
                {
                    if(m_l>j)
                    {
                        m_l=j;
                        //m_l=i;
                    }

                    if(m_u>i)
                    {
                        m_u=i;
                        m_uy=j;
                    }
                }
            }

        }
        if(m_l<m_uy)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

}

//Alhamdulillah..


/*
input :

6
1 3
ERR
2 2
ER
RE
2 2
ER
ER
1 1
R
4 3
EEE
EEE
ERR
EER
3 3
EEE
EER
REE


Output:

YES
NO
YES
YES
YES
NO



*/












