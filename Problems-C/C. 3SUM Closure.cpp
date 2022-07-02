/*

 Problem link : https://codeforces.com/problemset/problem/1698/C

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
        ll a[n+2];
        map<ll,ll>mp;
        vector<int>ans;
        int zero=0,pos=0,neg=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            if(a[i]==0)zero++;
            else if(a[i]>0)
            {
                pos++;
                ans.PB(a[i]);
            }
            else
            {
                neg++;
                ans.PB(a[i]);
            }
        }
        if(zero)ans.PB(0);

        if(zero>=2)
        {
            ans.PB(0);
        }

        if(pos>2 || neg>2 || ans.size()<3)
        {
            if(zero!=n)
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
        bool f=true;

        for(int i=0; i<ans.size(); i++)
        {
            for(int j=i+1; j<ans.size(); j++)
            {
                for(int k=j+1; k<ans.size(); k++)
                {
                    if(!mp[ans[i]+ans[j]+ans[k]])
                    {
                        f=false;
                    }
                }
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}

//Alhamdulillah..

/*
intput :

4
3
-1 0 1
5
1 -2 -2 1 -3
6
0 0 0 0 0 0
4
-1 2 -3 4


output :

YES
NO
YES
NO


*/





