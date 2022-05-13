
/*
 Problem : https://codeforces.com/contest/1676/problem/A

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
*/

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
      string st;
      cin>>st;
      ll first=0,second=0;
      for(ll i=0;i<st.size();i++)
      {
          if(i<3)first+=st[i]-'0';
          else second+=st[i]-'0';
      }
      if(first==second)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }

}

//Alhamdulillah..


/*
input :

5
213132
973894
045207
000000
055776

Output:

YES
NO
YES
YES
NO


*/









 
