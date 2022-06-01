/*

 Problem link :

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
        ll odd=0,even=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2)odd++;
            else even++;
        }
        if(odd==n)
        {
            cout<<0<<endl;
        }
        else cout<<min(odd,even)<<endl;
    }

}

//Alhamdulillah..

/*
input :


output :

*/


 
