/*

 Problem link : https://codeforces.com/problemset/problem/320/A

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
    ll t=1;
    //cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        bool f=true;
        for(ll i=0; i<st.size(); i++)
        {
            ll l=st[i]-'0';
            if(l==0 || l==2 || l==3 || l==5 || l==7 || l==8 || l==9 || l==6 )
            {
                f=false;
                break;
            }

            if(l==4)
            {
                if(i-1>=0)
                {
                    if(st[i-1]-'0'==1)continue;
                    else if(st[i-1]-'0'==4)
                    {
                        if(i-2>=0)
                        {
                            if(st[i-1]-'0'==4 && st[i-2]-'0'==1)
                            {
                                continue;
                            }
                            else
                            {
                                f=false;
                                break;
                            }
                        }
                        else
                        {
                            f=false;
                            break;
                        }
                    }

                }
                else
                {
                    f=false;
                    break;
                }
            }
            else continue;
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }

}

//Alhamdulillah..

/*
intput :

114114



output :

YES

*/


