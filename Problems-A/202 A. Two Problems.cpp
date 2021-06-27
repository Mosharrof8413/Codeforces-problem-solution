/*
  Problem link: https://codeforces.com/contest/203/problem/A
*/

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

int main()
{
    optimize();
    ll test=1;
    //cin>>test;
    for(ll tc=1;tc<=test;tc++)
    {
       ll x,t,a,b,d1,d2;
       cin>>x>>t>>a>>b>>d1>>d2;
       if(x==0 || x==a || x==b)
       {
           cout<<"YES"<<endl;
           return 0;
       }
       for(ll i=0;i<t;i++)
       {
           for(ll j=0;j<t;j++)
           {
               ll r1=a-(i*d1);
               ll r2= b-(j*d2);
               ll res=0;
               if(r1>=0 && r2>=0)
               res=r1+r2;
               if(x==res || r1==x || r2==x)
               {
                   cout<<"YES"<<endl;
                   return 0;
               }
           }
       }
       cout<<"NO"<<endl;

    }

}
//Alhamdulillah...



