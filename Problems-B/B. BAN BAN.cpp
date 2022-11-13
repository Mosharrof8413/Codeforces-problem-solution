
/*

 Problem link :

 */
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define PB push_back
#define F first
#define S second
const int mx=20;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       string st="BAN",ans="";
       for(ll i=0;i<n;i++)ans+=st;
       int l=1,r=n*3;
       n=n/2+(n%2);
       cout<<n<<endl;
       while(n--)
       {
           cout<<l<<" "<<r<<endl;
           l+=3,r-=3;
       }
    }
}

//Alhamdulillah..
