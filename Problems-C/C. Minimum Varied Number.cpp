
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
       ll s;
       cin>>s;
       ll cur=9;
       vector<ll>ans;
       while(s>cur)
       {
           s-=cur;
           ans.PB(cur);
           cur--;
       }
       if(s)ans.PB(s);

       sort(ans.begin(),ans.end());
       for(auto x : ans)cout<<x;
       cout<<endl;

    }

}
//Alhamdulillah..












