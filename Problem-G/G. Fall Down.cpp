/*
 Problem : https://codeforces.com/problemset/problem/1669/G

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

const ll MX=2e6+123;
bitset<MX>is_prime;
vector<ll>primes;


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

        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=m; j++)cin>>grid[i][j];
        }
        for(ll k=1; k<=m; k++)
        {

            for(ll i=n-1; i>0; i--)
            {
                if(grid[i][k]=='*')
                {
                    for(ll j=i+1; j<=n; j++)
                    {
                        if(grid[j][k]=='*' || grid[j][k]=='o')
                        {
                            if(i!=j-1)
                                {
                                    grid[j-1][k]='*';
                                    grid[i][k]='.';
                                }
                            break;
                        }
                        if(j==n && grid[j][k]=='.')
                        {
                            grid[j][k]='*';
                            grid[i][k]='.';
                        }
                    }
                    if(i==n-1 && grid[n][k]=='.')
                    {
                        grid[n][k]='*';
                        grid[i][k]='.';
                    }
                }
            }
        }

        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=m; j++)cout<<grid[i][j];
            cout<<endl;
        }
    }

}

//Alhamdulillah..


/*
input:

3
6 10
.*.*....*.
.*.......*
...o....o.
.*.*....*.
..........
.o......o*
2 9
...***ooo
.*o.*o.*o
5 5
*****
*....
*****
....*
*****



Output:

..........
...*....*.
.*.o....o.
.*........
.*......**
.o.*....o*

....**ooo
.*o**o.*o

.....
*...*
*****
*****
*****


*/









