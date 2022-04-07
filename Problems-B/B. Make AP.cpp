/*
 Problem : https://codeforces.com/problemset/problem/1624/B

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
ll sum;
ll gcd (ll a,ll b)
{
    if(b==0)return a;

    return gcd(b,b%a);
}


int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll ans=0;
        if(a<=b)
        {
            ll d=b-a;
            ll next_c=b+d;
            if(next_c%c==0 )ans=1;
        }
        if(a>b)
        {
            ll d=a-b;
            ll next_c=b-d;
            if(next_c%c==0 && next_c>0)ans=1;
        }

        if(b<=c)
        {
            ll d=c-b;
            ll next_a=b-d;
            if(next_a%a==0 && next_a>0)ans=1;
        }
        if(b>c)
        {
            ll d=b-c;
            ll next_a=b+d;
            if(next_a%a==0)ans=1;
        }

        if(a<=c)
        {
            ll d=c-a;
            if(d%2==0)
            {
                d/=2;
            ll next_b=a+d;
            if(next_b%b==0 )ans=1;
            }
        }
        if(a>c)
        {
            ll d=a-c;
            if(d%2==0)
            {
                d/=2;
            ll next_b=a-d;
            if(next_b%b==0 && next_b>0)ans=1;
            }
        }

        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}

//Alhamdulillah..


/*
input:

11
10 5 30
30 5 10
1 2 3
1 6 3
2 6 3
1 1 1
1 1 2
1 1 3
1 100000000 1
2 1 1
1 2 2



Output:

YES
YES
YES
YES
NO
YES
NO
YES
YES
NO
YES



*/




