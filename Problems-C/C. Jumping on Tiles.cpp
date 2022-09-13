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
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        ll cost=abs(st[0]-st[st.size()-1]);
        vector<pair<char,ll> >ans;
        char mn=st[0],mx=st[st.size()-1];
        if(mn>mx)swap(mn,mx);
        for(ll i=1; i<st.size()-1; i++)
        {
            if(st[i]>=mn && st[i]<=mx)ans.PB({st[i],i+1});
        }
        sort(ans.begin(),ans.end());
        if(st[0]<=st[st.size()-1])
        {
            cout<<cost<<" "<<ans.size()+2<<endl<<1<<" ";
            for(auto x : ans)cout<<x.S<<" ";
            cout<<st.size()<<endl;
        }
        else
        {
            reverse(ans.begin(),ans.end());
            cout<<cost<<" "<<ans.size()+2<<endl<<1<<" ";
            for(auto x : ans)cout<<x.S<<" ";
            cout<<st.size()<<endl;
        }

    }
}

//Alhamdulillah.. 

