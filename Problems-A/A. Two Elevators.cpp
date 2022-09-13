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
        ll a,b,c;
        cin>>a>>b>>c;
        ll s=abs(c-b);
        s+=(c-1);
        a-=1;
        if(a<s)cout<<1<<endl;
        else if(a>s)cout<<2<<endl;
        else cout<<3<<endl;

    }
}

//Alhamdulillah..

/*
intput :


output :




*/









 
