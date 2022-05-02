
/*
 Problem : https://codeforces.com/contest/1674/problem/C

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
        string st,tt;
        cin>>st>>tt;
        ll cnt=0,okk=0;

        for(ll i=0; i<tt.size();i++)
        {
            if(tt[i]=='a')cnt++;
            else okk++;
        }

        if(cnt==1 && tt.size()==1)
        {
            cout<<1<<endl;
            continue;
        }

        if(cnt)
        {
            cout<<-1<<endl;
            continue;
        }

        ll ans=st.size();
        ans=pow(2,ans);
        cout<<ans<<endl;
    }

}

//Alhamdulillah..


/*
input :

3
aaaa
a
aa
abc
a
b


Output:

1
-1
2



*/









