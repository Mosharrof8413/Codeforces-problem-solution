/*

 Problem link : https://codeforces.com/contest/1686/problem/C

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
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        vector<ll>ans;
        if(n%2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll l=0,r=n/2;
        while(l<n/2)
        {
            ans.PB(a[l]);
            ans.PB(a[r]);
            l++,r++;

        }

        bool f=true;
        ans.PB(ans[0]);
        for(ll i=1; i<n; i++)
        {
            if((ans[i]>ans[i-1] && ans[i]>ans[i+1])||(ans[i]<ans[i-1] && ans[i]<ans[i+1]))
            {

            }
            else
            {
                f=false;
                break;
            }
        }

        if(f)
        {
            cout<<"YES"<<endl;
            for(ll i=0; i<n; i++)cout<<ans[i]<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }

}

//Alhamdulillah..

/*
input :
4
3
1 1 2
4
1 9 8 4
4
2 0 2 2
6
1 1 1 11 111 1111

output :

NO
YES
1 8 4 9
NO
YES
1 11 1 111 1 1111

*/


