 
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
       ll n;
       cin>>n;
       ll a[n];
       if(n==3)
       {
           cout<<3<<" "<<2<<" "<<1<<endl;
           cout<<1<<" "<<3<<" "<<2<<endl;
           cout<<2<<" "<<3<<" "<<1<<endl;
           continue;
       }
       for(ll i=0;i<n;i++)a[i]=n-i;
       for(ll i=0;i<n;i++)
       {
           for(ll j=0;j<n;j++)cout<<a[(j+i)%n]<<" ";
           cout<<endl;
       }


    }

}

//Alhamdulillah..


/*
Input:
2
4
3

Output:
4 1 3 2
1 2 4 3
3 4 1 2
2 4 1 3
3 2 1
1 3 2
3 1 2


*/


 
