/*
 Problem : https://codeforces.com/contest/1669/problem/E

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


int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       map<string,ll>mp;
       ll ans=0;
       for(ll i=0;i<n;i++)
       {
           string st;
           cin>>st;
           string s1=st,s2=st;
           for(char ch='a';ch<='k';ch++)
           {
               if(ch!=st[0])
               {
                   s1[0]=ch;
                   ans+=mp[s1];
               }
               if(ch!=st[1])
               {
                   s2[1]=ch;
                   ans+=mp[s2];
               }

           }
            mp[st]++;
       }
       cout<<ans<<endl;
    }

}

//Alhamdulillah..


/*
input :

4
6
ab
cb
db
aa
cc
ef
7
aa
bb
cc
ac
ca
bb
aa
4
kk
kk
ab
ab
5
jf
jf
jk
jk
jk



Output:

5
6
0
6


*/






