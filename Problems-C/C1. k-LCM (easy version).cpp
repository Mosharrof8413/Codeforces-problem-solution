/*

 Problem link : https://codeforces.com/problemset/problem/1497/C1

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
        ll n,k;
        cin>>n>>k;
        if(n%2)
        {
            cout<<n/2<<" "<<n/2<<" "<<1<<endl;
        }
        else
        {
            ll half=n/2;
            if(half%2==0)
            {
                cout<<half<<" "<<half/2<<" "<<half/2<<endl;
            }
            else
            {
                half--;
                cout<<half<<" "<<half<<" "<<2<<endl;
            }
        }
    }

}

//Alhamdulillah..

/*
intput :

3
3 3
8 3
14 3


output :

1 1 1
4 2 2
2 6 6


*/





