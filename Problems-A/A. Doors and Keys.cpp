 /*
 proble link: https://codeforces.com/contest/1644/problem/A
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

vector<ll>v[10000];
ll vis[1000],dis[10000];
void dfs(ll node,ll d)
{
    vis[node]=1;
    dis[node]=d;
    for(auto child : v[node])
    {
        if(vis[child]==0)dfs(child,d+1);
    }
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
       int b=0,r=0,g=0;
       for(ll i=0;i<6;i++)
       {
           if(st[i]=='r')
           {
               for(ll j=i+1;j<6;j++)if(st[j]=='R')r++;
           }
          if(st[i]=='b')
           {
               for(ll j=i+1;j<6;j++)if(st[j]=='B')b++;
           }
          if(st[i]=='g')
           {
               for(ll j=i+1;j<6;j++)if(st[j]=='G')g++;
           }
       }
       if(r && b && g)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }

}

//Alhamdulillah..


/*
Input:
4
rgbBRG
RgbrBG
bBrRgG
rgRGBb


Output:
YES
NO
YES
NO


*/


 
