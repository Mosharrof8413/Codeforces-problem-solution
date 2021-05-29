#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define pb push_back
#define ll long long
#define mk make_pair
#define endl '\n'
#define M  1000000007
ull dp[101][101];
ull nCr(ull n,ull r)
{
    if(n==r)return dp[n][r]=1;
    if(r==1)return dp[n][r]=n;
    if(r==0)return dp[n][r]=1;
    if(dp[n][r])return dp[n][r];
    return dp[n][r]=nCr(n-1,r-1)+nCr(n-1,r);
}

ll mod(ll x)
{
    return ((x%M+M)%M);    // x will be negative or positive
}
ll add(ll a,ll b)
{
    return mod((mod(a)+mod(b)));
}
ll mul(ll a,ll b)
{
    return mod(mod(a)*mod(b));
}

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll a,b;
        cin>>a>>b;
        string st;
        cin>>st;
        ll n=st.size();
        bool f=true;
        for(ll i=0;i<n;i++)
        {
            if(st[i]=='?')
                st[i]=st[n-i-1];
        }
        a-=count(st.begin(),st.end(),'0');
        b-=count(st.begin(),st.end(),'1');
        ll l=0,r=n-1;
        while(l<=r)
        {
            if(l==r)
            {
                if(st[l]=='?')
                {
                    if(a>0)st[l]='0',a--;
                    else if(b>0)st[l]='1',b--;
                }

            }
            else
            {

                if(st[l]!=st[r])
                {
                    f=false;
                    break;
                }
                else if(st[l]=='?' && st[r]=='?')
                {
                    if(a>1)st[l]='0',st[r]='0',a-=2;
                   else if(b>1)st[l]='1',st[r]='1',b-=2;
                }
            }
            l++,r--;
        }
        if(!f)
        {
            cout<<-1<<endl;
            continue;
        }
        string t=st;
        reverse(t.begin(),t.end());
        if(a==0 && b==0 && st==t)
        {
            cout<<st<<endl;
        }
        else cout<<-1<<endl;

}
}



/*
Alhamdulillah.......

*/
 
