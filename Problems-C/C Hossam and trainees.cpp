
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define PB push_back
#define F first
#define S second
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx=1e5+123;
bool is_prime[mx];
vector<ll>primes;
void sieve(ll n)
{
   is_prime[1]=1;
   ll sq=sqrt(n);
   for(ll i=3;i<=sq;i+=2)
   {
       if(is_prime[i]==0)
        {
       for(ll j=i*i;j<=n;j+=(i+i))
           is_prime[j]=1;
        }
   }
   primes.PB(2);
   for(ll i=3;i<=n;i+=2)
   {
       if(is_prime[i]==0)primes.PB(i);
   }
}
int main()
{
    sieve(mx);
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        map<int,int>ans;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool f=false;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<primes.size();j++)
            {
                if((primes[j]*primes[j])>a[i])break;

                if(a[i]%primes[j]==0)
                {
                    ans[primes[j]]++;
                    if(ans[primes[j]]>1)
                    {
                        f=true;
                        break;
                    }
                    while(a[i]%primes[j]==0)a[i]/=primes[j];
                }
            }
            if(a[i]>1)
            {
                ans[a[i]]++;
                if(ans[a[i]]>1)
                {
                    f=true;
                    break;
                }
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

//Alhamdulillah..

/*
input :

2
3
32 48 7
3
14 5 9

output :

YES
NO
*/
