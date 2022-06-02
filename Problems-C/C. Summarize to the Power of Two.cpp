/*

 Problem link : https://codeforces.com/problemset/problem/1005/C

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
    vector<ll>power_of_two;
    map<ll,ll>mp;
    for(ll i=0; i<31; i++)
    {
        ll pw=pow(2,i);
        power_of_two.PB(pw);
    }
    //for(auto x : power_of_two)cout<<x<<" ";
    ll n;
    cin>>n;
    ll a[n+2];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }

    ll cnt=0;
    for(ll i=0; i<n; i++)
    {
        ll value=0;
        ll okk=0;
        for(auto x : power_of_two)
        {
            if(x>a[i])
            {
                if(mp[x-a[i]])
                {

                    if(x==2*a[i] && mp[a[i]]==1)
                    {
                        okk=0;
                    }
                    else
                    {
                        okk=1;
                        break;
                    }
                }
            }
        }
        if(okk==0)cnt++;

    }
    cout<<cnt<<endl;


}

//Alhamdulillah..

/*
input :

6
4 7 1 5 4 9

output :

1
*/




