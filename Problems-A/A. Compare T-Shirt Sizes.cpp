/*

 Problem link : https://codeforces.com/contest/1741/problem/A

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
        string st,tt;
        cin>>st>>tt;
        ll len1=st.size(),len2=tt.size();
        if(st==tt)
        {
            cout<<"="<<endl;
            continue;
        }
        if(st[len1-1]=='M')
        {
            if(tt[len2-1]=='L')
                cout<<"<"<<endl;
            else cout<<">"<<endl;
            continue;
        }
        if(tt[len2-1]=='M')
        {
            if(st[len1-1]=='S')
                cout<<"<"<<endl;
            else cout<<">"<<endl;
            continue;
        }
        if(st[len1-1]=='L' && tt[len2-1]=='L')
        {
            if(len1>len2)
                cout<<">"<<endl;
            else cout<<"<"<<endl;
            continue;
        }
        if(st[len1-1]=='S' && tt[len2-1]=='S')
        {
            if(len1>len2)
                cout<<"<"<<endl;
            else cout<<">"<<endl;
            continue;
        }
        if(st[len1-1]=='S' && tt[len2-1]=='L')
        {
            cout<<"<"<<endl;
            continue;
        }
        if(st[len1-1]=='L' && tt[len2-1]=='S')
        {
            cout<<">"<<endl;
            continue;
        }

    }
}

//Alhamdulillah..

/*
intput :

6
XXXS XS
XXXL XL
XL M
XXL XXL
XXXXXS M
L M


output :

<
>
>
=
<
>
*/
