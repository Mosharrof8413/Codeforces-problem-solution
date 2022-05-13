
/*
 Problem : https://codeforces.com/problemset/problem/1676/D

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
        ll grid[n+2][m+2];
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=m; j++)cin>>grid[i][j];
        }

        ll rslt=0;

        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=m; j++)
            {
                ll ans=0;

                ll x=i,y=j;
                while(x>=1 && y>=1)
                {
                    ans+=grid[x][y];
                    x--,y--;
                }

                x=i-1,y=j+1;
                while(x>=1 && y<=m)
                {
                    ans+=grid[x][y];
                    x--,y++;
                }

                x=i+1,y=j-1;
                while(x<=n && y>=1)
                {
                    ans+=grid[x][y];
                    x++,y--;
                }

                x=i+1,y=j+1;
                while(x<=n && y<=m)
                {
                    ans+=grid[x][y];
                    x++,y++;
                }
                rslt=max(rslt,ans);

            }
        }
        cout<<rslt<<endl;

    }

}

//Alhamdulillah..


/*
input :

4
4 4
1 2 2 1
2 4 2 4
2 2 3 1
2 4 2 4
2 1
1
0
3 3
1 1 1
1 1 1
1 1 1
3 3
0 1 1
1 0 1
1 1 0

output :

20
1
5
3


*/

