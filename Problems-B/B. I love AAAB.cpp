/*
 Problem : https://codeforces.com/contest/1672/problem/B

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
ll solve(ll n)
{
    ll sq=sqrt(n);
    for(ll i=2; i<=sq; i++)
    {
        if(n%i==0)return 1;
    }
    return 0;
}

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
       string st;
       cin>>st;
       bool f=true;
       ll cnta=0,cntb=0;
       for(ll i=0;i<st.size();i++)
       {
           if(st[i]=='A')
           {
               cnta++;
           }
           else
           {
              cntb++;
           }

           if(cntb>cnta)
           {
               f=false;
               break;
           }
       }
       if(!cnta || !cntb)f=false;
       if(st[st.size()-1]=='A')f=false;

       if(f)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }


}

//Alhamdulillah..


/*
input:

4
AABAB
ABB
AAAAAAAAB
A

Output:

YES
NO
YES
NO






*/







